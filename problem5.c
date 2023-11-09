// Binet's Formula and Linking with Libraries 
// JNS, 2017

#include <stdio.h>
#include <math.h>

int fib(int n) {
    if( n == 1){
        return 1;
    } else {
    double goldenRatio = ( ( 1.0 + sqrt( 5.0 ) ) / 2 );
    double alternateGoldenRatio = ( ( 1.0 - sqrt( 5.0 ) ) / 2 );
    double result = (1/sqrt(5.0)) * (pow(goldenRatio,n) - pow((alternateGoldenRatio),n));
    return result;
    }
}

int main () {
    int i;
    for( i = 1; i <= 10; i++) {
        //fib(i);
        printf("%d\n",fib(i));
    }
   return(0);
}