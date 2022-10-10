#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<time.h>
#include<windows.h>

using namespace std;

//SUMA
void suma(){
	system("cls");
    float *p1;
	float numero=0;
	int conta=0;
	float suma=0;
	int num_de_usuario=0;
	cout<<"Ingrese la cantidad de numeros a sumar"<<endl;
	cin>>num_de_usuario;
	while(conta<num_de_usuario){
		cout<<"ingrese un numero"<<endl;
	    cin>>numero;
	    conta++;
		suma=suma+numero;
	}
	cout<<"El resultado de la suma es: ";
	cout<<suma<<endl;
    p1 = &suma; 
    cout <<"La direccion de memoria de la suma es: " << p1 << endl; 
	system("pause");
}

//RESTA
void resta(){
	system("cls");
    float *p1;
	float numero=0;
	int conta=0;
	float resta=0;
	int num_de_usuario=0;
	cout<<"Ingrese la cantidad de numeros a restar"<<endl;
	cin>>num_de_usuario;
	while(conta<num_de_usuario){
		cout<<"ingrese un numero"<<endl;
	    cin>>numero;
	    conta++;
		resta=resta-numero;
	}
	cout<<"El resultado de la resta es: ";
	cout<<resta<<endl;
    p1 = &resta; 
    cout <<"La direccion de memoria de la resta es: " << p1 << endl;
	system("pause");
}

//MULTIPLICACION
void multiplicacion(){
	system("cls");
    float *p1;
	float numero=0;
	int conta=0;
	float mult=1;
	int num_de_usuario=0;
	cout<<"Ingrese la cantidad de numeros a multiplicar"<<endl;
	cin>>num_de_usuario;
	while(conta<num_de_usuario){
		cout<<"ingrese un numero"<<endl;
	    cin>>numero;
	    conta++;
		mult=mult*numero;
	}
	cout<<"El resultado de la multiplicacion es: ";
	cout<<mult<<endl;
    p1 = &mult; 
    cout <<"La direccion de memoria de la multiplicacion es: " << p1 << endl;
	system("pause");
}

//DIVISION
void division(){
	system("cls");
    float *p1;
	float numero=0;
	int conta=0;
	float div=1;
	int num_de_usuario=0;
	cout<<"Ingrese la cantidad de numeros a dividir"<<endl;
	cin>>num_de_usuario;
	while(conta<num_de_usuario){
		cout<<"ingrese un numero"<<endl;
	    cin>>numero;
	    conta++;
		div=div/numero;
	}
	cout<<"El resultado de la division es: ";
	cout<<div<<endl;
    p1 = &div; 
    cout <<"La direccion de memoria de la division es: " << p1 << endl;
	system("pause");
}

//POTENCIA
void potencia(){
	system("cls");
	int expo;
	int base;
	cout<<"Ingrese la base"<<endl;
	cin>>base;
	cout<<"Ingrese el exponente"<<endl;
	cin>>expo;
    base=pow(base,expo);
	cout<<"El resultado es: ";
	cout<<base<<endl;
    cout << "la direccion de memoria del exponenete es: " << &expo << endl;
    cout <<"La direccion de memoria de la base es: " << &base << endl;
	system("pause");
}

//LOGARITMO
void logaritmo(){
	system("cls");
    float *p1;
	float num=0;
	float result=0;
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	result=(log(num));
	cout<<"El logaritmo natural es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria del logaritmo es: " << p1 << endl;
	system("pause");
}

//EXPONENCIAL
void exponencial(){
	system("cls");
    float *p1;
	float num=0;
	float result=0;
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	result=(exp(num));
	cout<<"El exponencial es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria del exponencial es: " << p1 << endl;
	system("pause");
}

//FACTORIAL
void factorial(){
	system("cls");
    float *p1;
	float conta=1;
	float num=0;
	float result=1;
	cout<<"Ingrese el numero a calcular"<<endl;
	cin>>num;
	while(conta<=num){
		result=result*conta;
		conta=conta++;
	}
	cout<<"El resultado del factorial es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria del factorial es: " << p1 << endl;
	system("pause");
	return ;	
}

//BASE 10
void base_10(){
	system("cls");
    float *p1;
	float num=0;
	float result=0;
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	result=(log10(num));
	cout<<"La base 10 es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria de la base 10 es: " << p1 << endl;
	system("pause"); 
}

