
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicBorders$RadioButtonBorder__
#define __javax_swing_plaf_basic_BasicBorders$RadioButtonBorder__

#pragma interface

#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Component;
        class Graphics;
        class Insets;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicBorders$RadioButtonBorder;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicBorders$RadioButtonBorder : public ::javax::swing::plaf::basic::BasicBorders$ButtonBorder
{

public:
  BasicBorders$RadioButtonBorder(::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *, ::java::awt::Color *);
  virtual void paintBorder(::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  virtual ::java::awt::Insets * getBorderInsets(::java::awt::Component *);
  virtual ::java::awt::Insets * getBorderInsets(::java::awt::Component *, ::java::awt::Insets *);
public: // actually package-private
  static const jlong serialVersionUID = 1596945751743747369LL;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicBorders$RadioButtonBorder__