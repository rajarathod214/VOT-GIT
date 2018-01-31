#!/bin/bash

echo "Enter the number:"
read -p "Number=>" number

flag=0
j=2

while [ $j -le `expr $number / 2` ]
do
	
	if [ `expr $number % $j ` -eq 0 ] 
	then
		flag=1
		break
	fi
	
	j=`expr $j + 1`
done

if [ $flag -eq 0 ]
then
	echo "Prime"
else
	echo "Not a prime"
fi

