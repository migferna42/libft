pipeline {
  agent {
    docker {
      image 'ubuntu:latest'
      args '--network taller_mynet'
    }

  }
  stages {
    stage('Build') {
      steps {
        sh 'make re'
      }
    }

  }
}