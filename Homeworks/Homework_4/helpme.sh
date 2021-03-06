#!/bin/bash

# Name: helpme.sh 
# Purpose: looks through a txt file with saved manuals and returns the manual you ask it to look for if its in the data base
# Author: Kevin Gallardo 
#kgallardowepster1@student.gsu.edu


mandatabase="mandatabase.txt"

echo -n "What is your command to search ?"
read command

# A man page for any command starts with COMMAND(1)
# (in uppercase letters, in the beginning of line) and ends with COMMAND(1)
# (in uppercase letters, at the end of line), hence the following 'sed' is used to get
# the man entry for the command and display it page by page using 'more'

# Convert user input to uppercase
command=$(echo "$command" | tr a-z A-Z)

# Find the man entry from the mandatabase or display a message
if [ -n "$(sed -n "/^$command(1)/,/$command(1)$/p" "$mandatabase" | more)" ]
then
    sed -n "/^$command(1)/,/$command(1)$/p" "$mandatabase" | more
else
    echo "Sorry, I cannot help you"
fi

exit 0