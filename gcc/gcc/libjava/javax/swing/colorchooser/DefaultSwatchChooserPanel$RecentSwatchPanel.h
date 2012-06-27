
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_colorchooser_DefaultSwatchChooserPanel$RecentSwatchPanel__
#define __javax_swing_colorchooser_DefaultSwatchChooserPanel$RecentSwatchPanel__

#pragma interface

#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$SwatchPanel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Graphics;
      namespace event
      {
          class MouseEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace colorchooser
      {
          class DefaultSwatchChooserPanel$RecentSwatchPanel;
      }
    }
  }
}

class javax::swing::colorchooser::DefaultSwatchChooserPanel$RecentSwatchPanel : public ::javax::swing::colorchooser::DefaultSwatchChooserPanel$SwatchPanel
{

public: // actually package-private
  DefaultSwatchChooserPanel$RecentSwatchPanel();
public:
  virtual ::java::awt::Color * getColorForPosition(jint, jint);
public: // actually protected
  virtual void initializeColors();
private:
  jint getIndexForCell(jint, jint);
public: // actually package-private
  virtual void addColorToQueue(::java::awt::Color *);
public:
  virtual void paint(::java::awt::Graphics *);
  virtual ::java::lang::String * getToolTipText(::java::awt::event::MouseEvent *);
public: // actually package-private
  JArray< ::java::awt::Color * > * __attribute__((aligned(__alignof__( ::javax::swing::colorchooser::DefaultSwatchChooserPanel$SwatchPanel)))) colors;
public:
  static ::java::awt::Color * defaultColor;
public: // actually package-private
  jint start;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_colorchooser_DefaultSwatchChooserPanel$RecentSwatchPanel__