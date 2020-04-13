#ifndef DELEGATION_H
#define DELEGATION_H
#include <vector>
#include <iostream>
#include "Staff.h"
#include "Joueur.h"

using namespace std;


class Delegation
{
    friend class Match;
    friend class Joueur;
    friend class Staff;

    private:
        string nom;
        vector<Staff> stafflist;
        vector<Joueur> joueurlist;
        int points,niveau;
    public:
        Delegation();
        void ajouter_joueur();
        void ajouter_staff();
        void modifier_joueur();
        void modifier_staff();
        void supprimer_joueur();
        void supprimer_staff();
        void afficher_noms_des_joueurs();
        void afficher_noms_des_staff();
};

#endif // DELEGATION_H
