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

    stage('Test') {
      steps {
        dir(path: 'cd ..') {
          git(url: 'https://github.com/alelievr/libft-unit-test', branch: 'master')
        }

        sh 'make f'
      }
    }

  }
}