#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class MyClass { // The class
	public: // Access specifier
		int number; // Attribute (int variable)
		string name; // Attribute (string variable)
	private:   // Private access specifier
    	int y;   // Private attribute
};

class MyCar {
	public:
		string car_name;
		string brand;
		int year;
};

class MyStudent {
	public:
		string getName( string name){
			return name;
		}
};

class MyConst {
	public:
		string student_name;
		string student_fname;
		int year;
		MyConst(string std_name, string std_fname, int std_year); // Constructor declaration
};

// Constructor definition outside the class
MyConst::MyConst(string x, string y, int z) {
  student_name = x;
  student_fname = y;
  year = z;
}

class Emloyee {
	private:
		int salary;
	public:
		string name;
		string email;
		void setSalary( int s){
			salary = s;
		}
		int getSalary(){
			return salary;
		}
};

/*  function define for inheritance base class */

class Vehicle {
	public:
		string brand = "Ford";
		void horn(){
			cout << "poo poo! poo poo.\n";
		}
};

/*  function define for inheritance derived class */

class Car: public Vehicle {
	public:
		string model = "X50";
};

/* mutli-level inheritance base class */

class grandFather {
	public:
		void grandFatherName(){
			cout << "Grand Father name is Rohan." << "\n";
		}
};

/* mutli-level inheritance derived class-1 */

class father: public grandFather {};

/* mutli-level inheritance derived class-2 inherit class-1 */

class Son: public father {};

/* mutliple inheritance base class-1 */

class Vikas {
	public:
		void VikasReport(){
			cout << "Vikas done his job. \n";
		}
};

/* mutliple inheritance base class-2 */

class Abhishek {
	public:
		void AbhishekReport(){
			cout << "Abhishek done his job. \n";
		}	
};

/* mutliple inheritance base class-3 */

class Ashish {
	public:
		void AshishReport(){
			cout << "Ashish done his job. \n";
		}
};

/* function inherite properties of all classes */

class AliSir: public Vikas, public Abhishek, public Ashish {};

/* Inheritance Access */

// Base class

/* The third specifier, protected, is similar to private, but it can also
 be accessed in the inherited class. */
class CompanyEmployee {
	protected:
		int salary;
};

class Programmer: public CompanyEmployee {
	private:
		int bonus;
	public:
		string name;
		void setSalary(int s){
			salary = s;
		}
		
		void setBonus(int b){
			bonus = b;
		}

		int getSalary(){
			return salary;
		}

		int getBonus(){
			return bonus;
		}
};

/*  Polymorphism */

// Base class

class Animal {
	public:
		void animalSound(){
			cout << "The animal makes a sound \n";
		}
};

// Derived class

/* Now we can create Pig and Dog objects and override the animalSound() method. */

class Dogs: public Animal {
	public:
		void animalSound(){
			cout << "The dog says: bow wow \n";
		}
};

// Derived class

class Pigs: public Animal {
	public:
		void animalSound(){
			cout << "The pig says: wee wee \n";
		}
};


