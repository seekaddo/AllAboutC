#include <stdio.h>
#include <tgmath.h>
#include <ctype.h>
/* a function that calculate the two values x1,2 using the quadratic formula x1,2 = -b +- sqrt(b^ - 4ac)/2a*/

double quad(double a, double b, double c);
long gcd(int a, int b);
int main(){
    quad(1.0,-3.0,2.0);                      //x^2 - 3 x + 2 = 0 -> (2,1)
    quad(1.0,-5.0,6.0);                      //x^2 - 5 x + 6 = 0 -> (3,2)
    quad(1.0,3.0,-4.0);                      //Solve x^2 + 3x – 4 = 0 -> (-4,1)
    quad(2.0,-4.0,-3.0);                      //Solve 2x^2 – 4x – 3 = 0 -> (-0.581, 2.581)
    return 0;
}


//todo: The big quadratic formula  ax2 + bx + c = 0
double quad(double a, double b, double c){
    double x_1,x_2;
    double root = sqrt((b*b) - 4*(a*c));
    x_1 = ((-1*b) - root)/(2*a);
    x_2 = ((-1*b) + root)/(2*a);
    return printf("(x_1,x_2)--> {%.3f, %.3f}\n",x_1,x_2);
}




// todo: getting the GCD commond -divisor
// I want to use it to create a method that convert Deciaml to fraction 
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
