class Person{
    private:
        string name;
    public:
        Person(string n){
            name(n);
        }
        void getName(){
            return name;
        }
        void setName(string n){
            name = n;
        }
};


