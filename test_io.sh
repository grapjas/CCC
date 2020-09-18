#!/usr/bin/env bash

PREFIX="$1"

SRC_DIR="./obj"
EXE="$SRC_DIR/$PREFIX.o"

IO_DIR="./all_data/junior_data/$PREFIX"

function compareIO() 
{
	printf "Testing %s\n" "$1"
	"$EXE" < "$1" | diff - "$2"
}

for file in "$IO_DIR"/"$PREFIX".*.in
do
	In_file=${file}
	Out_file=${file/in/out}
	compareIO "$In_file" "$Out_file"
done