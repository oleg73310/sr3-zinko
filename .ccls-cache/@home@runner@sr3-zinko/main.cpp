#include <iostream>
using namespace std;
void ff(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            a[i] = 0;
    }

}
int main()

{
    setlocale(0, ".1251");
    int arr[14];
   
    
    for (int i = 0;i < 14;i++)
        cin >> arr[i];
    ff(arr, 14);
    for (int i = 0;i < 14;i++)
        cout << arr[i] << " ";
    cout << endl;


    system("pause");
    return 0;


}