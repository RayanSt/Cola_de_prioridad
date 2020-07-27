#include <cstdlib>
#include <iostream>
#include "monticulo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	monticulo c(5);
	//cout<<c.get_tam()<<endl;
	c.insertar(1);
	cout<<c.get_tam()<<endl;
	c.insertar(3);
	cout<<c.get_tam()<<endl;
	c.insertar(12);
	cout<<c.get_tam()<<endl;
	c.insertar(72);
	c.insertar(24);
	c.imprimirArreglo();
	return 0;
}
