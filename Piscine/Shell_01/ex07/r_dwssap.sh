cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | rev | grep -o '[^:]*$' | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | paste -sd ',' - | sed 's/,/, /g' |  tr '\n' '.'
