// read a char and print wheather it is a vowel or consonant

#include <stdio.h>

int main() {
    char ch;
    
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') ) {
   
        if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {

            printf("%c is a vowel.\n", ch);

        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}