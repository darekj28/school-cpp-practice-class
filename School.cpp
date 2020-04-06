class School{
    private:
        vector<Student*> students;
        vector<Employee*> employees;
        vector<Course*> courses;
    
    public:
        
        void enroll(Student* newStud){
            students.push_back(newStud);
        }
    
        void removeEmployee(Employee* e){
            vector<Employee*>::iterator it;
            for (it = employees.begin(); it!= employees.end(); it++){
                if (*it == e){
                    employees.erase(e);
                    return
                }
            }
            cout << "No such employee found";
            return;
            
        }
};
