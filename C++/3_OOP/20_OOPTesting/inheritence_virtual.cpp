#include <iostream>

using namespace std;

class First {
	protected:
		string A;
	public:
		First() {
			A = "FIRST";
		}
		virtual void out() {
			cout << this->A << endl;
		}
};

class Second : public First {
	public:
		Second() : First() {
			this->A = "SECOND";
		}
		virtual void out() {
			cout << this->A << endl;
		}
};

class Third : public Second {
	public:
		Third() : Second() {
			this->A = "THIRD";
		}
		virtual void out() {
			cout << this->A << endl;
		}
};

class Fourth : public Third {
	public:
		Fourth() : Third() {
			this->A = "FOURTH";
		}
		virtual void out() {
			cout << this->A << endl;
		}
};

int main() {

	First frst = First();
	frst.out();
	Second scnd = Second();
	scnd.out();
	Third thrd = Third();
	thrd.out();
	Fourth frth = Fourth();
	frth.out();

}
