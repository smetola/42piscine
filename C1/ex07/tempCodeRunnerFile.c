#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int f;
	int swp;

	i = 0;
	f = size;
	while (i < size/2)
	{
		swp = tab[i];
		tab[i++] = tab[--f];
		tab[f] = swp;
	}
}

int main(void) {
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int size = 9;

    ft_rev_int_tab(tab, size);
	
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
}