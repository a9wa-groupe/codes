#ifndef DELEGATION_H
#define DELEGATION_H
#include <vector>
#include <iostream>
#include "Staff.h"
#include "Joueur.h"

using namespace std;


class Delegation
{
    friend class Joueur;
    friend class Staff;

    private:
        string nom;
        vector<Staff> stafflist;
        vector<Joueur> joueurlist;

    public:
        Delegation();
        void ajouter_joueur();
        void ajouter_staff();
        void modifier_joueur(string);
        void modifier_staff(string);
        void supprimer_joueur(string);
        void supprimer_staff(string);

};

#endif // DELEGATION_H
