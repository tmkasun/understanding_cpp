# CMake

This directory only contains the `CMakeLists.txt` file, Which is the only file required for cmake to execute.

For more information about how to use modern cmake (3.+) syntaxs and bestpractices refer following articles

- [An Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/)
- [It's Time To Do CMake Right](https://pabloariasal.github.io/2018/02/19/its-time-to-do-cmake-right/)
- [CMake Examples](https://gitlab.kitware.com/cmake/community/wikis/doc/cmake/Examples)

In here, I have used the cpp program files in `compiling_and_linking` directory.


```
configure time  >  generate time  >  build time
\---------------v--------------/     \---v----/
        CMake is running           make is running
```

First run `cmake -B build_dir/ ` from here (`/how_cmake_works/`) directory to generate the configuration files including make files etc.

If you want to pass any CMake variables , This is the time for that.

you could use `-D` option to provide CMake variable with values

i:e

```shell
cmake -DCMAKE_ENABLE_DEBUG=1 -B build_dir/
```

To build the program using the underline build tool (in this case make), Use the following command

```shell
cmake --build build_dir/ --target sampleTarget
```

This will build the given target `sampleTarget` , And you could find the binary file with the target name `sampleTarget` inside the `/how_cmake_works/build_dir` directory.

Here , CMake target is defined when doing `add_executable` or `add_libraries`. It's not the project name.