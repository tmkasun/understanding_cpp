# Introduction
This code is based on this [article](https://www.toptal.com/c-plus-plus/c-plus-plus-understanding-compilation). 

`summer.cpp` contains simple addition function wich can be utilized by an externam application via its header file `summer.h`

`test.cpp` is our main app here, It imports the `summer.h` file and use the addition function defined in `summer.cpp`

To compile the addition function source file (`summer.cpp`) run

```shell
g++ -C -o summer.object summer.cpp
```

This will create an object file named summer.object

To inspect the symboles in it use

```shell
nm -C summer.object
```

You could see the exported symboles in the object file using `nm`

# Some useful commands

### List linker lookup paths

- `ldconfig -p | grep spdlog`
- `pkg-config --list-all | grep xerces-c`
- `ld --verbose | grep SEARCH_DIR | tr -s ' ;' \\012`

### Check the linked libraries in binary file

- `ldd  binaryApp`