#include "libft.h"

// strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the
//      result if dstsize is not 0.


/* size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
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
} */

int	main (void)
{
	char dst[50] = "Hello";
	const char src[50] = "World";
	printf("Dest before strlcpy %s\n", dst);
	strlcpy(dst, src, 0);
	printf("Dest after strlcpy %s\n", dst);
}