#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int>&);

int main() {
    vector<int> integer1(7);
    vector<int> integer2(10);

    cout << "\nSize of vector integers1 is" << integer1.size()
            << "\nvector after initialization:";
    outputVector(integer1);
    cout << "\nSize of vector integers2 is" << integer2.size()
            << "\nvector after initialization:";
    outputVector(integer2);

    cout << "\nEnter 17 integers:" << endl;
    inputVector(integer1);
    inputVector(integer2);

    cout << "\nAfter input, the vectors contain:\n"
            << "integers1:";
    outputVector(integer1);
    cout <<  "integers2:";
    outputVector(integer2);
    
    cout << "\nEvaluating: integers1 != integers2" << endl;
    if( integer1 != integer2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }

    vector<int> integer3{integer1};

    cout << "\nSize of vector integers3 is  " << integer3.size()
            << "\nvector after initialization: ";
    outputVector(integer3);

    cout << "\nAssigning integers2 to integers1:" << endl;
    integer1 = integer2;

    cout << "integers1:";
    outputVector(integer1);
    cout <<  "integers2:";
    outputVector(integer2);

    cout <<  "\nEvaluating: integers1 == integers2" << endl;
    if(integer1 == integer2) {
        cout << "integers1 and integers2 are equal" << endl;
    }

    cout << "\nintegers1[5] is " << integer1[5];

    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integer1[5] = 1000;
    cout << "integer1: ";
    outputVector(integer1);

    try {
        cout << "\nAttempt to display integers1.at(15)" << endl;
        cout << integer1.at(15) << endl;
    }
    catch(out_of_range& e)
    {
        cerr << "An exception occurred: " << e.what() << '\n';
    }
    
    cout << "\nCurrent integers3 size is: " << integer3.size() << endl;
    integer3.push_back(1000);
    cout << "New integers3 size is: " << integer3.size() << endl;
    cout << "integers3 now contains: ";
    outputVector(integer3);
}

void outputVector(const vector<int>& items) {
    for(int item : items) {
        cout << item << " ";
    }
}

void inputVector(vector<int>& items) {
    for(int &item : items) {
        cin >> item;
    }
}