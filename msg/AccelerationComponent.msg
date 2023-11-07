############################
# Author: Paul Tribulowski
############################

#This DF represents an acceleration component along with a confidence value.

int16 value		#the value of the acceleration component which can be estimated as the mean of the current distribution.
			#The value shall be set to:
			#	-160 for acceleration values equal to or less than -16 m/s2,
			#	n (n > -160 and n ≤ 0) to indicate negative acceleration equal to or less than n x 0,1 m/s2, and greater than (n-1) x 0,1 m/s2,
			#	n (n > 0 and n < 160) to indicate positive acceleration equal to or less than n x 0,1 m/s2, and greater than (n-1) x 0,1 m/s2,
			#	160 for acceleration values greater than 15,9 m/s2,
			#	161 when the data is unavailable.
			#Unit: 0,1 m/s^2
		
uint8 confidence	#the confidence value associated to the provided value.
			#The value shall be set to:
			#	n (n > 0 and n < 101) if the confidence value is equal to or less than n x 0,1 m/s2, and greater than (n-1) x 0,1 m/s2,
			#	101 if the confidence value is out of range i.e. greater than 10 m/s2,
			#	102 if the confidence value is unavailable.
			#	The value 0 shall not be used.
			#Unit: 0,1 m/s^2
