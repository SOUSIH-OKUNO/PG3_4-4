#include <stdio.h>

class Shape
{
public:
	virtual void Size()= 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};

class Circle :public Shape
{
public:
	void Size();
	void Draw() { printf("–ÊÏ %f\n", size); };
};

class Square :public Shape
{
public:
	void Size() override;
	void Draw() { printf("–ÊÏ %f\n", size); };
};

void Shape::Size() {}

void Circle::Size()
{
	radius = 5.0f;
	printf("‰~‚Ì”¼Œa %f\n", radius);
	size = radius * radius * 3.14f;
}


void Square::Size()
{
	radius = 5.0f;
	printf("‹éŒ`‚Ì”¼Œa %f\n", radius);
	size = radius * 2.0f * radius * 2.0;
}

int main(void) {

        Shape*shape[2] = { new Circle ,new Square};

	shape[0]->Size();
	shape[1]->Size();

	shape[0]->Draw();
	shape[1]->Draw();

	delete shape[0];
	delete shape[1];

	return 0;
}