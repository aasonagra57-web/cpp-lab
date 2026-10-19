#include <iostream>
using namespace std;

class MATRIX
{
    int a[10][10];
    int x,y;

public:
    void get()
    {
        cout << "Enter number of rows and columns: ";
        cin >> x >> y;

        cout << "Enter elements:\n";
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    MATRIX operator+(MATRIX m){
        MATRIX temp;
        temp.x = x;
        temp.y = y;

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

   MATRIX operator*(MATRIX m){
    MATRIX temp;
    temp.x = x;
    temp.y = y;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            temp.a[i][j] = a[i][j] * m.a[i][j];
        }
    }

    return temp;
}
};

int main()
{
    MATRIX m1, m2, m3, m4;

    cout << "Enter first matrix:\n";
    m1.get();

    cout << "Enter second matrix:\n";
    m2.get();

    cout << "\nFirst Matrix:\n";
    m1.display();

    cout << "\nSecond Matrix:\n";
    m2.display();

    m3 = m1 + m2;

    cout << "\nAddition of matrices:\n";
    m3.display();

    m4 = m1 * m2;

    cout << "\nMultiplication of matrices:\n";
    m4.display();

    return 0;
}