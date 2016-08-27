// A much cleaner and simplier version of the gefrac method from the previous one. That one was from a rash-hour

int fract(double u);
int main(){
  
    getfrac(0.96875);                           // 17/5
    getfrac(2.142857142857143);                 //15/7

    return 0;
}
//todo: create a fraction out of a decimal
int getfrac(double value){

    int denum, numerator, a, b;
    long gc;


    char num[50],*token, *token2, *del = ".";
    sprintf(num,"%lf",value);                    //convert to char arrays

    token = strtok(num,del);
    token2 = strtok(NULL,del);                 // continue from the previous

    int size = strlen(token2);                //get the length of the second token

    b = (int)(pow(10,size));                  //determine the number of 10 powers 10^size
    a = (int)(value *b);                      // getting the numerator
    gc = gcd(a,b);

    denum = (int) (b /gc);
    numerator =(int) (a/gc);
    return printf("%d/%d\n",denum,numerator);
}


// todo: getting the GCD commond -divisor
long gcd(int a, int b){
    return b == 0?a: gcd(b,a%b);
}
