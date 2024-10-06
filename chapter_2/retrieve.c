#include <stdio.h>
#include <stdlib.h>

int counter = 0;

void increment() { counter++; }
void retrieve() { printf("%u\n", counter); };

int main(void) {
  for (int i = 0; i < 5; i++) {
    increment();
    retrieve();
  }

  return EXIT_SUCCESS;
}
