# authority constants
uint8 CONTROL_BY_RC = 1
uint8 CONTROL_BY_MOBILE = 2
uint8 CONTROL_BY_SDK = 3
# arm constants 
uint8 ARMED = 1
uint8 DISARMED = 0
# gear constants
uint8 GEAR_UP
uint8 GEAR_DOWN
#variables
uint8 authority
uint8 armed
uint8 gear
uint16 voltage	#volt*100
time changeTime	 #time of last authority change
