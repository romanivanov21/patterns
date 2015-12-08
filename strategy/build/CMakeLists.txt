cmake_minimum_required ( VERSION 2.8 )

set ( CMAKE_CXX_STANDARD 14 )

set ( CMAKE_CXX_STANDARD_REQUIRED on )

set ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14" )

#for debug
SET(CMAKE_DEBUG_POSTFIX "_d" CACHE STRING "postfix applied to debug build of libraries")

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -g")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")


#for release
#SET(CMAKE_RELEASE_POSTFIX "" CACHE STRING "postfix applied to release build of libraries")

set( PROJECT strategy )

set( HEADRES ../inc/base_object.h ../inc/first_object.h ../inc/second_object.h ../inc/thrid_object.h )

set( SOURCES ../src/main.cpp ../src/base_object.cpp ../src/first_object.cpp ../src/second_object.cpp ../src/thrid_object.cpp )

project( ${PROJECT} )

include_directories ( ../inc )

source_group  ( "Header Files" FILES ${HEADERS}  )

source_group  ( "Source Files" FILES ${SOURCES}  )

add_executable( ${PROJECT} ${HEADRES} ${SOURCES} )
