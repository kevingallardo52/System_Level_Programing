#!/bin/sh     

# showEntry.sh   used by phonebookMain.sh to show entries
#Kevin Gallardo 
#kgallardowepster1@student.gsu.edu

      echo "Line number:   Name ;     Phone Number;     Address ;    "
      nl  --number-separator=";   "   book.txt
      sort -o fn.txt book.txt
      cp fn.txt book.txt