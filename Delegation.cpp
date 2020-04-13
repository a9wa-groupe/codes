#include "Delegation.h"
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Delegation::Delegation() : points(0),niveau(0)
{
    cout<<"donner le nom de la Nation :"<<endl;
    cin>>nom;
    int x;
    cout<<"nbre de joueur";
    cin>>x;
    for ( int i=0 ; i<x;i++)
    {
        Joueur z(nom);
        joueurlist.push_back(z);
    }
    cout<<"nbre de staff";
    cin>>x;
    for ( int i=0 ; i<x;i++)
    {
        Staff z(nom);
        stafflist.push_back(z);
    }
}

void Delegation::ajouter_joueur()
{
    Joueur z(nom);
    joueurlist.push_back(z);
}

void Delegation::ajouter_staff()
{
    Staff s(nom);
    stafflist.push_back(s);

}

void Delegation::afficher_noms_des_joueurs()
{
    for (int i=0;i<joueurlist.size();i++)
    {
        cout<<i<<" "<<joueurlist[i].nom<<endl;
    }
}

void Delegation::afficher_noms_des_staff()
{
    for (int i=0;i<joueurlist.size();i++)
    {
        cout<<i<<" "<<stafflist[i].nom<<endl;
    }
}
void Delegation::modifier_joueur()
{
    Delegation::afficher_noms_des_joueurs();
    cout<<"donner le numero du joueur a modifier"<<endl;
    int x;
    cin>>x;
    joueurlist[x].Joueur::modifier();

}
void Delegation::modifier_staff()
{
    Delegation::afficher_noms_des_staff();
    cout<<"donner le numero du staff a modifier"<<endl;
    int x;
    cin>>x;
    stafflist[x].Staff::modifier();

}
void Delegation::supprimer_joueur()
{
    Delegation::afficher_noms_des_joueurs();
    cout<<"donner le numero du joueur a supprimer"<<endl;
    int x;
    cin>>x;
    joueurlist.erase(joueurlist.begin() + x);



}

void Delegation::supprimer_staff()
{
    Delegation::afficher_noms_des_staff();
    cout<<"donner le numero du staff a supprimer"<<endl;
    int x;
    cin>>x;
    stafflist.erase(stafflist.begin() + x);


}




