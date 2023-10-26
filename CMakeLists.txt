cmake_minimum_required(VERSION 3.5)
project(v2x)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Acceleration3dWithConfidence.msg"
  "msg/AccelerationCartesian.msg"
  "msg/AccelerationComponent.msg"
  "msg/AccelerationMagnitude.msg"
  "msg/AccelerationPolarWithZ.msg"
  "msg/ActionID.msg"
  "msg/AddGrpC.msg"
  "msg/AdvisorySpeed.msg"
  "msg/AdvisorySpeedType.msg"
  "msg/Ampelstate.msg"
  "msg/Altitude.msg"
  "msg/BasicContainer.msg"
  "msg/BasicVehicleContainerHighFrequency.msg"
  "msg/CAM.msg"
  "msg/CamParameters.msg"
  "msg/CartesianAngle.msg"
  "msg/CartesianAngularVelocityComponent.msg"
  "msg/CartesianCoordinateWithConfidence.msg"
  "msg/CartesianPosition3d.msg"
  "msg/CartesianPosition3dWithConfidence.msg"
  "msg/CauseCode.msg"
  #"msg/CircularShape.msg"
  "msg/ComputedLane.msg"
  "msg/ConnectingLane.msg"
  "msg/Connection.msg"
  "msg/ConnectionManeuverAssist.msg"
  "msg/CoopAwareness.msg"
  "msg/CollectivePerceptionMessage.msg"
  "msg/CorrelationColumn.msg"
  "msg/CPM.msg"
  "msg/CpmParameters.msg"
  "msg/CpmManagementContainer.msg"
  "msg/Curvature.msg"
  "msg/DataParameters.msg"
  "msg/DecentralizedEnvironmentNotificationMessage.msg"
  "msg/DeltaNodeXY.msg"
  "msg/DeltaTime.msg"
  "msg/DENM.msg"
  "msg/DetectionArea.msg"
  #"msg/EllipticalShape.msg"
  "msg/EulerAnglesWithConfidence.msg"
  "msg/GenericLane.msg"
  "msg/Header.msg"
  "msg/Heading.msg"
  "msg/HighFrequencyContainer.msg"
  "msg/IntersectionGeometry.msg"
  "msg/IntersectionState.msg"
  "msg/IntersectionStatusObject.msg"
  "msg/ItsPduHeader.msg"
  "msg/IntersectionReferenceID.msg"
  "msg/LaneAttributes.msg"
  "msg/LaneDataAttribute.msg"
  "msg/LaneType.msg"
  "msg/LongitudinalAcceleration.msg"
  "msg/LongitudinalLanePosition.msg"
  "msg/LateralAcceleration.msg"
  "msg/LowerTriangularPositiveSemidefiniteMatrice.msg"
  "msg/ManagementContainer.msg"
  "msg/MapData.msg"
  "msg/MapPosition.msg"
  "msg/MapReference.msg"
  "msg/MovementEvent.msg"
  "msg/MovementPhaseState.msg"
  "msg/MovementState.msg"
  "msg/Name.msg"
  "msg/NodeAttributeSetXY.msg"
  "msg/NodeAttributeXY.msg"
  "msg/NodeListXY.msg"
  "msg/NodeXY.msg"
  "msg/ObjectClass.msg"
  "msg/ObjectClassWithConfidence.msg"
  "msg/ObjectDimension.msg"
  "msg/OriginatingVehicleContainer.msg"
  "msg/PerceivedObject.msg"
  "msg/PerceivedObjectContainer.msg"
  "msg/PerceivedObjectContainerSegmentInfo.msg"
  #"msg/PolygonalShape.msg"
  "msg/PosConfidenceEllipse.msg"
  "msg/Position3D.msg"
  "msg/ProtectedCommunicationZone.msg"
  "msg/ProtectedCommunicationZonesRSU.msg"
  "msg/RadialShape.msg"
  #"msg/RadialShapes.msg"
  #"msg/RectangularShape.msg"
  "msg/RequestorType.msg"
  "msg/ReferencePosition.msg"
  "msg/RegulatorySpeedLimit.msg"
  "msg/RemoteIntersection.msg"
  "msg/RestrictionClassAssignment.msg"
  "msg/RestrictionClassList.msg"
  "msg/RequestorDescription.msg"
  "msg/RequestorPositionVector.msg"
  #"msg/RoadSegmentReferenceId.msg"
  "msg/RSUContainerHighFrequency.msg"
  "msg/SegmentAttributeXY.msg"
  "msg/Sequence.msg"
  "msg/Shape.msg"
  "msg/SituationContainer.msg"
  "msg/SignalRequest.msg"
  "msg/SignalRequestMessage.msg"
  "msg/SignalRequestPackage.msg"
  "msg/Spat.msg"
  "msg/Speed.msg"
  "msg/SpeedConfidence.msg"
  "msg/SpeedLimitType.msg"
  "msg/TimeChangeDetails.msg"
  "msg/TrailerData.msg"
  "msg/TransmissionAndSpeed.msg"
  "msg/TransitVehicleOccupancy.msg"
  "msg/TransitVehicleStatus.msg"
  "msg/Type.msg"
  "msg/VehicleLength.msg"
  "msg/VerticalAcceleration.msg"
  "msg/WGS84Angle.msg"
  "msg/YawRate.msg"
  "msg/DSecond.msg"
  "msg/IntersectionAccessPoint.msg"
  "msg/Iso3833VehicleType.msg"
  "msg/MinuteOfTheYear.msg"
  "msg/PrioritizationResponseStatus.msg"
  "msg/RequestorSubRole.msg"
  "msg/SensorInformationContainer.msg"
  "msg/SensorInformation.msg"
  "msg/SignalRequesterInfo.msg"
  "msg/SignalStatusPackage.msg"
  "msg/SignalStatusMessage.msg"
  "msg/SignalStatus.msg"
  "msg/RequestorTypessm.msg"
  "msg/RequestImportanceLevel.msg"
  "msg/BasicVehicleRole.msg"
  "msg/OriginatingRSUContainer.msg"
  "msg/RoadSegmentReferenceID.msg"
  "msg/StationDataContainer.msg"
  "msg/VehicleType.msg"
  "msg/Velocity3dWithConfidence.msg"
  "msg/VelocityComponent.msg"
  "msg/VelocityPolarWithZ.msg"
  "msg/VelocityCartesian.msg"
  "msg/VruClusterInformation.msg"
  "msg/VruProfileAndSubprofile.msg"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
