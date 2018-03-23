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
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestSum3)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestSum4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMax1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMax2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMax3)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMax4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMin1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMin2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMin3)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMin4)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}

		
	};
}