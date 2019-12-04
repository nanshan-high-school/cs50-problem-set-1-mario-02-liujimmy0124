#include <iostream>
using namespace std;

int main() { 
    int side;
    while (side < 9) {
        cout << "請輸入接梯高度"; 

	    cin >> side;      
    }


    for (int i = side; i > 0; i--) {   
	    for (int j = 0; j < side - (i - 1) ; j++) { 
	        cout << "*"; 
	    }
    cout << "\n"; 
	} 

        for (int k = 0; k < 2; k++){
        cout << " ";
    }
    cout << "\n";
	 
	for (int n = 0; n < side; n++) {   
	    for (int o = 0; o < side - n; o++) { 
	        cout << "*"; 
	     } 
    cout << "\n";  
	}
 }  
