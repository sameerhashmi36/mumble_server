# Install script for directory: /media/nybsysml/test/sameer/Mumble/3rdparty/tracy

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/media/nybsysml/test/sameer/Mumble/cmake-build-debug/src/tracy/libTracyClient.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/TracyC.h"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/Tracy.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/TracyD3D11.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/TracyD3D12.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/TracyLua.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/TracyOpenCL.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/TracyOpenGL.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/TracyVulkan.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/client" TYPE FILE FILES
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/tracy_concurrentqueue.h"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/tracy_rpmalloc.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/tracy_SPSCQueue.h"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyArmCpuTable.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyCallstack.h"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyCallstack.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyDebug.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyDxt1.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyFastVector.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyLock.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyProfiler.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyRingBuffer.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyScoped.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyStringHelpers.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracySysTime.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracySysTrace.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/client/TracyThread.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/common" TYPE FILE FILES
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/tracy_lz4.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/tracy_lz4hc.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyAlign.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyAlign.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyAlloc.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyApi.h"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyColor.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyForceInline.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyMutex.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyProtocol.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyQueue.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracySocket.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyStackFrames.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracySystem.hpp"
    "/media/nybsysml/test/sameer/Mumble/3rdparty/tracy/common/TracyYield.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake"
         "/media/nybsysml/test/sameer/Mumble/cmake-build-debug/src/tracy/CMakeFiles/Export/share/Tracy/TracyConfig.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/Tracy/TracyConfig.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Tracy" TYPE FILE FILES "/media/nybsysml/test/sameer/Mumble/cmake-build-debug/src/tracy/CMakeFiles/Export/share/Tracy/TracyConfig.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/Tracy" TYPE FILE FILES "/media/nybsysml/test/sameer/Mumble/cmake-build-debug/src/tracy/CMakeFiles/Export/share/Tracy/TracyConfig-debug.cmake")
  endif()
endif()

