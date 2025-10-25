#include <iostream>

using namespace std;

int main()
{
    int n;
    float fac;
    cout<<"Saisir le nombre de photocopies effectuées:";
    cin>>n;
    if (n<=10){
        fac = 0.25 *n;
    }
    else if (n>10 && n<=20){
            fac=(0.25 *10)+(0.20*(n-10));


    }
    else if(n>20){
         fac=(0.25 *10)+(0.20*20)+(0.10*(n-30));
    }
        cout<<"La facture est "<<fac<<" DH";


    return 0;
}
