#!/bin/bash

# Create an empty array to store the names of the .c files
c_files=()

# Iterate through all the .c files in the current directory

for file in ./*.c
do
	# Add the name of the file to the array
	c_files+=($file)
done
gcc -Wall -Wextra -Werror -pedantic -c *.c

# Create the static library with the .c files
ar rcs liball.a ${c_files[@]}
