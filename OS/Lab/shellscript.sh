#!/bin/bash

# ECHO

#echo "Hello World!"

# VARIABLES 
# Upper case by convention 
# Letter, underscore, numbers
# No space in between

# NAME="Vikash"

# echo "My name is $NAME"

# USER INPUT

# read -p "Enter your name: " NAME
# echo "Nice to meet you $NAME"

# CONDITIONALS
#   |                   | space needed

# if [ "$NAME" = "Vikash" ]
# then 
#     echo "Hello Vikash"
# fi

# IFELSE
# if [ "$NAME" = "Vikash" ]
# then 
#     echo "Your name is Vikash"
# else 
#     echo "Your name is not Vikash the great"
# fi

#ELSEIF

# read -p "Enter your name: " NAME
# if [ "$NAME" == "Vikash" ]
# then 
#     echo "Your name is Vikash"
# elif [ "$NAME" == "VIKASH" ]
# then
#     echo "Your name is Vikash"
# else 
#     echo "Your name is not Vikash the great"
# fi

#COMPARISION

# NUM1=3
# NUM2=5

# if [ "$NUM1" -gt "$NUM2" ]
# then 
#     echo "$NUM1 is greater than $NUM2"
# elif [ "$NUM1" -eq "$NUM2" ]
# then 
#     echo "$NUM1 is equal to $NUM2"
# elif [ "$NUM1" -le "$NUM2" ]
# then
#     echo "$NUM1 is less than $NUM2"
# else
#     echo "I don't know man"
# fi

########
# val1 -eq val2 Returns true if the values are equal
# val1 -ne val2 Returns true if the values are not equal
# val1 -gt val2 Returns true if val1 is greater than val2
# val1 -ge val2 Returns true if val1 is greater than or equal to val2
# val1 -lt val2 Returns true if val1 is less than val2
# val1 -le val2 Returns true if val1 is less than or equal to val2
########

# FILE CONDITIONS
# FILE="text.txt"
# if [ -r "$FILE" ]
# then 
#     echo "$FILE is a readable"
# else 
#     echo "$FILE is not readable"
# fi
########
# -d file   True if the file is a directory
# -e file   True if the file exists (note that this is not particularly portable, thus -f is generally used)
# -f file   True if the provided string is a file
# -g file   True if the group id is set on a file
# -r file   True if the file is readable
# -s file   True if the file has a non-zero size
# -u    True if the user id is set on a file
# -w    True if the file is writable
# -x    True if the file is an executable
########

#CASE STATEMENT

# read -p "Are you 18 or over (Y/N)" ANSWER
# case "$ANSWER" in 
#     [yY] | [Yy][Ee][Ss])
#         echo "You can drive :)"
#         ;; 
#     [Nn] | [Nn][Oo])
#         echo "Lmafo you can't drive you noob :)"
#         ;;
#     *)
#     echo "Please enter Y/n or Yes/No"
#     ;;
# esac

#LOOPING STATEMENT

# NAMES="Meow Cat UwU Noob Bruh Lmafo"
# for NAME in $NAMES
#     do 
#         echo "Hello $NAME"
# done

#FORLOOP TO RENAME FILE
# FILES=$(ls *.txt)
# NEW="New"
# for FILE in $FILES
#     do 
#         echo "We are renaming the new-$FILE"
#         mv $FILE $NEW-$FILE
# done

#WHILE LOOP

# COUNT=10
# while [ $COUNT -gt 0 ]
# do 
#     echo $COUNT
#     COUNT=`expr $COUNT - 1`
# done


#FUNCTIONS 
# function sayHello(){
#     echo "Hello everybody"
# }
# sayHello

#FUNCTIONS WITH PARAM
# function greet(){
#     echo "Hello $1 Hopefully you are $2 years old"
# }
# greet "Vikash", "19"