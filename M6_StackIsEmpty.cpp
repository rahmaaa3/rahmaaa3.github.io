#include<iostream>
#include<stack>

using namespace std;

int main () {
	//Create a stack of strings called cars
	stack<string> cars;
	//Add elements to the stack
	cars.push("Volvo");
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda");
	
	//Check if the stack Is Empety
	
	cout << cars.empty();
	return 0;
	
}
