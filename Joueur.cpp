#include "Joueur.h"
#include <iostream>
using namespace std;

Joueur::Joueur() : Nb_carton_rouge(0),Nb_carton_jaune(0),Nb_but(0)
{

    string y;
    cout<<"donner le nom du joueur"<<endl;
    cin>> nom;
    cout<<"donner le prenom du joueur"<<endl;
    cin>> prenom;
    Notes.push_back(0);

}
void Joueur::afficher_note_total()
{
    cout<< Notes[0];
}

void Joueur::afficher_notes()
{
    if (Notes.size()>1)
    {
        for (int i=1; i<Notes.size() ; i++)
        {
            cout<<"ca note du"<<i<<"ieme match est "<< &Notes[i]<<endl;
        }
    }
    else
        cout<<" ce joueur n'a jouer aucun match"<<endl;
    }

void Joueur::afficher_info()
{
    cout<<"nom :"<<nom<<endl;
    cout<<"prenom :"<<prenom<<endl;
    cout<<"nombre de buts :"<<Nb_but<<endl;
    cout<<"nombre de carton jaunes : "<<Nb_carton_jaune<<endl;
    cout<<"nombre de carton rouges : "<<Nb_carton_rouge<<endl;
    cout<<"ca note moyenne :"<< Notes[0]<<endl;
}

int Joueur::get_carton_rouge()
{
    return Nb_carton_rouge;
}

int Joueur::get_carton_jaune()
{
    return Nb_carton_jaune;
}
int Joueur::get_but()
{
    return Nb_but;
}
void Joueur::ajouter_carton_rouge(int i)
{
    Nb_carton_rouge+=i;
}

void Joueur::ajouter_carton_jaune(int i)
{
    Nb_carton_jaune+=i;
}

void Joueur::ajouter_but(int i)
{
    Nb_but+=i;
}

void Joueur::ajouter_note(int i)
{
    Notes.push_back(i);
    float s = 0.0;
    for ( int i=1;i<Notes.size();i++)
    {
        s+= Notes[i];
        
    }
    Notes[0] = (float) s / (Notes.size() - 1 );
}


float Joueur::get_note_total()
{
    return Notes[0];
}
