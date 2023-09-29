/*
*
**
***
****
*****
*/
void ex1() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i; j++) {
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
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
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
  for (int k = 1; k < 5-i; k++) {
    printf(" ");
  }
  for (int j = 0; j < i+1; j++) {
    printf("*");
  }
  printf("\n");
}

/*
*****
 ****
  ***
   **
    *
*/
void ex4() {
for (int i = 0; i < 5; i++ ) {
  for (int k = 0; k < i; k++) {
    printf(" ");
  }
  for (int j = 0; j < 5-i; j++ ) {
    printf("*");
  }
  printf("\n");
}

int main() {
  ex1();
  ex2();
  ex3();
  ex4();
}
