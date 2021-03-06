#!/bin/sh

# phonebookMain.sh   main program to access and modify an alphabetical list of names, addresses and telephone numbers
#Kevin Gallardo 
#kgallardowepster1@student.gsu.edu

        exit=0
        while [ $exit -ne 1 ]
        do
            echo -e "add, find, show, delete, exit: "
            read input

            if [ "$input" = "add" ]
            then
                ./createEntry.sh
     
            elif [ "$input" = "find" ]
            then
                ./getEntry.sh
                
            elif [ "$input" = "show" ]
            then
                ./showEntry.sh
                
            elif [ "$input" = "delete" ]
            then
                ./deleteEnty.sh
                
            elif [ "$input" = "exit" ]
            then
                exit=1
            fi
        done

        exit 0