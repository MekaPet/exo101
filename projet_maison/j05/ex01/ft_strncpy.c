
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

        i = 0;
        while (i < n && src[i] != '\0')
	{
                        dest[i] = src[i];
                        i++;
        }
        dest[i] = src[i];
        return (dest);
}

#include <stdlib.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr(char *str)
{
  for (int i = 0; str[i] != '\0'; i += 1)
    my_putchar(str[i]);
}

int main(int argc, char **argv)
{
  /*char src[] = "Bo";
  char dest[] = "ruojnoB";
  unsigned int n;*/
  int n;

  n = 3;
  if (argc != 4)
    return (0);
  my_putstr(ft_strncpy(argv[1], argv[2], atoi(argv[3])));
  my_putchar('\n');
  my_putstr(strncpy(argv[1], argv[2], atoi(argv[3])));
  my_putchar('\n');
  return (0);
}
