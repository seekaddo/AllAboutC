#include <stdio.h>


/*
Created by Addo Dennis on 03/08/16.
 shifting every element in an array to one position to the right
 2 4 6 8 10 12 14 16 18 will become 18 2 4 6 8 10 12 14 16
*/

int  main(){
    //printf("first1");
    int num[9] = {2 ,4 ,6 ,8 ,10 ,12 ,14 ,16 ,18};
    int length = sizeof(num)/ sizeof(num[0]);


    int numlast = num[length-1];               // the last element in the array
    for (int j = length - 1; j >= 1 ; --j) {
        num[j] = num[j-1];
    }
    num[0] = numlast;                       //place it at the beginning
    for (int k = 0; k < length; ++k) {
        printf("%i ",num[k]);
    }
    printf("\n");
    return 0;
}
