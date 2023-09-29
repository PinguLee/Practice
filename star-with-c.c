#include <stdio.h>

/*
*
**
***
****
*****
*/
void ex1() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
}

/*
*****
****
***
**
*
*/
void ex2() {
  for (int i = 0; i < 5; i++) {
    for (int j = 5; j > i; j--) {
      printf("*");
    }
    printf("\n");
  }
}

/*
    *
   **
  ***
 ****
*****
*/
void ex3() {
  for (int i = 0; i < 5; i++) {
    for (int k = 4; k > i; k--) {
    	printf(" ");
    }
    for (int j = 0; j < i + 1; j++) {
    	printf("*");
    }
    printf("\n");
  }
}

/*
*****
 ****
  ***
   **
    *
*/
void ex4() {
  for (int i = 0; i < 5; i++) {
    for (int k = 0; k < i; k++) {
  	  printf(" ");
    }
    for (int j = 5; j > i; j--) {
  	  printf("*");
    }
  printf("\n");
  }
}

int main() {
  ex1(); printf("\n");
  ex2(); printf("\n");
  ex3(); printf("\n");
  ex4(); printf("\n");
}
