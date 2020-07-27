#include <cstdlib>
#include <iostream>
#include "monticulo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	monticulo c(5);
	c.insertar(1);
	c.insertar(3);
	c.insertar(12);
	c.insertar(72);
	c.insertar(24);
	c.imprimirArreglo();
	c.atender(1);
	cout<<endl;
	c.imprimirArreglo();
	return 0;
}
