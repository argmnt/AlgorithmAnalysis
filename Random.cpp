#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int n;
	int i=0;
	cout<<"Enter \n";
	cin>>n;
	int array[n];
	srand((unsigned)time(0));
	for(i=0;i<n;i++){
		array[i]=(rand()%n)+1;
	}
		for(i=0;i<n;i++){
		cout<<array[i];
		cout<<"\n";
	}
	return 0;
}
