#pragma once

class Singleton
{
public:
  virtual ~Singleton();

  static Singleton* getInstance();
  void singletonOperation();

private:
  Singleton();

  static Singleton *INSTANCE;
};
