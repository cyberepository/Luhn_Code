/*
** luhn_suite.c for luhn in /home/florian/github/Luhn_Code
**
** Made by Florian Berthier
** Login   <florian.berthier@epitech.eu>
**
** Started on  Wed Feb  8 16:02:57 2017 Florian Berthier
** Last update Wed Feb  8 16:18:10 2017 Florian Berthier
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

void	complete_res(char *res)
{
  int	i;
  int	total;
  int	save;

  total = 0;
  i = 0;
  while (res[i] != '\0')
    {
      total = total + res[i] - 48;
      i = i + 1;
    }
  save = total;
  save = (save % 10 - 10) * -1;
  my_put_nbr(save);
  my_putchar('\n');
}

int	calculation(char *str)
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
      res[t] = reduc((str[i] - 48)) + 48;
      t = t + 1;
      i = i - 1;
      res[t] = str[i];
      i = i - 1;
      t = t + 1;
    }
  complete_res(res);
  return (0);
}
