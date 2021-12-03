#include <iostream>

using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    /* code */
    cout << "Template:-" << endl;
    vector <int>v1(3);
    v1.arr[0] = 5;
    v1.arr[1] = 3;
    v1.arr[2] = 4;

    vector <int>v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    int res = v1.dotProduct(v2);
    vector <float>v3(3);
    v3.arr[0] = 3.0;
    v3.arr[1] = 0.3;
    v3.arr[2] = 4.5;

    vector <float>v4(3);
    v4.arr[0] = 1.32;
    v4.arr[1] = 34.23;
    v4.arr[2] = 12.45;

    float res1 = v3.dotProduct(v4);

    cout << "int value on vactor is:" << res << endl;

    cout << "float value of vactor is:" << res1 << endl;
    return 0;
}
