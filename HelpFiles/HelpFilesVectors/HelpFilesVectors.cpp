#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void putDataToVector(istream& stream, vector<int>& vv) {
	string line;
	getline(stream, line);
	
	istringstream input(line);
	
	int i;
	while (input >> i) {
		vv.push_back(i);
		i++;
	}
}


void printVector(const vector<int>& vv) {
	for (int n : vv)
		cout << n << ' ';
}


int main()
{
	vector<int> numbers;
	putDataToVector(cin, numbers);		// извекваме функцията, която ще вземе числата от конзолата и ще ги сложи във вектора
										// вътре във функцията е създаването на временен string за getline
										// вътре във функцията е създаването на временен istringstream за записване на данните една по една във  вектора ! 

	sort(numbers.begin(), numbers.end()); // sort() function from #include <algorithm> автоматично преподрежда вектора, като по подразбиране е 1 -> 2 и A -> Z

	
	int number;
	numbers.push_back(number);  // вмъкваме най-отзад на редицата на вектора


	vector<int>::iterator it = numbers.begin();
	for (; it != numbers.end(); it++)			// обхождаме вектора за да намерим зададено число.
		if (*it == number) {
			numbers.erase(it);		// изтриваме от вектора позизията към която сочи итератора. Вектовра се скъсява !
			break;
		}

	numbers.erase(numbers.begin() + index);		//изтриваме позицията, ако я знаем. 
									//При вектора можем да преброим от началото като добавим индекса който истаме да изтрием

	numbers.insert(numbers.begin() + index, number); // Вмъкваме на дадена позиция число което знаем

	vector<int>::iterator start = numbers.begin();	// създавеме итератгор който сочи към перия елемент

	vector<int>::iterator end = numbers.end() - 1;	// създаваме итератор който сочи към последния елемент. 
													// Никога не работим с end() защото ще върне грешка

	vector<int>::iterator pt = numbers.end() - 1;
	while (pt >= numbers.begin()) {					// принтераме вктор в обратен ред
		cout << *pt << ' ';
		if (pt != numbers.begin())
			pt--;
		else
			break;
	}
}