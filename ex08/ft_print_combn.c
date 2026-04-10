#include <unistd.h>

void print_comb(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        char c = a[i] + '0';
        write(1, &c, 1);
    }

    if (a[0] != 10 - n)
        write(1, ", ", 2);
}

void ft_print_combn(int n)
{
    int a[10];
    
    for (int i = 0; i < n; i++)
        a[i] = i;
    while (1)
    {
        print_comb(a, n);
        int i = n -1;

        while (i >= 0 && a[i] == 10 - n + i){
          i--;
        }
        if (i < 0){
          break;
        }
        a[i]++;

        for (int j = i + 1; j < n; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}

int main(){
  ft_print_combn(2);
  write(1, "\n", 1);
 return 0;
}

