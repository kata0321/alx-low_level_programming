#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int binary_to_uint(const char *b)
{
if (b == NULL) {
return 0;
}
unsigned int result = 0;
for (int i = 0; b[i] != '\0'; i++)
{
char digit = b[i];
if (digit == '0')
{
result <<= 1; 
} else if (digit == '1')
{
result = (result << 1) | 1;
} else
{
return 0;
}
}
return result;
}
int main() 
{
const char *binaryStr = "11010";
unsigned int decimalValue = binary_to_uint(binaryStr);
printf("Binary: %s\nDecimal: %u\n", binaryStr, decimalValue);
return 0;
}
