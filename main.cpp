 #include<iostream>
#include "radio.h"
#include <fstream>
using namespace std;

std::ofstream flux{"radio.txt",fstream::app};

int main(){

    string nom,prenom,naissance,date,texte,mot_de_passe,type,e,mdp;
    int num;
    vector<Cliche> liste_cliche;

    Cliche c(3,"first");
    Cliche c1(32,"second");
    liste_cliche.push_back(c);
    liste_cliche.push_back(c1);
    cout<<"num: "<<endl;
    cin>>num;
    cout<<"type"<<endl;
    cin>>type;
    cout<<"etat: "<<endl;
    cin>>e;
    cout<<"entrez nom"<<endl;
    cin>>nom;
    cout<<"entrez prenom: "<<endl;
    cin>>prenom;
    cout<<"entrez nais: "<<endl;
    cin>>naissance;
    cout<<"entrez date: "<<endl;
    cin>>date;
    cout<<"entrez txt "<<endl;
    cin>>texte;
    cout<<"entrez mdp "<<endl;
    cin>>mot_de_passe;



    Radiographie r(num,type,date,e,liste_cliche,nom,prenom,naissance,texte,mot_de_passe);
    
    r.get_liste_cliche();

    Liste_radiographie data("radio.json");

}