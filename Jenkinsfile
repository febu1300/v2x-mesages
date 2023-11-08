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
                   chmod -R 777 ${ROS_WORKSPACE}
                   chmod -R 777 ${ROS_WORKSPACE}/src/${PACKAGE_NAME}
                """
            }
        }
	 stage('Test') {
            steps {
            
          
	   
         sh "colcon test"

 
            }
        }
	}
post {
    always {
      dir(path: "${ROS_WORKSPACE}") {
        archiveArtifacts(artifacts: '/opt/jenkins/workspace/ros2branch_pipeline_main_ws/log', fingerprint: true)
       
      }
      sh "rm -rf ${ROS_WORKSPACE}"
    }
  }
}
