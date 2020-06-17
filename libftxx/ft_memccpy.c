#include "libft.h"

void * memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return (&((unsigned char *)dst)[i + 1]);
		i += 1;
	}
	return (NULL);
} 
