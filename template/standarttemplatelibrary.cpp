#include <iostream>
#include <algorithm>

using namespace std;
/* The C++ Standard Template Library */

/*
STL has four components:-
* Containers - to store data
** Sequence Containers
** Container Adaptors
** Associative Containers
** Unordered Associative/Derived Containers
* Algorithms - to processed to store data  
* Iterators - to point an element of data
* Functions
*/

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i){
        cout << a[i] << ", ";
    }
    cout <<endl;
}

void lshorting(){
    // sort(startaddress, endaddress)
    int noOfArray[] = {2,4,6,3,7,9,0,8,1,5};
    int asize = sizeof(noOfArray) / sizeof(noOfArray[0]);
    cout << "Array before sort:" <<endl;
    show(noOfArray, asize);

    sort(noOfArray, noOfArray + asize); // sort is the part of algo

    cout << "Array after sort:" <<endl;
    show(noOfArray, asize);
}

void lsearching(){
    int noOfArray[] = {2,4,6,3,7,9,0,8,1,5};
    // binary_search(startaddress, endaddress, valuetofind)

     if (binary_search(noOfArray, noOfArray + 10, 2)){
        cout << "Element 2 found in the array" << endl;
     } else {
        cout << "Element 2 not found in the array" << endl;
    }

    if (binary_search(noOfArray, noOfArray + 10, 21)){
        cout << "Element 21 found in the array" << endl;
     } else {
        cout << "Element 21 not found in the array" << endl;
    }
}

int main(int argc, char const *argv[])
{
    cout << "The C++ Standard Template Library" << endl;
    cout << "STL has four components:-" << endl;
    cout << "* Algorithms" << endl;
    cout << "** Shorting" << endl;
    lshorting();
    cout << "** Binary search" << endl;
    lsearching();
    return 0;
}
