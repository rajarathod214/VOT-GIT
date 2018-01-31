#!/bin/bash

myfunction()
{
	echo "Function name is $FUNCNAME"
}

myfunction

echo "Outside function name is , \$FUNCNAME = $FUNCNAME"


