#include <stdio.h>

int main() {
    int arr[5] = {10, 22, 66, 77, 82};
    int sv;
        	 printf("Enter the value of sv:");
			scanf("%d",&sv);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == sv) {
        printf("Number found");
          return 0; 
        }
    }

    printf("Number not found");

    return 0;
}


