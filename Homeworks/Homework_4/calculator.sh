# !/bin/bash

# basic calculator
#Kevin Gallardo 
#kgallardowepster1@student.gsu.edu

isTrue=true
while $isTrue;do
echo "Enter your first number: "
read num1
echo "Enter yout second number: "
read num2
  

echo "Enter Your Choice Of Operation:"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Modulus "
read ch
case $ch in
  1)answer=`echo $num1 + $num2 | bc`
  ;;
  2)answer=`echo $num1 - $num2 | bc`
  ;;
  3)answer=`echo $num1 \* $num2 | bc`
  ;;
  4)answer=`echo "scale=2; $numnum2 / $y" | bc`
  ;; 
  5)answer=`echo "scale=2; $numnum2 % $y" | bc`
esac
echo "Result : $answer"
echo "6) Clear and Continue"
echo "7) cancel"
read ch1
case $ch1 in
6)clear
continue
;;
7)esac
isTrue=false
done
