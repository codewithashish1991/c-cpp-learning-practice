#include <iostream>
#include <string>

using namespace std;

template <class T1 = string, class T2 = int>
class displayMark
{
private:
    T1 subject;
    T2 marks;

public:
    void setMarks(T1 sub, T2 mrk)
    {
        subject = sub;
        marks = mrk;
    }
    void display(void)
    {
        cout << "Your " << subject << " marks is: " << marks << endl;
    }
};

int main()
{
    /* code */
    // displayMark <string, int> dm; //valid
    displayMark <> dm;
    dm.setMarks("Hindi", 60);
    dm.display();
    dm.setMarks("English", 58);
    dm.display();
    dm.setMarks("Mathmatics", 47);
    dm.display();

    displayMark <string, float> dmf;
    dmf.setMarks("History", 58.43);
    dmf.display();
    dmf.setMarks("Arts", 87.34);
    dmf.display();

    return 0;
}
