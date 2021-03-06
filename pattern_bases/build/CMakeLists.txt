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

set( PROJECT pattern_bases )

#set( HEADRES
#			 )

set( SOURCES ../src/main.cpp 
             ../src/generalization/man.cpp
             ../src/generalization/student.cpp 
             ../src/generalization/lecturer.cpp
             ../src/realization/department.cpp
             ../src/realization/company.cpp
             ../src/association/as_student.cpp
             ../src/association/as_lecturer.cpp
             ../src/composition/car.cpp
             ../src/composition/engine.cpp
)

project( ${PROJECT} )

include_directories ( ../inc/generalization 
					  ../inc/realization
					  ../inc/association
					  ../inc/composition
)

source_group  ( "Header Files" FILES ${HEADERS}  )

source_group  ( "Source Files" FILES ${SOURCES}  )

add_executable( ${PROJECT} ${HEADRES} ${SOURCES} )