//RAIZ CUADRADA
void raiz_cuadrada(){
	system("cls");
    float *p1;
	float num=0;
	float result=0;
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	result=(sqrt(num));
	cout<<"La raiz cuadrada es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria de la raiz cuadrada es: " << p1 << endl;
	system("pause");	
} 

// RAIZ CUBICA
void raiz_cubica(){
	system("cls");
    float *p1;
	float num=0;
	float result=0;
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	result=(cbrt(num));
	cout<<"La raiz cubica es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria de la raiz cubica es: " << p1 << endl;
	system("pause");		
}

//SENO
void seno(){
	system("cls");
    float *p1;
	float angulo=0;
	float result=0;
	cout<<"Ingrese el angulo que desea calcular"<<endl;
	cin>>angulo;
	result=(sin(angulo*2*3.14159/360));
	cout<<"El seno del angulo es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria del seno es: " << p1 << endl;
	system("pause");	
}

//COSENO
void coseno(){
	system("cls");
    float *p1;
	float angulo=0;
	float result=0;
	cout<<"Ingrese el angulo que desea calcular"<<endl;
	cin>>angulo;
	result=(cos(angulo*3.14159/180));
	cout<<"El coseno del angulo es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria del coseno es: " << p1 << endl;
	system("pause");	
}

//TANGENTE
void tangente(){	
	system("cls");
    float *p1;
    float angulo=0;
	float result=0;
	cout<<"Ingrese el angulo que desea calcular"<<endl;
	cin>>angulo;
	result=(tan(angulo*2.0*3.14159/360.0));
	cout<<"La tangente del angulo es: ";
	cout<<result<<endl;
    p1 = &result;
    cout << "la direccion de memoria de la tangente es: " << p1 << endl;
	system("pause");
}

//PORCENTAJE
void porcentaje(){	
	system("cls");
    float *p1;
    float dinero=0;
	float porcentaje, total;
	cout<<"Ingrese el total del dinero numero"<<endl;
	cin>>dinero;
	cout<<"Ingrese el porcentaje de descuento"<<endl;
	cin>>porcentaje;
	total=(dinero*porcentaje)/100;
	cout<<"el descuento es: "<<total<<" y el total a pagar serian: "<<dinero-total<<endl;
    p1 = &total;
    cout<<"la direccion de memoria de la tangente es: "<<p1<<endl;
	system("pause");	
}

//FUNCION
void funcion(){	
	system("cls");
    float *p1;
    float x, y, resultado;
	cout<<"Digite el valor de Y"<<endl;
	cin>>x;
	cout<<"Digite el valor de Y"<<endl;
	cin>>y;
	resultado=(sqrt(x))/(pow(y,2)-1);
	cout<<"El resultado es: "<<resultado<<endl;
    p1 = &resultado;
    cout<<"la direccion de memoria de la tangente es: "<<p1<<endl;
	system("pause");	
}

//CAIDA LIbre
void caida_libre(){	
	system("cls");
	int option;
	float alt,tiem,vel,total;
	float *p1;
	cout<<"CAIDA LIBRE"<<endl;
	cout<<"1: Altura"<<endl;
	cout<<"2: tiempo"<<endl;
	cout<<"3: Velocidad"<<endl;
	cout<<"<<<Escoja una de las opciones disponibles que desea calcular>>>"<<endl;
	cin>>option;
	switch (option){
	case 1: 
	cout<<"Ingresa el tiempo que tarda en caer un objeto"<<endl;
	cin>> tiem;
	alt = (9.8*(tiem*2))/2;
	cout<<"el tiempo que tarda en caer el objeto es:  "<<tiem<<"Seg y dicha altura que se encuentra es:  "<<alt<<"Mt"<<endl;
	p1 = &alt;
    cout<<"la direccion de memoria de la altura es: "<<p1<<endl;
	system("pause");
	break;
	case 2: 
	cout<<"Ingresa la altura que se encuentra el objeto"<<endl;
	cin>> alt;
	tiem = ((2*alt)/9.8);
	total= sqrt(tiem);
	cout<<"la altura es de:  "<<alt<<"Mt y dicho tiempo que tarda en caer es de:  "<<total<<"Seg"<<endl;
	p1 = &total;
    cout<<"la direccion de memoria del tiempo es de: "<<p1<<endl;
	system("pause");
	break;
	case 3: 
	cout<<"Ingresa la altura que se encuentra el objeto"<<endl;
	cin>> alt;
	vel = ((2*9.8)*alt);
	total= sqrt(vel);
	cout<<"la altura es de:  "<<alt<<"Mt y dicha velocidad que tarda en caer es de:  "<<total<<"Mt/Seg"<<endl;
	p1 = &total;
    cout<<"la direccion de memoria de la velocidad es de: "<<p1<<endl;
	system("pause");
	break;
	default:
	cout<<"esta opcion no esxiste"<<endl;
	system("pause");
	break;
	}	
}

