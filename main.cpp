# include <iostream>
#include <string>
#include<cstring>
#include <array>



using namespace std;

struct CandyBar {
	char name[20];
	double weight;
	int calories;
};

struct Pizza {
	string namecompany;
	double diameter;
	double mas;
};

struct Point {
	int x;
	int y;
};






int main()
{
	const int ArrSize = 20;                            // task 1
	cout << "What is your first name? ";
	char name[ArrSize];
	cin.getline(name, ArrSize);
	cout << "What is your last name? ";
	char lastname[ArrSize];
	cin.getline(lastname, ArrSize);
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cin.get();
	cout << "what is your age? ";
	char age[ArrSize];
	cin.getline(age, ArrSize);
	cout << "Name: " << lastname << " , " << name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;
	cout << endl;


	string nname;                         // task 2
	string dessert;
	cout << "Enter your name: ";
	cin >> nname;
	cout << "Enter your dessert: ";
	cin >> dessert;
	cout << "I have some delicious  " << dessert << " for you, " << nname << endl;
	cout << endl;


	cin.get();                            // task 3
	cout << "Enter the first name: ";
	char name3[20];
	cin.getline(name3, 20);
	cout << "Enter your last name: ";
	char lastname3[20];
	cin.getline(lastname3, 20);
	strcat(lastname3, ", ");
	cout << "Here`s the information in a single string: " << strcat(lastname3, name3) << endl;
	cout << endl;


	cout << "Enter the first name: ";      //task 4
	string name4;
	cin >> name4;
	cout << "Enter your last name: ";
	string lastname4;
	cin >> lastname4;
	cout << "Here`s the information in a single string: " << lastname4 + ", " + name4 << endl;
	cout << endl;


	CandyBar snack = {       //task 5
	   "Mocha Munch",
	   2.3,
	   350
	};
	cout << snack.name << endl;
	cout << snack.weight << endl;
	cout << snack.calories << endl;
	cout << endl;

	CandyBar snacks[3] = {           //task 6
		{"Bambi", 2.4, 670},
	   {"Nice", 6.7, 240},
	   {"Zebra", 4.4, 780}
	};

	cout << "Candy: " << snacks[0].name << ", " << snacks[1].name << ", " << snacks[2].name << endl;
	cout << "Weight: " << snacks[0].weight << ", " << snacks[1].weight << ", " << snacks[2].weight << endl;
	cout << "Calories: " << snacks[0].calories << ", " << snacks[1].calories << ", " << snacks[2].calories << endl;
	cout << endl;

	Pizza Margarita{ };             // task 7
	cout << "Please, enter the company name: ";
	cin >> Margarita.namecompany;
	cout << "Enter the diameter: ";
	cin >> Margarita.diameter;
	cout << "Enter the weight: ";
	cin >> Margarita.mas;
	cout << endl;
	cout << "You entered: " << Margarita.namecompany << ", " << Margarita.diameter << ", "
		<< Margarita.mas << endl;
	cout << endl;  

	Point points[2];
	Point average;
	cout << "Enter for first x, y " << endl;
	cin >> points[0].x;
	cin >> points[0].y;
	cout << "Enter for second x, y" << endl;
	cin >> points[1].x;
	cin >> points[1].y;
	cout << (((double)(points[0].x) + points[1].x) / 2) << endl;
	cout << (average.y = (points[0].y + points[1].y) / 2) << endl;
	cout << endl;  

	Pizza *piz = new Pizza;               // task 8
	cout <<  "Enter the diameter: ";
	cin >> (*piz).diameter;
	cout << "Please, enter the company name : ";
	cin >> (*piz).namecompany;
	cout << "Enter the weight: ";
	cin >> (*piz).mas;
	cout << endl;
	cout << "You entered: " <<(*piz).diameter << ", " << (*piz).namecompany << ", "
		<< (*piz).mas << endl;
		delete piz;
	cout << endl;    



			CandyBar *snacks2 = new CandyBar[3];          //task 9
			snacks2[0] = { "Bambi", 2.4, 670 };
			snacks2[1] = { "Nice", 6.7, 240 };
			snacks2[2] = { "Zebra", 4.4, 780 };
		

	cout << "Candy: " << snacks2[0].name << ", " << snacks2[1].name << ", " << snacks2[2].name << endl;
	cout << "Weight: " << snacks2[0].weight << ", " << snacks2[1].weight << ", " << snacks2[2].weight << endl;
	cout << "Calories: " << snacks2[0].calories << ", " << snacks2[1].calories << ", " << snacks2[2].calories << endl;
	delete [] snacks2;
	cout << endl;   

		array<double, 3> res;                                  // task 10
		cout << "Enter first, second and third results: ";
		cin >> res[0];
		cin >> res[1];
		cin >> res[2];
		cout << "You entered: " << res[0] << ", " << res[1] << ", " << res[2] << endl;
		cout << "Average value: " << (res[0] + res[1] + res[2]) / 3 << endl;
		cout << endl;


	 
	 
	 system("pause");
	return 0;
}