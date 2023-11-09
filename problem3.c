// FizzBuzz
// JNS, 2017

#include <stdio.h>

int main() {
    int i;
    for( i = 1; i <= 30; i++) {
        if( (i % 3 == 0) && (i % 5 == 0)) {
            printf("FizzBuzz");
        }else if( i % 3 == 0) {
            printf("Fizz");
        }else if( i % 5 == 0) {
            printf("Buzz");
        }else{
            printf("%d", i);
        }
        printf("\n");
    }
    return 0; 
}