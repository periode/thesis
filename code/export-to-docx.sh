#!/bin/bash

wc -w $1
pandoc -s --reference-doc reference.docx "$1" -o export.docx && libreoffice export.docx
