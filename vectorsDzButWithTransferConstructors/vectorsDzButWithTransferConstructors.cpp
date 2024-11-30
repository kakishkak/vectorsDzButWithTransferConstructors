#include <iostream>

using namespace std;

class Vector {
	int x, y;
public:
	Vector() {
		x = 1;
		y = 1;
	}
	Vector(int x, int y) {
		this->x = x;
		this->y = y;
	}

	int getX() {
		return this->x;
	}

	int getY() {
		return this->y;
	}

	void PrintInfo() {
		cout << "X: " << this->x << "  Y: " << this->y << endl;
	}

	Vector operator+(const Vector& other) {						//
		return Vector(this->x + other.x, this->y + other.y);	//Plus for 2D
	}															//

	Vector operator-(const Vector& other) {						//
		return Vector(this->x - other.x, this->y - other.y);	//Minus for 2D
	}															//



	Vector operator++() {				 //
		++this->x;						 //
		++this->y;						 //
		return *this;					 //
	}									 //
										 //
	Vector operator++(int) {			 //
		Vector temp = *this;			 //
		++this->x;						 //
		++this->y;						 //
		return temp;					 //	Increments and Decrements for 2D vecor
	}									 //
										 //
	Vector operator--() {				 //
		--this->x;						 //
		--this->y;						 //
		return *this;					 //
	}									 //
										 //
	Vector operator--(int) {			 //
		Vector temp = *this;			 //
		--this->x;						 //
		--this->y;						 //
		return temp;					 //
	}									 //



	bool  operator>(Vector& other) {										   //
		if (this->x > other.x && this->y > other.y) {						   //
			return true;													   //
		}																	   //
		return false;														   //
	}																		   //
																			   //
	bool  operator>=(Vector& other) {										   //
		if (this->x >= other.x && this->y >= other.y) {						   //
			return true;													   //
		}																	   //
		return false;														   //
	}																		   //
																			   //
	bool  operator<(Vector& other) {										   //
		if (this->x < other.x && this->y < other.y) {						   // Other guys for 2D
			return true;													   //
		}																	   //
		return false;														   //
	}																		   //
																			   //
	bool  operator<=(Vector& other) {										   //
		if (this->x <= other.x && this->y <= other.y) {						   //
			return true;													   //
		}																	   //
		return false;														   //
	}																		   //
																			   //
	bool  operator==(Vector& other) {										   //
		if (this->x == other.x && this->y == other.y) {						   //
			return true;													   //
		}																	   //
		return false;														   //
	}																		   //
};																			   //

class Vector3D {
	int x, y, z;
public:
	Vector3D() {
		x = 2;
		y = 2;
		z = 3;
	}
	Vector3D(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}
	int getZ() {
		return this->z;
	}

	void PrintInfo() {
		cout << "X: " << this->x << "  Y: " << this->y << "  Z: " << this->z << endl;
	}

	Vector3D operator+(const Vector3D& other) {										  //
		return Vector3D(this->x + other.x, this->y + other.y, this->z + other.z);	  //Plus for 3D
	}																				  //

	Vector3D operator-(const Vector3D& other) {										  //
		return Vector3D(this->x - other.x, this->y - other.y, this->z - other.z);	  //Minus for 3D
	}																				  //

	Vector3D operator++() {			//
		++this->x;					//
		++this->y;					//
		return *this;				//
	}								//
									//
	Vector3D operator++(int) {		//
		Vector3D temp = *this;		//
		++this->x;					//
		++this->y;					//
		return temp;				//	Increments and Decrements for 3D vecor
	}								//
									//
	Vector3D operator--() {			//
		--this->x;					//
		--this->y;					//
		return *this;				//
	}								//
									//
	Vector3D operator--(int) {		//
		Vector3D temp = *this;		//
		--this->x;					//
		--this->y;					//
		return temp;				//
	}								//

	bool  operator>(Vector3D& other) {								//
		if (this->x > other.x && this->y > other.y) {				//
			return true;											//
		}															//
		return false;												//
	}																//
																	//
	bool  operator>=(Vector3D& other) {								//
		if (this->x >= other.x && this->y >= other.y) {				//
			return true;											//
		}															//
		return false;												//
	}																//
																	//
	bool  operator<(Vector3D& other) {								//
		if (this->x < other.x && this->y < other.y) {				// Other guys for 3D
			return true;											//
		}															//
		return false;												//
	}																//
																	//
	bool  operator<=(Vector3D& other) {								//
		if (this->x <= other.x && this->y <= other.y) {				//
			return true;											//
		}															//
		return false;												//
	}																//
																	//
	bool  operator==(Vector3D& other) {								//
		if (this->x == other.x && this->y == other.y) {				//
			return true;											//
		}															//
		return false;												//
	}

