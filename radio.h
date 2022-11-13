#ifndef A_UNIQUE_HEADER_FILE_GUARD_NAME
#define A_UNIQUE_HEADER_FILE_GUARD_NAME
#include <vector>
#include <string>
#include <fstream>
extern std::ofstream flux;

class Compte_rendu{
    public:
        Compte_rendu(std::string,std::string);
        void set_text(std::string new_texte);
        //void set_mot_de_passe(std::string mot_de_passe);
        void Consulter(std::string mdp);
        std::string get_texte();
        std::string get_mdp();

    private:
        std::string texte;
        std::string mot_de_passe;
};

class Patient{
    public:
        Patient(std::string,std::string,std::string);
        std::string get_nom();
        std::string get_prenom();
        std::string get_date_naissance();
        void set_nom(std::string new_nom);
        void set_prenom(std::string new_prenom);
        void set_naissance(std::string new_naissance);

    private:
        std::string nom;
        std::string prenom;
        std::string date_naissance;
};



class Cliche{
    public:
        Cliche(int,std::string);
        std::string get_image();
        int get_numero_prise();
        void set_image(std::string image);
        void set_numero_prise(int numero_prise);
    private:
        std::string image;
        int numero_prise;
};



class Radiographie{
    public:
    Patient p;
    Compte_rendu CR;
    Radiographie(int num,std::string type_radio,std::string date,std::string etat,std::vector<Cliche> liste_cliche, std::string nom, std::string prenom, std::string naissance, std::string texte, std::string mot_de_passe):p(nom,prenom,naissance),CR(mot_de_passe,texte){

    this->numero_examen=num;
    this->type_radio=type_radio;
    this->date=date;
    this->etat=etat;
    this->liste_cliche=liste_cliche;

    flux<<"<radiographie>\n";
    flux<<"<numero_examen>"<<this->numero_examen<<"\n";
    flux<<"<date>"<<this->date<<"\n";
    flux<<"<type_radio>"<<this->type_radio<<"\n";
    flux<<"<etat>"<<this->etat<<std::endl;
    flux<<"<patient>\n";
    flux<<"<nom>"<<(this->p).get_nom()<<"\n";
    flux<<"<prenom>"<<(this->p).get_prenom()<<"\n";
    flux<<"<date_naissance>"<<(this->p).get_date_naissance()<<"\n";
    flux<<"<compte_rendu>"<<std::endl;
    flux<<"<texte>"<<(this->CR).get_texte()<<std::endl;
    flux<<"<mot_de_passe>"<<(this->CR).get_mdp()<<std::endl;
    flux<<"<cliche>"<<std::endl;
    for (int i=0;i<(this->liste_cliche).size();i++){
        flux<<(this->liste_cliche)[i].get_image()<<std::endl;
        flux<<(this->liste_cliche)[i].get_numero_prise()<<std::endl;
    }
    };
    std::string get_date();
    int get_numero_exam();
    std::string get_type();
    std::string get_etat();
    std::string get_liste_cliche();


    Compte_rendu get_CR();
    Patient get_patient();


    private:
        int numero_examen;
        std::string type_radio;
        std::string date;
        std::string etat;
        std::vector<Cliche> liste_cliche;        
};


class Liste_radiographie{
    public:
        Liste_radiographie(std::string p){
            this->path=p;
        };
        void ajouter_radio(Radiographie);
        
    private:
        std::string path;
};

#endif
