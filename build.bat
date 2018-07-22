@echo off

call cmake.bat

cd build
cmake --build . --config RelWithDebInfo --target install
cd ..
