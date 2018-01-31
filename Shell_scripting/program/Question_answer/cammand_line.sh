#!/bin/bash

a=$1
b=$2

if [ $# -gt 1 ]
then
add=`expr $a + $b`
echo $add
else
echo "Please pass the arguments"
fi

echo $1
echo $2
echo $0
echo $*
echo $@
echo $#
