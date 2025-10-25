#include <iostream>

using namespace std;
float surface (float longueur , float largeur =0){
    cout << "Entrez la longueur : ";
    cin >> longueur;
    cout << "Entrez la largeur (laisser vide si carre) : ";

    // On ignore les espaces
    cin.ignore();

    // Vérifie si l’utilisateur n’a rien entré
    if (cin.peek() == '\n') {
        largeur = longueur; // c’est un carré
    } else {
        cin >> largeur;     // l’utilisateur a donné une largeur
        }

         return longueur * largeur;
}



int main()
{
    float L,l;
    float Surface;
    cout<<endl;
    Surface = surface(L,l);
    cout<<"La surface du rectangle est : "<<Surface<<endl;

    return 0;
}
