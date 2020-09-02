cmake_minimum_required( VERSION 3.16.2 )

project( JohnnyDept
         VERSION 1.0 
         DESCRIPTION "dark text based game"
         LANGUAGES CXX )

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_STANDARD_REQUIRED ON )
set( CMAKE_RUNETIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build )

include_directories( headers )
include( paths.cmake )

add_executable( game ${cpp_files} )
