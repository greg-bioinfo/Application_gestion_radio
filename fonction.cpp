#include<iostream>
#include "radio.h"
#include <string>
#include <fstream>
#include <jsoncpp/json/json.h>
using namespace std;

extern ofstream flux;

Compte_rendu::Compte_rendu(string mdp, string txt){
    this-> mot_de_passe=mdp;
    this-> texte=txt;
};

void Compte_rendu::set_text(string new_texte){
    this->texte = new_texte;
};

string Compte_rendu::get_texte(){
    return this->texte;
}

//void Compte_rendu::set_mot_de_passe(string mot_de_passe){
//    this->mdp = mot_de_passe;
//};

string Compte_rendu::get_mdp(){
    return this->mot_de_passe;
}
void Compte_rendu::Consulter(string mdp){
    if (this->mot_de_passe==mdp){
        cout<<this->texte<<endl;
    }else{
        cout<<"Mauvais mot de passe"<<endl;
    }
};

////////////////////////////////////////////////////////////////////////////////

Patient::Patient(string nom,string prenom,string date_naissance){
    this->nom=nom;
    this->prenom=prenom;
    this->date_naissance=date_naissance;
};

string Patient::get_nom(){
    return this->nom;
};

string Patient::get_prenom(){
    return this->prenom;
};

string Patient::get_date_naissance(){
    return this->date_naissance;
};

void Patient::set_nom(string new_nom){
    this->nom=new_nom;
};

void Patient::set_prenom(string new_prenom){
    this->prenom=new_prenom;
};
void Patient::set_naissance(string new_naissance){
    this->date_naissance=new_naissance;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////

Cliche::Cliche(int numero_prise,string image){
    this->image=image;
    this->numero_prise=numero_prise;
};

string Cliche::get_image(){
    return  this->image;
};

int Cliche::get_numero_prise(){
    return this-> numero_prise;
 }

////////////////////////////////////////////////////////////////////////////////////////////////////

string Radiographie::get_date(){
    return this->date;
};

Compte_rendu Radiographie::get_CR(){
    return this->CR;
}

Patient Radiographie::get_patient(){
    return this->p;
}

int Radiographie::get_numero_exam(){
    return this->numero_examen;
};
string Radiographie::get_type(){
    return this->type_radio;
};
string Radiographie::get_etat(){
    return this->etat;
};
string Radiographie::get_liste_cliche(){
    int i;
    vector<Cliche> v=this->liste_cliche;
    for(i=0;i<v.size();i++){
        Cliche c=v[i];
        cout<<c.get_image()<<endl;
        cout<<c.get_numero_prise()<<endl;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////
/*
void Liste_radiographie::ajouter_radio(Radiographie radio){
    flux<<"<radiographie>\n";
    flux<<"<numero_examen>"<<radio.get_type()<<"\n";
    flux<<"<date>"<<radio.get_date()<<"\n";
    flux<<"<type_radio>"<<radio.get_type()<<"\n";
    flux<<"<etat>"<<radio.get_etat()<<"\n";
    flux<<"<patient>\n";
    flux<<"<nom>"<<radio.get_patient().get_nom()<<"\n";
    flux<<"<prenom>"<<radio.get_patient().get_prenom()<<"\n";
    flux<<"<date_naissance>"<<radio.get_patient().get_date_naissance()<<"\n";
    flux<<"<compte_rendu>"<<endl;
    flux<<"<texte>"<<radio.get_CR().get_texte()<<endl;
    flux<<"<mot_de_passe>"<<radio.get_CR().get_mdp()<<endl;
}

*/