	friend Vector3D operator+(Vector3D& third, Vector& second);			//
	friend Vector3D operator-(Vector3D& third, Vector& second);			//
	friend bool operator>(Vector3D& third, Vector& second);				//
	friend bool operator>=(Vector3D& third, Vector& second);			// It`s all for 3D
	friend bool operator<(Vector3D& third, Vector& second);				//
	friend bool operator<=(Vector3D& third, Vector& second);			//
	friend bool operator==(Vector3D& third, Vector& second);			//

	friend Vector operator+(Vector& second, Vector3D& third);			//
	friend Vector operator-(Vector& second, Vector3D& third);			//
	friend bool operator>(Vector& second, Vector3D& third);				//
	friend bool operator>=(Vector& second, Vector3D& third);			// And this is for 2D
	friend bool operator<(Vector& second, Vector3D& third);				//
	friend bool operator<=(Vector& second, Vector3D& third);			//
	friend bool operator==(Vector& second, Vector3D& third);			//



};
Vector3D operator+(Vector3D& third, Vector& second) {											   //
	return Vector3D(third.x + second.getX(), third.y + second.getY(), third.z);					   //
}																								   //
Vector3D operator-(Vector3D& third, Vector& second) {											   //
	return Vector3D(third.x - second.getX(), third.y - second.getY(), third.z);					   //
}																								   //
bool operator>(Vector3D& third, Vector& second) {												   //
	if (third.getX() > second.getX() && third.getY() > second.getY()) {							   //
		return true;																			   //
	}																							   //
	else {																						   //
		return false;																			   //
	}																							   //
}																								   //
bool operator>=(Vector3D& third, Vector& second) {												   //
	if (third.getX() >= second.getX() && third.getY() >= second.getY()) {						   //
		return true;																			   //
	}																							   //
	else {																						   //
		return false;																			   //
	}																							   //
}																								   //	AAAAAAAAllll for 3D
bool operator<(Vector3D& third, Vector& second) {												   //
	if (third.getX() < second.getX() && third.getY() < second.getY()) {							   //
		return true;																			   //
	}																							   //
	else {																						   //
		return false;																			   //
	}																							   //
}																								   //
bool operator<=(Vector3D& third, Vector& second) {												   //
	if (third.getX() <= second.getX() && third.getY() <= second.getY()) {						   //
		return true;																			   //
	}																							   //
	else {																						   //
		return false;																			   //
	}																							   //
}																								   //
bool operator==(Vector3D& third, Vector& second) {												   //
	if (third.getX() == second.getX() && third.getY() == second.getY()) {						   //
		return true;																			   //
	}																							   //
	else {																						   //
		return false;																			   //
	}																							   //
}																								   //

Vector operator+(Vector& second, Vector3D& third) {												   //
	return Vector(second.getX() + third.getX(), second.getY() + third.getY());					   //
}																								   //
Vector operator-(Vector& second, Vector3D& third) {												   //
	return Vector(second.getX() - third.getX(), second.getY() - third.getY());					   //
}																								   //
bool operator>(Vector& second, Vector3D& third) {												   //
	if (second.getX() > third.getX() && second.getY() > third.getY()) {							   //
		return true;																			   //
	}																							   //
	return false;																				   //
}																								   //
bool operator>=(Vector& second, Vector3D& third) {												   //
	if (second.getX() >= third.getX() && second.getY() >= third.getY()) {						   //
		return true;																			   //
	} return false;																				   //
}																								   //
bool operator<(Vector& second, Vector3D& third) {												   //
	if (second.getX() < third.getX() && second.getY() < third.getY()) {							   //
		return true;																			   //
	}																							   //
	return false;																				   //	And AAAAAlll for 2D
}																								   //
bool operator<=(Vector& second, Vector3D& third) {												   //
	if (second.getX() <= third.getX() && second.getY() <= third.getY()) {						   //
		return true;																			   //
	} return false;																				   //
}																								   //
bool operator==(Vector& second, Vector3D& third) {												   //
	if (second.getX() == third.getX() && second.getY() == third.getY()) {						   //
		return true;																			   //
	} return false;																				   //
}																								   //

