#include <iostream>

using namespace std;

int main()
{
    int tab[3];
    int somme =0;
    float moyenne;
   for(int i=0;i<3;i++){
    cout << "Entrez l'entiers "<<i+1<<":";
    cin>>tab[i];
    somme+=tab[i];

   }
   cout<<"La moyenne est :"<<(float)somme /3 <<endl;

    return 0;
}
