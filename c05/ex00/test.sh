#!/bin/bash

blackF='\033[30m'
whiteB='\033[47m'
reset='\033[0m'

# Array containing the arguments to pass to the executable
arguments=("BASIC" "Grade < 1 : moveUpTheLadder" "Grade < 1 :instantiation -12" "Grade > 150 : moveDownTheLadder" "Grade > 150 : instantiation 412")

# Loop to run the executable with different arguments
for arg in "${arguments[@]}"; do
	echo "-------------------------------------------------------------"
    	echo -e "${blackF}${whiteB}Running Bureaucrat test : $arg ${reset}"
	echo -e "-------------------------------------------------------------\n"
    ./Bureaucrat "$arg"   # Replace 'my_program' with the name of your executable
done