//MRU
void mru(){	
	system("cls");
	int option;
	float dist,tiem,vel;
	float *p1;
	cout<<"MOVIMIENTO RECTLILINEO UNIFORMEME"<<endl;
	cout<<"1: Distancia"<<endl;
	cout<<"2: Velocidad"<<endl;
	cout<<"3: Tiempo"<<endl;
	cout<<"<<<Escoja una de las opciones disponibles que desea calcular>>>"<<endl;
	cin>>option;
	switch (option){
	case 1: 
	cout<<"Ingrese la velocidad de dicho objeto"<<endl;
	cin>>vel;
	cout<<"Ingrese el tiempo de dicho objeto en movimiento"<<endl;
	cin>>tiem;
	dist = vel*tiem;
	cout<<"El objeto llevaba una velocidad de:  "<<vel<<"Mt/Seg con dicho tiempo transcurrido de:  "<<tiem<<"seg"<<endl;
	cout<<"deteniendose a una distancia de:  "<<dist<<"Mt"<<endl;
	p1 = &dist;
    cout<<"la direccion de memoria de la distancia es de: "<<p1<<endl;
	system("pause");
	break;
	case 2: 
	cout<<"Ingrese la distancia de dicho trayecto"<<endl;
	cin>>dist;
	cout<<"Ingrese el tiempo de dicho objeto en movimiento"<<endl;
	cin>>tiem;
	vel = dist/tiem;
	cout<<"La distancia del objeto es de:  "<<dist<<"Mt con dicho tiempo transcurrido:  "<<tiem<<"Seg "<<endl;
	cout<<"Con una velociad de:  "<<vel<<"Mt/Seg"<<endl;
	p1 = &vel;
    cout<<"La direccion de memoria de la distancia es de: "<<p1<<endl;
	system("pause");
	break;
	case 3: 
	cout<<"Ingrese la distancia de dicho trayecto"<<endl;
	cin>>dist;
	cout<<"Ingresa la velocidad de dicho objeto"<<endl;
	cin>>vel;
	tiem = dist/vel;
	cout<<"La distancia del objeto es de:  "<<dist<<"Mt con una velocidad de:  "<<vel<<"Mt/Seg"<<endl;
	cout<<"Con un tiempo de:  "<<tiem<<"Seg"<<endl;
	p1 = &tiem;
    cout<<"La direccion de memoria de la distancia es de: "<<p1<<endl;
	system("pause");
	break;
	default:
	cout<<"esta opcion no esxiste"<<endl;
	system("pause");
	break;
	}	
}

