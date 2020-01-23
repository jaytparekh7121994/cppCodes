# include <iostream>
# include <cstdio>

using namespace std;

class Student 
{
    class Student *classptr;
    int roll_no;
    int birthdate;
    protected:
        char Subject_choosen[10][10];
    
    public:
        
        string name;    
        void setRollNo(int );
        int getRollNo();
        void display_name(){
            cout << "Name :"<<name <<endl;
        }
};
class Subject: public Student
{
     public:
        char Subject[10][10]= { "Maths", "Physics", "Chemistry", "Hindi", "Gujarati", "Marathi", "English"};
        void SetSubject(int d)
        {
            for(int i=0; i<10 ;i++)
            {
                Subject_choosen[d][i] = Subject[d][i];
            }
            cout << Subject_choosen[d] << endl;
        }
};


void Student::setRollNo(int d){
            if( d < 0 ){
                perror("%d is a negative number"); 
            }
            
            else{
                roll_no = d;
            }
        }
        
int Student::getRollNo() {
            return roll_no;
}



int main(){
    Student stud1;
    stud1.name="Jay Parekh";
    stud1.setRollNo(140763);
    cout<<"Roll No:"<< stud1.getRollNo() << endl;
    stud1.display_name();
    stud1.SetSubject(5);
    return 0;
}
