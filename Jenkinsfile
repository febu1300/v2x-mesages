pipeline {
   agent{
         docker { image 'ros:foxy' }
        }       
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
 	        sh """
 	        echo "$(whoami)"
		echo "Set disable_coredump false" >> /etc/sudo.conf
		exec /sbin/su-exec "${DEFAULT_USER}"
			EXEC="exec"
		
                """
 	}
        stage('Setup') {
            steps {
                sh 'printenv'
                sh """
                  mkdir -p ${ROS_WORKSPACE}/src
                  cp -R . ${ROS_WORKSPACE}/src/${PACKAGE_NAME}
                   . /opt/ros/foxy/setup.sh
                """
            }
        }
        stage('Build') {
            steps {
            dir(path: "${ROS_WORKSPACE}") {
            sh '''
            . /opt/ros/foxy/setup.sh
             colcon build 
          '''
        }
            }
        }
        stage('Test') {
            steps {
              dir(path: "${ROS_WORKSPACE}") {
          sh '''
	 . /opt/ros/foxy/setup.sh
            colcon test-result --all 
             
          '''
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
