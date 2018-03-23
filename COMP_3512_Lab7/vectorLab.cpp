#include "vectorLab.hpp"

int vectorLab::sum(const std::vector<int>& v)
{
	int sum = 0;
	for (int i = 0; i < v.size(); ++i) {
		sum += v[i];
	}
	return sum;
}

int vectorLab::max(const std::vector<int>& v)
{
	int max = v[0];
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}

int vectorLab::min(const std::vector<int>& v)
{
	int min = v[0];
	for (int i = 0; i < v.size(); ++i) {
		if (v[0] < min) {
			min = v[i];
		}
	}
	return min;
}

double vectorLab::average(const std::vector<int>& v)
{
	double total = sum(v);
	return total / v.size();
}
