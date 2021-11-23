#!/bin/bash

# counter2.sh  tabular list of that shows the number of words and number of letters in each statement
#Kevin Gallardo 
#kgallardowepster1@student.gsu.edu

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
        
        echo -e "\t\tWords\tletters"
        i=1
        
        for statement in ${statements[@]}
        do
                words=$(echo $statement | wc -w)
                letters=$(echo $statement | tr -d ' ' | wc -c)
                echo -e "Statement $i:\t  $words\t  $((letters-1))"
                i=$((i+1))
        done
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