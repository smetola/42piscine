#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int	min(int a, int b, int c)
{
	int	l = fmin(a, b);
	return fmin(l, c);
}

int	maxSize(int arr[][5], int rows, int cols)
{
	int	result[rows][cols];
	int	max = 0;
	for(int i = 0; i < rows; i++)
	{
		result[i][0] = arr[i][0];
		if (result[i][0] == 1)
		{
			max = 1;
		}
	}
	for(int	i=0; i < cols; i++)
	{
    	result[0][i] = arr[0][i];
    	if (result[0][i] == 1)
		{
			max = 1;
		}	
	}

	for(int	i = 1; i < rows; i++)
	{
		for(int	j = 1; j < cols; j++)
		{
			if(arr[i][j] == 0)
			{
				continue;
			}
			int	t = min(result[i - 1][j],result[i - 1][j - 1],result[i][j - 1]);
			result[i][j] =  t + 1;
			if(result[i][j] > max)
			{
				max = result[i][j];
			}
		}
	}
	return max;
}

int	main()
{
	int	arr[][5] = {{0,1,1,0,1},{1,1,1,0,0},{1,1,1,1,0},{1,1,1,0,1}};
	int	rows = 4, cols = 5;
	int	result = maxSize(arr, rows, cols);
	printf("%d", result);
	return 0;
}