#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		size++;
	if (!(s2 = malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}

/* int	main (void)
{
	char src [] = "HuiHuiTest";
	char* dst = strdup(src);
	printf("%s\n", dst);

	char ft_src [] = "Ft_HuiHuiTest";
	char* ft_dst = ft_strdup(ft_src);
	printf("%s\n", ft_dst);
} */