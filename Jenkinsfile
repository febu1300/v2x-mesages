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
                """
            }
        }
	 stage('Test') {
            steps {
            dir(path: "${ROS_WORKSPACE}") {
       			
            sh 'source install/local_setup.sh'
            sh 'colcon test'
        }
            }
        }
	}
	      post {
    always {
      dir(path: "${ROS_WORKSPACE}") {
        archiveArtifacts(artifacts: "**/*.log", fingerprint: true)
       
      }
      sh "rm -rf ${ROS_WORKSPACE}"
    }
  }
}
