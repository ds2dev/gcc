
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_POAPackage_InvalidPolicyHelper__
#define __org_omg_PortableServer_POAPackage_InvalidPolicyHelper__

#pragma interface

#include <java/lang/Object.h>
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
      namespace PortableServer
      {
        namespace POAPackage
        {
            class InvalidPolicy;
            class InvalidPolicyHelper;
        }
      }
    }
  }
}

class org::omg::PortableServer::POAPackage::InvalidPolicyHelper : public ::java::lang::Object
{

public:
  InvalidPolicyHelper();
  static ::org::omg::CORBA::TypeCode * type();
  static void insert(::org::omg::CORBA::Any *, ::org::omg::PortableServer::POAPackage::InvalidPolicy *);
  static ::org::omg::PortableServer::POAPackage::InvalidPolicy * extract(::org::omg::CORBA::Any *);
  static ::java::lang::String * id();
  static ::org::omg::PortableServer::POAPackage::InvalidPolicy * read(::org::omg::CORBA::portable::InputStream *);
  static void write(::org::omg::CORBA::portable::OutputStream *, ::org::omg::PortableServer::POAPackage::InvalidPolicy *);
private:
  static ::org::omg::CORBA::TypeCode * typeCode;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableServer_POAPackage_InvalidPolicyHelper__
