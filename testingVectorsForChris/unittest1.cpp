#include "CppUnitTest.h"
#include "../COMP_3512_Lab7/vectorLab.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testingVectorsForChris
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
		}
		TEST_METHOD(TestMethod2)
		{
			vectorLab vl;
			std::vector<int> v;
			v.push_back(6);
			Assert::AreEqual(6, vl.sum(v));
			v.push_back(4);
			Assert::AreEqual(10, vl.sum(v));
		}

		
	};
}