# include <iostream>

int	main()
{
	int a[2] = {0, 0};
	int b[2] = {3, 3};
	int c[2] = {0, -3};
	int	x[2] = {1, 1};

	float s;

	float A = sqrt((double)(b[0]-a[0]) * (b[0]-a[0]) + (b[1]-a[1]) * (b[1]-a[1]));
	float B = sqrt((double)(b[0]-c[0]) * (b[0]-c[0]) + (b[1]-c[1]) * (b[1]-c[1]));
	float C = sqrt((double)(a[0]-c[0]) * (a[0]-c[0]) + (a[1]-c[1]) * (a[1]-c[1]));

	s = (A+B+C) / 2;
	float area = sqrt( s * (s-A) * (s-B) * (s-C));
	// surface = (a[0]*(b[1]-c[1]) + b[0]*(c[1]-a[1]) + c[0]*(a[1]-b[1])) / 2;
	// surface = (((a[0]*b[1]) - (a[0] * c[1])) + ((b[0] * c[1]) - (b[0] * a[1])) + ((c[0] * a[1]) - (c[0] * b[1]))) / 2;
	std::cout << area << std::endl;
}
