#!/bin/bash

echo "Enter the number:"
read -p "number=>" number

flag=0

for((i=2;i<= `expr $number / 2`;i++))
do

	if [ `expr $number % $i` -eq 0 ]
	then
		flag=1
		break
	fi

done

if [ $flag -eq 0 ]
then 
	echo "Prime"
else
	echo "Not Prime Number"
fi


