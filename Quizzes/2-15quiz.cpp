//#include <iostream>
//#include <random>
//using namespace std;
//
//typedef int GradeType[100];
//float findAverage(const GradeType array, int size);
//int findHighest(const GradeType array, int size);
//
//int main()
//{
//
//}
//
//float findAverage(const GradeType array, int size)
//{
//	int sum = 0;  //used to store sum
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += array[i]; //sum all elements of the array
//	}
//	
//	return sum / size; //return the average
//}
//
//int findHighest(const GradeType array, int size)
//{
//	int compare = array[0];  //used to compare values
//	
//
//	for (int i = 0; i < size; i++)
//	{
//		//if the current array element is larger than the comparison value, 
//		//replace the comparison value with the current element
//		if (array[i]>compare) 
//		{
//			compare = array[i];
//		}
//	}
//	
//	//after loop, compare should have the highest value in the array, so return it. 
//	return compare;
//}