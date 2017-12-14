#include <iostream>
#define PI 3.14159
#include <cstdlib>

//|--------------------------------------//
//|Medidor de área						|
//|Autor: Julimar J. Freitas Melo		|
//|14-12-2017							|
//|Versão: 1.0							|
//|-------------------------------------//

using namespace std;


float AreaQuadrado(float lado){
	return lado * lado;
}

float AreaCirculo(float raio){
	float auxiliar = raio * raio;
	float result = auxiliar * PI;
	return result;
}

float AreaRetangulo(float base, float altura){
	return base * altura;
}

float AreaParalelogramo(float base, float altura){
	return base * altura;
}

float AreaLosango(float diagonal1, float diagonal2){
	return (diagonal1 * diagonal2) / 2;
}

float AreaTrapezio(float base1,float base2, float altura){
	return ((base1 * base2) * altura)/2;
}

int main()
{
	int aux;
	float aux2;
	float aux3;
	float aux4;
	float aux5;

	 
	cout << "|--------------------------------------\n";
	cout << "| Qual figura você quer medir a área?   \n";
	cout << "| 1 - Quadrado							 \n";
	cout << "| 2 - Circulo							 \n";
	cout << "| 3 - Retangulo						 \n";
	cout << "| 4 - Paralelogramo					 \n";
	cout << "| 5 - Losango							 \n";
	cout << "| 6 - Trapezio 						 \n";
	cout << "|-------------------------------------- \n";
	cout << "| ";
	cin >> aux;
	
	switch(aux){
		case 1:
			system("cls");
			cout << "| Digite o lado (M): ";
			cin >> aux2;
			aux3 = AreaQuadrado(aux2);
			cout << "| Resultado: " << aux3 << " M2 " << "\n";
			break;
		case 2:
			system("cls");
			cout << "| Digite o raio(M): ";
			cin >> aux2;
			aux3 = AreaCirculo(aux2);
			cout << "| Resultado: " << aux3 << " M2" <<"\n";
			break;
		case 3:
			system("cls");
			cout << "| Digite a base(M): ";
			cin >> aux2;
			cout << "| Digite a altura(M): ";
			cin >> aux3;
			aux4 = AreaRetangulo(aux2,aux3);
			cout << "| Resultado: " << aux4 << " M2" << "\n";
			break;
        case 4:
       		system("cls");
			cout << "| Digite a base(M):";
			cin >> aux2;
			cout << "| Digite a altura(M): ";
			cin >> aux3;
			aux4 = AreaParalelogramo(aux2,aux3);
			cout << "| Resultado: " << aux4 << " M2" << "\n";
			break;
		case 5:
			system("cls");
			cout << "| Digite a diagonal maior (M): ";
			cin >> aux2;
			cout << "| Digite a diagonal menor (M): ";
			cin >> aux3;
			aux4 = AreaLosango(aux2,aux3);
			cout << "| Resultado : " << aux4 << " M2 " << "\n";
			break;
		case 6:
			system("cls");
			cout << "| Digite a base maior (M): ";
			cin >> aux2;
			cout << "| Digite a base menor (M): ";
			cin >> aux4;
			cout << "| Digite a altura (M): ";
			cin >> aux3;
			aux5 = AreaTrapezio(aux2,aux4,aux3);
			cout << "| Resultado: " << aux5 << " M2 " << "\n";
			
		default:
			cout << "Erro tipo de área não encontrado!";
			break;
		
	}
	
	
	
	
	
}