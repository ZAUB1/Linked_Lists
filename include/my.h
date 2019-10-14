#include <stdlib.h>

void my_putchar(const char c)
{
	write(1, &c, 1);
}

int my_strlen(const char *str)
{
	int c = 0;

	while (str[c] != '\0')
		c++;

	return c;
}

int my_putstr(const char *str)
{
	const int len = my_strlen(str);

	for (int i = 0; i < len; i++)
		my_putchar(str[i]);

	return 0;
}
