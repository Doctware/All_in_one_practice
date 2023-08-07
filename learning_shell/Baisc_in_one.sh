#!/bin/bash
# Variable section

#declearing variable
VARIABLE1=50
VARIABLE2=20
# printing the value of both variable 
echo $(($VARIABLE1 + $VARIABLE2))

# more on varible
PRICE_PER_APPLE=10
my_letter=ABC
greetings='Hello,       World!'
echo "the name of the coder is: " $1
echo "The name of the file is: " $0
echo "the price of apple is: \$$PRICE_PER_APPLE"
echo "am working with folowing letter: ${my_letter}DEFGHIJKLMNOP"
echo $greetings "now the space: $greetings"

echo ""

echo "File name is" $0 # print the first argument pass which is the script name

echo $3 # print the third argument

Data=$5

echo "A $Data costs just $6" #print 5th and 6th argument arcordingly in bitween the string

echo $# # Tells how many argument passed


echo ""

echo " String section 
-------------------
"
# working wiht String Exraction
DATARECORD="last=clifford,first=Doctware Coder,state=CA"
COMMA1=`expr index "$DATARECORD" ','`
CHOP1FIELD=${DATARECORD:$COMMA1}
COMMA2=`expr index "$CHOP1FIELD" ','`
LENGTH=`expr $COMMA2 - 7`
FIRSTNAME=${CHOP1FIELD:6:$LENGTH}

echo $DATARECORD
echo $COMMA1
echo $CHOP1FIELD
echo $COMMA2
echo $LENGHT
echo $FIRSTNAME
echo "---------------------------------------------------------------------------------------------"

# Working with string subtitution
string="go and come let go"
print1=${string[@]/go/come}
print2=${string[@]/come/go}
print3=${string[@]/and/with}
print4=${string[@]//go/see}
print5=${string[@]//go/string}
print6=${string[@]/#go and/let them}
print7=${string[@]/%go/code}

echo $print1
echo $print2
echo $print3
echo $print4
echo $print5
echo $print6
echo $print7
echo "--------------------------------------------------------------------------------------------"
echo ""
echo ""
echo ""

# Working with Array
echo "   The array checking point A[:)]
  --------------------------------
"
echo
echo "Three ways to declare an Array"
echo "1. read -a may_array <<< \"element1 element2 element3 ..... \" "
echo "2. declare -a my_array, then indexing the values: my_aray[0]=0.1 my_array[2]=code....... "
echo "3. my_array=(\"this\" \"thtas\" \"other\") "

#  looping + Array
# for loop
read -a my_array <<< "Doctware coder programmer thinker"
echo ${my_array[@]}
echo ""
for element in "${my_array[0]}"; do
	echo ${element}
done

for element1 in "${my_array[2]}"; do
	echo "$element1"
	echo "smilling in the shell: :)"
done

NUMBER=(951 402 984 651 360 69 408 319 601 485 980 507 725 547 544 615 83 165 141 501 263 617 865 575 219 390 237 412 566 826 248 866 950 626 949 687 217 815 67 104 58 512 24 892 894 767 553 81 379 843 831 445 742 717 958 609 842 451 688 753 854 685 93 857 440 380 126 721 328 753 470 743 527)

for N in "${NUMBER[@]}"; do
	if [ $N == 237 ]; then
		break;
	elif [ $(($N % 2)) == 0 ]; then
		echo $N
	fi
done


# while loop
COUNT=0
while [ $COUNT -le 10 ]; do
	echo $COUNT
	COUNT=$(($COUNT + 1))
done
echo ""

# Working with Decition Making
echo "The desition making
----------------------"
echo ""

NAME="Doctware"
if [ "$NAME" = "coder" ]; then
	echo " True - my name is indeed: Doctware"
elif [ "$NAME" = "Doctware" ]; then
	echo "i think i found the coder: Docware"
else
	echo "False"
	echo "You must be mistaken for calling a girl"
fi
echo "-----------------------------------------------------------------------------------------------------------"
echo ""

# working with case statements
echo " Case statments section
-------------------------
"
echo ""

echo "What your name i'll tell you what you do:"
read name
case "$name" in
	"Wale")
		echo "it a phone technician"
		;;
	"AbdulRasheed")
		echo "he is an Automobile"
		;;
	"Ismail")
		echo "A supervisor"
		;;
	"Qusim")
		echo "Front end enginner"
		;;
	"Doctware")
		echo "The programmer"
		;;
	"QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuioplkjhgfdsazxcvbnm*QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuioplkjhgfdsazxcvbnm")
		echo "Please insert a valid name"
		;;
esac