//MRUV
void mruv(){	
	system("cls");
	int option;
	float dist,tiem,velf,veli,acel,x;
	float *p1;
	cout<<"MOVIMIENTO RECTLILINEO UNIFORMEME VARIADO"<<endl;
	cout<<"1: Aceleracion"<<endl;
	cout<<"2: Velocidad final"<<endl;
	cout<<"3: Velocidad inicial"<<endl;
	cout<<"4: Espacio"<<endl;
	cout<<"5: Tiempo"<<endl;
	cout<<"<<<Escoja una de las opciones disponibles que desea calcular>>>"<<endl;
	cin>>option;
	switch (option){
	case 1: 
	cout<<"Ingrese la velocidad final de dicho objeto"<<endl;
	cin>>velf;
	cout<<"Ingrese la velocidad inicial de dicho objeto"<<endl;
	cin>>veli;
	cout<<"Ingrese el tiempo de dicho objeto en movimiento"<<endl;
	cin>>tiem;
	acel = (velf-veli)/tiem;
	cout<<"La aceleracion es de:  "<<acel<<"Mt/Seg²"<<endl;
	p1 = &acel;
    cout<<"la direccion de memoria de la aceleracion es de: "<<p1<<endl;
	system("pause");
	break;
	case 2: 
	cout<<"Ingrese la velocidad inicial de dicho objeto"<<endl;
	cin>>veli;
	cout<<"Ingrese la aceleracion de dicho objeto"<<endl;
	cin>>acel;
	cout<<"Ingrese el tiempo de dicho objeto en movimiento"<<endl;
	cin>>tiem;
	velf = veli+acel*tiem;
	cout<<"La velocidad final es de:  "<<velf<<"Mt/Seg"<<endl;
	p1 = &velf;
    cout<<"La direccion de memoria de la velocidad final es de: "<<p1<<endl;
	system("pause");
	break;
	case 3: 
	cout<<"Ingrese la velocidad final de dicho objeto"<<endl;
	cin>>veli;
	cout<<"Ingrese la aceleracion de dicho objeto"<<endl;
	cin>>acel;
	cout<<"Ingrese el tiempo de dicho objeto en movimiento"<<endl;
	cin>>tiem;
	veli = velf-acel/tiem;
	cout<<"La velocidad inicial es de:  "<<velf<<"Mt/Seg"<<endl;
	p1 = &veli;
    cout<<"La direccion de memoria de la celocidad inicial es de: "<<p1<<endl;
	system("pause");
	break;
	case 4: 
	cout<<"Ingrese la velocidad inicial de dicho objeto"<<endl;
	cin>>veli;
	cout<<"Ingrese la velocidad final de dicho objeto"<<endl;
	cin>>velf;
	cout<<"Ingrese el tiempo de dicho objeto en movimiento"<<endl;
	cin>>tiem;
	x = ((veli+velf)/2)*tiem;
	cout<<"El espacio recorrido por un movil es:  "<<x<<endl;
	p1 = &x;
    cout<<"La direccion de memoria del esapacio es de: "<<p1<<endl;
	system("pause");
	break;
	case 5: 
	cout<<"Ingrese la velocidad final de dicho objeto"<<endl;
	cin>>velf;
	cout<<"Ingrese la velocidad inicial de dicho objeto"<<endl;
	cin>>veli;
	cout<<"Ingrese la aceleracion de dicho objeto"<<endl;
	cin>>acel;
	tiem = (velf-veli)/acel;
	cout<<"El tiempo de dicho objeto es:  "<<velf<<"Mt/Seg"<<endl;
	p1 = &velf;
    cout<<"La direccion de memoria del tiempo es de: "<<p1<<endl;
	system("pause");
	break;
	default:
	cout<<"Esta opcion no esxiste"<<endl;
	system("pause");
	break;
	}	
}

