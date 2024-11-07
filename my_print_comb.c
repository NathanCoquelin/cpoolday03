/*
** EPITECH PROJECT, 2022
** my_print_comb
** File description:
** This will print a specific set of numbers
*/
int is_ascending_order_or_repeating(int hundreds, int tens, int ones)
{
    if (hundreds > tens || tens > ones) {
        return -1;
    } else {
        if (hundreds == tens || hundreds == ones || tens == ones) {
            return -1;
        }
    }
    return 1;
}

void disp_if_value(int hundreds, int tens, int ones)
{
    if (is_ascending_order_or_repeating(hundreds, tens, ones) > 0 ) {
        my_putchar(hundreds + '0');
        my_putchar(tens + '0');
        my_putchar(ones + '0');
        if (hundreds != 7 || tens != 8 || ones != 9) {
            my_putchar(44);
            my_putchar(32);
        } else {
            my_putchar(10);
        }
    }
}

void do_last_digit(int hundreds, int tens)
{
    for (int ones = 0; ones <= 9; ones++) {
        disp_if_value(hundreds, tens, ones);
    }
}

void do_tens(int hundreds)
{
    for (int tens = 0; tens <= 9; tens++) {
        do_last_digit(hundreds, tens);
    }
}

int my_print_comb(void)
{
    for (int hundreds = 0; hundreds <= 9; hundreds++) {
        do_tens(hundreds);
    }
    return (0);
}
