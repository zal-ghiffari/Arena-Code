#include<iostream>
using namespace std;
int main()
{
    int h, i, sng, byk;
    i=1;
    cout<<"Jumlah baris Fibonacci : ";
    cin>>byk;
    cout<<"\n";
    cout<<"0 1"; //set penjumlahan awal (mutlak)
    for (int p=1; p<=byk-2; p++)
    {
        sng=h+1;
        cout<<sng<<" ";
        h=i;
        i=sng;
        }
        cout<<"\n"<<endl;
        system ("pause");
        return 0;
        }
