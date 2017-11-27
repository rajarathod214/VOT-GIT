#!/bin/bash

echo "Enter array length:"
read -p "length=>" length

echo "Enetr the array element:"
for((i=0;i< $length;i++))
do
	echo "Enetr array [$i]:"
	read array[$i]
done

flag=0

for((i=0;i< $length;i++))
do
	for((j=`expr $i + 1`;j < $length;j++))
	do
		if [ ${array[$i]} -eq ${array[$j]} ]
		then
			flag=1
			length=`expr $length - 1`	
			for((k=$j ; k < $length ; k++))
			{
				array[$k]=${array[`expr $k + 1`]}
			}

		else
			j= `expr $j + 1`

		fi
	done

done

if [ $flag -eq 0 ]
then
	echo "No duplicate"
else
	for((i=0;i<`expr $length - 1`; i++))
	do
		echo "array[$i]=${array[$i]}"
	done

fi



