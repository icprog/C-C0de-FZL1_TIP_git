// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IProcessManagerCorbaDef_hh__
#define __IProcessManagerCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
#endif



#ifndef __ProcessManagementDataDefinitionsCorbaDef_hh_EXTERNAL_GUARD__
#define __ProcessManagementDataDefinitionsCorbaDef_hh_EXTERNAL_GUARD__
#include <ProcessManagementDataDefinitionsCorbaDef.h>
#endif
#ifndef __IManagedProcessCorbaDef_hh_EXTERNAL_GUARD__
#define __IManagedProcessCorbaDef_hh_EXTERNAL_GUARD__
#include <IManagedProcessCorbaDef.h>
#endif
#ifndef __IManagedApplicationCorbaDef_hh_EXTERNAL_GUARD__
#define __IManagedApplicationCorbaDef_hh_EXTERNAL_GUARD__
#include <IManagedApplicationCorbaDef.h>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE TA_Base_Core

_CORBA_MODULE_BEG

  class ProcessRunningException : public ::CORBA::UserException {
  public:
    
    

    inline ProcessRunningException() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    ProcessRunningException(const ProcessRunningException&);
    
    ProcessRunningException& operator=(const ProcessRunningException&);
    virtual ~ProcessRunningException();
    virtual void _raise() const;
    static ProcessRunningException* _downcast(::CORBA::Exception*);
    static const ProcessRunningException* _downcast(const ::CORBA::Exception*);
    static inline ProcessRunningException* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    inline void operator>>=(cdrStream&) const { }
    inline void operator<<=(cdrStream&) { }

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ProcessRunningException;

  class FailedToRegisterException : public ::CORBA::UserException {
  public:
    
    

    inline FailedToRegisterException() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    FailedToRegisterException(const FailedToRegisterException&);
    
    FailedToRegisterException& operator=(const FailedToRegisterException&);
    virtual ~FailedToRegisterException();
    virtual void _raise() const;
    static FailedToRegisterException* _downcast(::CORBA::Exception*);
    static const FailedToRegisterException* _downcast(const ::CORBA::Exception*);
    static inline FailedToRegisterException* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    inline void operator>>=(cdrStream&) const { }
    inline void operator<<=(cdrStream&) { }

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_FailedToRegisterException;

#ifndef __TA__Base__Core_mIProcessManagerCorbaDef__
#define __TA__Base__Core_mIProcessManagerCorbaDef__

  class IProcessManagerCorbaDef;
  class _objref_IProcessManagerCorbaDef;
  class _impl_IProcessManagerCorbaDef;
  
  typedef _objref_IProcessManagerCorbaDef* IProcessManagerCorbaDef_ptr;
  typedef IProcessManagerCorbaDef_ptr IProcessManagerCorbaDefRef;

  class IProcessManagerCorbaDef_Helper {
  public:
    typedef IProcessManagerCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IProcessManagerCorbaDef, IProcessManagerCorbaDef_Helper> IProcessManagerCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IProcessManagerCorbaDef,IProcessManagerCorbaDef_Helper > IProcessManagerCorbaDef_out;

#endif

  // interface IProcessManagerCorbaDef
  class IProcessManagerCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IProcessManagerCorbaDef_ptr _ptr_type;
    typedef IProcessManagerCorbaDef_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_IProcessManagerCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void terminating(::TA_Base_Core::ProcessId p_processID, ::TA_Base_Core::EManagedProcessTerminateCode p_code);
    void registerManagedProcess(::TA_Base_Core::IManagedProcessCorbaDef_ptr p_managedProcess, ::TA_Base_Core::ProcessId p_processId, ::CORBA::ULong applicationType, const char* entity);
    void registerManagedApplication(::TA_Base_Core::IManagedApplicationCorbaDef_ptr p_managedApp, ::TA_Base_Core::ProcessId p_processId);
    RunParamSeq* getParams(::TA_Base_Core::ProcessId p_processId, const char* hostname);
    void poll();
    void statusChanged(::TA_Base_Core::EProcessStatus status, ::TA_Base_Core::ProcessId p_processId);
    EOperationMode handleDoubleControlBaseOnCentralDb(const char* host, ::CORBA::Boolean isCentrolDbOnline, ::CORBA::ULong timeSinceOffline);

    inline _objref_IProcessManagerCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IProcessManagerCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IProcessManagerCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IProcessManagerCorbaDef(const _objref_IProcessManagerCorbaDef&);
    _objref_IProcessManagerCorbaDef& operator = (const _objref_IProcessManagerCorbaDef&);
    // not implemented

    friend class IProcessManagerCorbaDef;
  };

  class _pof_IProcessManagerCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IProcessManagerCorbaDef() : _OMNI_NS(proxyObjectFactory)(IProcessManagerCorbaDef::_PD_repoId) {}
    virtual ~_pof_IProcessManagerCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IProcessManagerCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IProcessManagerCorbaDef();

    virtual void terminating(::TA_Base_Core::ProcessId p_processID, ::TA_Base_Core::EManagedProcessTerminateCode p_code) = 0;
    virtual void registerManagedProcess(::TA_Base_Core::IManagedProcessCorbaDef_ptr p_managedProcess, ::TA_Base_Core::ProcessId p_processId, ::CORBA::ULong applicationType, const char* entity) = 0;
    virtual void registerManagedApplication(::TA_Base_Core::IManagedApplicationCorbaDef_ptr p_managedApp, ::TA_Base_Core::ProcessId p_processId) = 0;
    virtual RunParamSeq* getParams(::TA_Base_Core::ProcessId p_processId, const char* hostname) = 0;
    virtual void poll() = 0;
    virtual void statusChanged(::TA_Base_Core::EProcessStatus status, ::TA_Base_Core::ProcessId p_processId) = 0;
    virtual EOperationMode handleDoubleControlBaseOnCentralDb(const char* host, ::CORBA::Boolean isCentrolDbOnline, ::CORBA::ULong timeSinceOffline) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IProcessManagerCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Core
_CORBA_MODULE_BEG

  class IProcessManagerCorbaDef :
    public virtual TA_Base_Core::_impl_IProcessManagerCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IProcessManagerCorbaDef();

    inline ::TA_Base_Core::IProcessManagerCorbaDef_ptr _this() {
      return (::TA_Base_Core::IProcessManagerCorbaDef_ptr) _do_this(::TA_Base_Core::IProcessManagerCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Core
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::ProcessRunningException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Core::ProcessRunningException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::ProcessRunningException*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Core::FailedToRegisterException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Core::FailedToRegisterException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Core::FailedToRegisterException*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Core::IProcessManagerCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Core::IProcessManagerCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Core::IProcessManagerCorbaDef_ptr& _s);



inline void
TA_Base_Core::IProcessManagerCorbaDef::_marshalObjRef(::TA_Base_Core::IProcessManagerCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IProcessManagerCorbaDef
#endif

#endif  // __IProcessManagerCorbaDef_hh__

