#!/bin/bash
my_array=(apple banana "Doctare" orange)
new_array[2]=apricot
my_array[6]="Eba"

echo ${#my_array[@]}
echo ${my_array[0]}
echo ${my_array[1]}
echo ${my_array[2]}
echo ${my_array[3]}
echo ${my_array[6]}
echo ${my_array[${#my_array[@]}-2]}
