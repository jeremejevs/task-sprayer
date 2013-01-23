#include "checksum.h"

unsigned int checksum(unsigned char *data, unsigned int length)
{
	unsigned int _sum, _i;

	for (_i = 0; _i < length; ++_i)
		_sum += (unsigned int) (*data++);
		
	return _sum;
}

