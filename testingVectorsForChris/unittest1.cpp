#include "CppUnitTest.h"
#include "../COMP_3512_Lab7/vectorLab.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testingVectorsForChris
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSum1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestSum2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(5);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestSum3)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(0);
			v.push_back(0);
			v.push_back(0);
			v.push_back(3);
			Assert::AreEqual(2, vl.sum(v));
		}
		TEST_METHOD(TestSum4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(0);
			v.push_back(0);
			v.push_back(0);
			v.push_back(3);
			Assert::AreEqual(3, vl.sum(v));
		}
		TEST_METHOD(TestMax1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.max(v));
		}
		TEST_METHOD(TestMax2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(0);
			v.push_back(0);
			v.push_back(0);
			v.push_back(3);
			Assert::AreEqual(3, vl.max(v));
		}
		TEST_METHOD(TestMax3)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(5);
			v.push_back(0);
			v.push_back(0);
			v.push_back(3);
			Assert::AreEqual(3, vl.max(v));
		}
		TEST_METHOD(TestMax4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(4);
			v.push_back(7);
			v.push_back(-2);
			v.push_back(3);
			Assert::AreEqual(7, vl.max(v));
		}
		TEST_METHOD(TestMin1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.min(v));
		}
		TEST_METHOD(TestMin2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			v.push_back(8);
			v.push_back(2);
			v.push_back(3);
			Assert::AreEqual(6, vl.min(v));
		}
		TEST_METHOD(TestMin3)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(0);
			v.push_back(0);
			v.push_back(0);
			v.push_back(3);
			Assert::AreEqual(3, vl.min(v));
		}
		TEST_METHOD(TestMin4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(-2);
			v.push_back(98);
			v.push_back(3);
			v.push_back(3);
			Assert::AreEqual(-2, vl.sum(v));
		}
		TEST_METHOD(TestAvg1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6.0, vl.average(v));
		}
		TEST_METHOD(TestAvg1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(0);
			v.push_back(0);
			v.push_back(0);
			v.push_back(3);
			Assert::AreEqual(2.0, vl.average(v));
		}
		TEST_METHOD(TestAvg1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(-2);
			v.push_back(98);
			v.push_back(3);
			v.push_back(3);
			Assert::AreEqual(-2, vl.sum(v));
		}
		TEST_METHOD(TestAvg1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(-2);
			v.push_back(98);
			v.push_back(3);
			v.push_back(3);
			Assert::AreEqual(-2, vl.sum(v));
		}
	};
}