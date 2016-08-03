#include <stdio.h>


int main() {
    int zahl1;
    printf("Die Zahl ist: ");
    scanf("%d",&zahl1);

    /*int i = 0;
    int start = 1;
    while (zahl1 >= start) {
        while (i < start){
            printf("%c",'*');
            i++;
        }
        i = 0;
        start += 1;
        printf("\n");
    }*/


    for (int j = 1; j <= zahl1; ++j) {
        for (int i = 1; i <= j; ++i) {
            printf("%c",'*');
        }
        printf("\n");
    }
    for (int j = zahl1 -1; j >= 1; --j) {
        for (int i = 1; i <= j; ++i) {
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}
