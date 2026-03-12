#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    printf("Allocating initial memory...\n");

    char *ptr = (char*)malloc(32);
    strcpy(ptr, "Original data");
    printf("Initial data: %s\n", ptr);

    printf("Freeing memory...\n");
    free(ptr);

    printf("Reallocating same size multiple times...\n");

    char *buffers[5];

    for(int i = 0; i < 5; i++) {
        buffers[i] = (char*)malloc(32);
        sprintf(buffers[i], "Buffer %d", i);
        printf("Allocated: %s\n", buffers[i]);
    }

    printf("\nAttempting to use freed pointer...\n");

    printf("Freed pointer content: %s\n", ptr);

    printf("\nCleaning up...\n");

    for(int i = 0; i < 5; i++) {
        free(buffers[i]);
    }

    return 0;
}
