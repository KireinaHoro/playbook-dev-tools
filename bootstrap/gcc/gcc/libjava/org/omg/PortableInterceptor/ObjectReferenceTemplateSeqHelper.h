
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_ObjectReferenceTemplateSeqHelper__
#define __org_omg_PortableInterceptor_ObjectReferenceTemplateSeqHelper__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace PortableInterceptor
      {
          class ObjectReferenceTemplate;
          class ObjectReferenceTemplateSeqHelper;
      }
    }
  }
}

class org::omg::PortableInterceptor::ObjectReferenceTemplateSeqHelper : public ::java::lang::Object
{

public:
  ObjectReferenceTemplateSeqHelper();
  static JArray< ::org::omg::PortableInterceptor::ObjectReferenceTemplate * > * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static void insert(::org::omg::CORBA::Any *, JArray< ::org::omg::PortableInterceptor::ObjectReferenceTemplate * > *);
  static JArray< ::org::omg::PortableInterceptor::ObjectReferenceTemplate * > * read(::org::omg::CORBA::portable::InputStream *);
  static ::org::omg::CORBA::TypeCode * type();
  static void write(::org::omg::CORBA::portable::OutputStream *, JArray< ::org::omg::PortableInterceptor::ObjectReferenceTemplate * > *);
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableInterceptor_ObjectReferenceTemplateSeqHelper__
