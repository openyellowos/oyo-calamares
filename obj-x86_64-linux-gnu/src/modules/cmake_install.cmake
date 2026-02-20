# Install script for directory: /home/toshio/oyo-calamares/src/modules

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/bootloader" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/bootloader/bootloader.schema.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/bootloader" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/bootloader/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/bootloader" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/bootloader/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/bootloader" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/bootloader/test.yaml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/contextualprocess/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/displaymanager" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/displaymanager/displaymanager.schema.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/displaymanager" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/displaymanager/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/displaymanager" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/displaymanager/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/dracut" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/dracut/dracut.schema.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/dracut" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/dracut/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/dracut" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/dracut/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/dracutlukscfg/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/dummycpp/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/dummyprocess" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/dummyprocess/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/dummypython" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/dummypython/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/dummypython" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/dummypython/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/finished/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/finishedq/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/fsresizer/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/fstab" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/fstab/fstab.schema.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/fstab" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/fstab/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/fstab" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/fstab/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/fstab" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/fstab/test.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/fstab" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/fstab/test2.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/grubcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/grubcfg/grubcfg.schema.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/grubcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/grubcfg/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/grubcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/grubcfg/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/hostinfo/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/hwclock" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/hwclock/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/hwclock" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/hwclock/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initcpio/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/initcpiocfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initcpiocfg/initcpiocfg.schema.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/initcpiocfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initcpiocfg/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/initcpiocfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initcpiocfg/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/initcpiocfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initcpiocfg/test.yaml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initramfs/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/initramfscfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initramfscfg/encrypt_hook")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/initramfscfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initramfscfg/encrypt_hook_nokey")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/initramfscfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initramfscfg/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/initramfscfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/initramfscfg/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/interactiveterminal/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/keyboard/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/keyboardq/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/license/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/locale/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/localecfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/localecfg/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/localecfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/localecfg/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/localeq/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/luksbootkeyfile/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/luksopenswaphookcfg/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/machineid/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/mkinitfs" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/mkinitfs/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/mkinitfs" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/mkinitfs/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/mount" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/mount/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/mount" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/mount/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/mount" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/mount/mount.schema.yaml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/netinstall/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/networkcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/networkcfg/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/networkcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/networkcfg/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/notesqml/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/oemid/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/openrcdmcryptcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/openrcdmcryptcfg/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/openrcdmcryptcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/openrcdmcryptcfg/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/packagechooser/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/packagechooserq/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/packages" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/packages/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/packages" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/packages/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/packages" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/packages/packages.schema.yaml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/partition/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/plasmalnf/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/plymouthcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/plymouthcfg/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/plymouthcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/plymouthcfg/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/plymouthcfg" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/plymouthcfg/plymouthcfg.schema.yaml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/preservefiles/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/rawfs" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/rawfs/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/rawfs" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/rawfs/module.desc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/removeuser/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/services-openrc" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/services-openrc/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/services-openrc" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/services-openrc/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/services-systemd" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/services-systemd/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/services-systemd" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/services-systemd/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/services-systemd" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/services-systemd/services-systemd.schema.yaml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/shellprocess/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/summary/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/summaryq/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/tracking/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/umount/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/unpackfs" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/unpackfs/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/unpackfs" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/unpackfs/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/unpackfs" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/unpackfs/runtests.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/unpackfs" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/unpackfs/unpackfs.schema.yaml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/unpackfsc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/users/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/usersq/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/welcome/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/welcomeq/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/zfs/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/zfshostid" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/zfshostid/main.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/zfshostid" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/zfshostid/module.desc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/x86_64-linux-gnu/calamares/modules/zfshostid" TYPE FILE FILES "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/zfshostid/zfshostid.schema.yaml")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/toshio/oyo-calamares/obj-x86_64-linux-gnu/src/modules/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
