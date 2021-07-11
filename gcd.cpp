#include"gcd.hpp"
int gcd (int a, int b){

if (a==b){
	return a;
}
if (a>b) {
	return gcd (a-b,b);
}
return gcd (a,b-a);
}
void gcd_calc(int a, int b, int ex) {
	cout<<"test num("<<a<<" , "<<b<<")..."<<endl;
const int result = gcd(a,b);
	if (result != ex){
		cout<<"get "<<ex<<"but got"<<result<<endl;
	
	}
	else {
		cout<<"ok"<<endl;
	}
}
