//write c program (using fun overloading)to sort value of 10 int,10 long 
// 10 double.

#include<iostream>
using namespace std;

void sort(int a[10]){
	int i;
	for(i=0;i<10;i++){
		for(int j=i;j<10;j++){
			if(a[i]<a[j]){
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=10;i<10;i++){
		cout<<"\n"<<a[i];
	}
}
void sort(long x[10]){
	int i;
	for(i=0;i<10;i++){
		for(int j=i;j<10;j++){
			if(x[i]<x[j]){
				int temp;
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for(int i=10;i<10;i++){
		cout<<"\n"<<x[i];
	}
}
void sort(double y[10]){
	int i;
	for(i=0;i<10;i++){
		for(int j=i;j<10;j++){
			if(y[i]<y[j]){
				int temp;
				temp=y[i];
				y[i]=y[j];
				y[j]=temp;
			}
		}
	}
	for(int i=10;i<10;i++){
		cout<<"\n"<<y[i];
	}
}
int main(){
	int ch;
	int a[10];
	long x[10];
	double y[10];
	cout<<"Which type of values you want to sort :"<<endl;
	cout<<"1 for integer "<<endl;
	cout<<"2 for long "<<endl;
	cout<<"3 for double "<<endl;
	
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"Enter a integer :";
			for(int i=0;i<10;i++)
			cin>>a[i];
			sort(a);
			
		case 2:
			cout<<"Enter a long :";
			for(int i=0;i<10;i++)
			cin>>x[i];
			sort(x);
		
		case 3:
			cout<<"Enter a double :";
			for(int i=0;i<10;i++)
			cin>>y[i];
			sort(y);
	}
}
