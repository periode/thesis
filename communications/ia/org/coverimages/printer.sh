#!/bin/bash

while IFS=';', read -r presenter title filename
do
	    #echo "$title and $presenter"
	    convert -size 800x720 -background transparent -fill black -pointsize 48 -font fonts/opensans.ttf -gravity center -geometry +0+0 caption:"$title" template.jpg +swap +composite a.png
            convert -size 1280x720 -background transparent -fill black -style Italic -pointsize 32 -font fonts/opensansitalic.ttf -gravity center -geometry +0+150 caption:"$presenter" a.png +swap +composite "outputs/$filename.png"

            echo "written to $filename.png"
    done < input.csv

rm a.png
