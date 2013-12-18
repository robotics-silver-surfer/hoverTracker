#!/usr/bin/env python  
import roslib
roslib.load_manifest('hoverTracker')
import rospy
from hoverTracker.msg import TagArray
from Ref.msg import BotStatus

class csv:
	"""
		Class for working with csv data
	"""

	def __init__( self, filename="csv_data_to_team.csv" ):
		rospy.loginfo("HERE")

		rospy.init_node('tag_to_csv')
   		rospy.Subscriber("/LadyMcCormick/ToTeam", BotStatus, self.add_data1 )
   		rospy.Subscriber("/Yoshi/ToTeam", BotStatus, self.add_data2 )
   		rospy.Subscriber("/PukBot/ToTeam", BotStatus, self.add_data3 )
   		#rospy.Subscriber("/hoverLocation", TagArray, self.add_data )


		self.f1 = open( "Puff.csv", 'w' )
		self.f2 = open( "Yoshi.csv", 'w' )
		self.f3 = open( "PukBot.csv", 'w' )

		# Write Header
		self.f1.write("Puff: X,Puff: Y,Puff:  Angle \n" )
		self.f2.write("Yoshi: X,Yoshi: Y,Yoshi:  Angle \n" )
		self.f3.write("PukBot: X,PukBot: Y,PukBot:  Angle \n" )
		#self.i = 0
		self.max_entries = 10000

	def	close( self ):
		"""
			closes the file
		"""
		self.f1.close()
		self.f2.close()
		self.f3.close()


	def add_data1( self, incoming_tags ):
		"""
			Adds data to file
		"""

		#if self.i < self.max_entries:
		string2write = ''

		string2write += str( incoming_tags.currentPosition.x ) + "," + str( -1.0 * incoming_tags.currentPosition.y ) + "," + str(incoming_tags.currentPosition.rot)
		self.f1.write(string2write + "\n")
		#	self.i += 1

	def add_data2( self, incoming_tags ):
			"""
				Adds data to file
			"""

			#if self.i < self.max_entries:
			string2write = ''

			string2write += str( incoming_tags.currentPosition.x ) + "," + str( -1.0 * incoming_tags.currentPosition.y ) + "," + str(incoming_tags.currentPosition.rot)
			self.f2.write(string2write + "\n")
			#	self.i += 1


	def add_data3( self, incoming_tags ):
			"""
				Adds data to file
			"""

			#if self.i < self.max_entries:
			string2write = ''

			string2write += str( incoming_tags.currentPosition.x ) + "," + str( -1.0 * incoming_tags.currentPosition.y ) + "," + str(incoming_tags.currentPosition.rot)
			self.f3.write(string2write + "\n")
			#	self.i += 1

		
if __name__ == '__main__':
	x = csv()

	rospy.loginfo("Right HERE!")

	while True:
		# Need to close file if shutdown		
		if rospy.is_shutdown():
			x.close()
			exit()

	
		
