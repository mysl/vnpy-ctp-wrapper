cmake_minimum_required(VERSION 3.13)
project(vn_ctp_api)

# set options
option(USE_64BITS "comiple 64bits" ON)
option(BUILD_CTP_MD "build ctp md" ON)
option(BUILD_CTP_TD "build ctp td" ON)

set(CMAKE_BUILD_TYPE "Release")
if (CMAKE_COMPILER_IS_GNUC OR CMAKE_COMPILER_IS_GNUCXX) 
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -std=c++11")
endif ()
if (USE_64BITS)
  add_definitions(-DUSE_64BITS)
  #set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")
  #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32")
endif()

# set path from environment variables
file(TO_CMAKE_PATH "$ENV{PROJ_ROOT}" PROJ_ROOT)
message(STATUS "PROJ_ROOT: " ${PROJ_ROOT})
file(TO_CMAKE_PATH "$ENV{BOOST_ROOT}" BOOST_ROOT)
message(STATUS "BOOST_ROOT: " ${BOOST_ROOT})
file(TO_CMAKE_PATH "$ENV{PYTHON_ROOT}" PYTHON_ROOT)
message(STATUS "PYTHON_ROOT: " ${PYTHON_ROOT})

# set source and output path
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(SRC_DIR ${PROJ_ROOT}/src)

# set library path
set(CTPAPI_PATH ${PROJ_ROOT}/lib/ctp)
set(CTPLIB_PATH ${CTPAPI_PATH}/win64)
set(Boost_LIBRARY_DIRS ${BOOST_ROOT}/lib64-msvc-12.0)
set(Boost_INCLUDE_DIR ${BOOST_ROOT})  # cmake will automatically append boost after Boost_INCLUDE_DIR for include
set(PYTHON_INC ${PYTHON_ROOT}/include)
set(CTPAPI_INC ${CTPAPI_PATH}/inc)

# find libraries
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
find_package(Boost 1.68.0 REQUIRED COMPONENTS python36 thread date_time system chrono locale)
if(Boost_FOUND)
  message(STATUS "Found boost package")
  include_directories(${Boost_INCLUDE_DIR})
else()
  message(SEND_ERROR "Can not find boost package!")
endif()

find_library(CTPAPI_MD_LIBRARY
  NAMES thostmduserapi
  PATHS ${CTPLIB_PATH}) 
find_library(CTPAPI_TD_LIBRARY
  NAMES thosttraderapi
  PATHS ${CTPLIB_PATH})
find_library(PYTHON_LIBRARY
  NAMES python36
  PATHS ${PYTHON_ROOT}/libs)

# include header files
include_directories(${PYTHON_INC})
include_directories(${CTPAPI_INC})

# build and link target
if (BUILD_CTP_MD)
  add_definitions(-DBUILD_CTP_MD)
  file (GLOB VN_CTP_MD_SOURCE
      "${SRC_DIR}/vnctpmd/*.h*"
      "${SRC_DIR}/vnctpmd/*.c*")
  add_library(vnctpmd SHARED ${VN_CTP_MD_SOURCE})

  set_target_properties(vnctpmd PROPERTIES PREFIX "")
  target_link_libraries(vnctpmd  ${Boost_LIBRARIES} ${PYTHON_LIBRARY} ${CTPAPI_MD_LIBRARY})

endif()

if (BUILD_CTP_TD)
  add_definitions(-DBUILD_CTP_TD)
  file (GLOB VN_CTP_TD_SOURCE
      "${SRC_DIR}/vnctptd/*.h*"
      "${SRC_DIR}/vnctptd/*.c*")
  add_library(vnctptd SHARED ${VN_CTP_TD_SOURCE})
  set_target_properties(vnctptd PROPERTIES PREFIX "")
  target_link_libraries(vnctptd  ${Boost_LIBRARIES} ${PYTHON_LIBRARY} ${CTPAPI_TD_LIBRARY})

endif()

# post build
# TODO: this won't work if it's not release build
set(MD_DLL "${LIBRARY_OUTPUT_PATH}/Release/vnctpmd.dll")
if (EXISTS ${MD_DLL})
  file(RENAME ${MD_DLL} ${LIBRARY_OUTPUT_PATH}/Release/vnctpmd.pyd)
endif()
set(TD_DLL ${LIBRARY_OUTPUT_PATH}/Release/vnctptd.dll)
if (EXISTS ${TD_DLL})
  file(RENAME  ${TD_DLL} ${LIBRARY_OUTPUT_PATH}/Release/vnctptd.pyd)
endif()
