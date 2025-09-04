#include <stdio.h>
#include <stdint.h>
int mask;
uint32_t replace_field(uint32_t reg, uint32_t val, uint8_t pos, uint8_t len) 
{	    
	mask=((1<<len)-1)<<pos;
	reg &= ~mask;
	reg |=(val<<pos) & mask;
	return reg;
}
int main() 
{
	uint32_t reg, val;
	uint8_t pos, len;
	scanf("%u %u %hhu %hhu", &reg, &val, &pos, &len);
	printf("%u", replace_field(reg, val, pos, len));
	return 0;
}

