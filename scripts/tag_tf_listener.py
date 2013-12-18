#!/usr/bin/env python  
import roslib
roslib.load_manifest('hoverTracker')
import rospy
import tf
import math
from hoverTracker.msg import Tag, TagArray
from tf.transformations import euler_from_quaternion
import re

PI = 3.141592
cams = ['cam0','cam1','cam2','cam3']

if __name__ == '__main__':
    rospy.init_node('tag_tf_listener')

    listener = tf.TransformListener()

    location_pub = rospy.Publisher('hoverLocation', TagArray)

    rate = rospy.Rate(10.0)
    
    tArray = TagArray()

    while not rospy.is_shutdown():

        
	#rospy.loginfo(tfList)
        tArray.tag = []
        idList = [0]
        for c in cams:

            ### Make a list of all tag transfromations contain the current camera ###
            tfList = [s for s in listener.getFrameStrings() if c in s]

            for s in tfList:
                t = Tag()
                try:
                    (trans,rot) = listener.lookupTransform('/'+c+'/aprilTag.0', s, rospy.Time(0))
                except (tf.LookupException, tf.ConnectivityException, tf.ExtrapolationException):
                    continue

                tagID = int(re.sub('/'+c+'/aprilTag.','',s))

                if not tagID in idList:

                    idList.append(tagID)

                    angles = euler_from_quaternion(rot)
                    angle = angles[2] *180.0/PI
	    
                    t.id = tagID 
                    t.x = trans[0]
                    t.y = trans[1]
                    t.angle = angle
                    tArray.tag.append(t)


                '''
                rospy.loginfo("ID: " + re.sub('/cam0/aprilTag.','',s))
                rospy.loginfo("X: " + str(trans[0]))
                rospy.loginfo("Y: " + str(trans[1]))
                rospy.loginfo("Angle: " + str(angle))
                '''
        tArray.size = len(tArray.tag)
        tArray.header.stamp = rospy.Time.now()
        location_pub.publish(tArray)

        #rospy.loginfo(listener.getFrameStrings())
        rate.sleep()
