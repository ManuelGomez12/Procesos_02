#include <conio.h>
#include <iostream>
#include <stdlib.h> //para new

using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void insertar_lista(nodo*&,int);//Funcion

main(){
	nodo *lista=NULL;
	int dato, opc;
	char res;
	do{
	cout<<"1) Insertar datos";	
	cout<<"2) Mostrar datos";
	cout<<"3) Buscar un datos";
	cout<<"4) Eliminar datos";
	cout<<"5) Eliminar";
	cout<<"6) Salir";
	cin>>opc;
	switch(opc){
	case 1:
	do{
	cout<<"teclee un numero"<<endl;
	cin>>dato;
	insertar_lista(lista,dato);
	cout<<"desea agregar otro elemento? s/n";
	cin>>res;
}while (res!= 'n');
	break;
	case 2:
		cout<<"Mostrando Datos";
		cout<<lista;
	break;
	case 3:
		cout<<"Que elemento desea buscar: ";
		cin>>dato;
		cout<<"Su elemento ";
		cout<<dato;
	break;
	case 4:
		cout<<"que elemento desea eliminar";
		cin>>dato;
		cout<<"elemento "<<"eliminado";
	break;
	case 5:
		cout<<"desea eliminar toda la lista";
		
	break;
	case 6: 
		cout<<"desea salir de toda la aplicaion";
		cin>>res;
		if (res!= 's'){
			return 0;
		}
		else
		{
			return opc;
		}
	break;
	}
}
		
		
}

void insertar_lista(nodo *&lista, int n){
	nodo *nvo_nodo = new nodo();
	nvo_nodo -> dato = n;
	nodo *aux1 = lista;
	nodo *aux2;
	while((aux1 !=NULL)&&(aux1->dato<n)){
		aux2 = aux1;
		aux1 = aux1 -> siguiente;
	}
	if(lista == aux1){
		lista = nvo_nodo;
	}
	else{
		aux2 -> siguiente = nvo_nodo;
	}
	nvo_nodo ->siguiente = aux1;
	cout<<"\t elemento: "<<n<<" insertado a la lista correctamente"<<endl;
}
