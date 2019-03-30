// Questo programma ricava le soluzioni di equazioni di secondo grado.

#include <iostream>
#include <cmath>

int main()
{
	float a, b, c, d, r1, r2;

	std::cout << "Inserire il primo coefficiente: ";
	std::cin >> a;
	std::cout << "Inserire il secondo coefficiente: ";
	std::cin >> b;
	std::cout << "Inserire il termine noto: ";
	std::cin >> c;

	d = (b * b) - 4 * a * c;

	if (d >= 0) {
		r1 = ((b * (b - 1)) + d) / (2 * a);
		r2 = ((b * (b - 1)) - d) / (2 * a);
		std::cout << "Le soluzioni dell'equazione sono " << r1 << " e " << r2 << "\n";
	}
	else
		std::cout << "L'equazione e\' impossibile\n";
	return 0;
}