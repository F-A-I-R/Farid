#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = 0, ganjil = 0, genap = 0, total = 0;
    while(i < 10)
    {
        if(arr[i] % 2 == 0)
        {
            genap += arr[i];
        } else {
            ganjil += arr[i];
        }
        total +=arr[i];
        i++;
    }

    cout<<"Genap  : "<<genap<<endl;
    cout<<"Ganjil : "<<ganjil<<endl;
    cout<<"total  : "<<total<<endl;
}
