/* Singleton class that gets and sets some data globally shared
   among all instances of the class */

class Singleton{
  
  private:
    // store the single instance of the class
    static Singleton* instance;
    int data;
    Singleton();
  
  public:
    
    static Singleton* createObj();
    int getData();
    void setData(const int& data);

};