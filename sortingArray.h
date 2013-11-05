#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class sortingArray {
	public:
		sortingArray();
		~sortingArray();
		void recursiveSort(/*your parameters here*/);
		int binarySearch(int value);
		void iterativeSort();
		void print();
	private:
		int* _array;
		int _arraySize;
};

sortingArray::sortingArray() {
	string filename;
	cout << "Enter an input filename: ";
	cin >> filename;
	ifstream myInputStream;
	myInputStream.open(filename.c_str());
	if(!myInputStream.is_open()) {
		cout << "Failed to open the file! Press Enter to exit..." << endl;
		cin >> filename;
		exit(1);
	}
	else {
		myInputStream >> _arraySize;
		_array = new int[_arraySize];
		int index = 0;
		while(!myInputStream.eof() && index < _arraySize) {
			myInputStream >> _array[index++];
		}
		_arraySize = index;
		myInputStream.close();
	}
}

sortingArray::~sortingArray() {
	delete [] _array;
}

void sortingArray::recursiveSort(/*your parameters here*/) {
}

int sortingArray::binarySearch(int value) {
	//this should return the index the value is in
	//return -1 if not found
	return 0;
}

void sortingArray::iterativeSort() {
}

void sortingArray::print() {
	int index = 0;
	while(index < _arraySize) {
		cout << _array[index++] << " ";
	}
	cout << endl;
}
