#include <iostream>
using namespace std;

int main(void){
    int input=0;
    cout <<"Please enter a integer:\n";
    cin >> input;
    while(input!=1){
	if (input%2==0){
	    input = input / 2;
	    cout << input << " ";
	}
	else{
	    input = input * 3 + 1;
	    cout << input << " ";
	}
    }
    return 0;
}
