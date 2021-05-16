#include "pch.h"
#include "CppUnitTest.h"
#include "../matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab4UnitTest
{
	TEST_CLASS(Lab4UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Arrange
			const int ROW = 5;
			double matrix[ROW][MAX_COL] = { 2,1,1,1 };
			double* ptrRet;
			//Act
			ptrRet = sumOfRows(matrix, ROW);
			//Assert

			Assert::AreEqual(5.0,ptrRet[0]);
			Assert::AreEqual(0.0, ptrRet[1]);
			Assert::AreEqual(0.0, ptrRet[2]);
		}
	};
}
