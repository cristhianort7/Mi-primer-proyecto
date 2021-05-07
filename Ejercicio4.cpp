#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void mostrarVector(int vector[], int n){
	for(int i = 0; i < n; i++){
		cout<<vector[i]<<" ";
	}
}
	
void ordenarAscendentemente(int vector[], int n){
	int aux = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(vector[i]>vector[j]){
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	
	cout<<"Primer ejercicio\n";
	cout<<"\n";
	//generar el vector A
	srand(time(NULL));
	int A[20];
	for(int i = 0; i < 20; i++){
		A[i] = 1 + rand() % 100;
	}
	//mostrar el vector A
	cout<<"El vector A es: "<<"\n";
	mostrarVector(A,20);
	
	//Encontrar el número más grande y más pequeño de A
	int mayor = -1;
	int menor = 101;
	for(int i = 0; i < 20; i++){
		if(A[i] > mayor) mayor = A[i];
		if(A[i] < menor) menor = A[i];
	}
	//Imprimir el número más grande de A
	cout<<"\nEl número más grande de A es: "<< mayor <<"\n";
	
	//Imprimir el número más pequeño de A
	cout<<"El número más pequeño de A es: "<< menor <<"\n";
	
	//Creamos el vector B
	int B[20];
	//La primera mitad de B es multiplicar cada elemento de la segunda mitad de A * mayor
	for(int i = 0; i < 10; i++){
		B[i] = A[i+10]*mayor;
	}
	//La segunda mitad de B es multiplicar cada elemento de la primera mitad de A * menor
	for(int i = 0; i < 10; i++){
		B[i+10] = A[i]*menor;
	}
	
	//mostrar el vector B
	cout<<"El vector B es: "<<"\n";
	mostrarVector(B,20);
	cout<<"\n";
	cout<<"\nSegundo ejercicio\n";
	cout<<"\n";
	//Crear los vectores A y B
	
	//generar el vector A
	for(int i = 0; i < 20; i++){
		A[i] = 1+ rand() % 100;
	}
	//mostrar el vector A
	cout<<"El vector A es: "<<"\n";
	mostrarVector(A,20);
	cout<<"\n";
	
	//generar el vector B
	for(int i = 0; i < 20; i++){
		B[i] = 1+ rand() % 100;
	}
	//mostrar el vector B
	cout<<"El vector B es: "<<"\n";
	mostrarVector(B,20);
	cout<<"\n";
	
	int C[20];
	
	//Creamos el vector C que es sumar el primer elemento de A con el último de B y así sucesivamente
	
	for(int i = 0; i < 20; i++){
		C[i] = A[i] + B[19-i];
	}
	
	cout<<"\n";
	//mostrar el vector C
	cout<<"El vector C es: "<<"\n";
	mostrarVector(C,20);
	
	cout<<"\n";
	cout<<"\nTercer ejercicio\n";
	cout<<"\n";
	
	
	//Se ordena ascentemente el vector A
	ordenarAscendentemente(A,20);
	//mostrar el vector A
	cout<<"El vector A ordenado es: "<<"\n";
	mostrarVector(A,20);
	cout<<"\n";
	//Se ordena ascentemente el vector B
	ordenarAscendentemente(B,20);
	//mostrar el vector B
	cout<<"El vector B ordenado es: "<<"\n";
	mostrarVector(B,20);
	cout<<"\n";
	int D[40];
	for(int i = 0; i < 40; i++){
		if(i < 20) D[i] = A[i];
		else D[i] = B[i];
	}
	
	cout<<"\n";
	//Se ordena ascentemente el vector D
	ordenarAscendentemente(D,40);
	//mostrar el vector D
	cout<<"El vector ordenado es: "<<"\n";
	mostrarVector(D,40);
	cout<<"\n";
	return 0;
}

