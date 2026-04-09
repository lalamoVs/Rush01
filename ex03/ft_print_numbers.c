#include <unistd.h>

void ft_print_numbers(){
	int i = 0;
	while (i < 10) {
		char c = i + '0';
		write(1, &c, 1);
		i++;
	}
}

int main(){
	ft_print_numbers();
	write(1, "\n", 1);
	return 0;
}
