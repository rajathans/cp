#include<iostream>
using namespace std;
class fraction {
public:
	int Numerator;
	int Denominator;
	fraction(int n, int d) {
		Numerator = n;
		Denominator = d;
	}
	bool Shrink() {
		bool sucessful = 0;
		for (int i = min(Numerator, Denominator); i; i--) {
			if ((Numerator % i == 0) && (Denominator % i == 0)) {
				Numerator /= i;
				Denominator /= i;
				sucessful = 1;
			}
		}
		return sucessful;
	}
	fraction operator +(fraction &fraction2) {
		int n1 = Numerator;
		int d1 = Denominator;
		int n2 = fraction2.Numerator;
		int d2 = fraction2.Denominator;
		int MatchedDenominator = d1 * d2;
		fraction f(
			((MatchedDenominator / d1) * n1) +
			((MatchedDenominator / d2) * n2)
			,MatchedDenominator);
		f.Shrink();
		return f;
	}
	void Display() {
		cout << Numerator << '/' << Denominator;
	}
};
int main() {
	fraction f1(235, 1000);
	fraction f2(2, 10);
	fraction f3 = f1 + f2;
	f1.Display();
	cin.ignore();
	return 0;
}
