//
// Created by Maria Hilda Bermejo on 6/3/20.
//

#include "CTriangulo.h"

tnumero CTriangulo::semiperimetro()
{//-------------------------------
  return (l1+l2+l3)/2;
}

tnumero CTriangulo::area()
{//-----------------------
  tnumero s;
  s=semiperimetro();
  return  (sqrt(s*(s-l1)*(s-l2)*(s-l3)));
}

tnumero CTriangulo::perimetro()
{//---------------------------
  return (l1+l2+l3);
}