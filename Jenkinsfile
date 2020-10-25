pipeline {
  agent {
    docker {
      args '--network jenkins-blue-ocean-tutorial_mynet'
      image 'ubuntu:latest'
    }

  }
  stages {
    stage('Build') {
      steps {
        sh 'cd libft ; make re'
      }
    }

  }
}