#include<iostream>
using namespace std;
void display(int n)
{
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <=i; j++)
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
