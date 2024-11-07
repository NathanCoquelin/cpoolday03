/*
** EPITECH PROJECT, 2022
** my_print_digits.c
** File description:
** This will print the digits in ascending order
*/

int my_print_digits(void)
{
    for (unsigned int i = 48; i <= 57; i++) {
        my_putchar(i);
    }
    my_putchar(10);
    return (0);
}
