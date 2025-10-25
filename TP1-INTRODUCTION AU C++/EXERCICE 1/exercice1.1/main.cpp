#include <iostream>

using namespace std;

void Fonction(int tab[],int taille, int &max , int &min ,float &moyenne){
    max=tab[0];
    min=tab[0];
    int somme =0;

     for(int i=0;i<taille;i++){
        if(tab[i]<min) min= tab[i];
        if (tab[i]>max) max=tab[i];
        somme = somme+tab[i];
     }
    moyenne = (float) somme /taille;

}
int main()
{
    int Taille =5;
    int tableau[Taille];
    cout << "Rempliez les "<<Taille<<"cases du tableau:"<< endl;
       for (int i=0;i<Taille;i++){
             cout << "Case"<<i+1<< ":";
             cin>>tableau[i];
    }
    int minimum , maximum;
    float moyenne;

    Fonction(tableau,Taille,minimum,maximum,moyenne);

    cout << "Le minimun est:"<<minimum<< endl;
    cout << "Le maximum est:"<<maximum<< endl;
    cout << "La moyenne est:"<<moyenne<<endl;
    return 0;
}
