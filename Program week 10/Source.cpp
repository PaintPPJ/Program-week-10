#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
	int A[3][3];
	int B[3][3];
	int C[3][3];
	int D[3][3];
	int i, j,sum,k;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> A[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> B[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum = sum + A[i][k] * B[k][j];
			}
			D[i][j] = sum;
		}
		cout << endl;
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << D[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}