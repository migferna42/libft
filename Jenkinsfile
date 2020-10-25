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
        dir(path: '..') {
          git(url: 'https://github.com/alelievr/libft-unit-test', branch: 'master')
        }

      }
    }

    stage('run test') {
      steps {
        dir(path: '/var/jenkins_home/workspace/libft-unit-test') {
          sh 'make f'
        }

      }
    }

  }
}