cmake_minimum_required ( VERSION 2.8 )

set ( CMAKE_CXX_STANDARD 14 )

set ( CMAKE_CXX_STANDARD_REQUIRED on )

set ( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14" )

set( PROJECT memento )

set( HEADRES ../inc/caretaker.h ../inc/memento.h ../inc/originator.h )

set( SOURCES ../src/main.cpp ../src/caretaker.cpp ../src/memento.cpp ../src/originator.cpp )

project( ${PROJECT} )

include_directories ( ../inc )

source_group  ( "Header Files" FILES ${HEADERS}  )

source_group  ( "Source Files" FILES ${SOURCES}  )

add_executable( ${PROJECT} ${HEADRES} ${SOURCES} )
