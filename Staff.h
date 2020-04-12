#ifndef STAFF_H
#define STAFF_H
#include <iostream>
using namespace std;

class Staff
{
    public:
        Staff(string del="dele");
        void afficher();
        void modifier();

    private:
        string nom,prenom,travail,delegation;

};

#endif// STAFF_H
