#include "vectorLab.hpp"

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

int vectorLab::min(const std::vector<int>& v)
{
	if (v.size() == 0) {
		return -1;
	}
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
	if (v.size() == 0) {
		return -1.0;
	}
	double total = sum(v);
	return total / v.size();
}
