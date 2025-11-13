#include <stdio.h>


void sortArray(int arr[], int n) {
	int i,j;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n,i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    
    for(i = 0; i < n; i++) {
        if(nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

    
    sortArray(nums, n);

    
    printf("Resulting array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

