// Cheyenne Pillay
// Tut6-Vector


#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;


// initialises the method
void disp(vector <int>);


int main(){


	//initialises the vector
  vector <int> vec;
	srand(time(NULL));

	int randNum; // variable to hold the random number 

	for (int i = 0; i < 20; i++){
		// generates a random number  between 1 and 100
		randNum = 1+rand() % 100 ;

		 // pushes 20 random values into the vector 
		vec.push_back(randNum);
	}

	// displays the unsorted vector
	cout << "unsorted vector" << endl;
	cout << endl;
	disp(vec);
	cout <<"______________________________________________________________________________" <<endl;


	// sorts the vector into ascending order
	sort(vec.begin(), vec.end());
	// reverses the order of the numbers in the vector to display in descending order
	reverse(vec.begin(), vec.end());
	// displays the sorted vector in descending order
	cout << "sorted vector" << endl;
	cout << endl;
    disp(vec);
	cout << "______________________________________________________________________________" << endl;


}

// method to display the vector
void disp(vector <int> vc){
	for (int i = 0; i < 20; i++) {
		cout << vc.at(i) << " , ";

	}
	cout << endl;
}
// end of program 