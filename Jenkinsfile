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
 	stage('Initialize Docker')
 	{
 	 agent {
 	 	docker {
 	 	image 'ros:foxy'
 	 	args '-u root:root'
 	 
 	 	}
 	 }
 	 steps {

 	 	sh 'echo "test test test test initialize"'
 	 	sh '/ros_entrypoint.sh'
 	 	sh 'touch /test.txt'
 	 	}
	 }
	 
	 
        stage('Setup') {
            steps {
                sh 'echo "Stage 1: Running commands inside the same Docker container"'
            }
        }
	 
	}
}
