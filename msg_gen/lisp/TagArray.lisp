; Auto-generated. Do not edit!


(cl:in-package hoverTracker-msg)


;//! \htmlinclude TagArray.msg.html

(cl:defclass <TagArray> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (size
    :reader size
    :initarg :size
    :type cl:integer
    :initform 0)
   (tag
    :reader tag
    :initarg :tag
    :type (cl:vector hoverTracker-msg:Tag)
   :initform (cl:make-array 0 :element-type 'hoverTracker-msg:Tag :initial-element (cl:make-instance 'hoverTracker-msg:Tag))))
)

(cl:defclass TagArray (<TagArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TagArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TagArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hoverTracker-msg:<TagArray> is deprecated: use hoverTracker-msg:TagArray instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <TagArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hoverTracker-msg:header-val is deprecated.  Use hoverTracker-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'size-val :lambda-list '(m))
(cl:defmethod size-val ((m <TagArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hoverTracker-msg:size-val is deprecated.  Use hoverTracker-msg:size instead.")
  (size m))

(cl:ensure-generic-function 'tag-val :lambda-list '(m))
(cl:defmethod tag-val ((m <TagArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hoverTracker-msg:tag-val is deprecated.  Use hoverTracker-msg:tag instead.")
  (tag m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TagArray>) ostream)
  "Serializes a message object of type '<TagArray>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'size)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'tag))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'tag))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TagArray>) istream)
  "Deserializes a message object of type '<TagArray>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'size) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'tag) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'tag)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'hoverTracker-msg:Tag))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TagArray>)))
  "Returns string type for a message object of type '<TagArray>"
  "hoverTracker/TagArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TagArray)))
  "Returns string type for a message object of type 'TagArray"
  "hoverTracker/TagArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TagArray>)))
  "Returns md5sum for a message object of type '<TagArray>"
  "79630004ec506d031f2a8a076f076e7a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TagArray)))
  "Returns md5sum for a message object of type 'TagArray"
  "79630004ec506d031f2a8a076f076e7a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TagArray>)))
  "Returns full string definition for message of type '<TagArray>"
  (cl:format cl:nil "Header header~%int32 size~%Tag[] tag~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: hoverTracker/Tag~%int32 id~%float64 x~%float64 y~%float64 angle~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TagArray)))
  "Returns full string definition for message of type 'TagArray"
  (cl:format cl:nil "Header header~%int32 size~%Tag[] tag~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.secs: seconds (stamp_secs) since epoch~%# * stamp.nsecs: nanoseconds since stamp_secs~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: hoverTracker/Tag~%int32 id~%float64 x~%float64 y~%float64 angle~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TagArray>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'tag) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TagArray>))
  "Converts a ROS message object to a list"
  (cl:list 'TagArray
    (cl:cons ':header (header msg))
    (cl:cons ':size (size msg))
    (cl:cons ':tag (tag msg))
))
