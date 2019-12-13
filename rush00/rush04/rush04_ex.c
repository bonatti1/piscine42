#include <unistd.h>

int main(void)
{
	int c = 4;
	int l = 4;
	int aux = 1;
	int auxl = 1;
	
	while(auxl == 1 && aux <= c)
	{
		if(aux == 1) write(1, "A", 1);
	    else if(aux > 1 && aux < c) write(1, "B", 1);
		else if(aux == c) write(1, "C\n", 2);
		if(c == 1) write(1, "\n", 1);
		aux++;
	}
	aux = 1;
	auxl++;
	while(auxl < l && aux <=c)
	{
		while(aux<=c)
		{
			if (aux == 1) write(1, "B", 1);
			else if (aux == c) write(1, "B\n", 2);
			else write(1," ",1);
			if(c == 1) write(1, "\n", 1);
			aux++;
		}
		auxl++;
		aux = 1;
	}
	while ( auxl == l && aux <= c)
	{
		if (aux == 1) write (1, "C", 1);
		else if (aux > 1 && aux < c) write(1, "B", 1);
		else write(1, "A\n", 2);
		if(c == 1) write(1, "\n", 1);
		aux ++;
	}
	return 0;
}			
