pipeline {
    	 agent {
 	 	docker {
 	 	image 'ros:foxy'
 	 	args '-u root:root'
 	 
 	 	}
 	 }
 
   environment {
         PACKAGE_NAME = 'v2x'
         ROS_WORKSPACE = "${WORKSPACE}_ws"
         
  }
    stages {
 	stage('Initialize Docker')
 	{

 	 steps {

 		sh '/ros_entrypoint.sh'
 	 
 	 	}
	 }
	 
	 
        stage('Setup') {
            steps {
                sh 'echo "${ROS_WORKSPACE}"'
                sh """
                  mkdir -p ${ROS_WORKSPACE}/src
                  cp -R . ${ROS_WORKSPACE}/src/${PACKAGE_NAME}
                   . /opt/ros/foxy/setup.sh
                     colcon build 
                   chmod -R 777 ${ROS_WORKSPACE}
                   chmod -R 777 ${ROS_WORKSPACE}/src/${PACKAGE_NAME}
                 
                """
            }
        }
	 stage('Test') {
            steps {
            
	   sh '. install/setup.sh'
           sh 'colcon test'
 
            }
        }
	}
post {
    always {
      
        archiveArtifacts(artifacts: 'log/test_*', fingerprint: true)
       
      
      sh "rm -rf ${ROS_WORKSPACE}"
    }
  }
}
