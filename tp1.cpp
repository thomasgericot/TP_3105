/*
  INF3105 -- Structures de données et algorithmes
  UQAM | Département d'informatique
  Hiver 2020 | TP1 | tp1.cpp
*/

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <limits>
#include "tableau.h"
#include "quartier.h"

using namespace std;

int tp1(istream& entree){
    char car; //les trois instructions suivantes gèrent correctement le découpage par rapport au ';'
    while(entree >> car){
        entree.unget();
        Quartier q;
        entree >> q;
        cout<<q<<endl;
// ajouter le code nécessaire
    }
    //Analyse
    //...
    return 0;
}
// syntaxe d'appel : ./tp1 [nomfichier.txt]
int main(int argc, const char** argv){
    // Gestion de l'entrée :
    //  - lecture depuis un fichier si un argument est spécifié;
    //  - sinon, lecture depuis std::cin.
    if(argc>1){
         std::ifstream entree_fichier(argv[1]);
         if(entree_fichier.fail()){
             std::cerr << "Erreur d'ouverture du fichier '" << argv[1] << "'" << std::endl;
             return 1;
         }
         return tp1(entree_fichier);
    }else
         return tp1(std::cin);

    return 0;
}
