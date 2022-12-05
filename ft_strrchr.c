#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (0);
}

/* int	main (void)
{
	const char	*str = "Hello, what's ,up";
	const char	*str1 = "Hello";
	const char	*ft_str = "Hello, what's ,up";
	const char	*ft_str1 = "Hello";
	int	c = ',';
	int c1 = ',';
	int ft_c = ',';
	int	ft_c1 = ',';
	printf("Str after strrchr %s\n", strrchr(str, c));
	printf("Str1 after strrchr %s\n", strrchr(str1, c1));
	printf("Ft_str after ft_strrchr %s\n", ft_strrchr(ft_str, ft_c));
	printf("Ft_str1 after ft_strrchr %s\n", ft_strrchr(ft_str1, ft_c1));
} */