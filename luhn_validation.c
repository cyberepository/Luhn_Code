/*
** luhn_validation.c for validation in /home/florian/github/Luhn_Code
**
** Made by Florian Berthier
** Login   <florian.berthier@epitech.eu>
**
** Started on  Wed Feb  8 18:08:46 2017 Florian Berthier
** Last update Wed Feb  8 18:13:10 2017 Florian Berthier
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

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
