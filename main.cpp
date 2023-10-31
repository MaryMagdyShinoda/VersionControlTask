#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int>numbers)
{
	int numbersSummation=0;
	for (int i = 0; i < numbers.size(); i++){
		numbersSummation += numbers[i];
	}
	return numbersSummation;
}

double getAverage(vector<int>numbers)
{
	int numbersSummation = getSum(numbers);
	double numbersAverage = (double)numbersSummation / numbers.size();
	return numbersAverage;
}

int main()
{
	vector<int> numbers;

        for (int i = 1; i <= 10; i++){
		numbers.push_back(i);
	}
	int numbersSummation;
	numbersSummation = getSum(numbers);
	cout<<numbersSummation<<endl;

	double numbersAverage;
	numbersAverage = getAverage(numbers);
	cout<<numbersAverage<<endl;
	return 0;
}

