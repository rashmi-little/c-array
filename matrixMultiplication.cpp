#include <iostream>
using namespace std;
int main()
{
    int row1, column1;
    int row2, column2;
    cout << "Enter the row and column value of first matrix\n";
    cin >> row1 >> column1;
    cout << "Enter the row and column value of first matrix\n";
    cin >> row2 >> column2;
    int arr1[row1][column1], arr2[row2][column2];
    if (column1 != row2)
    {
        cout << "This format can't be calculated" << endl;
        return 0;
    }
    int res[row1][column2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cout << "Enter " << i + 1 << " row " << j + 1 << " column" << endl;
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << "Enter " << i + 1 << " row " << j + 1 << " column" << endl;
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            int sum = 0;
            for (int k = 0; k < row2; k++)
            {
                sum = sum + arr1[i][k] * arr2[k][j];
            }
            res[i][j] = sum;
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}