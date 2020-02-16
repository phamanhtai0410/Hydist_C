#! /bin/sh 
for f in *.cpp; do 
    ln -s -- "$f" "${f%.cpp}.cu"
done
