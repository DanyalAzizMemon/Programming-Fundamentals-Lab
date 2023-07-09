#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    int **array = new int*[rows];
    for(int i=0;i<rows;i++)
        array[i] = new int[cols];

    cout << "\n--------Enter the elements of array:--------\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout << "Enter the element at position (" << i+1 << "," << j+1 << "): ";
            cin >> array[i][j];
        }
    }

    int sum = 0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            sum += pow(array[i][j], 2);
        }
    }

    cout << "\nEuclidean norm of the matrix is: " << sqrt(sum);
}