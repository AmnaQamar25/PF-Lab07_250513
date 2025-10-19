#include <stdio.h>
#include <stdlib.h> 
#include <time.h>    

int main() {
    int num, i;
    int list[10];
    srand(time(NULL));
    printf("Generated list: ");
    for(i = 0; i < 10; i++) {
        list[i] = rand() % 100;  
        printf("%d ", list[i]); 
    }
    printf("\n");
    printf("Enter a number to search: ");
    scanf("%d", &num);
    for(i = 0; i < 10; i++) {
        if(list[i] == num) {
            printf("%d is found at index %d.\n", num, i);
            break;
        }
    }
    if(i == 10) {
        printf("Not found!\n");
    }

    return 0;
}

