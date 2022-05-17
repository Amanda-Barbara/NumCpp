cmake_minimum_required(VERSION 3.14)

# Project name
project(numpy2cpp)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()
message(STATUS "Compiling with C++ standard: ${CMAKE_CXX_STANDARD}")

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

#add_executable(${PROJECT_NAME} NumCppWithOpenCV.cpp)

# Disable inplace builds to prevent source tree corruption.
IF (" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  MESSAGE (FATAL_ERROR "Tengine Fatal: Building inplace are not allowed. You should create a separate directory for Building.")
ENDIF ()

# set cmake_install_prefix path
IF (NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET (CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "Tengine Installation Directory")
ENDIF()

# Enable the languages which in use
ENABLE_LANGUAGE (C CXX)

IF (NOT CMAKE_BUILD_TYPE)
  SET (CMAKE_BUILD_TYPE release CACHE STRING "Choose the type of build" FORCE)
ENDIF()


IF (CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
  IF (CMAKE_TOOLCHAIN_FILE)
    SET (LIBRARY_OUTPUT_PATH_ROOT ${CMAKE_BINARY_DIR} CACHE PATH "root for library output, set this to change where android libs are compiled to")

    # get absolute path, but get_filename_component ABSOLUTE only refer with source dir, so find_file here :(
    GET_FILENAME_COMPONENT (CMAKE_TOOLCHAIN_FILE_NAME ${CMAKE_TOOLCHAIN_FILE} NAME)
    FIND_FILE (CMAKE_TOOLCHAIN_FILE ${CMAKE_TOOLCHAIN_FILE_NAME} PATHS ${CMAKE_SOURCE_DIR} NO_DEFAULT_PATH)
    MESSAGE (STATUS "Using CMake tool chain file ${CMAKE_TOOLCHAIN_FILE}")
    SET(ARCH_DIR arm)
  ELSE()
    SET(ARCH_DIR x86)
  ENDIF()
ELSE()
  SET(ARCH_DIR arm)
ENDIF()

MESSAGE (STATUS "ARCH_DIR is ${ARCH_DIR} ")

#set(OpenCV_DIR ${CMAKE_SOURCE_DIR}/3rdparty/opencv/${ARCH_DIR}/lib/cmake/opencv4)
find_package(OpenCV REQUIRED)

LIST (APPEND 3RDPARTY_INCLUDE_PATH        ${CMAKE_SOURCE_DIR}/3rdparty/NumCpp/${ARCH_DIR} ${OpenCV_INCLUDE_DIRS})
INCLUDE_DIRECTORIES(${3RDPARTY_INCLUDE_PATH})
MESSAGE (STATUS "3RDPARTY_INCLUDE_PATH is ${3RDPARTY_INCLUDE_PATH} ")

LIST (APPEND 3RDPARTY_LINK_LIBRARIES     ${OpenCV_LIBS})
MESSAGE (STATUS "3RDPARTY_LINK_LIBRARIES is ${3RDPARTY_LINK_LIBRARIES} ")
MESSAGE (STATUS "OpenCV_LIBS is ${OpenCV_LIBS} ")


# Set cmake default folder name
SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)
SET_PROPERTY(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "cmake")

# Main source files
ADD_SUBDIRECTORY (src)

IF (NOT CMAKE_TOOLCHAIN_FILE)
  ADD_SUBDIRECTORY(example)
ENDIF()

# Report summary
INCLUDE ("${CMAKE_CURRENT_SOURCE_DIR}/cmake/summary.cmake")
