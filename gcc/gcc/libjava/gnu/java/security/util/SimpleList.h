
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_util_SimpleList__
#define __gnu_java_security_util_SimpleList__

#pragma interface

#include <java/util/AbstractList.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace util
        {
            class SimpleList;
        }
      }
    }
  }
}

class gnu::java::security::util::SimpleList : public ::java::util::AbstractList
{

public:
  SimpleList(::java::lang::Object *);
  SimpleList(::java::lang::Object *, ::java::lang::Object *);
  SimpleList(::java::lang::Object *, ::java::lang::Object *, ::java::lang::Object *);
  SimpleList(::java::lang::Object *, ::java::lang::Object *, ::java::lang::Object *, ::java::lang::Object *);
  SimpleList();
  SimpleList(::java::util::Collection *);
  jint size();
  ::java::lang::Object * get(jint);
  ::java::lang::String * toString();
private:
  JArray< ::java::lang::Object * > * __attribute__((aligned(__alignof__( ::java::util::AbstractList)))) elements;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_security_util_SimpleList__