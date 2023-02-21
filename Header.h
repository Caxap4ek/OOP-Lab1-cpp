class Rectangle
{
public:
	int x;
	int y;
public:
	double Perimeter(double a, double b)
	{
		double per = (a + b) * 2;
		return per;
	}

	double Area(double a, double b)
	{
		double area = a * b;
		return area;
	}
};
