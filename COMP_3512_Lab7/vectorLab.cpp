#include "vectorLab.hpp"

//DESC: Return the sum value of the vector
//PRE: All numbers entered are positive
//POST: 
//Return: a postive int or a -1 if empty
int vectorLab::sum(const std::vector<int>& v)
{
	if (v.size() == 0) {
		return -1;
	}
	int sum = 0;
	for (int i = 0; i < v.size(); ++i) {
		sum += v[i];
	}
	return sum;
}

//DESC: Return the max value of the vector
//PRE: All numbers entered are positive
//POST :
//Return: a postive int or a -1 if empty
int vectorLab::max(const std::vector<int>& v)
{
	if (v.size() == 0) {
		return -1;
	}
	int max = v[0];
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}

//DESC: Return the min value of the vector
//PRE : All numbers entered are positive
//POST :
//Return: a postive int or a -1 if empty
int vectorLab::min(const std::vector<int>& v)
{
	if (v.size() == 0) {
		return -1;
	}
	int min = v[0];
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	return min;
}

//DESC: Return the average value of the vector
//PRE : All numbers entered are positive
//POST :
//Return: a postive double or a -1.0 if empty
double vectorLab::average(const std::vector<int>& v)
{
	if (v.size() == 0) {
		return -1.0;
	}
	double total = sum(v);
	return total / v.size();
}
