#include <iostream>
#include <vector>
using namespace std;
void wavewprint(int arr[][4], int nrow, int ncol)
{
    for (int col = 0; col < ncol; col++)
    {
        if (col & 1)
        {
            // odd case
            for (int row = nrow - 1; row >= 0; row--)
            {
                cout << arr[row][col] << "  ";
            }
        }
        else
        {
            for (int row = 0; row > nrow; row++)
            {
                cout << arr[row][col] << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int col, row;
    cout << "enter the no of row" << endl;
    cin >> row;
    cout << "enter the no of column" << endl;
    cin >> col;
    int vect[3][4] = {1, 2, 3, 4, 5, 6, 67, 8, 9, 10, 11, 21};
    //   vector<ve=ctor<int>> vect
    //  {
    //      {1, 2, 3},
    //      {4, 5, 6},
    //      {7, 8, 9}
    // };

    wavewprint(vect, row, col);
    return 0;
}