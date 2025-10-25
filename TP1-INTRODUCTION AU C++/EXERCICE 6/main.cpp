#include <iostream>
using namespace std;

int main() {
    double distance, prix;
    int age;
    char jour;

    // --- Lecture des donn�es ---
    cout << "Entrez la distance (km) : ";
    cin >> distance;

    cout << "Entrez l'age du voyageur : ";
    cin >> age;

    cout << "Entrez le jour du voyage (N pour normal, W pour week-end) : ";
    cin >> jour;

    // --- Prix de base ---
    prix = distance * 0.35;

    // --- R�duction selon distance ---
    if (distance >= 100 && distance <= 300) {
        prix = prix * 0.90; // r�duction 10%
    } else if (distance > 300) {
        prix = prix * 0.85; // r�duction 15%
    }

    // --- R�duction pour les jeunes ---
    if (age < 18) {
        prix = prix * 0.75; // r�duction 25%
    }

    // --- R�duction week-end ---
    if (jour == 'W' || jour == 'w') {
        prix = prix * 0.95; // r�duction 5%
    }

    // --- Affichage du prix final ---
    cout << "Le prix du billet est : " << prix << " DH" << endl;

    return 0;
}

