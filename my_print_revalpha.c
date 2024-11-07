/*
** EPITECH PROJECT, 2022
** my_print_revalpha
** File description:
** This will print the alphabet in descending order
*/

int my_print_revalpha(void)
{
    for (unsigned int i = 122; i >= 97; i--) {
        my_putchar(i);
    }
    my_putchar(10);
    return (0);
}
