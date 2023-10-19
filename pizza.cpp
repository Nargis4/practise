#include<iostream>
using namespace std;

int main8(){
	cout<<"enter choice"<<endl;
	cout<<"1 for pineapple pizza"<<endl;
	cout<<"2 for cheese pizza"<<endl;
	cout<<"3 for margarita pizza"<<endl;
	
	int n;
	cin>>n;
	
	switch(n){
		case 1 :{
			
			cout<<"pineapple";
			break;
				}
		case 2: {
			cout<<"cheese";
		
			break;
		}
		case 3 :{
			cout<<"margarita";
			break;
		}
		default:
			cout<<"invalid";
	}
	return 0;

}
