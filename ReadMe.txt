cd LibTest
cmake -B ./build/ -G "MinGW Makefiles"
mingw32-make.exe -C ./build/
mingw32-make.exe -C ./build/ clean