#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> printMatrix(vector<vector<int> > matrix)
{
	vector<int> res;
	if (matrix.size() == 0) return res;
	int cols = matrix[0].size();
	int rows = matrix.size();
	if (cols <= 0 || rows <= 0) return res;

	int start = 0;

	while (cols > start * 2 && rows > start * 2)
	{
		int endX = cols - 1 - start;
		int endY = rows - 1 - start;

		//从左到右
		for (int i = start; i <= endX; i++)
			res.push_back(matrix[start][i]);

		//从上到下
		if (endY > start)
		{
			for (int i = start + 1; i <= endY; i++)
				res.push_back(matrix[i][endX]);
		}


		//从右到左
		if (endY > start&&endX > start)
		{
			for (int i = endX - 1; i >= start; i--)
				res.push_back(matrix[endY][i]);
		}

		//从下到上
		if (endY > start + 1 && endX > start)
		{
			for (int i = endY - 1; i >= start + 1; i--)
				res.push_back(matrix[i][start]);
		}

		start++;
	}
	return res;
}

int main()
{
	vector<vector<int> > matrix = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
	vector<int> res = printMatrix(matrix);
	for (auto num : res)
		cout << num << " ";
	cout << endl;

	system("pause");
	return 0;
}