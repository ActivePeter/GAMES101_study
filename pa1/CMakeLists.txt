cmake_minimum_required(VERSION 3.10)
project(pa1_Rasterizer)

# IF (NOT CMAKE_BUILD_TYPE)
#     set(CMAKE_BUILD_TYPE "Release" CACHE STRING
#         "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel." FORCE)
# ENDIF()


# find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set (3RD_DIR ${PROJECT_SOURCE_DIR}/../third)

#项目源码
set (SRC_DIR ${PROJECT_SOURCE_DIR}/src)
include_directories (${SRC_DIR})
file(GLOB_RECURSE SRC_FILES ${SRC_DIR}/*.cpp ${SRC_DIR}/*.cc)
add_executable (${PROJECT_NAME} ${SRC_FILES})

#opencv
set (CV_DIR "E:/pa_files/thd_libs/opencv450/build/x64/vc15")
set (CV_INC "E:/pa_files/thd_libs/opencv450/build/include")
include_directories (${CV_INC})

# IF (CMAKE_BUILD_TYPE MATCHES "Debug")
#     message("Debug")
    # set (CV_LIB_DIR ${CV_DIR}/bin/opencv_world450d.dll)
    set (CV_LIBD_DIR ${CV_DIR}/lib/opencv_world450d.lib)

# ELSE()
    # message("Release")
    # set (CV_LIB_DIR ${CV_DIR}/bin/opencv_world450.dll)
    set (CV_LIB_DIR ${CV_DIR}/lib/opencv_world450.lib)
    # message( ${CV_LIB_DIR})
# ENDIF()

#eigen3
set (eigen3_dir ${3RD_DIR}/eigen-3.3.9)
# add_subdirectory(${eigen3_dir})
include_directories (${eigen3_dir})

# add_executable(Rasterizer main.cpp rasterizer.hpp rasterizer.cpp Triangle.hpp Triangle.cpp)
target_link_libraries(pa1_Rasterizer
    debug ${CV_LIBD_DIR}
    # )
# target_link_libraries(Rasterizer 
    optimized ${CV_LIB_DIR})
