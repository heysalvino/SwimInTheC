// Super Mario Brothers Super Show
// JNS, 2017

#include <stdio.h>

int main() {
  int i;
  int j;
  int height = 8;
  int numBlankCol = (height - 1);
  for (i = 0; i < height; i++) {
    for ( j = 0; j < numBlankCol; j++) {
      printf(" ");
    }
    numBlankCol--;
    
    for (j = 0; j < height - numBlankCol; j++) {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
