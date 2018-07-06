#include <stdio.h>

int	ft_is_prime(int nb)
{
  int n;
  int result;
  
  n = 2;
  if (nb > 1)
    {
      while (n < nb)
	{
	  if (nb % n == 0)
	    return (0);
	  n++;
	}
      return (1);
    }
  else
    {
      return (0);
    }
}

int	main(void)
{
  int nb;
  int i;

  nb = 40;
  i = 2;
  while (i <= nb)
    {
      printf("%d, %d ; ", i, ft_is_prime(i));
      i++;
    }
  return (0);
}
