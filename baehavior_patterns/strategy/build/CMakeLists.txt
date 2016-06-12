cmake_minimum_required ( VERSION 2.8 )

set ( CMAKE_CXX_STANDARD 14 )

set ( CMAKE_CXX_STANDARD_REQUIRED on )

set ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14" )

set ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lstdc++" )

#for debug
SET(CMAKE_DEBUG_POSTFIX "_d" CACHE STRING "postfix applied to debug build of libraries")

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -g")

SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")


#for release
#SET(CMAKE_RELEASE_POSTFIX "" CACHE STRING "postfix applied to release build of libraries")

set( PROJECT strategy )

#set( HEADRES ../inc/context/base_object.h
#			 ../inc/context/first_object.h 
#			 ../inc/context/second_object.h 
#			 ../inc/context/thrid_object.h 
#			 ../inc/interfaces/interface1.h
#			 ../inc/interfaces/interface2.h
#			 ../inc/strategies/strategy1.h
#			 ../inc/strategies/strategy2.h
#			 ../inc/strategies/strategy3.h
#			 ../inc/strategies/strategy4.h
#			 ../inc/strategies/strategy5.h
#			 )

set( SOURCES ../src/context/base_object.cpp
			 ../src/context/first_object.cpp 
			 ../src/context/second_object.cpp 
			 ../src/context/thrid_object.cpp 
			 ../src/strategies/strategy1.cpp
			 ../src/strategies/strategy2.cpp
			 ../src/strategies/strategy3.cpp
			 ../src/strategies/strategy4.cpp
			 ../src/strategies/strategy5.cpp 
			 ../src/main.cpp
			 )

project( ${PROJECT} )

include_directories ( ../inc/context 
					  ../inc/interfaces
					  ../inc/strategies
)

source_group  ( "Header Files" FILES ${HEADERS}  )

source_group  ( "Source Files" FILES ${SOURCES}  )

add_executable( ${PROJECT} ${HEADRES} ${SOURCES} )
