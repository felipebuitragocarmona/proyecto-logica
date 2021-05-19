#include<iostream>
using namespace std;

int const filas=4;
int const columnas=5;

void imprimirMatrizBooleana(bool matriz[filas][columnas]);
void limpiarMatriz(bool disponibilidad[filas][columnas],int pesos[filas][columnas],int valor);
void imprimirMatrizTexto(string matriz[filas][columnas]);
void imprimirMatrizEnteros(int matriz[filas][columnas]);

int main(){
	bool disponibilidad[filas][columnas];
	string marcas[filas][columnas];
	string puertoCarga[filas][columnas];
	string tipoArticulo[filas][columnas];
	int pesos[filas][columnas];
	
	limpiarMatriz(disponibilidad,pesos,0);
	
	cout<<"Matriz disponibilidad"<<endl;
	imprimirMatrizBooleana(disponibilidad);
	
	cout<<"Matriz marcas"<<endl;
	imprimirMatrizTexto(marcas);
	cout<<"Matriz puerto carga"<<endl;
	imprimirMatrizTexto(puertoCarga);
	cout<<"Matriz tipo articulo"<<endl;
	imprimirMatrizTexto(tipoArticulo);
	
	cout<<"Matriz pesos"<<endl;
	imprimirMatrizEnteros(pesos);
	
	return 0;
}
void limpiarMatriz(bool disponibilidad[filas][columnas],int pesos[filas][columnas],int valor){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			disponibilidad[i][j]=1;	
			pesos[i][j]=0;
		}
	}
}
void imprimirMatrizBooleana(bool matriz[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void imprimirMatrizTexto(string matriz[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void imprimirMatrizEnteros(int matriz[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void mostrarDisponibles(bool disponibilidad[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(disponibilidad[i][j]==1){
				cout<<i<<","<<j<<endl;
			}
		}

	}
}
