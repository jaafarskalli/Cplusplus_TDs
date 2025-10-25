#include <iostream>

using namespace std;

void swapRef (int& a,int& b){
   int temp;
   temp=a;
   a=b;
   b=temp;
}
void swapPtr (int *a,int* b){
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}



int main()
{
    int x = 10;
    int& refX = x ;
    refX = 20 ;
    int y=6;
    cout<<"La valeur de x est :"<<x;
    cout<<endl;

    cout<<"L'adresse de x est :"<<&x;
    cout<<endl;

    cout<<"La valeur de refX est :"<<refX;
    cout<<endl;

    cout<<"L'adresse de refX est :"<<&refX;
    cout<<endl;
    cout<<endl;


  cout<<"EN UTLISANT LA REFERENCES :"<<endl;
    cout<<"On a x = "<<x;
    cout<<endl;
    cout<<"On a y = "<<y;
    cout<<endl;

swapRef(x,y);
 cout << "Apres l'echange :" << endl;
cout << "x = " << x << ", y = " << y << endl;
cout<<endl;

 cout<<"EN UTILISANT LES POINTEURS :" <<  endl;

 cout<<"On a x = "<<x;
    cout<<endl;
    cout<<"On a y = "<<y;
    cout<<endl;

 swapPtr(&x,&y);
 cout << "Apres l'echange :" << endl;
cout << "x = " << x << ", y = " << y << endl;
cout<<endl;









    return 0;
}
