# # # # # # # # # # # # # # # #
# Author: Christoph Haemmerlein
# # # # # # # # # # # # # # # #

# For more details consult ETSI TR 103 562 and ETSI TS 102 894-2
# CPM messages

uint16 cartesian_angle_value # Angle value in degrees (0..3601)
                             # unit = 0.1 degrees
                             # zeroPointOneDegree - 1
                             # oneDegree          - 10
                             # unavailable        - 3601

uint8 angle_confidence       # Confidence of the angle value (1..127)
                             # unit = 0.1 degrees
                             # zeroPointOneDegree - 1
                             # oneDegree          - 10
                             # outOfRange         - 126
                             # unavailable        - 127