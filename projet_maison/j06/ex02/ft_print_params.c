#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(int argc, char **argv)
{
  int i;
  int j;

  i = 0;
  j = 0;
  if(argc > 0)
    {
      while (i < argc && argv[i][j])
        {
	  j = 0;
	  while (argv[i][j])
	    {
	      printf("%i, %i, %s", i, j, argv[i][j]);
	      ft_putchar(argv[i][j]);
	      j++;
	    }
	  ft_putchar('\n');
	  i++;
	}
    }
  return (0);
}
