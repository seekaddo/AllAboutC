#include <stdio.h>
/*a method that takes a string and char,
   gives the position of the char in the string index*/


int strindex(char str[], char s[]);
int main(){
    int i;
    char sentence[] = "A String with some letters in it.";
    char keyword[] = "with";
    i = strindex(sentence, keyword);
    printf("The index of '%s' in the string is %d\n",keyword,i); // In this case,it print the number 9.where with begins
    printf("string at index given is %c\n",sentence[i]);
    pop();
    return 0;
}

int strindex(char str[], char s[]){
    int i, j, k, char_index = -1;       //when not found return -1;
    for (i = 0; str[i]  != '\0'; i++) {
        for (j = i , k= 0; s[k] != '\0' && s[k] == str[j]; ++j , ++k)
            ;
        if ( k > 0 && s[k] == '\0'){
            char_index = i;
        }

    }
    return char_index;
}
