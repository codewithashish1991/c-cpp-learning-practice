#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void firstPro(){
  cout << "+++++++++++++++++++++ First Program +++++++++++++++++++\n";
  std::cout << "Hello World \n";
}

void sum(){
  cout << "++++++++++++++++ Sum Program +++++++++++++++ \n";
  int x, y;
  int sum;
  cout << "Enter the value of x: \n";
  cin >> x;

  cout << "Enter the value of y: \n";
  cin >> y;

  sum = x + y;

  cout << "The sum of x and y is: \n" << sum;
  cout << "\n";
}

void dataTypeFunc(){
  cout << "++++++++++++++++ Data Types +++++++++++++++ \n";
  int a = 1;
  float b = 34.23;
  double c = 3434.43;
  char d = 'A';
  bool e = true;
  string f = "Ashish";

  /* print variable values */

  cout << "Integer value is: " << a << "\n";
  cout << "Float value is : " << b << "\n";
  cout << "Double value is : " << c << "\n";
  cout << "Character value is : " << d << "\n";
  cout << "Boolean value is : " << e << "\n";
  cout << "String value is : " << f << "\n";
}

void stringFunc(){
  cout << "++++++++++++++++ Strings +++++++++++++++ \n";
  string intr = "My name is Ashish";
  string fname = "Ashish ";
  string lname = "Yadav";

  cout << "My name is " << fname + " " + lname << "\n";
  /*
    It is up to you whether you want to use + or append().
    The major difference between the two, is that the append()
    function is much faster.
  */
  cout << "I am " << fname.append(lname) << "\n";
  string fullname = fname.append(lname);
  cout << "The length of my name is: " << fullname.length() << "\n";
  cout << "The length of my name is: " << fullname.size() << "\n";
  cout << "Enter your first name: \n";
  cin >> fname;
  cout << "Enter your last name: \n";
  cin >> lname;
  string full = fname + ' ' + lname;
  cout << "Your full name is: " << full << "\n";
  string desc;
  cout << "Give your brief introduction: \n";
  cin.ignore();
  getline(cin, desc);
  cout << " Your desc is: " << desc << "\n";
}

void mathFunc(){
  cout << "++++++++++++++++ Math +++++++++++++++ \n";
  int x, y;
  x = 20;
  y =30;
  cout << "Min value of x and y is: " << min(x, y) << "\n";
  
  cout << "Max value of x and y is: " << max(x, y) << "\n";
  
  cout << "absloute value of x is: " << abs(x) << "\n";
  
  cout << "cube root value of x is: " << cbrt(x) << "\n";
  
  cout << "value of x to the power of y is: " << pow(x, y) << "\n";
}

void conditionFunc(){
  cout << "++++++++++++++++ Conditions +++++++++++++++ \n";
  int time = 20;

  if (time < 18){
    cout << "Good Morning \n";
  }else if( time == 20) {
    cout << "Good Afternoon \n";
  }else{
    cout << "Good Night \n";
  }

  string result = (time > 20) ? "AM" : "PM";

  cout << "The result is : " << result << "\n";
}

string getCustomeDay(){
  int day = 4;
  string rtn;
  switch(day){
    case 1:
      rtn = "Monday";
      break;
    case 2:
      rtn = "Tuesday";
      break;
    case 3:
      rtn = "Wednesday";
      break;
    case 4:
      rtn = "Thursday";
      break;
    case 5:
      rtn = "Friday";
      break;
    case 6:
      rtn = "Saturday";
      break;
    case 7:
      rtn = "Sunday";
      break;
    default:
      rtn = "Sunday";
  }
  return rtn;
}

void switchFunc(){
  cout << "++++++++++++++++ Switch Statements +++++++++++++++ \n";
  string day = getCustomeDay();
  cout << "Today is: " << day << "\n";
}

void loopFunc(){
  cout << "++++++++++++++++ Loops +++++++++++++++ \n";
  int i = 0;
  int j = 0;
  /* while loop */
  while(i < 2){
    cout << "i value is: " << i << "\n";
    i++;
  }

  /* do while loop */
  do {
    cout << "j value is: " << j << "\n";
    j++;
  }while(j < 3);

  /* for loop */

  for(i=0; i < 2; i++){
    cout << "i value is: " << i << "\n";
  }

}

void arrayFunc(){
  cout << "++++++++++++++++ Arrays +++++++++++++++ \n";

  string student[4] = { "Ashish", "Vikas", "Anand", "Aman"};

  cout << "Student no 4 is: " << student[2] << "\n";
}

void referenceFunc(){
  cout << "++++++++++++++++ References +++++++++++++++ \n";
  /* A reference variable is a "reference" to an existing variable,
    and it is created with the & operator: */
  string aka = "Ashish";
  string &brm = aka;

  cout << "Main variable is: " << aka << "\n";
  cout << "Reference variable is: " << brm << "\n";
}

void pointerFunc(){
  cout << "++++++++++++++++ Pointers +++++++++++++++ \n";
  /* we can get the memory address of a variable by using the &
  operator. A pointer however, is a variable that stores the memory
  address as its value. */

  string food = "Pizza";
  string* ptr = &food; // A pointer variable, with the name ptr, that stores the address of food

  cout << "food name is: " << food << "\n";
  cout << "food memory address is: " << &food << "\n";
  cout << "food memory address with pointer is: " << ptr << "\n";
}

void secondFunc(string fname  = "default param" ){
  cout << "getting paramerter is: " << fname << "\n";
}

int thirdFunc(int x, int y){
  return x + y;
}

void functionFunc(){
  cout << "++++++++++++++++ Functions +++++++++++++++ \n";
  /* Parameters and Arguments */
  secondFunc("first param");
  secondFunc("second param");
  secondFunc("third param");
  /* Default Parameter Value */
  secondFunc();
  /* Return Values */
  int res = thirdFunc(5, 4);
  cout << "output is: " << res << "\n";

}

int main()
{
  firstPro();
  sum();
  dataTypeFunc();
  stringFunc();
  mathFunc();
  conditionFunc();
  switchFunc();
  loopFunc();
  arrayFunc();
  referenceFunc();
  pointerFunc();
  functionFunc();
  return 0;
}