# MapTestProject

A project that includes simple applications of [std::map(C++)](http://www.cplusplus.com/reference/map/map/) in VIO system.

Compared with [std::vector](http://www.cplusplus.com/reference/vector/), [std::map](http://www.cplusplus.com/reference/map/map/) may be more suitable as a container for storing key frames, because it can more conveniently insert and delete keyframes. 

## Dependency

- [Git](https://git-scm.com/) (tested with Ubuntu 18.04)
  ```
  sudo apt-get install git
  ```
  
## Compile

You can use the following commands to download and compile the package.

  ```
  git clone https://github.com/Steph00L/MyStudy.git
  cd CplusInVio/MapTest
  mkdir build
  cd build
  cmake ..
  make -j12   ("-jx" is depending on your PC.)
  ```

## Run

  ```
  cd CplusInVio/MapTest/bin
  ./maptest
  ```