int main()
{
	cout << "+++++++++++++++++++++ Classes and Objects +++++++++++++++++++\n";
	MyClass myObj; // Create an object of MyClass
	MyCar carObj1;
	MyCar carObj2;
	MyStudent student;

	string std1 = student.getName("Ashish"); 
	string std2 = student.getName("Anand"); 

	myObj.number = 3;
	myObj.name = "Ashish";

	carObj1.car_name = "BMW";
	carObj1.brand = "X5";
	carObj1.year = 1991;

	carObj2.car_name = "Ford";
	carObj2.brand = "Mustang";
	carObj2.year = 1969;;

	cout << myObj.number << "\n";
	cout << myObj.name << "\n";

	cout << "First car name is " << carObj1.car_name << "\n";
	cout << "First car brand is:" << carObj1.brand << "\n";
	cout << "First car made in:" << carObj1.year << "\n";

	cout << "Second car name is " << carObj2.car_name << "\n";
	cout << "Second car brand is:" << carObj2.brand << "\n";
	cout << "Second car made in:" << carObj2.year << "\n";

	cout << "+++++++++++++++++++++ Methods +++++++++++++++++++\n";

	cout << "First student is: " << std1 << "\n";
	cout << "Second student is: " << std2 << "\n";


	cout << "+++++++++++++++++++++ Constructors +++++++++++++++++++\n";

	/* A constructor in C++ is a special method that is automatically
	called when an object of a class is created. */
	/* To create a constructor, use the same name as the class */

	MyConst constObj1("Ramesh", "Suresh", 1991);
	MyConst constObj2("Rakesh", "Rohan", 1898);

	cout << constObj1.student_name << " father name is " << constObj1.student_fname << ".\n";
	cout << "He is born on " << constObj1.year << ".\n";

	cout << constObj2.student_name << " father name is " << constObj2.student_fname << ".\n";
	cout << "He is born on " << constObj2.year << ".\n";

	cout << "+++++++++++++++++++++ Access Specifiers +++++++++++++++++++\n";

	/*
	In C++, there are three access specifiers:
	public - members are accessible from outside the class
	private - members cannot be accessed (or viewed) from outside the
	class
	protected - members cannot be accessed from outside the class,
	however, they can be accessed in inherited classes. You will learn more
	about Inheritance later. */

	// myObj.y = 23; // Not allowed (private)

	cout << "+++++++++++++++++++++ Encapsulation +++++++++++++++++++\n";
	/* The meaning of Encapsulation, is to make sure that "sensitive" data
	is hidden from users. To achieve this, you must declare class
	variables/attributes as private (cannot be accessed from outside the class).
	If you want others to read or modify the value of a private member,
	you can provide public get and set methods. */

	Emloyee empObj;
	
	// assign value on public variable
	empObj.name = "Ashish";
	empObj.email = "ashishkb@ehostinguk.com";
	// assign value to the private variable
	empObj.setSalary(5000);

	// get value on public variable
	cout << "Employee name is " << empObj.name << ".\n";
	cout << "Employee email is " << empObj.email << ".\n";
	// get value on private variable
	cout << "Employee salary is " << empObj.getSalary() << ".\n";
	/* 
	The salary attribute is private, which have restricted access.

	The public setSalary() method takes a parameter (s) and assigns it to
	the salary attribute (salary = s).

	The public getSalary() method returns the value of the private salary
	attribute.
	*/

	cout << "+++++++++++++++++++++ Inheritance +++++++++++++++++++\n";
	/*
	In C++, it is possible to inherit attributes and methods from one class
	to another. We group the "inheritance concept" into two categories:

	derived class (child) - the class that inherits from another class

	base class (parent) - the class being inherited from
	To inherit from a class, use the : symbol.
	*/

	Car mycar;

	cout << "Brand is: " << mycar.brand << "\n";
	cout << "Model is: " << mycar.model << "\n";
	cout << "Car gives horn like: " << mycar.model << "\n";

	mycar.horn();

	/* Multi-level Inheritance */
	/* A class can also be derived from one class,
	which is already derived from another class. */

	Son sonObj;
	sonObj.grandFatherName();

	/* Multiple Inheritance */
	/* A class can also be derived from more than one base class, using a
		comma-separated list: */

	AliSir asir;
	asir.VikasReport();
	asir.AbhishekReport();
	asir.AshishReport();

	/* Inheritance Access */


	Programmer proObj;
	proObj.setSalary(3000);
	proObj.setBonus(2000);
	proObj.name = "Ashish";
	int sal = proObj.getSalary();
	int bonus = proObj.getBonus();
	cout << "Programmer name is: " << proObj.name << "\n";
	cout << "Programmer salary is: " << sal << "\n";
	cout << "Programmer bonus is: " << bonus << "\n";

	cout << "+++++++++++++++++++++ Polymorphism +++++++++++++++++++\n";

	/* Polymorphism means "many forms", and it occurs when we have many
	classes that are related to each other by inheritance. */
	/* we specified in Inheritance lets us inherit
	attributes and methods from another class. Polymorphism uses those
	methods to perform different tasks. This allows us to perform a single
	action in different ways.*/
	Animal aml;
	Dogs dg;
	Pigs pg;

	aml.animalSound();
	dg.animalSound();
	pg.animalSound();

	cout << "+++++++++++++++++++++ Files +++++++++++++++++++\n";

	/*
	 The fstream library allows us to work with files.
	 To use the fstream library, include both the standard <iostream>
	 AND the <fstream> header file:
	*/

	/*
	ofstream ->	Creates and writes to files
	ifstream ->	Reads from files
	fstream	-> A combination of ofstream and ifstream:
	creates, reads, and writes to files.
	*/

	// Create a text file
	ofstream MyWriteFile("akb.txt");

	// Write to the file
	MyWriteFile << "The fstream library allows us to work with files. \n To use the fstream library, include both the standard <iostream> AND the <fstream> \n header file:";

	// Close the file
	MyWriteFile.close();

	string fileTxt;

	ifstream MyReadFile("akb.txt");

	while (getline(MyReadFile, fileTxt)) {
		cout << fileTxt;
	}

	MyReadFile.close();

	cout << "+++++++++++++++++++++ Exceptions +++++++++++++++++++\n";

	/* try and catch */
	/*
	The try statement allows you to define a block of code to be
	tested for errors while it is being executed.

	The throw keyword throws an exception when a problem is detected,
	which lets us create a custom error.

	The catch statement allows you to define a block of code to be executed,
	if an error occurs in the try block.
	*/

	try {
	    int age = 15;
	    if (age >= 18) {
	      cout << "Access granted - you are old enough.";
	    } else {
	      throw 505;
	    }
	}
	catch (int myNum) {
	    cout << "Access denied - You must be at least 18 years old.\n";
	    cout << "Error number: " << myNum;  
	}
	return 0;
}