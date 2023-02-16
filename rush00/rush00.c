#include <unistd.h>
	
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*V: Este procedimiento void recibe como parametros de entrada currentwidth, el valor x, currentheight,
valor y. El primer condicional evalua si es la ultima fila. Si es asi invierte los corner. Las tres ultima 
condicionales evaluan cuando el currentwidth esta en los extremos, y cuando esta entre los extremos para 
imprimir 'B'*/
void firslast_line(int cw, int x, int ch, int y)
{
    char corner1 = 'A';
	char corner2 = 'C';
    if (ch == y - 1)
    {
        corner1='C';
        corner2='A';
    }

    if (cw == 0)
    {
        ft_putchar(corner1);
    }
    else if (cw == x - 1)
    {
        ft_putchar(corner2);
    }
    else if (cw%x != 0)
    {
        ft_putchar('B');
    }
}
/*V: Este procedimiento void recibe como parametros de entrada currentwidth y el valor x del 
procedimiento rush. Con las dos condicionales averiguamos (1a cond) si esta en los extremos(imprime B), (2a cond)
si esta entre los extremos (imprimiendo un espacio vacio) */
//V: (extra) He unido dos condicionales usando 
void mid_lines(int cw, int x)
{
    if (cw == 0 || cw == x - 1)
    {
        ft_putchar('B');
    }
    else if (cw%x != 0)
    {
        ft_putchar(' ');
    }
}

void	rush(int x, int y)
{
	int currentwidth = 0;
	int currentheight = 0;
	while (currentheight < y)
	{
		while (currentwidth < x)
        {
			if (currentheight == 0 || currentheight == y - 1)
			{
				firslast_line(currentwidth, x, currentheight, y);
                currentwidth++;
			}
			else if (currentheight < y - 1)
			{
                mid_lines(currentwidth,x);
				currentwidth++;
			}
        }
        if (currentheight < y)
        {	
        ft_putchar('\n');
        }
        currentheight++;
		currentwidth = 0;
	}
}

int		main()
{
	rush(8, 11);
    return (0);
}