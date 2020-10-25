pipeline {
  agent {
    docker {
      image 'ubuntu'
      args '--network jenkins-blue-ocean-tutorial_mynet'
    }

  }
  stages {
    stage('Build') {
      steps {
        sh 'make'
      }
    }

  }
}