#include <stdio.h>

void Bubble(int arr[], int n);
void disp(int arr[]);

int main() {
    int arr[5] = {22, 56, 101, 99, 122};
    Bubble(arr, 5);
    disp(arr);
    return 0;
}

void Bubble(int arr[], int n) {
    int passes, comp, i, j;
    int temp;
    passes = 4; 
    comp = 4;
    for(i = 0; i < passes; i++) {
        for(j = 0; j < comp - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void disp(int arr[]) {
    int i;
    for(i = 0; i < 5; i++) {
        printf("The value is %d\n", arr[i]);
    }
}
