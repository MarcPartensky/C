#include <stdio.h>

int main () {
	int file_descriptor;
	file_descriptor = open("./message.txt", 0);

	char buffer[1024];
	int n;

	n = read(file_descriptor, buffer, 1024);
	write(1, buffer, n);

	return 0;
}
