#include <iostream>

using namespace std;

// https://www.fluentcpp.com/2017/12/26/emulate-super-base/

class Shape {
	protected:
		// using base_type = nullptr;
	public:
		Shape() {

		}

		virtual void draw() const
		{
			cout << "BASE_DRAW" << endl;
		}
};

class Rounded : public Shape {
	protected:
		using base_type = Shape;
	public:
		Rounded() : base_type() {

		}
		
		void draw() const override
		{
			cout << "Rounded Draw" << endl;
			base_type::draw();
		}
};

class Oval : public Rounded {
	protected:
		using base_type = Rounded;
	public:
		Oval() : base_type() {

		}
		
		void draw() const override
		{
			cout << "Oval Draw" << endl;
			base_type::draw();
		}
};

int main() {
	
	Oval test = Oval();
	test.draw();

	return 0;
}