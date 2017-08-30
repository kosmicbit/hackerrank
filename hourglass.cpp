#include<stdio.h>

int hourglass[6][6];

int main()
{
	freopen("hourglass.txt", "r", stdin);
	int maximumHourGlassSum = -72;

	//input
	for (int hgRow = 0; hgRow < 6; hgRow++)
		for (int hgCol = 0; hgCol < 6; hgCol++)
			scanf("%d", &hourglass[hgRow][hgCol]);



	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			int hourGlassSum = hourglass[row][col] + hourglass[row][col + 1] + hourglass[row][col + 2] +
								hourglass[row + 1][col + 1] +
					   hourglass[row + 2][col] + hourglass[row + 2][col + 1] + hourglass[row + 2][col + 2];

			if (maximumHourGlassSum < hourGlassSum)
				maximumHourGlassSum = hourGlassSum;
		}
	}

	printf("%d", maximumHourGlassSum);

	return 0;
}

