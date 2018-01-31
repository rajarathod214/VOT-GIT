#!/bin/bash




while  getopts a:b:cl opt
do
	case "$opt" in
		a) echo "You entered a"
		avalue="$OPTARG"
		echo "avalue is $avalue"
		;;
		b) echo "You entered b"
		bvalue="$OPTARG"
		echo "bvalue is $bvalue"
		;;
		c) echo "You entered c"
		;;
		l) echo "You entered l"
		;;
		*) echo "Invalid choice"
		;;
	esac
done
