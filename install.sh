#!/bin/bash


files=`ls | grep _msg.h`
echo $files  

if   test CMakeLists.txt  

then 
echo "Delete old CMakeLists.txt"
rm CMakeLists.txt

fi  

echo "Create new CMakeLists.txt"
touch CMakeLists.txt

echo "install( FILES 
" >> CMakeLists.txt

echo "$files" >> CMakeLists.txt

echo "DESTINATION include/juk_msg )" >> CMakeLists.txt 
echo 'install(FILES juk_msgConfig.cmake DESTINATION "/usr/local/lib/cmake/juk_msg")' >>CMakeLists.txt 

touch juk_msgConfig.cmake

echo 'set(juk_msg_INCLUDE_DIRS "/usr/local/include/juk_msg")' > juk_msgConfig.cmake

cmake .
sudo make install