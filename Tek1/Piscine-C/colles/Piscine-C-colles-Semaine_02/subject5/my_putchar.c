/*
** my_putchar.c for libmy in /home/pereni_j/libmy/src
**
** Made by joseph pereniguez
** Login   <pereni_j@epitech.net>
**
** Started on  Tue Jun 16 10:37:49 2015 joseph pereniguez
** Last update Tue Jun 16 16:27:48 2015 joseph pereniguez
*/

#include <unistd.h>
#include    "my.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}