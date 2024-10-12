# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Calculators_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Calculators_autogen.dir\\ParseCache.txt"
  "Calculators_autogen"
  )
endif()
