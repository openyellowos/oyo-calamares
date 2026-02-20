# Install script for directory: /home/toshio/oyo-calamares/src/libcalamares

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "None")
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

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libcalamares.so.3.3.14"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libcalamares.so.3.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/libcalamares.so.3.3.14"
    "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/libcalamares.so.3.3"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libcalamares.so.3.3.14"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/libcalamares.so.3.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/libcalamares.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  
    file( MAKE_DIRECTORY "$ENV{DESTDIR}//usr/lib/x86_64-linux-gnu/calamares" )
    execute_process( COMMAND "/usr/bin/cmake" -E create_symlink ../libcalamares.so.3.3.14 libcalamares.so WORKING_DIRECTORY "$ENV{DESTDIR}//usr/lib/x86_64-linux-gnu/calamares" )

endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares" TYPE FILE FILES
    "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/libcalamares/CalamaresConfig.h"
    "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/libcalamares/CalamaresVersion.h"
    "/home/toshio/oyo-calamares/src/libcalamares/CalamaresAbout.h"
    "/home/toshio/oyo-calamares/src/libcalamares/CppJob.h"
    "/home/toshio/oyo-calamares/src/libcalamares/DllMacro.h"
    "/home/toshio/oyo-calamares/src/libcalamares/GlobalStorage.h"
    "/home/toshio/oyo-calamares/src/libcalamares/Job.h"
    "/home/toshio/oyo-calamares/src/libcalamares/JobExample.h"
    "/home/toshio/oyo-calamares/src/libcalamares/JobQueue.h"
    "/home/toshio/oyo-calamares/src/libcalamares/ProcessJob.h"
    "/home/toshio/oyo-calamares/src/libcalamares/Settings.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/geoip" TYPE FILE FILES
    "/home/toshio/oyo-calamares/src/libcalamares/geoip/GeoIPFixed.h"
    "/home/toshio/oyo-calamares/src/libcalamares/geoip/GeoIPJSON.h"
    "/home/toshio/oyo-calamares/src/libcalamares/geoip/GeoIPTests.h"
    "/home/toshio/oyo-calamares/src/libcalamares/geoip/GeoIPXML.h"
    "/home/toshio/oyo-calamares/src/libcalamares/geoip/Handler.h"
    "/home/toshio/oyo-calamares/src/libcalamares/geoip/Interface.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/locale" TYPE FILE FILES
    "/home/toshio/oyo-calamares/src/libcalamares/locale/Global.h"
    "/home/toshio/oyo-calamares/src/libcalamares/locale/Lookup.h"
    "/home/toshio/oyo-calamares/src/libcalamares/locale/TimeZone.h"
    "/home/toshio/oyo-calamares/src/libcalamares/locale/TranslatableConfiguration.h"
    "/home/toshio/oyo-calamares/src/libcalamares/locale/TranslatableString.h"
    "/home/toshio/oyo-calamares/src/libcalamares/locale/Translation.h"
    "/home/toshio/oyo-calamares/src/libcalamares/locale/TranslationsModel.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/modulesystem" TYPE FILE FILES
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/Actions.h"
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/Config.h"
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/Descriptor.h"
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/InstanceKey.h"
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/Module.h"
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/Preset.h"
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/Requirement.h"
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/RequirementsChecker.h"
    "/home/toshio/oyo-calamares/src/libcalamares/modulesystem/RequirementsModel.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/network" TYPE FILE FILES
    "/home/toshio/oyo-calamares/src/libcalamares/network/Manager.h"
    "/home/toshio/oyo-calamares/src/libcalamares/network/Tests.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/partition" TYPE FILE FILES
    "/home/toshio/oyo-calamares/src/libcalamares/partition/AutoMount.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/FileSystem.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/Global.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/KPMHelper.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/KPMManager.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/Mount.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/PartitionIterator.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/PartitionQuery.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/PartitionSize.h"
    "/home/toshio/oyo-calamares/src/libcalamares/partition/Sync.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/utils" TYPE FILE FILES
    "/home/toshio/oyo-calamares/src/libcalamares/utils/CommandList.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Dirs.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Entropy.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Logger.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/NamedEnum.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/NamedSuffix.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Permissions.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/PluginFactory.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/RAII.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Retranslator.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Runner.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/String.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/StringExpander.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/System.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Traits.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/UMask.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Units.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Variant.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/Yaml.h"
    "/home/toshio/oyo-calamares/src/libcalamares/utils/moc-warnings.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/compat" TYPE FILE FILES
    "/home/toshio/oyo-calamares/src/libcalamares/compat/CheckBox.h"
    "/home/toshio/oyo-calamares/src/libcalamares/compat/Mutex.h"
    "/home/toshio/oyo-calamares/src/libcalamares/compat/Size.h"
    "/home/toshio/oyo-calamares/src/libcalamares/compat/Variant.h"
    "/home/toshio/oyo-calamares/src/libcalamares/compat/Xml.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/packages" TYPE FILE FILES "/home/toshio/oyo-calamares/src/libcalamares/packages/Globals.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/libcalamares/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
