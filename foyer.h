/*
  INF3105 -- Structures de donn�es et algorithmes
  UQAM | D�partement d'informatique
  Hiver 2020 | TP1 | foyer.h
*/

#if !defined(__FOYER_H__)
#define __FOYER_H__
#include <iostream>
#include "tableau.h"


class Foyer {
  public:
      //...
  private:
    // Repr�sentation : � compl�ter.



  friend std::ostream& operator << (std::ostream&, const Foyer&);
  friend std::istream& operator >> (std::istream&, Foyer&);
};

#endif
