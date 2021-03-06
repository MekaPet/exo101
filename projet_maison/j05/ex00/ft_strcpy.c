
#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
        int i;

        i = 0;
        while (src[i])
        {
                if (src[i] && dest[i] == '\0')
                {
			return (0);
                }
		else
		{
			dest[i] = src[i];
			i++;
		}
        }
        dest[i] = src[i];
        return (dest);
}

int main(int argc, char **argv)
{
  char src[] = "Bonjour";
  char dest[] = "yol";

  if (argc != 3)
    return (0);
  printf("%s\n%s\n", ft_strcpy(argv[1], argv[2]), strcpy(argv[1], argv[2]));
  return (0);
}
