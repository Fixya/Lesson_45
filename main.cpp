#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

/*class Banana
{
private:
	string color;
public:
	Banana() {color = "green";}
	Banana(string fcolor){color = fcolor;}
	string getColor() {return color;}
	void setColor(string fcolor) { color = fcolor; }
};*/

class Apple
{
private:
	size_t weight;
	string type;
public:
	Apple() 
	{ 
		weight = 0;
		type = ""; 
	}
	Apple( size_t fweight, string ftype)
	{ 
		weight = fweight;
		type = ftype; 
	}
	size_t getWeight() { return weight; }
	string getType() { return type; }
	void setWeight(size_t fweight) { weight = fweight; }
	void setType(string ftype) { type = ftype; }
};

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n = 0, k = 0;
	string wt="", g = "";
	cout << "Количество:" << endl;
	cin >> k;
	/*Banana b1;
	cout << b1.getColor() << endl;
	b1.setColor("yellow");
	cout << b1.getColor() << endl;
	Banana b2("black");
	cout << b2.getColor() << endl;*/
	Apple a1;
	for (int i = 1; i <= k; i++)
	{
		cout << endl;
		cout << i << " яблоко" << endl;
		cout << "Вес " << endl;
		cin >> n;
		cout << "Сорт " << endl;
		cin >> wt;
		a1.setWeight(n);
		a1.setType(wt);
		cout << endl;
		cout << a1.getWeight() << ' ' << a1.getType() << endl;
	}

	return 0;
}