#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	char		*d;
	char		*s;

	d = (char*)dst;
	s = (char*)src;
	while (len > 0 && *s != c)
	{
		--len;
		*d = *s;
		d++;
		s++;
	}
	if (len > 0)
	{
		*d++ = c;
		return ((void*)d);
	}
	else
		return (NULL);
}