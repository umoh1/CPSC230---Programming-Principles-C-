//#include <iostream>
//#include <fstream>
//using namespace std;
//
////Program used to calculate the total ages between all of those intervened with
//int main()
//{
//	int total = 0, range20_30 = 0, range31_40 = 0, range41_50 = 0,
//		range51_60 = 0, range61_70 = 0, range71_80 = 0, range81_90 = 0,readAge = 0;
//
//	ifstream preinterTxt;
//	preinterTxt.open("C:\\Users\\nsika\\Downloads\\InterventionAge.txt");
//	//preinterTxt.open("C:\\Users\\nsika\\Downloads\\PreinventionAge.txt");
//	if (preinterTxt)
//	{
//		while (preinterTxt >> readAge)
//		{
//			if (readAge>=20&&readAge<=30)
//			{
//				range20_30++;
//			}
//			else if (readAge >= 31 && readAge <= 40)
//			{
//				range31_40++;
//			}
//			else if (readAge >= 41 && readAge <= 50)
//			{
//				range41_50++;
//			}
//			else if (readAge >= 51 && readAge <= 60)
//			{
//				range51_60++;
//			}
//			else if (readAge >= 61 && readAge <= 70)
//			{
//				range61_70++;
//			}
//			else if (readAge >= 71 && readAge <= 80)
//			{
//				range71_80++;
//			}
//			else if (readAge >= 81 && readAge <= 90)
//			{
//				range81_90++;
//			}
//			else
//			{
//				cout << "Error processing number at line " << total;
//			}
//
//			total++;
//		}
//	}
//	else
//	{
//		cout << "There was an error opening the file" << endl;
//	}
//
//	cout << "The total amount of ages read in for Intervention: " << total << endl;
//	cout << "The total between 20 to 30 years old: " << range20_30 << endl;
//	cout << "The total between 31 to 40 years old: " << range31_40 << endl;
//	cout << "The total between 41 to 50 years old: " << range41_50 << endl;
//	cout << "The total between 51 to 60 years old: " << range51_60 << endl;
//	cout << "The total between 61 to 70 years old: " << range61_70 << endl;
//	cout << "The total between 71 to 80 years old: " << range71_80 << endl;
//	cout << "The total between 81 to 90 years old: " << range81_90 << endl;
//
//	return 0;
//}