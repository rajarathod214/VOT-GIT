#!/bin/bash

echo "Enetr number:"
read -p "Number" number

fact=1
i=1

while (( $i <= $number ))

do
	fact=$(( $i * $fact ))
	i= `expr $i + 1`
done

echo "factorial= $fact"


