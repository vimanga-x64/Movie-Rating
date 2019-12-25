// Vimanga V.Umange
//A538P992

#include <iostream>
#include <string>
using namespace std;
class Movie {		// Creating a class/Declaration
public:				// Declaring member variables
	Movie(string mname, string mpaarating);
	//acessor/modifier
		//getter/setter
		void setname(string mname);
		std::string getname(); 
		std::string getmpaarating();
		void setmpaarating (string mpaarating);
		 void addrating(int num);
		 double getAverage();

	private:
	std::string name;
	std::string mpaa;
	int rating[5];
};


Movie::Movie(string mname, string mpaarating)		// Class implementation
// Constructors
{
	name = mname;
	mpaa = mpaarating;
	rating[0] = 0;
	rating[1] = 0;
	rating[2] =0;
	rating[3] = 0;
	rating[4] = 0;

}
string Movie::getname()
{
	return name;
}
void Movie::setname(string mname)
{
	name = mname;

}
string Movie::getmpaarating()
{
	return mpaa;
}
void Movie::setmpaarating(string mpaarating)
{
	mpaa = mpaarating;
}
void Movie::addrating (int num) // linked to the Movie class
{
	switch (num) {
	case 1:
		rating[0]++; break; //Incrementing by 1
	case 2:
		rating[1]++; break;// Incrementing by 1
	case 3:
		rating[2]++; break;	//Incrementing by 1
	case 4:
		rating[3]++; break;	//Incrementing by 1
	case 5:
		rating[4]++; break;	//Incrementing by 1

	}
	

}

double Movie::getAverage()	// linked to the class Movie
{
	return (double)( rating[0] * 1 + rating[1] * 2 + rating[2] * 3 + rating[3] * 4 + rating[4] * 5) /
		(rating[0] + rating[1] + rating[2] + rating[3] + rating[4]); // The ratings are multiplies by their respective weights and divided by themselves
}
	
	
int main() {
	Movie obj1("Zoro", "PG-13");	// Object 'obj1' is created from Movie
	// add ratings for movie 1
	obj1.setname("Avatar");
	obj1.setmpaarating("PG-13");
	obj1.addrating(1);
	obj1.addrating(2);
	obj1.addrating(3);
	obj1.addrating(4);
	obj1.addrating(5);
	obj1.addrating(1);

	// add rating for movie 2
	Movie obj2("The Social Network", "R"); // Object obj2 is created from Movie
	obj2.addrating(5);
	obj2.addrating(4);
	obj2.addrating(3);
	obj2.addrating(2);
	obj2.addrating(1);

	// add rating for movie 2
	Movie obj3(" The Internship", "G");	// Object obj3 is created from Movie
	obj3.addrating(3);
	obj3.addrating(5);
	obj3.addrating(2);
	obj3.addrating(4);
	obj3.addrating(1);

	cout << "The name of movie 1 is: " << obj1.getname() << endl;
	cout << "The mpaa rating of movie 1 is: " << obj1.getmpaarating() << endl;
	cout << " The Average rating of movie 1 is: " << obj1.getAverage() << endl << endl;

	cout << " The name of movie 2 is: " << obj2.getname() << endl; // obj2 gets moviename by linking with the constructor it was created from and getiing the mname variable
	cout << "The mpaa rating of movie 1 is: " << obj2.getmpaarating() << endl; // gets mpaarating by linking with the costructor and returning the mpaa variable
	cout << " The Average user rating of movie 2 is: " << obj2.getAverage() << endl<<endl;	// Calculates the average of all ratings in obj2 from the getratings() function and then displays it here
	
	cout << "The name of movie 3 is: " << obj3.getname() << endl;
	cout << " The mpaa rating of movie 3 is: " << obj3.getmpaarating() << endl;
	cout << " The Average user rating for movie 3 is: " << obj3.getAverage() << endl;


	
	}
