#ifndef MONTICULO_H
#define MONTICULO_H
#include <iostream>
using namespace std;

class monticulo{int *Arr,tam,PosAct,tamaniototal;

	public: monticulo(int);
			~monticulo();
			bool insertar(int);
			void atender(int);
			void imprimirArreglo();
			bool monticulo_lleno();
			int get_tam(){return tam;
			}
};

monticulo::monticulo(int tamanio){
	cout<<"veo que pasa?";
	tam = 0;
	Arr[tamanio+1];
	tamaniototal = tamanio;
}

monticulo::~monticulo(){
	delete Arr;
}

bool monticulo::insertar(int priodidad){
	int aux;
	if(tam==0){
		cout<<"veo1";
		Arr[1]=priodidad;
		return true;
	}else{
		if (monticulo_lleno()){ 
			cout<<"Tamanio insuficiente";
			return false;
		}else{
			cout<<"veo2";
			Arr[tam+1] = priodidad;
			tam = tam + 1;
			int i = tam;
			//revisa si el hijo es mayor que el padre y los intercambia
			while(i != 1 &&  Arr[i] < Arr[((int)i/2)]){
				aux = Arr[i];
				Arr[i] = Arr[(int)i/2];
				Arr[(int)i/2] = aux;
				i = (int)i/2;
		}
		return true;
	}
}
}

void monticulo::atender(int raiz){
	if (tam == 0) { 
		cout<<"No hay elementos";
	}else{
		Arr[1] = Arr[tam+1];
		tam = tam - 1;
		bool fin = false; 
		int i = 1;
		while ((2*i == tam+1) && !fin ){  
		//la posición i no es una hoja 
		//mínimo de los hijos 
			if ((2*i+1 == tam+1) && Arr[2*i+1] < Arr[2*i] ){ 
				PosAct = 2*i+1;
			}else{
				PosAct = 2*i;
			}
			//si es necesario, se intercambia
			if (Arr[PosAct] < Arr[i]) { 
				Arr[i]  =  Arr[PosAct];
				Arr[PosAct]  =  Arr[i]; 
				i = PosAct;
			}else{
				fin = true;
			}
		}
}	
}


void monticulo::imprimirArreglo(){
	cout<<"veo)))";
	for (int i=1;i<=tam+1;i++){
		cout<<"Posicion "<<i<<": "<<Arr[i];
	}
}

bool monticulo::monticulo_lleno(){
	if (tam == tamaniototal) { 
		return true;
		}else{return false;}
}



#endif
