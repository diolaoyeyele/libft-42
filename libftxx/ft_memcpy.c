#include "libft.h"

void * memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned int		i;

	i = -1;
	while (++i < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
