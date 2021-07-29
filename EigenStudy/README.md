# EigenStudyProject

A project that includes basic skills of Eigen3.

## Dependency

- [Git](https://git-scm.com/) (tested with Ubuntu 18.04)
  ```
  sudo apt-get install git
  ```
- [Eigen3](https://eigen.tuxfamily.org/index.php?title=Main_Page)
  ```
  sudo apt-get install libeigen3-dev 
  ```
## Compile

You can use the following commands to download and compile the package.

  ```
  git clone https://github.com/Steph00L/MyStudy.git
  cd EigenStudy
  mkdir build
  cd build
  cmake ..
  make -j12   ("-jx" is depending on your PC.)
  ```

## Run

  ```
  cd EigenStudy/bin
  ./eigentest
  ```