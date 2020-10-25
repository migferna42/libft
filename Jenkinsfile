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
      agent {
        docker {
          image 'runner'
          args '--network taller_mynet'
        }

      }
      steps {
        dir(path: '..') {
          git(url: 'https://github.com/alelievr/libft-unit-test', branch: 'master')
        }

        dir(path: '/var/jenkins_home/workspace/libft-unit-test') {
          sh 'make f'
        }

      }
    }

  }
}