#!/usr/bin/bash

PREFIX="$1"

SRC_DIR="./obj"
SRC="$SRC_DIR/$PREFIX.o"

IO_DIR="./all_data/junior_data/$PREFIX"

function compareIO() 
{
	#echo -e "in:$1\tout:$2"
	#echo "$SRC"
	printf "Testing $1\n"
	diff <("$SRC" < "$1") "$2"
}

for file in "$IO_DIR"/"$PREFIX".*.in
do
	In_file=${file}
	Out_file=${file/in/out}
	compareIO "$In_file" "$Out_file"
done