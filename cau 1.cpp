#include <iostream>
using namespace std;
	int main (){
		int n;
		int s=0;
		do {cout << "nhap n:";
			cin >> n;
			if (n<1){ cout <<"n phai lon hon hoac bang 0, nhap lai"<<endl;
			}
		}
		while (n<1)		;
	
		for (int i=1;i<=n;i++){
			s=s+i;
		}cout << "ket qua:"<<s;
	}
