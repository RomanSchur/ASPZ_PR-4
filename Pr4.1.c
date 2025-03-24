#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main() {
size_t max_size = SIZE_MAX; 
void *ptr = NULL; 

while (max_size > 0) {
    ptr = malloc(max_size);
    if (ptr) {
       printf("Успішно виділено: %zu байтів\n", max_size);
       free(ptr);
       break;
    } else {
       printf("Не вдалося виділити %zu байтів.\n", max_size);
       max_size /= 2; 
    }
}
if (!ptr) {
    printf("Навіть мінімальний запит на пам’ять не вдався\n");
} else {
    printf("Максимальний доступний блок пам’яті: %zu байтів\n", max_size);
}
 return 0;
}
