#!/bin/bash

pandoc -t latex $1 | pandoc -f latex -o export.docx && libreoffice export.docx
