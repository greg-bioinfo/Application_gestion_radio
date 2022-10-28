
class Compte_rendu{
    public:
        Compte_rendu(std::string,std::string);
        void set_text(std::string new_texte);
        // Si on veut modifier le mdp ? void set_mot_de_passe(std::string mot_de_passe);
        std::string get_text(std::string mdp);
        void Consulter(std::string mdp);

    private:
        std::string texte;
        std::string mot_de_passe;
};

class Patient{
    public:
        Patient(std::string,std::string,std::string);
        std::
    private:
        std::string nom;
        std::string prenom;
        std::string date_naissance;
}

class Radiographie{
    public:

    private:

};

class Liste_radiographie{
    public:
        Radiographie radio;
        
    private:

};