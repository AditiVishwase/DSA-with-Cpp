#include<iostream>
using namespace std;
void display(int n)
{
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;

    display(n);

    return 0;
}

//output
// Enter the Value:8
// 1
// 22
// 333
// 4444
// 55555
// 666666
// 7777777
