#include <iostream>
#include <typeinfo>

using namespace std;

auto somme_auto (auto x ,auto y){
      return x+y;
}
void afficheType(auto& valeur) {
    cout << "Le type deduit est : " << typeid(valeur).name() << endl;
}




int main()
{
    double w,z;
    cout<<"Entrez le premier nombre a calculer:";
    cin>>w;
    cout<<"Entrez le deuxieme nombre a calculer:";
    cin>>z;
    cout<<"Le resultat de "<< w<<" + " <<z<<" est:"<<somme_auto(w,z)<<endl;


    auto a=5;
    auto b=12.3;
    auto c='D';
    auto d="HELLO WORLD!";
    afficheType(a);
    afficheType(b);
    afficheType(c);
    afficheType(d);


    return 0;
}
