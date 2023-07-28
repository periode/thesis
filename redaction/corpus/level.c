#include <string.h>
#include <stdio.h>

int main(){
    char* a_word = "Gerechtigkeit";
    char* an_unword = "Menschenmaterial";

    int difference = strlen(a_word) - strlen(an_unword);

    printf("%d", difference);

    return 0;
}