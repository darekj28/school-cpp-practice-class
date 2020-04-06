class Course{
    private:
        vector<Student*> students;
        Teacher* teacher;
    public:
    
        Course(vector<Student*> s, Teacher* t){
            students(s);
            teacher(t);
        }
        Course(Teacher* t){
            teacher(t);
        }
        void add(Student* s){
            students.push_back(s);
        }
        void remove(Student* s){
            vector<Student*>::iterator it;
            for (it = students.begin(); it!= students.end(); it++){
                if (*it == s){
                    s.erase(it);
                    return
                }
            }
            cout<< "No such student found";
            return;
        }
    
};