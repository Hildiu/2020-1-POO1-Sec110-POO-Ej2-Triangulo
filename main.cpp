//-- Dato de entrada: l1,l2,l3 (double)
//-- Dato de salida : area (double), perimetro (double)

#include <iostream>
#include "CTriangulo.h"
using namespace std;

int main()
{ tnumero lado1,lado2,lado3;

do {
  cout << "\nLos valores deben poder formar un triangulo\n";
  cout << "Lado 1 : ";
  cin >> lado1;
  cout << "Lado 2 : ";
  cin >> lado2;
  cout << "Lado 3 : ";
  cin >> lado3;
}while(!( (lado1+lado2>lado3) and (lado2+lado3>lado1) and (lado1+lado3>lado2) ));

  //--- paso cuando se puede formar un triangulo
  CTriangulo T1(lado1, lado2, lado3);
  cout <<"El area es : " << T1.area() <<"\n";
  cout <<"El perimetro es : " << T1.perimetro() << "\n";

  //--- vamos a realizar un segundo calculo modificando el lados
  cout << "modifico los lados del triangulo y hacemos otro calculo....\n";
  T1.setL1(T1.getL1() + 5);
  T1.setL2( T1.getL2() + 5);
  T1.setL3(T1.getL3() + 5);
  cout <<"El area es : " << T1.area() <<"\n";
  cout <<"El perimetro es : " << T1.perimetro() << "\n";

  return 0;
}

