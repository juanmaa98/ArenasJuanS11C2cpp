#include<iostream>

using namespace std;

int factorial(int);


int main(){
	int n;
	int fact;
	cout<<"Ingrese un numero entero ";
	cin>>n;
	fact=factorial(n);
	cout<<"el factorial de "<<n<<" es: ";
	cout<<fact<<endl;
	

	return 0;
}

int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
			fact*=i;
		}
	return fact;
}
