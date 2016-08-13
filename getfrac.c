#include <stdio.h>
#include <tgmath.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
/* Convert a decimal number to a rational number(a simple fraction)*/

int getfrac(double num);
long gcd(int a, int b);
bool isDecimal(double a);

//Main here
int main(){
    getfrac(3.4);             //17/5 and getfrac(0.96875) is 31/32
    return 0;
}


//todo: create a fraction out of a decimal
int getfrac(double num){
    int count = 0;
    double givenNum;

    int denum, numeter, a, b;
    long gc;

    givenNum = num;
    while (!isDecimal(givenNum)){
        givenNum = givenNum * 10;
        count += 1;
    }
    a = (int)givenNum;
    b = (int)(pow(10,count));
    gc = gcd(a,b);                    // the common divisor from the two numbers

    denum = (int) (a /gc);            // divide by the common divisor
    numeter =(int) (b/gc);
    return printf("%d/%d",denum,numeter);
}


// todo: getting the GCD commond -divisor
long gcd(int a, int b){
    while (a != b){
        if(a > b){
            a = a - b;
        } else{
            b = b - a;
        }
    }
    return a;
}

//todo: check if is decimal(that is if after the point is 0 or more digits)
bool isDecimal(double a){
    char num[50],*token, *token2, *del = ".";
    int lastVal;
    sprintf(num,"%lf",a);                    //convert to char arrays

    token = strtok(num,del);
    token2 = strtok(NULL,del);
    lastVal = atoi(token2);
    return lastVal == 0;
}
