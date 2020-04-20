Singleton* Singleton::instance = 0;

Singleton::Singleton(){
  has_been_initialized_ = true;
  data_ = 0;
}

Singleton* Singleton::createObj(){
  if (!has_been_initialized_){
    instance_ = new Singleton();
  }
  return instance;
}

Singleton::getData() const {
  return data_;
}

Singleton::setData(const int& data){
  data_ = data;
}