//MATRIZ
void matrices(){	
	system("cls");
	int matriz;
	int A[100][100], B[100][100], C[100][100];
	int f1,f2,c1,c2;
	float *p1;
	cout<<"MATRICES"<<endl;
	cout<<"1: Suma de Matrices"<<endl;
	cout<<"2: Resta de Matrices"<<endl;
	cout<<"3: Multiplicacion de Matrices"<<endl;
	cout<<"<<<Escoja una de las opciones disponibles que desea calcular>>>"<<endl;
	cin>>matriz;
	switch (matriz){
	case 1: 
	cout<<"Ingrese el numero de filas para la primera matriz\n";
	cin>>f1;
	cout<<"Ingrese el numero de columnas para la primera matriz\n";
	cin>>c1;
	cout<<"Ingrese el numero de filas para la segunda matriz\n";
	cin>>f2;
	cout<<"Ingrese el numero de columnas para la segunda matriz\n";
	cin>>c2;

	if (c1==f2){
		for (int i = 0; i < f1; i++)
		    for (int j = 0; j < c1; j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<") de la primera matriz\n";
			cin>>A[i][j];
			}
		for (int i = 0; i < f2; i++)
            for (int j = 0; j < c2; j++){
			cout<<"Ingrese el elmento ("<<i<<","<<j<<") de la segunda matriz\n";
		    cin>>B[i][j];
		}
        for (int i = 0; i < f1; i++){
		    for (int j = 0; j < c1; j++){
			cout<<A[i][j]<<"\t";
			}
		cout<<endl;
		}
		cout<<endl;
		for (int i = 0; i < f2; i++){
            for (int j = 0; j < c2; j++){
			cout<<B[i][j]<<"\t";
		}
		cout<<endl;
		}
		for (int i = 0; i < f1; i++)
			for (int j = 0; j < c2; j++)
				C[i][j]=A[i][j]+B[i][j];
		cout<<endl;
		for (int i = 0; i < f1; i++){
				for (int j = 0; j < c2; j++){
					cout<<C[i][j]<<"\t";
				}
				cout<<endl;
			}
	}else 
	cout<<"la matriz no es cuadrada, asi que no se podra sumar.";
	system("pause");
	break;
	case 2: 
	cout<<"Ingrese el numero de filas para la primera matriz\n";
	cin>>f1;
	cout<<"Ingrese el numero de columnas para la primera matriz\n";
	cin>>c1;
	cout<<"Ingrese el numero de filas para la segunda matriz\n";
	cin>>f2;
	cout<<"Ingrese el numero de columnas para la segunda matriz\n";
	cin>>c2;

	if (c1==f2){
		for (int i = 0; i < f1; i++)
		    for (int j = 0; j < c1; j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<") de la primera matriz\n";
			cin>>A[i][j];
			}
		for (int i = 0; i < f2; i++)
            for (int j = 0; j < c2; j++){
			cout<<"Ingrese el elmento ("<<i<<","<<j<<") de la segunda matriz\n";
		    cin>>B[i][j];
		}
        for (int i = 0; i < f1; i++){
		    for (int j = 0; j < c1; j++){
			cout<<A[i][j]<<"\t";
			}
		cout<<endl;
		}
		cout<<endl;
		for (int i = 0; i < f2; i++){
            for (int j = 0; j < c2; j++){
			cout<<B[i][j]<<"\t";
		}
		cout<<endl;
		}
		for (int i = 0; i < f1; i++)
			for (int j = 0; j < c2; j++)
				C[i][j]=A[i][j]-B[i][j];
		cout<<endl;
		for (int i = 0; i < f1; i++){
				for (int j = 0; j < c2; j++){
					cout<<C[i][j]<<"\t";
				}
				cout<<endl;
			}
	}else 
	cout<<"la matriz no es cuadrada, asi que no se podra restar.";
	system("pause");
	break;
	case 3: 
	cout<<"Ingrese el numero de filas para la primera matriz\n";
	cin>>f1;
	cout<<"Ingrese el numero de columnas para la primera matriz\n";
	cin>>c1;
	cout<<"Ingrese el numero de filas para la segunda matriz\n";
	cin>>f2;
	cout<<"Ingrese el numero de columnas para la segunda matriz\n";
	cin>>c2;

	if (c1==f2){
		for (int i = 0; i < f1; i++)
		    for (int j = 0; j < c1; j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<") de la primera matriz\n";
			cin>>A[i][j];
			}
		for (int i = 0; i < f2; i++)
            for (int j = 0; j < c2; j++){
			cout<<"Ingrese el elmento ("<<i<<","<<j<<") de la segunda matriz\n";
		    cin>>B[i][j];
		}
        for (int i = 0; i < f1; i++){
		    for (int j = 0; j < c1; j++){
			cout<<A[i][j]<<"\t";
			}
		cout<<endl;
		}
		cout<<endl;
		for (int i = 0; i < f2; i++){
            for (int j = 0; j < c2; j++){
			cout<<B[i][j]<<"\t";
		}
		cout<<endl;
		}
		for (int i = 0; i < f1; i++)
			for (int j = 0; j < c2; j++)
				C[i][j]=0;
		
		for (int i = 0; i < f1; i++)
			for (int j = 0; j < c2; j++)
			for (int z = 0; z < c1; z++)
			C[i][j]=C[i][j]+A[i][z]*B[z][j];
		cout<<endl;
		for (int i = 0; i < f1; i++){
				for (int j = 0; j < c2; j++){
					cout<<C[i][j]<<"\t";
				}
				cout<<endl;
			}
	}else 
	cout<<"no se pueden multiplicar las matrices";
	system("pause");
	break;
	default:
	cout<<"esta opcion no esxiste."<<endl;
	system("pause");
	break;
	}	
}

