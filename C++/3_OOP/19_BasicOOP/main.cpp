#include <iostream>

using std::string;

class AbstractEmployee {
	// pure virtual function, all inherited classes require it
	virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
	protected:
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

		// check for implementation in derived classes
		// and the highest derived is executed instead
		virtual void Work() {
			std::cout << this->Name << " is checking email, task backlog, then performing the tasks. " << std::endl;
		}

		void IntroduceYourself() {
			using namespace std;
			cout << "Name - " << this->Name << endl;
			cout << "Company - " << this->Company << endl;
			cout << "Age - " << this->Age << endl;
		}

		void AskForPromotion() {
			if (this->Age >= 30) {
				std::cout << this->Name << " got promoted." << std::endl;
			} else {
				std::cout << this->Name << " cannot be promoted." << std::endl;
			}
		}
};

class Developer : public Employee {
	public:
		string FavProgrammingLanguage;

		Developer(string name, string company, int age, string favProgramLang) : Employee(name, company, age) {
			this->FavProgrammingLanguage = favProgramLang;
		}

		void Work() {
			std::cout << this->Name << " fixed bug using " << this->FavProgrammingLanguage << std::endl;
		}
};

class Teacher : public Employee {
	public:
		string Subject;
		
		Teacher(string name, string company, int age, string subject) : Employee(name, company, age) {
			this->Subject = subject;
		}
		
		void Work() {
			std::cout << this->Name << " is teaching the subject " << this->Subject << std::endl;
		}
};

int main() {
	Developer dev = Developer("Bill", "Amazon", 20, "C");
	Employee* e1 = &dev; // dev as a pointer "*" to the employee class, which is dervied "&"
	e1->IntroduceYourself();
	e1->Work();
	e1->Work();
	e1->Work();
	e1->AskForPromotion();

	Teacher teacher = Teacher("Fred", "School", 30, "Mathematics");
	Employee* e2 = &teacher;
	e2->IntroduceYourself();
	e2->Work();
	e2->Work();
	e2->Work();
	e2->AskForPromotion();
	
	return 0;
}
