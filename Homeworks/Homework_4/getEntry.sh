#!/bin/sh           

# getEntry.sh   used by phonebookMain.sh to get entries
#Kevin Gallardo 
#kgallardowepster1@student.gsu.edu

       echo -n "The name of the person you are trying to find: "
       read fnd
       
       echo "              Name  ;    Phone Number ;    Address  "
       grep -i $fnd book.txt
       sort -o fn.txt book.txt
       cp fn.txt book.txt