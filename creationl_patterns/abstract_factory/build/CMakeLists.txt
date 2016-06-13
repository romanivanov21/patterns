cmake_minimum_required ( VERSION 2.8 )

set ( CMAKE_CXX_STANDARD 14 )

set ( CMAKE_CXX_STANDARD_REQUIRED on )

set ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14" )

set ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lstdc++" )

#for debug
SET(CMAKE_DEBUG_POSTFIX "_d" CACHE STRING "postfix applied to debug build of libraries")

#SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")


#for release
#SET(CMAKE_RELEASE_POSTFIX "" CACHE STRING "postfix applied to release build of libraries")

set( PROJECT abstract_factory )

set( SOURCES ../src/ 
			../src/main.cpp
			../src/client.cpp
			../src/coca_cola/coca_cola_factory.cpp
			../src/coca_cola/coca_cola_bottle.cpp
			../src/pepsi_cola/pepsi_cola_factory.cpp
			../src/pepsi_cola/pepsi_cola_bottle.cpp
		)

project( ${PROJECT} )

include_directories(../inc
					../inc/coca_cola
					../inc/pepsi_cola
					)

source_group  ( "Header Files" FILES ${HEADERS}  )

source_group  ( "Source Files" FILES ${SOURCES}  )

add_executable( ${PROJECT} ${HEADRES} ${SOURCES} )
