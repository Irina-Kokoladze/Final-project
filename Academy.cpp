

#include <iostream>


using namespace std;

class AbstractSubject{
    protected: 
        string SubjectName;
        string CourseDuration;
        string StartDate;
        
        
    AbstractSubject(string SubjectName, string CourseDuration, string StartDate){
        this -> SubjectName = SubjectName;
        this -> CourseDuration = CourseDuration;
        this -> StartDate = StartDate;
    }
    
    string getSubjectName() {
        return SubjectName;
    }
    
    void setSubjectName(string SubjectName){
        this -> SubjectName = SubjectName;
    }
    
    string getCourseDuration () {
        return CourseDuration;
    }
    
    void setCouseDuration (string CourseDuration){
        this -> CourseDuration = CourseDuration;
    }
    
    string getStartDate(){
        return StartDate;
    }
    
    void setStartDate( string StartDate){
        this -> StartDate = StartDate;
    }
    
};

class SkillwillSubject : public AbstractSubject {
    public:
    SkillwillSubject(string SubjectName, string CourseDuration, string StartDate): AbstractSubject (SubjectName, CourseDuration, StartDate){};
    void subjectDescr(){
        cout << "This subject is " << SubjectName << endl;
        cout << "Duration of the course: "<< CourseDuration << endl;
        cout << "And the start date is: "<<StartDate<< endl;
        
    }
};

class AbstractStudent{
    protected:
      string StudentName;
      string StudentLastname;
      int StudentAge;
      string Section;
      string CourseName;
    

      

      AbstractStudent(string StudentName,string StudentLastname,int StudentAge, string Section, string CourseName){
          this->StudentName = StudentName;
          this->StudentLastname = StudentLastname;
          this->StudentAge = StudentAge;
          this->Section = Section;
          this->CourseName = CourseName;
          
      };
      
      string getStudentName(){
          return StudentName;
      };
      
      void setStudentName(string StudentName){
          this->StudentName = StudentName;
      };
      
       string getStudentLastname(){
          return StudentLastname;
      };
      
      void setStudentLastname(string StudentLastname){
          this->StudentLastname = StudentLastname;
      };
      
      int getStudentAge(){
          return StudentAge;
      };
      
      void setStudentAge(int StudentAge){
          this->StudentAge = StudentAge;
      };
      
      string getSection(){
          return Section;
      };
      
      void setSection(string Section){
          this->Section = Section;
      };

       string getCourseName(){
          return CourseName;
      };
      
      void setCourseName(string CourseName){
          this->CourseName = CourseName;
      };
      
    void Attend() {
        cout<<"სტუდენტი ესწრება ლექციას"<<endl;
    }
      
};


class SkillwillStudent: public AbstractStudent{
    public:
    SkillwillStudent(string StudentName, string StudentLastname, int StudentAge, string Section,string CourseName): AbstractStudent

    (StudentName, StudentLastname, StudentAge, Section, CourseName){}
     void Attend( string SubjectName) {
         cout<<StudentName<<"ესწრება"<<SubjectName<<"ლექციას"<<endl;
     };
         void studentDescr() {
         cout << "სტუდენტის  სახელი :  "  <<StudentName<<  endl;
         cout << "სტუდენტის  გვარი: "  <<StudentLastname<< endl;
         cout << "სტუდენტის  ასაკი:  "  <<StudentAge<< endl;
         cout << "სტუდენტი  სწავლობს:  "  <<Section<<"სექციაში"<<CourseName <<"ს კურსზე"<<endl;
     };
     
     void update (string StudentName, double Score){
         double finalScore;
         finalScore = Score * 1.2;
         cout<< "სტუდენტის ქვიზის  საბოლოო ქულა : "<< finalScore<< endl;
         
     };
};



class AbstractLecturer {
    protected:
       string Name;
       string Lastname;
       string CourseFullName;
       
AbstractLecturer (string Name, string Lastname, string CourseFullName){
    this->Name = Name;
    this->Lastname = Lastname;
    this->CourseFullName= CourseFullName;
    };

string getName(){
    return Name;
    };

void setName(string Name){
    this->Name = Name;
    };

string getLastname(){
    return Lastname;
    };

void setLastname(string Lastname){
    this->Lastname = Lastname;
    };

string getCourseFullName(){
    return CourseFullName;
    };

void setCourseFullName(string CourseFullName){
    this->CourseFullName = CourseFullName;
    };

void conducts(){
    cout << "ლექტორი ატარებს ლექციას" <<endl;
    };
};

class SkillwillLecturer: public AbstractLecturer {
    public:
    string Chapter;
    string Level;
    SkillwillLecturer(string Name, string LastName, string CourseFullName): AbstractLecturer
    
    (Name, LastName, CourseFullName) {}
    void conducts(string SubjectName, string StartDate){
        cout <<"სულხან სახვაძე ატარებს "<<SubjectName<<"ს ლექციას"<<StartDate<<  endl;
    };

};


int main()
{
    SkillwillStudent Student1("ნინო","ამაზაშვილი",24,"B","Python");
    SkillwillLecturer Lecturer1("სულხანი", "სახვაძე", "რბილი უნარები");
    SkillwillSubject Subject1("Python", "3 months", "1st March");
    Student1.Attend("Python");
    Student1.update("ნინო", 25);
    Lecturer1.conducts("რბილი უნარები","15 სექტემბერს");
   
    
    
    return 0;
}