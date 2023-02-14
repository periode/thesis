for(j=0; j<array_len; j+ =8)
{
  total += array[j+0 ];
  total += array[j+1 ];
  total += array[j+2 ]; /* Main body of
  total += array[j+3]; * loop is unrolled
  total += array[j+4]; * for greater speed.
  total += array[j+5]; */
  total += array[j+6 ];
  total += array[j+7 ];
} 
\end{minted}