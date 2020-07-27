#ifndef MONTICULO_H
#define MONTICULO_H
#include <iostream>
using namespace std;

class monticulo{int *Arr,tam,PosAct,tamaniototal;

	public: monticulo(int);
			~monticulo();
			bool insertar(int);
			int atender();
			void imprimirArreglo();
			bool monticulo_lleno();
			int get_tam(){return tam;
			}
};

monticulo::monticulo(int tamanio){
	tam = 0;
	PosAct = 1;
	Arr = new int[tamanio+1];
	tamaniototal = tamanio;
}

monticulo::~monticulo(){
	delete Arr;
}

bool monticulo::insertar(int priodidad){
int aux;
	if (monticulo_lleno()){ 
		cout<<"Tamanio insuficiente";
		return false;
	}else{
		Arr[PosAct] = priodidad;
		tam = tam + 1;
		int i = PosAct, divisor = 2;
		PosAct++;
		//revisa si el hijo es mayor que el padre y los intercambia
		while((i != 1) &&  (Arr[i] > Arr[(i/divisor)])){
			aux = Arr[i];
			Arr[i] = Arr[i/divisor];
			Arr[i/divisor] = aux;
			i = i/divisor;
	}
	return true;
}
}

int monticulo::atender(){
	int aux, raiz = 0;
	if (tam == 0) { 
		cout<<"No hay elementos";
	}else{
		//Arr[1] = Arr[PosAct];
		raiz = Arr[1];
		tam = tam - 1;
		PosAct--;
		bool fin = false; 
		int i = 1;
		while ((2*i >= PosAct) && !fin ){  
		//la posición i no es una hoja 
		//maximo de los hijos 
			if ((2*i+1 >= PosAct) && Arr[2*i+1] > Arr[2*i] ){ 
				PosAct = 2*i+1;
			}else{
				PosAct = 2*i;
			}
			//si es necesario, se intercambia
			if (Arr[PosAct] > Arr[i]) { 
				aux = Arr[i];
				Arr[i]  =  Arr[PosAct];
				Arr[PosAct]  =  aux; 
				i = PosAct;
			}else{
				fin = true;
			}
		
		}
		//Arr[1]=0;
}
return raiz;	
}


void monticulo::imprimirArreglo(){
	for (int i=1;i<PosAct;i++){
		if(Arr[i]==0)
			cout<<"Posicion "<<i<<": POSISCION VACIA ";
		else
			cout<<"Posicion "<<i<<": "<<Arr[i]<<"; ";
	}
}

bool monticulo::monticulo_lleno(){
	if (tam == tamaniototal) { 
		return true;
		}else{return false;}
}



#endif
