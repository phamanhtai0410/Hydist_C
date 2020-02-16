#! /bin/sh 
cd build
make
cd ..
./build/rep -f Inputs/ -h 500 -m 0 -s 10 -i 3600 -b 0
