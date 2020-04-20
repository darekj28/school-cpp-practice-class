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