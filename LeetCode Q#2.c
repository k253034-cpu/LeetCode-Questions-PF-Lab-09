#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Enter n: ");
    scanf("%d", &n);

    int size = 2 * n;
    int nums[size];
    int result[size];

    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    
    int index = 0;
    for (i = 0; i < n; i++) {
        result[index++] = nums[i];     
        result[index++] = nums[i + n];
    }

    
    printf("Shuffled array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

