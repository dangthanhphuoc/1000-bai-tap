#include <iostream>
#include <math.h>
using namespace std;
	int main (){
		int i,n;
		do {cout << "nhap n:";
			cin >> n;
			if (n<1){ cout <<"n phai lon hon hoac bang 0, nhap lai"<<endl;
			}
		}
		while (n<1)		;
	
		int s=0;
		for (int i=1;i<=n;i++){
			s=s+pow(i,2);
		}
		cout <<"ket qua:"<<s;
		
	}
