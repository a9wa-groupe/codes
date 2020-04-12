#include "Delegation.h"
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Delegation::Delegation()
{
    cout<<"donner le nom de la Nation :"<<endl;
    cin>>nom;
    int x;
    cout<<"nbre de joueur";
    cin>>x;
    for ( int i=0 ; i<x;i++)
    {
        Joueur z;
        joueurlist.push_back(z);
    }
    cout<<"nbre de staff";
    cin>>x;
    for ( int i=0 ; i<x;i++)
    {
        Staff z;
        stafflist.push_back(z);
    }
}

void Delegation::ajouter_joueur()
{
    Joueur z;
    joueurlist.push_back(z);
}

void Delegation::ajouter_staff()
{
    Staff s;
    stafflist.push_back(s);

}

void Delegation::modifier_joueur(string nom)
{
    int i=0;
    while ((i<joueurlist.size())&&(strcmp(joueurlist[i].get_nom,nom)!=0))
    {
        i++
    }
    if ( i = joueurlist.size())
        cout<<"ce joueur ne joue pas avec cette delegation"<<endl;
    else
        joueurlist[i].Joueur::modifier();



}

void Delegation::modifier_staff(string nom);
{
    int i=0;
    while ((i<stafflist.size())&&(strcmp(staffliste[i].nom, nom))!=0)
    {
        i++
    }
    if ( i = stafflist.size())
        cout<<"ce membre n'est pas avec cette delegation"<<endl;
    else
        stafflist[i].Staff::modifier();

}
void Delegation::supprimer_joueur(string nom);
{
    int i=0;
    while ((i<joueurlist.size())&&((strcmp(joueurlist[i].get_nom,nom)!=0))
    {
        i++
    }
    if ( i = joueurlist.size())
        cout<<"ce joueur ne joue pas avec cette delegation"<<endl;
    else
        joueurlist[i].clear();

    joueurlist.shrink_to_fit();


}

void Delegation::supprimer_staff(string nom);
{
    int i=0;
    while ((i<stafflist.size())&&(strcmp(staffliste[i].nom, nom))!=0)
    {
        i++
    }
    if ( i = stafflist.size())
        cout<<"ce membre n'est pas avec cette delegation"<<endl;
    else
        stafflist[i].clear();

    stafflist.shrink_to_fit();


}



