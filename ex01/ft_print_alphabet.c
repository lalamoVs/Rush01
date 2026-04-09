#include <unistd.h>

void ft_print_alphabet(){
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++){
		write(1, &alp, 1);
	}
}

int main(){
	ft_print_alphabet();
	write(1, "\n", 1);
	return 0;
}
