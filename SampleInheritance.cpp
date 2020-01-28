# include <iostream>
# include <string>

using namespace std;

class Student 
{
    class Student *classptr; //How to use it have to check
    
    int RollNo;
    int BirthDate;
    string Name;
    
    protected:
        string SubjectChoosen[10];
    
    public:
        
        //set Methods 
        void setName(string );    
        void setRollNo(int );
        
        // get Methods 
        int getRollNo();
        string getName();
        
        Student()
		{
			Name = "NULL";
			RollNo = 0;
			SubjectChoosen[10]={};
		}
};

void Student :: setName(string name)
{
    Name = name;
}

void Student :: setRollNo(int roll)
{
    if (roll < 0)
    {
        perror("The No.is a negative number");    
    }
    else
    {
        RollNo = roll;
    }
}


int Student :: getRollNo() 
{
    return RollNo;
}

string Student :: getName()
{
    return Name;
}


class Subject : public Student
{
    public:
        int sel_row[10];
        int sel_col;
        char Subject_sel[10][10]= { "Physics", "Chemistry", "Maths", "Hindi", "Gujarati", "Marathi", "English"};
        
        // Set Methods
        void setSubject(size_t ,int subjcode[ ]);
        
        // Get Methods 
        string* getSubject();
};

void Subject :: setSubject(size_t subjtot,int subjcode[ ])
{
    for (int i=0; i< subjtot ;i++)
    {
        int num = subjcode[i];
        SubjectChoosen[i] = Subject_sel[num];
    }
}

string* Subject :: getSubject()
{
    string *sptr;
    sptr = SubjectChoosen;
    return sptr;
}

class Result: public Subject
{
	int Marks[10];
	public:
		int* getMarks();
		void setMarks(size_t ,int [] );
		Result()
		{
			Marks[10]={0};
		}
};

void Result :: setMarks(size_t subjtot, int marks_data[ ])
{
    for(int i=0 ; i< subjtot ; i++)
    {
        Marks[i] = marks_data[i];
    }
}

int* Result::getMarks()
{
	return Marks; 
}



int main()
{
    int subjcode[10]={};
    int subjmarks[10]={};
    
    string InpName;
    string remarks;
    int scode[10]={};
    int mcode[10]={};
    int RollNo;
    size_t NoOfSubj;
    
    Result stud1;
    
    cout << "Enter the Name: ";
    getline(cin,InpName);  // To use Strings with spaces we need to use getline
    
    // Syntax getline(istream& is, string& str, char delim)
    
    
    cout << "Enter the Roll Number: ";
    cin >> RollNo;
    
    cout << "Enter Number of Subjects: ";
    cin >> NoOfSubj;
    
    
    cout << "Enter the Subject ID: "<<endl;
    cout << " 0. Physics \n 1. Chemistry \n 2. Maths \n 3. Hindi \n 4. Gujarati \n 5. Marathi \n 6. English"<<endl;
    
    for (int i = 0 ; i< NoOfSubj ; i++)
    {
        cout << "Subject No."<< i <<":";
        cin >> scode[i];
        subjcode[i] = scode[i];
        
        cout << " Marks : ";
        cin >> mcode[i];
        subjmarks[i] = mcode[i];
    }
    
    stud1.setSubject(NoOfSubj,subjcode);
    stud1.setName(InpName);
    stud1.setRollNo(RollNo);
    stud1.setMarks(NoOfSubj,subjmarks);
    
    cout<<"Roll No :"<< stud1.getRollNo() << endl;
    cout <<"Name :" << stud1.getName() << endl;
    
    string *sptr = stud1.getSubject();
    int *ptr = stud1.getMarks();
    
    for (int i=0 ; i< NoOfSubj ;i++)
    {
        cout << *(sptr+i) ;
        cout <<":"<< *(ptr+i)<<endl;
    }
    
    cout << "Remarks:";
   getline(cin,remarks,'.');  Remove the comment in the end 
    
    //cout << remarks<<".";
    return 0;
}


//Solve the problem. What if the student has more than one Subject
//Stud1 Must have Subjects choosen from the given list and then associate the marks of that subject with it
// Name: Jay Parekh 
//Roll No.: 140763
// Subject_choosen are Hindi, English and Marathi 
// Marks obtained Hindi: 50, English: 80, Marathi: 90
