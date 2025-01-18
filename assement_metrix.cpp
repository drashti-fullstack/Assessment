#include <iostream>

using namespace std;

int main()
{
    int a[100][100], b[100][100], ans[200][200], i, j, row;

    cout << "\nEnter the row number = ";
    cin >> row;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << "\nEnter the element value of an array a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << "\nEnter the element value of an array b[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    cout << "---------------Matrix: 1---------------";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << "\nEnter Element : " << a[i][j];
        }
    }
    cout << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "\n";
    cout << "---------------Matrix: 2---------------";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << "\nEnter Element : " << b[i][j];
        }
    }
    cout << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl;
    cout << endl;
    cout << "\n---------------Result: Maltiplication MAtrix---------------";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < row; k++)
            {
                ans[i][j] = ans[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    cout<<endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}