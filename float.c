#include <stdio.h>

int	main(void)
{
	float x = 1.0f;

	unsigned int	bits = *(unsigned int *)&x;

	printf("%x\n", bits);

	unsigned int	sign = bits >> 31;

	printf("sign = %u\n", sign);

	unsigned int	exp = (bits >> 23) & 0xFF;
	// 0xFF = 11111111
	printf("exponent = %u\n", exp);

	unsigned int	act_exp = exp - 127;
	printf("actual exponent = %u\n", act_exp);


	unsigned int	mantissa = bits & 0x7FFFFF;
	// 0x7FFFFF = 011111111111111111111111
	printf("mantissa = %u\n", mantissa);
}