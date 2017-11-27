#!/bin/bash

echo "Enter a number:"
read -p "Number=>" number

temp=$number
reverse=0

while [ $temp -ne 0 ]
do
	modulus=`expr $temp % 10`
	mul=`expr $reverse \* 10`
	reverse=`expr $mul + $modulus`
	temp=`expr $temp / 10`

#	modulus=$(( $temp / 10 ))
#	echo "mod $modulus"
#	reverse=$((( $reverse * 10 ) + $modulus ))
#	echo "reverse $reverse"
#	temp=$(( $temp / 10 ))
#	echo "temp $temp"
#	if [ $temp -eq 0 ]
#	then
#		break
#	fi
done

if [ $number -eq $reverse ]
then
	echo "Palindrome"
else
	echo "Not a palindrome"

fi


