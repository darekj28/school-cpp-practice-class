Singleton* Singleton::instance = 0;

Singleton::Singleton(){
  data = 0;
}

Singleton* Singleton::createObj(){
  if (instance == 0){
    instance = new Singleton();
  }
  return instance;
}

Singleton::getData(){
  return this->data;
}

Singleton::setData(const int& data){
  this->data = data;
}

