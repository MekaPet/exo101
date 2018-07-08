
#include <stdio.h>

int	ft_strstr_return(char str2, char to_find2)

char    *ft_strstr(char *str, char *to_find)
{
	int i;
	int test;

	i = 0;
	
	while (str[0] != to_find[i])
	{
		while (str[i] == to_find[i])
		{
			if (str[i] != to_find && str[i])
			{
				i++;
			}
		}
		i++;
	}
}

int main(void)
{
  char src[] = "Bonjour";
  char to_find[] = "yoloswaguilamouche";

  printf("%s, %s ", src, dest);
  printf("%s", ft_strcpy(dest, src));
  return (0);
}
