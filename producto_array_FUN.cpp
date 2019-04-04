#include<iostream>

using namespace std;

int productoelemento(int[5],int[5]);


int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={10,20,30,40,50};
	arr3=productoelemento(arr1,arr2);
	cout<<"El producto elemento a elemento es: [";
	for(int i=1;i<=5;i++){
			cout<<" "<<arr3[i]<<" ";
		}
	cout<<"]"<<endl;
	return 0;
}

int productoelemento(int arr1[5],int arr2[5]){
	int arr3[5];
	for(int i=0;i<=5;i++){
			arr3[i]=arr1[i]*arr[i];
		}
	return arr3;
}
