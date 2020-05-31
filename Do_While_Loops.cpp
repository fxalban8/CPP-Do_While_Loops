#include <iostream>
using namespace std;

int main() {
	
	int x=5;
	
	do{
		cout<<"Hi"<<endl;
		x++;
	}while(x<10);





	const string password="Malawi";	//password
	string input;

	do{
		cout<<"Enter your password"<<endl;
		cin>>input;

		if(input!=password){
			cout<<"Access denied"<<endl;
		}else{
			cout<<"Access granted"<<endl;
		}
	}while(input!=password);
	


	//flushing the buffer
        int c;
        do{
        c=cin.get();
        } while (c!='\n'&&c!=EOF);




	cin.get();
	return 0;
}

