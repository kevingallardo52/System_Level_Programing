#!/bin/sh

# createEntry.sh   used by phonebookMain.sh to create entries
#Kevin Gallardo 
#kgallardowepster1@student.gsu.edu

        echo -n "Enter the name of the person: "
        read per
        echo -n "Enter the phone Number: "
        read phone
        echo -n "Enter the address: "
        read address
        echo "Are you sure? (y/n)"
        read res
        if [ "$res" = "y" ]
        then
            echo "$per ; $phone ; $address" >>book.txt
        else
            echo "It has not been appended!"
        fi
        sort -o fn.txt book.txt
        cp fn.txt book.txt
        
        #book.txt:- {{~}}