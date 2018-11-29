#include <iostream>
#include <math.h>
using namespace std;
	int main (){
		int i,n;
		cout << "nhap n:";
		cin >> n;
		int s=0;
		for (int i=1;i<=n;i++){
			s=s+pow(i,2);
		}
		cout <<"ket qua:"<<s;
		
	}
