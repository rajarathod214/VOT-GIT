#!/bin/bash

function1()
{
	
	echo "This is $FUNCNAME"	

	function2()
	{
		echo "This is nested function $FUNCNAME"
	}

}

function1
function2
