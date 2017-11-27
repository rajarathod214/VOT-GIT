#/bin/bash

echo "Enetr the input string:"
read -p "string=>" string

echo $string | wc -w
