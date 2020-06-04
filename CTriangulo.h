//
// Created by Maria Hilda Bermejo on 6/3/20.
//

#ifndef EJ_2_TRIANGULO_CTRIANGULO_H
#define EJ_2_TRIANGULO_CTRIANGULO_H

#include <iostream>
#include <cmath>

using namespace std;

using tnumero=double;

class CTriangulo {
private:
   tnumero l1,l2,l3;
   tnumero semiperimetro();
public:
    CTriangulo(){};
    CTriangulo(tnumero _l1, tnumero _l2, tnumero _l3):l1(_l1),l2(_l2),l3(_l3) {};
    virtual ~CTriangulo(){ cout << "\nDestruyendo el objeto .. ";}
    tnumero area();
    tnumero perimetro();
    //---metodos de acceso
    void setL1(tnumero _l1){ l1 = _l1;}
    tnumero getL1(){ return l1;}
    void setL2(tnumero _l2) { l2=_l2;}
    tnumero getL2(){ return l2;}
    void setL3(tnumero _l3) { l3=_l3;}
    tnumero getL3(){ return l3;}
};

#endif //EJ_2_TRIANGULO_CTRIANGULO_H
