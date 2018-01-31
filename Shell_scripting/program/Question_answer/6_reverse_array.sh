#/bin/bash


echo "Enter the array length:"
read -p "length=>" length

echo "Enetr the array element:"

for (( i=0;i< $length;i++ ))
do
	echo "Enter `expr $i + 1`:"
	read array[$i]
done

for(( i=0, j=`expr $length - 1` ; j > i;i++,j-- ))
do
	temp=${array[$i]}
	array[$i]=${array[$j]}
	array[$j]=$temp
done

echo "reverse array element:"

for((i=0;i< $length ; i++))
do
	echo "array[$i]=${array[$i]}"
done


