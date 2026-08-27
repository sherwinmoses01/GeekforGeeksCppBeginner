#include <iostream>
using namespace std;

int main()
{
    int N = 3;

    int** p = new int*[N];
    int x = 1;

    for (int i = 0; i < N; i++) {

        p[i] = new int[N];

        for (int j = 0; j < N; j++, x++) {

            p[i][j] = 10 * x;

        }
    }

    cout << *p << endl;
    cout << **p << endl;
    cout << *p + 1 << endl;
    cout << **p + 1 << endl;
    cout << *(*(p + 1) + 0) << endl;
    cout << p[2][2] << endl;

    return 0;
}