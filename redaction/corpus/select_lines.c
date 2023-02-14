  #include <stdio.h>
  #include <strings.h>

  int main(void){
    char line[1000], line2[1000];
    char *p;
    double mag;

    while(fgets(line, sizeof(line), stdin) != NULL) {
      strcpy(line2, line);
      p = strtok(line, "\\t");
      p = strtok(NULL, "\\t");
      p = strtok(NULL, "\\t");
      sscanf(p, "\%lf", &mag);
      if(mag > 6) /* $3 > 6 */
        printf("\%s", line2); 
    }

    return 0
  }