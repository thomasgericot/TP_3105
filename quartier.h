/*
  INF3105 -- Structures de donn�es et algorithmes
  UQAM | D�partement d'informatique
  Hiver 2020 | TP1 | quartier.h
*/

#if !defined(__QUARTIER_H__)
#define __QUARTIER_H__
#include <iostream>
#include <cmath>
#include <string>
#include "foyer.h"
#include "tableau.h"
using namespace std;

class Quartier {
  public:
    //...
  public:
    // Repr�sentation : � compl�ter.


  friend std::ostream& operator << (std::ostream&, const Quartier&);
  friend std::istream& operator >> (std::istream&, Quartier&);
};

#endif
