#!/bin/bash

echo "Enetr Min value:"
read -p "Min=>" min

echo "Enetr Max value:"
read -p "Max=>" max

j=2

while [ $min != $max ] 

do
	flag=0
	
	while [ $j -le `expr $min / 2` ]
	do
		if [ `expr $min % $j` -eq 0 ]
		then 
			flag=1
		fi
		
		$j=`expr $j +1`
	done

	if [ $flag -eq 0 ]
	then
		echo "$min"
	fi

	min=`expr $min +1`

done
 

