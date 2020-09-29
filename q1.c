#include<stdio.h>

int main()
{
	char X[2][4] = {{'A','B','C','D'},
				   {'a','b','c','d'}};

	char Y[2][4] = {{'A','B','C','D'},
				   {'E','F','G','H'}};

	char i , j , z;

	for(i = 0; i < 2; i++)
	{
		for(j=0; j < 4; j++)
		{
	
			z = X[i][j] == Y[i][j];

			printf("\n %d AND %d = %d ", X[i][j], Y[i][j], z);
		}
	}
}