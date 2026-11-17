#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {
    int data[SIZE];
    int tmp, flag;
    printf("Please input the list: \n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &data[i]);
    }
    for (int i = 0; i < SIZE - 1; i++) {
        flag = 0; 
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
                flag = 1; 
            }
        }
        if (flag == 0) {
            break; 
        }
    }
    printf("\nThe array content you entered is:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}