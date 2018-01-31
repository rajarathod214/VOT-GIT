#!/bin/bash

echo "Enter the min Start of range:"
read -p "Min=>" min

echo "Enetr the max range:"
read -p "Max=>" max

for((i=1;i<=$max;i++))
do
	flag=0

	for((j=2;j<=`expr $i / 2`;j++))
	do
		if [ `expr $i % $j` -eq 0 ]
		then
			flag=1

		fi
	done

	if [ $flag -eq 0 ]
	then
		echo  "$i"

	fi

done
		





