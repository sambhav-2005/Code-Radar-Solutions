#include <stdio.h>

int getNthbit(int number, int bit_position)
{
    return (number >> bit_position) & 1;
}
int main(void)
{
    int number;
    int bit_position;
    scanf("%d %d", &number, &bit_position);

    int bit_value = getNthbit(number, bit_position);

    printf("%d", bit_value);
    return 0;

}