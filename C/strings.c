// Write three functions, using pointers, to concatenate two strings, to compare two strings and to
// reverse a string, respectively. Test these functions in a complete program.

#include <stdio.h>

void string_cat(char s1[100], char s2[100]){
    int i=0, j=0;
    while (s1[i] != '\0') {
        j++;
    }
   
    i = 0;
    while (s2[i] != '\0') {
        s1[j] = s2[i];
        i++;
        j++;
    }
}

int main(){

    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    string_cat(s1, s2);
    printf("%s", s1); 

    return 0;
}