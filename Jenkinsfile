pipeline {
  agent {
    docker {
      args '--network taller_mynet'
      image 'runner'
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