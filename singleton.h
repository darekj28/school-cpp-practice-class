/* Singleton class that gets and sets some data globally shared
   among all instances of the class. This example uses an integer.*/

class Singleton{
  
  private:
    // store the single instance of the class
    static Singleton* instance_;

    // Boolean indicating whether or not this singleton class has been initialized.
    bool has_been_initialized_;

    // Data stored by this Singleton class.
    int data_;
    Singleton();
  
  public:
    
    // Returns an instance of this singleton class.
    static Singleton* createObj();

    // Fetches the data for this singleton class.
    int getData() const;

    // Updates the data for this singleton class.
    void setData(const int& data);

};