int main()
{
	bool superPuperChecker;		// Our cheker for > < >= <= ==																   

	//!!!!We add and subtract the first and second copies of each class, and compare the rest

	Vector obj2D_1 = Vector(2, 2);
	Vector obj2D_2 = Vector(3, 3);
	Vector obj2D_3 = Vector(5, 5);
	Vector obj2D_4 = Vector(5, 5);

	Vector3D obj3D_1 = Vector3D(2, 2, 2);
	Vector3D obj3D_2 = Vector3D(3, 3, 3);
	Vector3D obj3D_3 = Vector3D(5, 5, 5);
	Vector3D obj3D_4 = Vector3D(5, 5, 5);

	cout << ":VECTOR TO VECTOR:" << endl;				   //
	cout << "Plus" << endl;								   //
	obj2D_1 = obj2D_1 + obj2D_2;						   //
	obj2D_1.PrintInfo();								   //
	cout << "Minus" << endl;							   //
	obj2D_1 = obj2D_1 - obj2D_2;						   //
	obj2D_1.PrintInfo();								   //
	cout << "Operation \">\"" << endl;					   //
	superPuperChecker = obj2D_3 > obj2D_4;				   //
	cout << superPuperChecker << endl;					   //  Here`s working 2D to 2D
	cout << "Operation \">=\"" << endl;					   //
	superPuperChecker = obj2D_3 >= obj2D_4;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"<\"" << endl;					   //
	superPuperChecker = obj2D_3 < obj2D_4;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"<=\"" << endl;					   //
	superPuperChecker = obj2D_3 <= obj2D_4;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"==\"" << endl;					   //
	superPuperChecker = obj2D_3 == obj2D_4;				   //
	cout << superPuperChecker << endl << endl;			   //


	cout << ":VECTOR3D TO VECTOR3D:" << endl;			   //
	cout << "Plus" << endl;								   //
	obj3D_1 = obj3D_1 + obj3D_2;						   //
	obj3D_1.PrintInfo();								   //
	cout << "Minus" << endl;							   //
	obj3D_1 = obj3D_1 - obj3D_2;						   //
	obj3D_1.PrintInfo();								   //
	cout << "Operation \">\"" << endl;					   //
	superPuperChecker = obj3D_3 > obj3D_4;				   //
	cout << superPuperChecker << endl;					   //  Here`s working 3D to 3D
	cout << "Operation \">=\"" << endl;					   //
	superPuperChecker = obj3D_3 >= obj3D_4;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"<\"" << endl;					   //
	superPuperChecker = obj3D_3 < obj3D_4;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"<=\"" << endl;					   //
	superPuperChecker = obj3D_3 <= obj3D_4;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"==\"" << endl;					   //
	superPuperChecker = obj3D_3 == obj3D_4;				   //
	cout << superPuperChecker << endl << endl;			   //


	cout << ":VECTOR3D TO VECTOR:" << endl;			       //
	cout << "Plus" << endl;								   //
	obj3D_1 = obj3D_1 + obj2D_1;						   //
	obj3D_1.PrintInfo();								   //
	cout << "Minus" << endl;							   //
	obj3D_1 = obj3D_1 - obj2D_1;						   //
	obj3D_1.PrintInfo();								   //
	cout << "Operation \">\"" << endl;					   //
	superPuperChecker = obj3D_3 > obj2D_3;				   //
	cout << superPuperChecker << endl;					   //  Here`s working 3D to 2D
	cout << "Operation \">=\"" << endl;					   //
	superPuperChecker = obj3D_3 >= obj2D_3;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"<\"" << endl;					   //
	superPuperChecker = obj3D_3 < obj2D_3;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"<=\"" << endl;					   //
	superPuperChecker = obj3D_3 <= obj2D_3;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"==\"" << endl;					   //
	superPuperChecker = obj3D_3 == obj2D_3;				   //
	cout << superPuperChecker << endl << endl;			   //


	cout << ":VECTOR TO VECTOR3D:" << endl;				   //
	cout << "Plus" << endl;								   //
	obj2D_1 = obj2D_1 + obj3D_1;						   //
	obj2D_1.PrintInfo();								   //
	cout << "Minus" << endl;							   //
	obj2D_1 = obj2D_1 - obj3D_1;						   //
	obj2D_1.PrintInfo();								   //
	cout << "Operation \">\"" << endl;					   //
	superPuperChecker = obj2D_3 > obj3D_3;				   //
	cout << superPuperChecker << endl;					   //  And here`s working 2D to 3D
	cout << "Operation \">=\"" << endl;					   //
	superPuperChecker = obj2D_3 >= obj3D_3;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"<\"" << endl;					   //
	superPuperChecker = obj2D_3 < obj3D_3;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"<=\"" << endl;					   //
	superPuperChecker = obj2D_3 <= obj3D_3;				   //
	cout << superPuperChecker << endl;					   //
	cout << "Operation \"==\"" << endl;					   //
	superPuperChecker = obj2D_3 == obj3D_3;				   //
	cout << superPuperChecker;							   //
}