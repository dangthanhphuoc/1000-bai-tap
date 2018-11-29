#include <iostream>
using namespace std;
	int main (){
		float n;
		float s=0;
		do {cout << "nhap n:";
			cin >> n;
			if (n<1){ cout <<"n phai lon hon hoac bang 0, nhap lai"<<endl;
			}
		}
		while (n<1)	;
		for (int a=1;a<=n;a++){
			s=s+1.0/a;	// 1.0 nhu float, de ep kieu s hien thi kq chinh xac.
		}
		cout << "ket qua:"<<s;
	}
