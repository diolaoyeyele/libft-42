#include "libft.h"

void *memmove(void *dst, const void *src, size_t len)
{
	unsigned int			i;

	i = 0;
	if (((unsigned char *)src) < ((unsigned char *)dst))
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i += 1;
		}
	return (((unsigned char *)dst));
}
