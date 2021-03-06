#!/bin/bash

# counter.sh  counts the number of statements
#Kevin Gallardo 
#kgallardowepster1@student.gsu.edu

# find_statements function

function find_statements() {
        i=0
        while IFS=. read -r -a line
        do
        IFS="."
                for stat in ${line[@]}
                do
                        statements[i]=$(echo $stat | sed 's/^ //g')
                        i=$((i+1))
                done
        done < $1
        
        echo "There are total ${#statements[@]} statements"
}

if(($#==1))
then
        file=$1
else
        echo -n "Text file: "
        read file
fi

if [ -f $file ]
then
        find_statements $file
else
        echo "$file: file not exist"
        exit 1
fi