
class monticulo{int *Arr,tam,PosAct,tamaniototal;

	public: monticulo(int);
			~monticulo();
			bool insertar(int);
			bool insertar1(int);
			int atender(int);
			void imprimirArreglo();
			bool monticulo_lleno();

};

monticulo::monticulo(int tamanio){
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
		Arr[1]=priodidad;
	}else{
		if (monticulo_lleno()){ 
		cout<<"Tamanio insuficiente";
		}else{
			Arr[tam+1] = priodidad;
			tam = tam + 1;
			int i = tam;
			while(i =! 1 &&  Arr[i] < Arr[((int)i/2)]){
				aux = Arr[i];
				Arr[i] = Arr[(int)i/2]
				Arr[(int)i/2] = aux;
				i = (int)i/2
		}
	}
}
}

int monticulo::atender(int raiz){
	
}

void monticulo::imprimirArreglo(){
	
}

bool monticulo::monticulo_lleno(){
	if tam == tamaniototal { 
		return true;
		}else{return false}
}
