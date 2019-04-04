#include<iostream>

using namespace std;

int main(){
	int a;
	int b;
	cout<<"Ingrese el primer numero entero ";
	cin>>a;
	cout<<"Ingrese el segundo numero entero ";
	cin>>b;
	int primo=2;
	for(int i=a;i<=b;i++){
		bool esprimo=true;
		if(i>2){
			for(int j=2;j<=i-1;j++){
				if(i%j==0 and esprimo){
					esprimo=false;				
				}
			}
			if(esprimo){
					esprimo=false;				
					primo=i;
					cout<<primo<<endl;
			}
		}	
	}
	return 0;
}
