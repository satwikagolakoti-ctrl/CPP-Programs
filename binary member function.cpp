#include<iostream>
using namespace std;
class number {
	int x;
	public:
		number (int a){
			x=a;
		}
		number operator+(number n){
			number temp(0);
			temp.x=x+n.x;
			return temp;
		}
		void display (){
			cout<<"sum ="<<x;
		}
};
int main(){
	number n1(10),n2(20);
	number n3=n1+n2;
	n3.display();
	return 0;
}
