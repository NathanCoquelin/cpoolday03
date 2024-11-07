/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** This will output the interger value the script was given as text
*/

void frec(int i)
{
    if (i != 0) {
        frec(i / 10);
        my_putchar( i % 10 + '0');
    } else {
        return;
    }
}

void my_put_nbr(int n)
{
    if ( n < 0 ) {
        my_putchar('-');
        n *= -1;
    }
    frec(n);
}
