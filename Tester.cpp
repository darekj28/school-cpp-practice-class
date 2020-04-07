class Tester{
    public:
        void testMethod(){
            School* mySchool;
            Student* s("Andrew");
            Student* s1("Steve");
            Employee* e(s, "Darek");
            
            mySchool->enroll(s);
            mySchool->enroll(s1);
            mySchool->printStudents();
            mySchool->removeStudent(s);
            mySchool->printStudents();
            mySchool->addEmployee(e);
            mySchool->printEmployees();
            e->quit();
            mySchool->printEmployees();
            
        }
}
