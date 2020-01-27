# include <iostream>
# include <cstdio>
# include <string>

class Student 
{
    class Student *classptr; //How to use it have to check
    
    int RollNo;
    int BirthDate;
    string Name;
    
    protected:
        char SubjectChoosen[10];
    
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
        perror("%d is a negative number",roll);    
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
        char Subject_sel[10][10]= { "Maths", "Physics", "Chemistry", "Hindi", "Gujarati", "Marathi", "English"};
        
        // Set Methods
        void setSubject(int subjcode[ ]);
        
        // Get Methods 
        string* getSubject();
};

void Subject :: setSubject(int subjcode[ ])
{
    int n = sizeof(subjcode)/sizeof(subjcode[0]);
    
    for (int i=0; i<=n ;i++)
    {
        int num = subjcode[i];
        SubjectChoosen[i] = Subject_sel[num];
    }
}

string* Subject :: getSubject()
{
    string *sptr;
    sptr = Subject_choosen;
    return sptr;
}

class Result: public Subject
{
	int Marks[10];
	public:
		int getMarks();
		void setMarks(int [] );
		Result()
		{
			Marks[10]={0};
		}
};

void Result :: setMarks(int marks_data[])
{
    int siz = sizeof(marks_data)/sizeof(marks_data[0]);
    for(int i=0 ; i<siz ; i++)
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
    int subjcode[10]={3,5,1};
    int subjmarks[10]={40,80,90};
    
    string InpName;
    int RollNo;
    int NoOfSubj;
    string Subject[10];
    
    
    Result stud1;
    
    cout << "Enter the Name: ";
    cin >> InpName ;
    cout << endl;
    
    cout << "Enter the Roll Number: ";
    cin >> RollNo;
    cout << endl;
    
    cout << "Enter Number of Subjects: ";
    cin >> NoOfSubj;
    cout << endl;
    
    cout << "Enter the Subjects: ";
    for (int i = 0 ; i<= NoOfSubj ; i++)
    {
        cin >> Subject[i];
        cout << endl;
    }
    
    stud1.setName(InpName);
    stud1.setRollNo(RollNo);
    
    cout<<"Roll No :"<< stud1.getRollNo() << endl;
    cout <<"Name :" << stud1.getName() << endl;
    
    stud1.setSubject(subjcode);
    stud1.setMarks(subjmarks);
    
    string *sptr = stud1.getSubject();
    int *ptr = stud1.getMarks();
    
    for (int i=0 ; i<=2 ;i++)
    {
        cout << *(sptr+i) ;
        cout <<":"<< *(ptr+i)<<endl;
    }
    return 0;
}


/*Stud1 Must have Subjects choosen from the given list and then associate the marks of that subject with it
Name: Jay Parekh 
Roll No.: 140763
Subject_choosen are Hindi, English and Marathi 
Marks obtained Hindi: 50, English: 80, Marathi: 90 */

// Next update should be Drop Down menu for set Methods and get Methods by User Inputs
// Seek and modify should also be there -> seek by name and seek by roll no.
// Check if the inline functions would work here 
// Add a class Date -> having child classes BirthDate, Joining Date 
// Add Class standard and division 
// How to make .header file and access the classes and methods
// How to export the data in xml file or excel file 
