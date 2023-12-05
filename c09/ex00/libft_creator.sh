#!/bin/bash

# Compilation des fichiers sources avec les options de compilation
cc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Création de libft.a
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Suppression des compiles (.o)
rm *.o
