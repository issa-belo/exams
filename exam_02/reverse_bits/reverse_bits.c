#include <unistd.h>
#include <stdio.h>

#include <stdio.h>

void print_binary(unsigned char byte) {
    for (int i = 7; i >= 0; i--) {
        // Shift the bit i positions to the right and mask with 1
        unsigned char bit = (byte >> i) & 1;
        printf("%u", bit);
    }
}

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 8;

    while (i--)
    {
        result = (result << 1) | (octet & 1);
        octet >>= 1;
    }
    return result;
}
int main(void)
{
    unsigned char bit = 0b00100110;
    unsigned char reversed = reverse_bits(bit);

    printf("Original: ");
    print_binary(bit);
    printf("\n");

    printf("Reversed: ");
    print_binary(reversed);
    printf("\n");

    return 0;
}

