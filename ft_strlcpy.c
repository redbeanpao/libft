#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	int	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while ((s[i] != 0) && (i < dstsize))
	{
		d[i] = s[i];
		i++;
	}
	while (i < dstsize)
	{
		d[i] = 0;
		i++;
	}
	return (d);
}

int	main (void)
{
	char dst[50] = "Hello";
	const src[50] = "World";
	printf("Dest before strlcpy %s\n", dst);
	strlcpy(dst, src, strlen(src + 1));
	printf("Dest after strlcpy %s\n", dst);
}