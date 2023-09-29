/*
*
**
***
****
*****
*/
void ex1() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
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

int main() {
  ex1();
  ex2();
}
