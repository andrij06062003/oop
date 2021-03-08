#include <iostream>

using namespace std;

class matrix
{
private:
    int mat[3][4];
    
public:


    void getdate() 
    {
        cout << "Input matrix 3x4:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> mat[i][j];
            }
        }
        cout << endl <<"Your Matrix:\n";
    };


    void putdate()
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
                cout << mat[i][j] << " ";
            cout << endl ; 
        }
    };
    void Min()
    {
        int min = INT_MAX;

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (mat[i][j] < min)
                {
                    min = mat[i][j];
                }
            }

        }
        cout << " MIN = " << min << "\n";
    }
    void Max()
    {

        int max = 0;

        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                if (mat[i][j] > max)
                {
                    max = mat[i][j];
                }
            }

        }
        cout << " MAX = " << max << "\n";
    }
    void Sum()
    {

        int Sum = 0;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                Sum = Sum + mat[i][j];
            }

        }
        cout << " SUM = " << Sum << "\n";

    }
};


int main()
{
    matrix mat;
    mat.getdate();
    mat.putdate();
    cout << endl;
    mat.Min();
    mat.Max();
    mat.Sum();
    system("pause");
    return 0;
}