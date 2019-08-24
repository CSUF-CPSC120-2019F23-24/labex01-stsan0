// This program calculates the user's pay.

#include <iostream>

int main()
{
  double hours, rate, pay;

  // Get the number of hours worked.
  std::cout << "How many bars of candy did you sell? ";
  std::cin >> hours;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn per bar sold? ";
  std::cin >> rate;

  // Calculate the pay.
  pay = hours * rate;

  // Display the pay.
  std::cout << "The organization, thanks to you, has earned $" << pay << "! Keep up the good work!" << std::endl ;

  return 0;
}
