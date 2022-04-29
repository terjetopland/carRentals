# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/carRentalTest_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/carRentalTest_autogen.dir/ParseCache.txt"
  "carRentalTest_autogen"
  )
endif()
