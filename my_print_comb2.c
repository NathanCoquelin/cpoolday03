/*
** EPITECH PROJECT, 2022
** my_print_comb2
** File description:
** This will show all combinations of 4 digits
*/
void disp_res(int i, int j)
{
    if (i != j && i < j) {
        my_putchar((int)(i / 10) + 48);
        my_putchar((i - ((int)(i / 10) * 10) + 48));
        my_putchar(32);
        my_putchar((int)(j / 10) + '0');
        my_putchar(j - ((int)(j / 10) * 10) + '0');
        if (i != 98 || j != 99) {
            my_putchar(44);
            my_putchar(32);
        } else {
            my_putchar(10);
        }
    }
}

int my_print_comb2(void)
{
    for ( unsigned int i = 0; i <= 98; i++) {
        for ( unsigned int j = 0; j <= 99; j++ ) {
            disp_res(i, j);
        }
    }
    return (0);
}
