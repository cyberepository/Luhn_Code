/*
** fonction.c for fonction in /home/florian/start
**
** Made by Florian Berthier
** Login   <florian.berthier@epitech.eu>
**
** Started on  Wed Dec 21 09:14:44 2016 Florian Berthier
** Last update Tue Feb  7 16:53:03 2017 Florian Berthier
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int	my_put_nbr(int nb)
{
  int	sav_nb;
  int	reste;

  reste = 1;
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar('-');
    }
  sav_nb = nb;
  while (nb >= 10)
    {
      nb = nb / 10;
      reste = reste * 10;
    }
  nb = nb + 48;
  nb = sav_nb;
  while (reste > 0)
    {
      my_putchar(nb / reste + 48);
      nb = nb % reste;
      reste = reste / 10;
    }
}
