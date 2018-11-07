# Version info

- CTP python wrapper based on vnpy ctp wrapper (source adapted from vnpy 1.9.0 release, api/ctp/py3)
- CTP API version: 6.3.11 (futures/options) windows 64bits
- boost version: 1.68.0-msvc-12.0-64bits
- cmake version: >= 3.13
- compile environment: vs2013 x64
- python: 3.6

# Build

- copy libraries under .\lib\boost_1_68_0\lib64-msvc-12.0 to your local boost library folder (if you already have boost_python3.6 binaries, then skip this step)
- edit build.bat to set path according your own boost, python installation
- run build.bat to generate vs projects and solutions in .\build folder
- open .\build\vn_ctp_api.sln, select build flavor, build
