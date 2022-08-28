#include <stdio.h>

int ft_sqrt(int    nb)
{
    long long i;

    i = 1;
    while (i * i != nb)
    {
        i++;
    }
    return(i);
}
/*
int main()
{
    printf("%d\n",ft_sqrt(1));
    printf("%d\n",ft_sqrt(4));
    printf("%d\n",ft_sqrt(9));
    printf("%d\n",ft_sqrt(16));
    printf("%d\n",ft_sqrt(25));
    printf("%d\n",ft_sqrt(121));
    printf("%d\n",ft_sqrt(625));
    printf("%d\n",ft_sqrt(225));
}*/