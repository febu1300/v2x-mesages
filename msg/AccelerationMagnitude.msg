############################
# Author: Paul Tribulowski
############################

#This DF represents the magnitude of the acceleration vector and associated confidence value.

int16	acceleration_magnitude_value	#the magnitude of the acceleration vector.
					#The value shall be set to:
					#	0 to indicate no acceleration,
					#	n (n > 0 and n < 160) to indicate acceleration equal to or less than n x 0,1 m/s2, and greater than (n-1) x 0,1 m/s2,
					#	160 for acceleration values greater than 15,9 m/s2,
					#	161 when the data is unavailable.
					#Unit: 0,1 m/s^2

uint8 acceleration_confidence		#the confidence value of the magnitude value.
					#The value shall be set to:
					#	n (n > 0 and n < 101) if the confidence value is equal to or less than n x 0,1 m/s2, and greater than (n-1) x 0,1 m/s2,
					#	101 if the confidence value is out of range i.e. greater than 10 m/s2,
					#	102 if the confidence value is unavailable.
					#	The value 0 shall not be used.
					#Unit: 0,1 m/s^2
					#If an acceleration value is received and its confidence value is set to outOfRange(101), it means that the value is not valid and therefore cannot be trusted. Such value is not useful for the application.
