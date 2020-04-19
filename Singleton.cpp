class Singleton{
  
  private:
    static Singleton* instance;
  
    Singleton(){
    }
  
  public:
    
    static Singleton* createObj(){
      if (!instance){
        instance = new Singleton();
        return instance;
      }
    }

};