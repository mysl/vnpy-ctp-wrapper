@echo off

set PROJ_ROOT=%~dp0.
set CMAKE_BIN="D:\Program Files\CMake\bin"
set BOOST_ROOT=D:\boost_1_68_0
set PYTHON_ROOT=C:\anaconda3

set BUILD_DIR=%PROJ_ROOT%\build
set SRC_DIR=%PROJ_ROOT%\src
set GENERATOR="Visual Studio 12 2013 Win64"
%CMAKE_BIN%\cmake.exe -G%GENERATOR% -H%SRC_DIR% -B%BUILD_DIR%