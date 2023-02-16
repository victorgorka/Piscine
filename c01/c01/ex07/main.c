#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int main (void)
{
    int n = 0;
    int tab[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};


    ft_rev_int_tab(tab, 21);
    while (n < 21)
    {
        printf("%d\n", tab[n]);
        n++;
    }
}
