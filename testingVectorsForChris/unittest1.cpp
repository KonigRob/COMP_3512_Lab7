#include "CppUnitTest.h"
#include "../COMP_3512_Lab7/vectorLab.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testingVectorsForChris
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		//Pass
		TEST_METHOD(TestSum1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			v.push_back(6);
			Assert::AreEqual(12, vl.sum(v));
		}
		//Pass
		TEST_METHOD(TestSum2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(5);
			Assert::AreNotEqual(6, vl.sum(v));
		}
		//Pass
		TEST_METHOD(TestSum3)
		{
			vectorLab vl;
			std::vector<int> v;
			Assert::AreNotEqual(2, vl.sum(v));
		}
		//Pass
		TEST_METHOD(TestSum4)
		{
			vectorLab vl;
			std::vector<int> v;
			Assert::AreEqual(-1, vl.sum(v));
		}
		//Pass
		TEST_METHOD(TestMax1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			v.push_back(6);
			Assert::AreEqual(6, vl.max(v));
		}
		//Pass
		TEST_METHOD(TestMax2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(0);
			v.push_back(0);
			Assert::AreNotEqual(3, vl.max(v));
		}
		//Pass
		TEST_METHOD(TestMax3)
		{
			vectorLab vl;
			std::vector<int> v;
			Assert::AreNotEqual(0, vl.max(v));
		}
		//Pass
		TEST_METHOD(TestMax4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(4);
			v.push_back(7);
			v.push_back(1);
			v.push_back(3);
			Assert::AreEqual(7, vl.max(v));
		}
		//Pass
		TEST_METHOD(TestMin1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			v.push_back(6);
			Assert::AreEqual(6, vl.min(v));
		}
		//Pass
		TEST_METHOD(TestMin2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			v.push_back(8);
			v.push_back(2);
			v.push_back(3);
			Assert::AreNotEqual(6, vl.min(v));
		}
		//Pass
		TEST_METHOD(TestMin3)
		{
			vectorLab vl;
			std::vector<int> v;
			Assert::AreEqual(-1, vl.min(v));
		}
		//Pass
		TEST_METHOD(TestMin4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(0);
			v.push_back(98);
			v.push_back(3);
			v.push_back(3);
			Assert::AreEqual(0, vl.min(v));
		}
		//Pass
		TEST_METHOD(TestAvg1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6.0, vl.average(v));
		}
		//Pass
		TEST_METHOD(TestAvg2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(0);
			v.push_back(0);
			v.push_back(0);
			v.push_back(3);
			Assert::AreNotEqual(2.0, vl.average(v));
		}
		//Pass
		TEST_METHOD(TestAvg3)
		{
			vectorLab vl;
			std::vector<int> v;
			Assert::AreEqual(-1.0, vl.average(v));
		}
		//Pass
		TEST_METHOD(TestAvg4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(1);
			v.push_back(98);
			v.push_back(3);
			v.push_back(3);
			Assert::AreEqual(26.25, vl.average(v));
		}
	};
}