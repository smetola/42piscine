#include <unistd.h>
void ft_print_comb2(void)
{
    int x, y;
    x = 0;
    while (x <= 99)
    {
        y = x + 1;
        while (y <= 99)
        {
            char n[5];
            n[0] = x / 10 + '0';
            n[1] = x % 10 + '0';
            n[2] = ' ';
            n[3] = y / 10 + '0';
            n[4] = y % 10 + '0';
            write(1, n, 5);
            if (x != 98)
                write(1, ", ", 2);
            y++;
        }
        x++;
    }
}
int main(void)
{
    ft_print_comb2();
}