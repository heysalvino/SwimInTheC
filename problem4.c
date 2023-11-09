// Everyone Needs a Hobby
// JNS, 2017

#include <stdio.h>

int stones( int s){
    if (s == 1){
        return 1;
    }else{
        return((s*s) + stones(s-1));
    }
}

int main() {
    printf("%d\n", stones(10));
    return 0;
}
