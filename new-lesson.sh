#!/bin/bash

#moving screenshots before to #source directory before operating...
mv P* "./#source/"

highest_index=( $(ls | grep -Eo '[0-9]+' | sort -rn | head -n 1) )

highest_index="$((highest_index + 1))"

echo "Write the name of the lesson (without spaces) : "
read lesson_name

dir_name="$highest_index"".""$lesson_name"

mkdir "$dir_name"
cp -r ./template_project/* ./"$dir_name"
cp -r ./template_project/.vscode ./"$dir_name"

echo Directory made and template copied !
