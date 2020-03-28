#!/bin/bash

mkdir -p bin
fileName=$1
compileFile=`echo $fileName | sed "s/.c$//"`
gcc -o bin/$compileFile ./$fileName && bin/$compileFile
rm -rf bin