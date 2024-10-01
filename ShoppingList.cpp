/*write c++ program to create shoppinglist add some points like
cus_id ,cut_name ,cut_price,cut_size. */

#include<iostream>
#include<string.h>
using namespace std;

class ShoppingList{
	int id;
	float price;
	string size;
	char name[50];
	
	public :
		ShoppingList(int i,float p,string s,char *n){
			id=i;
			price=p;
			size=s;
		//	name=n;
			strcpy(name,n);
		}
		void display(){
			cout<<"Id :"<<id<<endl;
			cout<<"Price :"<<price<<endl;
			cout<<"Size :"<<size<<endl;
			cout<<"Name :"<<name<<endl;
		}
};
int main(){
	ShoppingList Shortkurti(101,2000,"M","Shortkurti");
	Shortkurti.display();
}
