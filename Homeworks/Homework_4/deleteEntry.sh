#!/bin/sh

# deleteEntry.sh   used by phonebookMain.sh to delete entries
#Kevin Gallardo 
#kgallardowepster1@student.gsu.edu

        echo -n "Whose name do you want to delete? "
       read per
       sed -e "/$per/d" fn.txt | tee book.txt
       sort -o fn.txt book.txt | cat fn.txt
       cp fn.txt book.txt