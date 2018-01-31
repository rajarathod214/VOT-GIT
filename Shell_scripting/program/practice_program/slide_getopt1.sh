#!/bin/bash

getopts abcl opt
	case "$opt" in
		a) echo "You entered a"
		;;
		b) echo "You entered b"
		;;
		c) echo "You entered c"
		;;
		l) echo "You entered l"
		;;
		*) echo "Invalid choice"
		;;
	esac
