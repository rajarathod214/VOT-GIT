#!/bin/bash


function1()
{
	echo "First arg=$1 second arg=$2"
	echo "First arg=$1=$var1 second arg=$2=$var2"
}

var1=10
var2=20

function1 var1 var2
