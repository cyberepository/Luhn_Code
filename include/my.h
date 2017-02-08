/*
** my.h for list in /home/florian.berthier/start
**
** Made by Berthier Florian
** Login   <florian.berthier@epitech.eu>
**
** Started on  Mon Oct 31 11:14:50 2016 Florian Berthier
** Last update Wed Feb  8 16:19:00 2017 Florian Berthier
*/

#ifndef MY_H
#define MY_H

int     reduc(int);
int	calculation(char *);

void    my_putstr_error(char *);
void	my_printf(char *, ...);
void    my_putchar(char);
int     my_put_nbr(int);
int     my_putstr(char *);
int     my_strlen(char *);
int     my_getnbr(char *);
char    *my_strcpy(char *, char *);
char    *my_strncpy(char *, char *, int);
char    *my_revstr(char *);
char    *my_strstr(char *, char *);

#endif
