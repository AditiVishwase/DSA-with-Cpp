#include <iostream>
using namespace std;
void display(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "* ";
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
// Enter the value: 8
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * * 
// * * * * * * * * 
/
