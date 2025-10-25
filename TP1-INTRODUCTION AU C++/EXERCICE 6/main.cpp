#include <iostream>
using namespace std;

int main() {
    double distance, prix;
    int age;
    char jour;

    // --- Lecture des données ---
    cout << "Entrez la distance (km) : ";
    cin >> distance;

    cout << "Entrez l'age du voyageur : ";
    cin >> age;

    cout << "Entrez le jour du voyage (N pour normal, W pour week-end) : ";
    cin >> jour;

    // --- Prix de base ---
    prix = distance * 0.35;

    // --- Réduction selon distance ---
    if (distance >= 100 && distance <= 300) {
        prix = prix * 0.90; // réduction 10%
    } else if (distance > 300) {
        prix = prix * 0.85; // réduction 15%
    }

    // --- Réduction pour les jeunes ---
    if (age < 18) {
        prix = prix * 0.75; // réduction 25%
    }

    // --- Réduction week-end ---
    if (jour == 'W' || jour == 'w') {
        prix = prix * 0.95; // réduction 5%
    }

    // --- Affichage du prix final ---
    cout << "Le prix du billet est : " << prix << " DH" << endl;

    return 0;
}

