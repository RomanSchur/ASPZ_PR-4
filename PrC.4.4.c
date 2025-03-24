#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n = 16;    
    void *ptr = malloc(n);
    if (!ptr) {
      printf("Помилка виділення пам’яті!\n");
      return 1;
    }
    int i = 4;
    while (i--) {
      printf("Заповнюєм ptr нулями\n");
      memset(ptr, 0, n); 
    }    
    free(ptr);
    return 0;
}
