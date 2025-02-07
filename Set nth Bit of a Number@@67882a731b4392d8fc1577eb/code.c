#include <stdio.h>

// Function to set the nth bit of a number
unsigned int setNthBit(unsigned int num, int n) {
    return num | (1 << n);
}

int main() {
    unsigned int num;
    int n;

    // Input from the user
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter the bit position to set (0-based index): ");
    scanf("%d", &n);

    // Ensure the bit position is valid
    if (n < 0 || n >= (sizeof(num) * 8)) {
        printf("Invalid bit position!\n");
        return 1;
    }

    // Set the nth bit
    unsigned int result = setNthBit(num, n);
    
    // Output the result
    printf("Number after setting bit %d: %u\n", n, result);

    return 0;
}