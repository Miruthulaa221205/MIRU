#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int roomType, nuOfNights;
	double pricePerNight = 0, discount = 0.0;
	double total = 0.0, subTotal = 0.0, finalTotal = 0.0;
	double promoCode, promoDiscount;

	// Display Menu 
	cout << "======================================================\n";
	cout << "          FTMK GRAND HOTEL BOOKING SYSTEM             \n";
	cout << "======================================================\n";
	cout << "1. Standard Room - RM150.00 per night\n";
	cout << "2. Deluxe Room - RM200.00 per night\n";
	cout << "3. Suite Room - RM300.00 per night\n";
	cout << "------------------------------------------------------\n";


	cout << "Enter room type(1 - 3) :";
	cin >> roomType;
	cout << "Enter number of nights:";
	cin >> nuOfNights;

	// Enter room type
	if (roomType == 1)
		cout << "You selected Standard Room." << endl;
	else if (roomType == 2)
		cout << "You selected Deluxe Room." << endl;
	else if (roomType == 3)
		cout << "You selected Suite Room." << endl;

	// Enter number of nights
	if (nuOfNights >= 1 && nuOfNights <= 2)
		discount = 0.0;
	else if (nuOfNights >= 3 && nuOfNights <= 5)
		discount = 0.05;
	else if (nuOfNights > 5)
		discount = 0.10;

	// Promo code 
	cout << "Do you have a promo code? (Y/N):";
	cin >> promoCode;
	if (promoCode == 'Y' || promoCode == 'y') {
		promoDiscount = 0.10;
	}
	else if (promoCode == 'N' || promoCode == 'n') {
		promoDiscount = 0.0;
	}

	// Display booking summary
	cout << "------------------ - BOOKING SUMMARY-------------------\n";
	cout << "Price Per Night :" << total << endl;
	cout << fixed << setprecision(2);
	total = pricePerNight * nuOfNights;

	cout << " Nights stayed :" << nuOfNights << endl;

	cout << "Subtotal :" << subTotal << endl;
	subTotal = total - (total * discount);

	cout << "Discount (%)" << discount << endl;
	cout << "_______________________________________________________\n";
	cout << "Final Total :" << finalTotal << endl;
	finalTotal = subTotal - (subTotal * promoCode);
	cout << "_______________________________________________________\n";

	// Display comment 
	if (finalTotal >= 1200)
		cout << "You are eligible for free airport transfer.";
	else if (finalTotal <= 300)
		cout << "Enjoy your vacation.";
	else if (finalTotal > 300 && finalTotal < 1200)
		cout << "Thank you for booking with FTMK GRAND HOTEL.";
	cout << "======================================================= \n";

return 0;

}