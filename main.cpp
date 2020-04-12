#include <iostream>

using namespace std;
#include "Staff.h";
#include "Joueur.h"



int main()
{


	Joueur maradonna;
	maradonna.ajouter_but(4);
	maradonna.ajouter_carton_jaune(3);
	maradonna.ajouter_carton_rouge(1);
	maradonna.ajouter_note(8);
	maradonna.ajouter_note(9);
	maradonna.afficher_info();
	cout<<maradonna.get_carton_jaune()<<endl;
	cout<<maradonna.get_note_total();
    return 0;

}
