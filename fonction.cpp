#include<iostream>
#include "radio.h"
#include <string>
using namespace std;

Compte_rendu::Compte_rendu(string mdp, string txt){
    this-> mot_de_passe=mdp;
    this-> texte=txt;
};

void Compte_rendu::set_text(string new_texte){
    this->texte = new_texte;
};

void Compte_rendu::Consulter(string mdp){
    if (this->mot_de_passe==mdp){
        cout<<this->texte<<endl;
    }else{
        cout<<"Mauvais mot de passe"<<endl;
    }
};



