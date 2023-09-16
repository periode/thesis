words:
	for i in $(/usr/bin/ls redaction/ |  grep ".tex");do cat ./redaction/$i >> full.tex;done
	tr -c '[:alnum:]' '[\n*]' < ./full.tex | grep -F -v -w -f  /usr/share/groff/current/eign | awk -v RS="[ \t\n]+" 'length($1)!=1' | sort | uniq -ci | sort -nr | head  -100
	rm full.tex
