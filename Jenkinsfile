pipeline {
   agent none
 
   environment {
   	 DEFAULT_USER = 'ubuntu'
   	 USER_UID = '1000'
   	 USER_GID = '1000'
   	 NOPASSWD = ''
         PACKAGE_NAME = 'v2x'
         ROS_WORKSPACE = "${WORKSPACE}_ws"
         
  }
    stages {
 	stage('Initialize')
 	{
 	 agent {
 	 	docker {
 	 	image 'ros:foxy'
 	 	args '-u 1001:1001'
 	 
 	 	}
 	 }
 	 steps {

 	 	sh 'echo "test test test test initialize"'
 	 	}
	 }
	}
}
