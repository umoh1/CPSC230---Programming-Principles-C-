//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

// PLACE YOUR NAME HERE

//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//    int value;       // value is some positive number n
//    int value1;     //value is some positive number m
//    int total = 0;   // total holds the sum of the first n positive numbers
//    int number;      // the amount of numbers
//    float mean;      // the average of the first n positive numbers
//
//    cout << "Please enter a positive integer" << endl;
//    cin >> value;
//    cout << "Please enter the ending positive integer\n";
//    cin >> value1;
//
//    if (value > 0&&value1>value)
//    {
//        for (number = value; number <= value1; number++)
//        {
//            total = total + number;
//        }  // curly braces are optional since there is only one statement 
//
//        mean = static_cast<float>(total) / (value1-value+1);         // note the use of the typecast 
//                                             // operator here
//        cout << "The mean average of the first " << value
//            << " positive integers is " << mean << endl;
//    }
//    else
//        cout << "Invalid input - integer must be positive\nAlso, last must be >= to first" << endl;
//
//    return 0;
//}
