#include <stdio.h>

typedef int (*fn)(int);

int returnIntArg(int a) { return a; }

int main(void) {
  fn functions[4] = {returnIntArg, returnIntArg, returnIntArg, returnIntArg};
  int functions_length = sizeof(functions) / sizeof(functions[0]);

  for (int i = 0; i < functions_length; i++) {
    printf("%d\n", functions[i](i));
  }

  return 0;
}
