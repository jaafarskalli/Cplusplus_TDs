#include <iostream>

using namespace std;
// Fonction de recherche binaire
int rechercheBinaire(int tab[], int taille, int valeur) {
    int debut = 0;
    int fin = taille - 1;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;

        if (tab[milieu] == valeur) {
            return milieu; // trouvé → on retourne la position
        }
        else if (tab[milieu] < valeur) {
            debut = milieu + 1; // chercher à droite
        }
        else {
            fin = milieu - 1;   // chercher à gauche
        }
    }

    return -1; // pas trouvé
}


int main()
{
    int n;
    cout<<"Combien de nombre voulez-vous entrer?";
    cin>>n;

     int tab[n];
     for(int i=0;i<n;i++){
        cout<<"Entrez le "<<i+1<<" nombre :";
        cin>>tab[i];

     }
      // --- TRI À BULLES ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    cout << "Tableau trié : ";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    // --- Recherche ---
    int valeur;
    cout << "Entrez le nombre à rechercher : ";
    cin >> valeur;

    int position = rechercheBinaire(tab, n, valeur);

    if (position != -1)
        cout << "Le nombre " << valeur << " se trouve à la position " << position << " (indice du tableau)." << endl;
    else
        cout << "Le nombre " << valeur << " n'existe pas dans le tableau." << endl;


    return 0;
}
