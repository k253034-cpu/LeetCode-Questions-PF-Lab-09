#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int runningSum[n];

    
    printf("Enter the elements of the array:\n");
    int i;
	for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    
    runningSum[0] = nums[0]; 
    for(i = 1; i < n; i++) {
        runningSum[i] = runningSum[i-1] + nums[i];
    }


    printf("Running sum array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", runningSum[i]);
    }
    printf("\n");

    return 0;
}

