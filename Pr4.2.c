#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
int main() {
  int xa = INT_MAX / 2; 
  int xb = 3;           
  int num = xa * xb;  
  void *ptr;
  printf("num = %d\n", num); 
  ptr = malloc(num); 
  if (ptr == NULL) {
    perror("malloc failed");  
    return 1;
  }
  printf("Виділлення пам'яті пройшло успішно\n");
  free(ptr); 
  return 0;
}