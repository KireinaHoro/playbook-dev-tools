
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_AttributedCharacterIterator__
#define __java_text_AttributedCharacterIterator__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace text
    {
        class AttributedCharacterIterator;
        class AttributedCharacterIterator$Attribute;
    }
  }
}

class java::text::AttributedCharacterIterator : public ::java::lang::Object
{

public:
  virtual ::java::util::Set * getAllAttributeKeys() = 0;
  virtual ::java::util::Map * getAttributes() = 0;
  virtual ::java::lang::Object * getAttribute(::java::text::AttributedCharacterIterator$Attribute *) = 0;
  virtual jint getRunStart() = 0;
  virtual jint getRunStart(::java::util::Set *) = 0;
  virtual jint getRunStart(::java::text::AttributedCharacterIterator$Attribute *) = 0;
  virtual jint getRunLimit() = 0;
  virtual jint getRunLimit(::java::util::Set *) = 0;
  virtual jint getRunLimit(::java::text::AttributedCharacterIterator$Attribute *) = 0;
  virtual jchar current() = 0;
  virtual jchar next() = 0;
  virtual jchar previous() = 0;
  virtual jchar first() = 0;
  virtual jchar last() = 0;
  virtual jint getIndex() = 0;
  virtual jchar setIndex(jint) = 0;
  virtual jint getBeginIndex() = 0;
  virtual jint getEndIndex() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_text_AttributedCharacterIterator__