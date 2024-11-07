/*
** EPITECH PROJECT, 2022
** my_print_alpha
** File description:
** This will print every letter from the alphabet in ascending
** order starting from a to z in a single line
*/

int my_print_alpha(void)
{
    for (unsigned int i = 97; i <= 122; i++) {
        my_putchar(i);
    }
    my_putchar(10);
    return (0);
}
