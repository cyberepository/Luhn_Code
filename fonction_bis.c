/*
** fonction_bis.c for bis in /home/florian/start
**
** Made by Florian Berthier
** Login   <florian.berthier@epitech.eu>
**
** Started on  Wed Dec 21 09:18:29 2016 Florian Berthier
** Last update Tue Feb  7 19:14:49 2017 Florian Berthier
*/

#include <unistd.h>

void	my_putchar_error(char c)
{
  write(2, &c, 1);
}

void	my_putstr_error(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar_error(str[i]);
      i = i + 1;
    }
}

int	is_digit(char c)
{
  return (c >= '0' && c <= '9');
}

int	my_getnbr_sub(char *str, int i, int n, int s)
{
  if (str[i] == '-' && !is_digit(str[i - 1]))
    {
      my_getnbr_sub(str, i + 1, n, s * - 1);
    }
  else if (is_digit(str[i]))
    {
      my_getnbr_sub(str, i + 1, (n * 10) + (str[i] - 48), s);
    }
  else
    {
      return (n * s);
    }
}

int	my_getnbr(char *str)
{
  my_getnbr_sub(str, 0, 0, 1);
}
