/*
** luhn.c for luhn in /home/florian/github/Luhn_Code
**
** Made by Florian Berthier
** Login   <florian.berthier@epitech.eu>
**
** Started on  Tue Feb  7 17:52:26 2017 Florian Berthier
** Last update Wed Feb  8 16:17:51 2017 Florian Berthier
*/

#include <stdlib.h>
#include <stdio.h>
#include <include/my.h>

int	check(char *str, int i)
{
  int	t;

  t = 0;
  if (my_strlen(str) != i)
    return (84);
  while (t != i)
    {
      if (str[t] < 48 || str[t] > 57)
	return (84);
      t = t + 1;
    }
  return (0);
}

void	check_res(char *res)
{
  int	i;
  int	total;

  total = 0;
  i = 0;
  while (res[i] != '\0')
    {
      total = total + res[i] - 48;
      i = i + 1;
    }
  if (total % 10 == 0)
    my_putstr("OK\n");
  else
    my_putstr("KO\n");
}

int	reduc(int nb)
{
  nb = nb * 2;
  if (nb >= 10)
    nb = nb - 9;
  return (nb);
}

int	validation(char *str)
{
  char	*res;
  int	i;
  int	t;

  if ((res = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
    return (84);
  i = my_strlen(str) - 1;
  t = 0;
  while (i >= 0)
    {
      res[t] = str[i];
      i = i - 1;
      t = t + 1;
      if (str[i] >= 0)
	res[t] = reduc((str[i] - 48)) + 48;
      t = t + 1;
      i = i - 1;
    }
  res[t] = '\0';
  check_res(res);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac != 3 || my_strlen(av[1]) != 2)
    {
      my_putstr_error("invalid flags or missing parameter");
      return (84);
    }
  if (av[1][0] == '-' && av[1][1] == 'c')
    {
      if (check(av[2], my_strlen(av[2])) == 84)
	return (84);
      if (validation(av[2]) == 84)
	return (84);
      return (0);
    }
  if (av[1][0] == '-' && av[1][1] == 'f')
    {
      if (check(av[2], 15) == 84)
	return (84);
      if (calculation(av[2]) == 84)
	return (84);
      return (0);
    }
  my_putstr_error("invalid flags");
  return (84);
}
