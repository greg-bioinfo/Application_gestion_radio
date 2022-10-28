#include<iostream>
#include "radio.h"
using namespace std;

int main(){
    string mdp,texte,mdp2;
    cout<<"entrez mot de passe"<<endl;
    cin>>mdp;
    cout<<"entrez texte: "<<endl;
    cin>>texte;

    Compte_rendu cpt(mdp,texte);
    cout<<"entrez le mdp pour voir le text"<<endl;
    cin>>mdp2;
    cpt.Consulter(mdp2);


}