# This is the build and run Script for TDXFRAME
# Feel free to configure this for your project or not use it at all, but make sure that the configured version of this script does not make it in the main Repository
# This works on Linux and other systems that support the Bourne Shell
mkdir made;
echo Status: Directory Made
g++ -o made/app sources/main.cpp
echo Status: Compiled Sucsessfully
cd made/
pwd
echo Status: Launching Application
./app