/*
  INF3105 -- Structures de données et algorithmes
  UQAM | Département d'informatique
  Hiver 2020 | TP1 | quartier.cpp
*/

#include <assert.h>
#include "quartier.h"

//...
std::ostream& operator << (std::ostream& os, const Quartier& q) {
cout<<"heysalut"<<endl;   
//...
  return os;
}

std::istream& operator >> (std::istream& is, Quartier& q) {
    //...
    return is;
}
