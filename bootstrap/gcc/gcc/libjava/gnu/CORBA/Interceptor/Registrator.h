
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_Interceptor_Registrator__
#define __gnu_CORBA_Interceptor_Registrator__

#pragma interface

#include <org/omg/CORBA/LocalObject.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace Interceptor
      {
          class Registrator;
      }
      namespace Poa
      {
          class ORB_1_4;
      }
        class gnuCodecFactory;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Object;
      }
      namespace IOP
      {
          class CodecFactory;
      }
      namespace PortableInterceptor
      {
          class ClientRequestInterceptor;
          class IORInterceptor;
          class Interceptor;
          class PolicyFactory;
          class ServerRequestInterceptor;
      }
    }
  }
}

class gnu::CORBA::Interceptor::Registrator : public ::org::omg::CORBA::LocalObject
{

public:
  Registrator(::gnu::CORBA::Poa::ORB_1_4 *, ::java::util::Properties *, JArray< ::java::lang::String * > *);
private:
  void checkProperties(::java::util::Properties *);
  void checkFile(::java::lang::String *, ::java::lang::String *);
public:
  virtual void pre_init();
  virtual ::java::util::Map * getRegisteredReferences();
  virtual void post_init();
  virtual JArray< ::org::omg::PortableInterceptor::ServerRequestInterceptor * > * getServerRequestInterceptors();
  virtual JArray< ::org::omg::PortableInterceptor::ClientRequestInterceptor * > * getClientRequestInterceptors();
  virtual JArray< ::org::omg::PortableInterceptor::IORInterceptor * > * getIORInterceptors();
  virtual void add_client_request_interceptor(::org::omg::PortableInterceptor::ClientRequestInterceptor *);
  virtual void add_ior_interceptor(::org::omg::PortableInterceptor::IORInterceptor *);
  virtual void add_server_request_interceptor(::org::omg::PortableInterceptor::ServerRequestInterceptor *);
  virtual jint allocate_slot_id();
private:
  void add(::java::util::ArrayList *, ::org::omg::PortableInterceptor::Interceptor *);
public:
  virtual JArray< ::java::lang::String * > * arguments();
  virtual ::org::omg::IOP::CodecFactory * codec_factory();
  virtual ::java::lang::String * orb_id();
  virtual void register_initial_reference(::java::lang::String *, ::org::omg::CORBA::Object *);
  virtual void register_policy_factory(jint, ::org::omg::PortableInterceptor::PolicyFactory *);
  virtual ::org::omg::CORBA::Object * resolve_initial_references(::java::lang::String *);
  virtual jboolean hasClientRequestInterceptors();
  virtual jboolean hasServerRequestInterceptors();
  virtual jboolean hasIorInterceptors();
private:
  static const jlong serialVersionUID = 1LL;
public:
  static ::java::lang::String * m_prefix;
private:
  ::java::util::ArrayList * __attribute__((aligned(__alignof__( ::org::omg::CORBA::LocalObject)))) m_server;
  ::java::util::ArrayList * m_client;
  ::java::util::ArrayList * m_ior;
public:
  ::java::util::Hashtable * m_policyFactories;
  ::java::util::TreeMap * m_references;
  ::java::util::ArrayList * m_initializers;
public: // actually package-private
  ::gnu::CORBA::Poa::ORB_1_4 * orb;
  JArray< ::java::lang::String * > * m_args;
  ::gnu::CORBA::gnuCodecFactory * m_codecFactory;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_Interceptor_Registrator__
