# Procedure to use CMakeLists.txt with VSCode

#### Here, what is CMakeLists.txt and how to write it will not explain

Suppose, Projet structure is as like as follows:

```
test/
├── cmake_learn
│   ├── CMakeLists.txt
│   └── hello.cpp
└── fetch_variable
    ├── CMakeLists.txt
    ├── include
    │   ├── config_variable.h
    │   └── do_process.h
    └── src
        ├── do_process.cpp
        └── main.cpp
```
1. Necessary extensions are [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake), [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools), [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

1. You can just open `cmake_learn` in the VSCode, Build the project and Run the executable. Or can open `test` folder which has two sub-project.

1. In this stage a folder named `.vscode` will be found which cotains the necessary files to `build` and `run` a project.<br>
    a. *settings.json* <br>
        ```
        {
            "cmake.sourceDirectory": "${workspaceFolder}/cmake_learn"
        }
        ```
    <br>
    b. Now if you Build the project will build for `cmake_learn`. Here you can change the folder name to `fetch_variable` if want to build this project. <br>
    c. But for this Press `Ctrl + Shift + P` and Write `CMake: Delete Cache and Reconfigure`<br>
    d. It will clean the cache which resides in `test/build/CMakeCache.txt`
1. Next will come what is the purpose of `c_cpp_properties.json`