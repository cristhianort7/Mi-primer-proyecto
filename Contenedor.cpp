#include <iostream>
#include <cmath> //para usar rand() y srand()
#include <ctime> // para usar time()
#include <cstdlib> //para que podamos ingresar a la funciones, creo que cmath y time están incluidas en cstdlib
#include "Contenedor.h"
using namespace std;

Contenedor::Contenedor(){
	//rand() produce un valor desde 0 hasta RAND_MAX 
	//srand() proporciona la semilla para que la funcion rand() me de numeros distintos
	//srand() recibe time(NULL) que lee un entero sin signo de la computadora
	srand(time(NULL));
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 7; j++){
			matrizContenedor[i][j] = rand() % 41;
		}
	}
}

Contenedor::~Contenedor(){}

int Contenedor::ventaProducto(int x, int y){
	return matrizContenedor[x][y];
}

int Contenedor::ventaSemanal(){
	int suma = 0;
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 7; j++){
			suma += matrizContenedor[i][j];
		}
	}
	return suma;
}

double Contenedor::ventaPromProducto(int p){
	int suma = 0;
	double promedio = 0;
	for(int i = 0; i < 7; i++){
		suma += matrizContenedor[p-1][i];
	}
	promedio = suma/7.0
		;
	return promedio;
}

int Contenedor::prodMenorVenta(int y){
	int menor = 41;
	int producto = 0;
	for(int i = 0; i < 15; i++){
		if(matrizContenedor[i][y] < menor){
			menor = matrizContenedor[i][y];
			producto = i;
		}
	}
	return producto;
}

void Contenedor::mostrarMatriz(){
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 7; j++){
			cout<<matrizContenedor[i][j]<< " ";
		}
		cout<<endl;
	}
}
