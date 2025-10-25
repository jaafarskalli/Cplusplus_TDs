#include <iostream>
# include <chrono>
using namespace std::chrono;
using namespace std;


int carre(int x){
   return x*x ;
}

inline int square(int x){
   return x*x;
}
int main()
{
    const int N=1000000;
    int resultat=0;

    auto debut_carre = high_resolution_clock ::now();
    for (int i=0;i<=N;i++){
      resultat=carre(i);
            }
    auto fin_carre = high_resolution_clock::now();

    auto duree_carre = duration_cast<microseconds>(fin_carre-debut_carre);

    cout << "Temps d'execution de carre ():" <<duree_carre.count()<<" microsecondes"<< endl;

    auto debut_square= high_resolution_clock::now();
    for(int i=0;i<=N;i++){
        resultat = square(i);
        }
    auto fin_square=high_resolution_clock::now();
    auto duree_square = duration_cast<microseconds>(fin_square-debut_square);

    cout<<"Temps d'execution de inline() :"<<duree_square.count ()<<" microsecondes"<<endl;
    cout<<endl;

     if(duree_carre>duree_square){
        cout<<"La fonction square() est plus rapide"<<endl;

     }else{
       cout<<"La fonction carre() est plus rapide"<<endl;
     }


    return 0;
}
