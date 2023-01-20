# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\proiect_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\proiect_autogen.dir\\ParseCache.txt"
  "proiect_autogen"
  )
endif()
