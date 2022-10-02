#include <iostream>

using std::string;

class AbstractEmployee {

	// pure virtual function, all inherited classes require it
	virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
	private:
		string Name;
		string Company;
		int Age;
	public:
		Employee(string name, string company, int age) {
			this->Name = name;
			this->Company = company;
			this->Age = age;
		}

		void setName(string name) {
			this->Name = name;
		}

		void setCompany(string company) {
			this->Company = company;
		}

		void setAge(int age) {
			this->Age = age;
		}

		string getName() {
			return this->Name;
		}

		string getCompany() {
			return this->Company;
		}

		int getAge() {
			return this->Age;
		}

		void IntroduceYourself() {
			using namespace std;
			cout << "Name - " << this->Name << endl;
			cout << "Company - " << this->Company << endl;
			cout << "Age - " << this->Age << endl;
		}

		void AskForPromotion() {
			if (this->Age > 30) {
				std::cout << Name << " got promoted." << std::endl;
			} else {
				std::cout << Name << " cannot be promoted." << std::endl;
			}
		}
};

int main() {
	Employee employee = Employee("Bob", "YouTube", 25);
	employee.AskForPromotion();
	employee.setAge(50);
	employee.AskForPromotion();

	return 0;
}
