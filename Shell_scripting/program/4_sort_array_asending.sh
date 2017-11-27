#!/bin/bash

echo "Enetr the length of array:"
read -p "length=>" length

for(( i=0;i< $length;i++))
do
	echo "Enetr `expr $i + 1`"
	read array[$i]
	
done


for(( i=0;i< $length;i++))
do 
	for(( j=`expr $i + 1`;j< $length;j++))
	do
		if [ ${array[$i]} -gt ${array[$j]} ]
		then
			temp=${array[$i]}
			array[$i]=${array[$j]}
			array[$j]=$temp
		fi

	done

done

echo "Array asendig order :"

for(( i=0;i< $length;i++))
do
	echo array[$i] = ${array[$i]}
done







