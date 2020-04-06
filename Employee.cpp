class Employee: public Person{
    private:
        School* school;
    public:
        Employee(School* s, string n){
            school = s;
            super(n);
        }
        void quit(){
            s->removeEmployee(this);
        }
    
        
};
