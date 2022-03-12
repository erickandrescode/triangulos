// ANALISIS DE LOS LADOS Y ANGULOS DE UN TRIANGULO
// LABORATORIO 2
// Ing. Juan Carlos Duchen Cuellar
// Univ. Erick Andres Mamani Condori

#include <iostream>
#include <conio.h>
#include <math.h>
#define PI 3.14159265

using namespace std;
int main(){
	double a, b, c, alfa, beta, gamma, Area, perimetro, rad1, rad2, rad3, Ma, Mb, Mc;
	cout.precision(4);
	cout<<"CALCULO DE UN TRIANGULO"<<endl;
	cout<<"cada lado de un triangulo tendra un angulo opuesto"<<endl;
	cout<<"          alfa *"            <<endl;
	cout<<"              * *"           <<endl;
	cout<<"             *   *"          <<endl;
	cout<<"            *     *"         <<endl;
	cout<<"          b*       *c"       <<endl;
	cout<<"          *         *"       <<endl;
	cout<<"         *           *"      <<endl;
	cout<<"        *             *"     <<endl;
	cout<<"  gamma*****************beta"<<endl;
	cout<<"                a"<<endl;
	
	cout<<"por tanto:"<<endl<<endl;
	cout<<"para el lado a su angulo opuesto sera alfa"<<endl;
	cout<<"para el lado b su angulo opuesto sera beta"<<endl;
	cout<<"para el lado c ,su angulo opuesto sera gamma"<<endl<<endl;
	cout<<"por tanto para nuestros calculos elija una opcion:"<<endl<<endl;
	int x;
	cout<<"1- calculo con 3 lados"<<endl;
	cout<<"2- calculo con 2 lados y 1 angulo"<<endl;
	cout<<"3- calculo con 2 angulos y 1 lado"<<endl;
	cout<<"4- calculo con 3 angulos"<<endl<<endl;
	cin>> x;
	
	switch (x){
		case 1:
			cout<<"digite los valores de los lados del triangulo"<<endl<<endl;
			cout<<"valor de a = "; cin>> a;
			cout<<"valor de b = "; cin>> b;
			cout<<"valor de c = "; cin>> c;
			
			alfa=((acos(((b*b)+(c*c)-(a*a))/(2*b*c)))*180)/PI;
			beta=((acos(((a*a)+(c*c)-(b*b))/(2*a*c)))*180)/PI;
			gamma=((acos(((a*a)+(b*b)-(c*c))/(2*a*b)))*180)/PI;
			
			rad3=(gamma*PI)/180;
			Area=(b*a*sin(rad3))/2;
			perimetro=a+b+c;
			
			Ma = (sqrt(2*(b*b+c*c)-a*a))/2;
	        Mb = (sqrt(2*(a*a+c*c)-b*b))/2;
	        Mc = (sqrt(2*(a*a+b*b)-c*c))/2;
			
			cout<<"el valor del angulo de alfa es = " <<alfa<<endl;
			cout<<"el valor del angulo de beta es = " <<beta<<endl;
			cout<<"el valor del angulo de gamma es = " <<gamma<<endl;
			cout<<"el area del triangulo es = " <<Area<<endl;
			cout<<"el perimetro del triangulo es = " <<perimetro<<endl;
			cout<<"el valor de la mediana de A es "<<Ma <<endl;
	        cout<<"el valor de la mediana de B es "<<Mb <<endl;
	        cout<<"el valor de la mediana de C es "<<Mc <<endl;
			
			break;
			
		case 2:
				
			cout<<"digite los valores de los lados del triangulo"<<endl<<endl;
			cout<<"valor de a = "; cin>> a;
			cout<<"valor de b = "; cin>> b;
			cout<<"digite el angulo del triangulo"<<endl<<endl;
			cout<<"valor del angulo alfa = "; cin>> alfa;
			
			rad1=(alfa*PI)/180;
			beta=((asin((b*sin(rad1))/a))*180)/PI;
			gamma=180-alfa-beta;
			
			rad3=(gamma*PI)/180;
			c=(a*sin(rad3))/sin(rad1);
			Area=(b*a*sin(rad3))/2;
			perimetro=a+b+c;
			
			Ma = (sqrt(2*(b*b+c*c)-a*a))/2;
	        Mb = (sqrt(2*(a*a+c*c)-b*b))/2;
	        Mc = (sqrt(2*(a*a+b*b)-c*c))/2;
	        
			cout<<"el valor del angulo beta es = " <<beta<<endl;
			cout<<"el valor del angulo gamma es = " <<gamma<<endl;
			cout<<"el valor del lado c es = " <<c<<endl;
			cout<<"el valor del area del triangulo es = " <<Area<<endl;
			cout<<"el valor del perimetro del triangulo es = " <<perimetro<<endl;
			cout<<"el valor de la mediana de A es "<<Ma <<endl;
	        cout<<"el valor de la mediana de B es "<<Mb <<endl;
	        cout<<"el valor de la mediana de C es "<<Mc <<endl;
	        
			break;
			
		case 3:
			cout<<"digite el valor del lado del triangulo"<<endl<<endl;
			cout<<"valor de c = "; cin>> c;
			cout<<"digite los valores de los angulos del triangulo"<<endl<<endl;
			cout<<"valor del angulo alfa = "; cin>> alfa;
			cout<<"valor del angulo beta = "; cin>> beta;
			
			rad1=(alfa*PI)/180;
			gamma=180-alfa-beta;
			rad2=(beta*PI)/180;
			
			rad3=(gamma*PI)/180;
			a=(c*sin(rad1))/sin(rad3);
			b=(c*sin(rad2))/sin(rad3);
			
			Area=(b*a*sin(rad3))/2;
			perimetro=a+b+c;
			
			Ma = (sqrt(2*(b*b+c*c)-a*a))/2;
	        Mb = (sqrt(2*(a*a+c*c)-b*b))/2;
	        Mc = (sqrt(2*(a*a+b*b)-c*c))/2;
			
			cout<<"el valor del angulo gamma es = " <<gamma<<endl;
			cout<<"el valor del lado a es = " <<a<<endl;
			cout<<"el valor del lado b es = " <<b<<endl;
			cout<<"el valor del area del triangulo es = " <<Area<<endl;
			cout<<"el valor del perimetro del triangulo es = " <<perimetro<<endl;
			cout<<"el valor de la mediana de A es "<<Ma <<endl;
	        cout<<"el valor de la mediana de B es "<<Mb <<endl;
	        cout<<"el valor de la mediana de C es "<<Mc <<endl;
	        
			break;
			
		case 4:
				
			cout<<"digite los valores de los angulos del triangulo"<<endl<<endl;
            cout<<"valor del angulo alfa = "; cin>> alfa;
			cout<<"valor del angulo beta = "; cin>> beta;
			cout<<"valor del angulo gamma = "; cin>> gamma;
			cout<<"valor del Area = "; cin>>Area;
			
			rad1=(alfa*PI)/180;
			rad2=(beta*PI)/180;
			rad3=(gamma*PI)/180;
			
			c=sqrt((Area*2*sin(rad3))/(sin(rad1)*sin(rad2)));
			a=(c*sin(rad1))/sin(rad3);
			b=(c*sin(rad2))/sin(rad3);
			
			Area=(b*a*sin(rad3))/2;
			perimetro=a+b+c;
			
			Ma = (sqrt(2*(b*b+c*c)-a*a))/2;
	        Mb = (sqrt(2*(a*a+c*c)-b*b))/2;
	        Mc = (sqrt(2*(a*a+b*b)-c*c))/2;
	        
			cout<<"el valor del lado a es = " <<a<<endl;
			cout<<"el valor del lado b es = " <<b<<endl;
			cout<<"el valor del lado c es = " <<c<<endl;
			cout<<"el valor del area del triangulo es = " <<Area<<endl;
			cout<<"el valor del perimetro del triangulo es = " <<perimetro<<endl;
			cout<<"el valor de la mediana de A es "<<Ma <<endl;
	        cout<<"el valor de la mediana de B es "<<Mb <<endl;
	        cout<<"el valor de la mediana de C es "<<Mc <<endl;
	        
	}cin.get();
	return 0;
}
