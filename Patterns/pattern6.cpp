#include <iostream>
using namespace std;
void display(int n)
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = 1; j < n-i+1; j++)
        {
            cout << j;
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
//Enter the value: 8
//12345678
//1234567
//123456
//12345
//1234
//123
//12
//1
