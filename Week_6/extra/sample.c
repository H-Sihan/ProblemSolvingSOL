#include <stdio.h>

int main() {
  
  int numbers[] = {1,2,3,4,5};

  int size = sizeof(numbers) / sizeof(numbers[0]);
  
  for(int i = 0; i < size; i++){
    printf("%d\n",numbers[i]);
  }

  return 0;
}