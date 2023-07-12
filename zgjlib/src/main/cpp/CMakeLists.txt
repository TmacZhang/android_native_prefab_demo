# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.22.1)

# Declares and names the project.

project("zgjlib")

add_compile_options(-Wall -Wextra -Wexit-time-destructors -DDEXFILE_SUPPORT)
# 配置-std=c++1z
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(
        ${CMAKE_SOURCE_DIR}/include
)
add_library( # Sets the name of the library.
        zgjlib

        # Sets the library as a shared library.
        SHARED
        student.cpp)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.
target_link_libraries( # Specifies the target library.
        zgjlib

        # Links the target library to the log library
        # included in the NDK.
        log)
