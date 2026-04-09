#include <unistd.h>

void ft_print_reverse_alphabet(){
	char alp;
	for (alp = 'z'; alp >=  'a'; alp--){
		write(1, &alp, 1);
	}
}

int main(){
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return 0;
}
