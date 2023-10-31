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

int getMin(vector<int>numbers)
{
	int minElement = numbers[0];
	for (int i = 1; i < numbers.size(); i++){
		if(minElement > numbers[i]){
			minElement = numbers[i];
		}
	}
	return minElement;
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

	int minElement;
        minElement = getMin(numbers);
        cout<< minElement <<endl;
	return 0;
}

