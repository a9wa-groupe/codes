#ifndef MATCH_H
#define MATCH_H
#include "Delegation.h"

class Match
{

    private:
        Delegation equipe1,equipe2;
        int information[6]; /*case1 pour les buts de l'equipe1 case 2 nbr carton jaune de l'equipe1 case 3 nbr carton rouge de l'equipe1
                            case4 pour les buts de l'equipe2 case 5 nbr carton jaune de l'equipe2 case 6 nbr carton rouge de l'equipe2*/
    public:
        Match(Delegation,Delegation);
        void jouer();
        void afficher_information();




};

#endif // MATCH_H