//LEY DE OHM
void ley_de_ohm(){	
	system("cls");
	int option;
	float vol,inte,res;
	cout<<"LEY DE OHM"<<endl;
	cout<<"1: Calcular Voltaje"<<endl;
	cout<<"2: Calcular Intensidad"<<endl;
	cout<<"3: Calcular Resistencia"<<endl;
	cout<<"<<<Escoja una de las opciones disponibles que desea calcular>>>"<<endl;
	cin>>option;
	switch (option){
	case 1: 
	cout<<"Ingrese la resistencia del circuito"<<endl;
	cin>>res;
	cout<<"Ingrese la intensidad del circuito"<<endl;
	cin>>inte;
	vol = res/inte;
	cout<<"El voltaje del circuito es de: "<<vol<<"V"<<endl;
	system("pause");
	break;
	case 2: 
	cout<<"Ingrese la resistencia del circuito"<<endl;
	cin>>res;
	cout<<"Ingrese el voltaje del circuito"<<endl;
	cin>>vol;
	inte = vol/res;
	cout<<"La intensidad del circuito es de: "<<inte<<"A"<<endl;
	system("pause");
	break;
	case 3: 
	cout<<"Ingrese la intensidad del circuito"<<endl;
	cin>>res;
	cout<<"Ingrese el voltaje del circuito"<<endl;
	cin>>vol;
	res = vol/inte;
	cout<<"La resisencia del circuito es de: "<<res<<"Ω"<<endl;
	system("pause");
	break;
	default:
	cout<<"esta opcion no esxiste"<<endl;
	system("pause");
	break;
	}	
}

//MENU
int main(){
	system("color 0a");
	int opcion;
	while(opcion!=50){
	    system("cls");
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"1:  Suma"<<endl;
		cout<<"2:  Resta"<<endl;
		cout<<"3:  Multiplicacion"<<endl;
		cout<<"4:  Division"<<endl;
		cout<<"5:  Potencia"<<endl;
		cout<<"6:  Logaritmo"<<endl;
		cout<<"7:  Exponencial"<<endl;
		cout<<"8:  Factorial"<<endl;
		cout<<"9:  Base 10"<<endl;
		cout<<"10: Raiz Cuadrada"<<endl;
		cout<<"11: Raiz Cubica"<<endl;
		cout<<"12: Seno"<<endl;
		cout<<"13: Coseno"<<endl;
		cout<<"14: Tangente"<<endl;
		cout<<"15: Porcentaje"<<endl;
		cout<<"16: Funcion de dos variables"<<endl;
		cout<<"17: caida libre"<<endl;
		cout<<"18: MRU" << endl;
		cout<<"19: MRUV"<< endl;
		cout<<"20: Matrices"<<endl;
		cout<<"21: Ley de Ohm"<<endl;
		cout<<"22: SALIR"<<endl;
		cout<<"<<<Escoja una de las opciones disponibles>>>"<<endl;
		cin>>opcion;
        switch (opcion){
        case 1:
        system("cls");
		suma();
        break;
        case 2:
        system("cls");
		resta();
        break;
        case 3:
        system("cls");
		multiplicacion();
        break;
        case 4:
        system("cls");
		division();
        break;
        case 5:
        system("cls");
		potencia();
        break;
        case 6:
        system("cls");
		logaritmo();
        break;
        case 7:
        system("cls");
		exponencial();
        break;
        case 8:
        system("cls");
		factorial();
        break;
        case 9:
        system("cls");
		base_10();
        break;
        case 10:
        system("cls");
		raiz_cuadrada();
        break;
        case 11:
        system("cls");
		raiz_cubica();
        break;
        case 12:
        system("cls");
		coseno();
        break;
        case 13:
        system("cls");
		tangente();
        break;
        case 14:
        system("cls");
		suma();
        break;
		case 15:
		system("cls");
		porcentaje();
		break;
		case 16:
		system("cls");
		funcion();
		break;
		case 17:
		system("cls");
		caida_libre();
		break;
		case 18:
		system("cls");
		mru();
		break;
		case 19:
		system("cls");
		mruv();
		break;
		case 20:
		system("cls");
		matrices();
		break;
		case 21:
		system("cls");
		ley_de_ohm();
		break;
        default:
        cout<<"Esta opcion no esxiste"<<endl;
		return 0;
        break;
        }
	}
}