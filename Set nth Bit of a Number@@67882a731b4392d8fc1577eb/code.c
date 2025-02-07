#include <stdio.h>

// Function to set the nth bit of a number
unsigned int setNthBit(unsigned int num, int n) {
    return num | (1 << n);
}

int main() {
    unsigned int num;
    int n;
    scanf("%u %d", &num, &n);

    // Ensure the bit position is valid
    if (n < 0 || n >= (sizeof(num) * 8)) {
        printf("Invalid bit position!\n");
        return 1;
    }

    // Set the nth bit
    unsigned int result = setNthBit(num, n);
    
    // Output the result
    printf("%d", result);

    return 0;
}