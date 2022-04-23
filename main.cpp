#include <iostream>

using namespace std;

double ConvertCurrency(double Money, double ConversionRate){ // This function is used to Convert the Currency into Euros.

    double Converted = Money * ConversionRate; // Multiply the Money by the Conversion rate to get the Converted Currency.
    return Converted; // Return the result of Converted.

} // End of function.

int main() // The main program, this executes first.
{ // Start of main program.

    double Money, Rate; // Create two double vars for the money and the conversion rate.
    std::cout << "Please enter the amount of money you would like to convert: " << std::endl; // Ask the user to input an amount of money.
    std::cin >> Money; // Store the users input in Money.
    std::cout << "Please enter the Conversion Rate for your Currency: " << std::endl; // Ask the user to input the conversion rate for the currency they want to convert to.
    std::cin >> Rate; // Store the users input in Rate.
    double ConvertedMoney = ConvertCurrency(Money, Rate); // Create a double and call the ConvertCurrency function, passing the Money and Rate variable as parameters.
    std::cout << "Converted!" << std::endl << "You have: " << Money << std::endl << "You will get: " << ConvertedMoney << std::endl; // Print the results, stating the original money and then the converted money.

} // End of main program.
