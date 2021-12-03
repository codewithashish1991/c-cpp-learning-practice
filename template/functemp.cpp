#include <iostream>

using namespace std;

template <class T1, class T2>
float avg(T1 a, T2 b){
    float c = (a + b)/2.0;
    return c;
}
int main()
{
    float res = avg(2, 5);
    float res2 = avg(2.7, 1.3);
    cout << "average of given number is: " << res << endl;
    cout << "average of given number is: " << res2 << endl;
    return 0;
}