#include <unistd.h>

void	ipssi_print_comb2(void)
{
	int		i;
	int		j;
	char	buf[5];

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			buf[0] = (i / 10) + '0';
			buf[1] = (i % 10) + '0';
			buf[2] = ' ';
			buf[3] = (j / 10) + '0';
			buf[4] = (j % 10) + '0';
			write(1, buf, 5);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
