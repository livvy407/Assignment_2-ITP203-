#include<stdio.h>

int main()
{
	int A[8] = {0,0,0,0,1,1,1,1};

	int B[8] = {0,0,1,1,0,0,1,1};

	int C[8] = {0,1,0,1,0,1,0,1};

	int i, X;

	for ( i = 0; i < 8; i++)
	{
		X = A[i] && B[i] && C[i];

		printf("\n %d AND %d AND %d = %d \n",A[i], B[i], C[i], X);
	}

}
	