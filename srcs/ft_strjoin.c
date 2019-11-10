#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s3;

	s3 = NULL;
	if (s1 && s2)
	{
		if (!(s3 = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		ft_strcpy(s3, s1);
		ft_strcat(s3, s2);
	}
	return (s3);
}
