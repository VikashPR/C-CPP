#!/bin/bash

# ECHO

#echo "Hello World!"

# VARIABLES 
# Upper case by convention 
# Letter, underscore, numbers
# No space in between

NAME="Vikash"

# echo "My name is $NAME"

# USER INPUT

# read -p "Enter your name: " NAME
# echo "Nice to meet you $NAME"

# CONDITIONALS
#   |                   | space needed
if [ "$NAME" = "Vikash" ]
then 
    echo "Hello Vikash"
fi