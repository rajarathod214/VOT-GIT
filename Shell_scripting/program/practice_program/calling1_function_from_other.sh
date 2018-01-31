#!/bin/bash

function1()
{
	echo "This is $FUNCNAME"
	function2
}

function2()
{
	echo "THis is $FUNCNAME"
	function1
}

function1
