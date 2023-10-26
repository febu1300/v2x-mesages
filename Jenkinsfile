pipeline {
        agent none
 environment {
    PACKAGE_NAME = 'v2x'
    ROS_WORKSPACE = "${WORKSPACE}_ws"
  }
    stages {
 
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
