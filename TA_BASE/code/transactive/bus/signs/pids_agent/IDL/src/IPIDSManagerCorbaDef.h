// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IPIDSManagerCorbaDef_hh__
#define __IPIDSManagerCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <core/exceptions/IDL/src/CommonExceptionsCorbaDef.h>
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





_CORBA_MODULE TA_Base_Bus

_CORBA_MODULE_BEG

#ifndef __TA__Base__Bus_mIPIDSManagerCorbaDef__
#define __TA__Base__Bus_mIPIDSManagerCorbaDef__

  class IPIDSManagerCorbaDef;
  class _objref_IPIDSManagerCorbaDef;
  class _impl_IPIDSManagerCorbaDef;
  
  typedef _objref_IPIDSManagerCorbaDef* IPIDSManagerCorbaDef_ptr;
  typedef IPIDSManagerCorbaDef_ptr IPIDSManagerCorbaDefRef;

  class IPIDSManagerCorbaDef_Helper {
  public:
    typedef IPIDSManagerCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IPIDSManagerCorbaDef, IPIDSManagerCorbaDef_Helper> IPIDSManagerCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IPIDSManagerCorbaDef,IPIDSManagerCorbaDef_Helper > IPIDSManagerCorbaDef_out;

#endif

  // interface IPIDSManagerCorbaDef
  class IPIDSManagerCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IPIDSManagerCorbaDef_ptr _ptr_type;
    typedef IPIDSManagerCorbaDef_var _var_type;

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
    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_PidsMessage;

    class PidsMessage_var;

    class PidsMessage : public _CORBA_Unbounded_Sequence_Octet {
    public:
      typedef PidsMessage_var _var_type;
      inline PidsMessage() {}
      inline PidsMessage(const PidsMessage& _s)
        : _CORBA_Unbounded_Sequence_Octet(_s) {}

      inline PidsMessage(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_Octet(_max) {}
      inline PidsMessage(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::Octet* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_Octet(_max, _len, _val, _rel) {}

    

      inline PidsMessage& operator = (const PidsMessage& _s) {
        _CORBA_Unbounded_Sequence_Octet::operator=(_s);
        return *this;
      }
    };

    class PidsMessage_out;

    class PidsMessage_var {
    public:
      inline PidsMessage_var() : _pd_seq(0) {}
      inline PidsMessage_var(PidsMessage* _s) : _pd_seq(_s) {}
      inline PidsMessage_var(const PidsMessage_var& _s) {
        if( _s._pd_seq )  _pd_seq = new PidsMessage(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~PidsMessage_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline PidsMessage_var& operator = (PidsMessage* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline PidsMessage_var& operator = (const PidsMessage_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new PidsMessage;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline ::CORBA::Octet& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline PidsMessage* operator -> () { return _pd_seq; }
      inline const PidsMessage* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator PidsMessage& () const { return *_pd_seq; }
#else
      inline operator const PidsMessage& () const { return *_pd_seq; }
      inline operator PidsMessage& () { return *_pd_seq; }
#endif
        
      inline const PidsMessage& in() const { return *_pd_seq; }
      inline PidsMessage&       inout()    { return *_pd_seq; }
      inline PidsMessage*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline PidsMessage* _retn() { PidsMessage* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class PidsMessage_out;
      
    private:
      PidsMessage* _pd_seq;
    };

    class PidsMessage_out {
    public:
      inline PidsMessage_out(PidsMessage*& _s) : _data(_s) { _data = 0; }
      inline PidsMessage_out(PidsMessage_var& _s)
        : _data(_s._pd_seq) { _s = (PidsMessage*) 0; }
      inline PidsMessage_out(const PidsMessage_out& _s) : _data(_s._data) {}
      inline PidsMessage_out& operator = (const PidsMessage_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline PidsMessage_out& operator = (PidsMessage* _s) {
        _data = _s;
        return *this;
      }
      inline operator PidsMessage*&()  { return _data; }
      inline PidsMessage*& ptr()       { return _data; }
      inline PidsMessage* operator->() { return _data; }

      inline ::CORBA::Octet& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      PidsMessage*& _data;

    private:
      PidsMessage_out();
      PidsMessage_out& operator=(const PidsMessage_var&);
    };

    struct PidsDestination {
      typedef _CORBA_ConstrType_Fix_Var<PidsDestination> _var_type;

      
      ::CORBA::Short station;

      ::CORBA::Boolean concourse;

      ::CORBA::Boolean upTrack;

      ::CORBA::Boolean downTrack;

      ::CORBA::Boolean gateway;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef PidsDestination::_var_type PidsDestination_var;

    typedef PidsDestination& PidsDestination_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_PidsDestination;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_PidsDestinationList;

    class PidsDestinationList_var;

    class PidsDestinationList : public _CORBA_Unbounded_Sequence< PidsDestination >  {
    public:
      typedef PidsDestinationList_var _var_type;
      inline PidsDestinationList() {}
      inline PidsDestinationList(const PidsDestinationList& _s)
        : _CORBA_Unbounded_Sequence< PidsDestination > (_s) {}

      inline PidsDestinationList(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< PidsDestination > (_max) {}
      inline PidsDestinationList(_CORBA_ULong _max, _CORBA_ULong _len, PidsDestination* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< PidsDestination > (_max, _len, _val, _rel) {}

    

      inline PidsDestinationList& operator = (const PidsDestinationList& _s) {
        _CORBA_Unbounded_Sequence< PidsDestination > ::operator=(_s);
        return *this;
      }
    };

    class PidsDestinationList_out;

    class PidsDestinationList_var {
    public:
      inline PidsDestinationList_var() : _pd_seq(0) {}
      inline PidsDestinationList_var(PidsDestinationList* _s) : _pd_seq(_s) {}
      inline PidsDestinationList_var(const PidsDestinationList_var& _s) {
        if( _s._pd_seq )  _pd_seq = new PidsDestinationList(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~PidsDestinationList_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline PidsDestinationList_var& operator = (PidsDestinationList* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline PidsDestinationList_var& operator = (const PidsDestinationList_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new PidsDestinationList;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline PidsDestination& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline PidsDestinationList* operator -> () { return _pd_seq; }
      inline const PidsDestinationList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator PidsDestinationList& () const { return *_pd_seq; }
#else
      inline operator const PidsDestinationList& () const { return *_pd_seq; }
      inline operator PidsDestinationList& () { return *_pd_seq; }
#endif
        
      inline const PidsDestinationList& in() const { return *_pd_seq; }
      inline PidsDestinationList&       inout()    { return *_pd_seq; }
      inline PidsDestinationList*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline PidsDestinationList* _retn() { PidsDestinationList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class PidsDestinationList_out;
      
    private:
      PidsDestinationList* _pd_seq;
    };

    class PidsDestinationList_out {
    public:
      inline PidsDestinationList_out(PidsDestinationList*& _s) : _data(_s) { _data = 0; }
      inline PidsDestinationList_out(PidsDestinationList_var& _s)
        : _data(_s._pd_seq) { _s = (PidsDestinationList*) 0; }
      inline PidsDestinationList_out(const PidsDestinationList_out& _s) : _data(_s._data) {}
      inline PidsDestinationList_out& operator = (const PidsDestinationList_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline PidsDestinationList_out& operator = (PidsDestinationList* _s) {
        _data = _s;
        return *this;
      }
      inline operator PidsDestinationList*&()  { return _data; }
      inline PidsDestinationList*& ptr()       { return _data; }
      inline PidsDestinationList* operator->() { return _data; }

      inline PidsDestination& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      PidsDestinationList*& _data;

    private:
      PidsDestinationList_out();
      PidsDestinationList_out& operator=(const PidsDestinationList_var&);
    };

    struct MessageTime {
      typedef _CORBA_ConstrType_Fix_Var<MessageTime> _var_type;

      
      ::CORBA::Long year;

      ::CORBA::Long month;

      ::CORBA::Long day;

      ::CORBA::Long hour;

      ::CORBA::Long minute;

      ::CORBA::Long second;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef MessageTime::_var_type MessageTime_var;

    typedef MessageTime& MessageTime_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_MessageTime;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SigData;

    class SigData_var;

    class SigData : public _CORBA_Unbounded_Sequence_Octet {
    public:
      typedef SigData_var _var_type;
      inline SigData() {}
      inline SigData(const SigData& _s)
        : _CORBA_Unbounded_Sequence_Octet(_s) {}

      inline SigData(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence_Octet(_max) {}
      inline SigData(_CORBA_ULong _max, _CORBA_ULong _len, ::CORBA::Octet* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence_Octet(_max, _len, _val, _rel) {}

    

      inline SigData& operator = (const SigData& _s) {
        _CORBA_Unbounded_Sequence_Octet::operator=(_s);
        return *this;
      }
    };

    class SigData_out;

    class SigData_var {
    public:
      inline SigData_var() : _pd_seq(0) {}
      inline SigData_var(SigData* _s) : _pd_seq(_s) {}
      inline SigData_var(const SigData_var& _s) {
        if( _s._pd_seq )  _pd_seq = new SigData(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~SigData_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline SigData_var& operator = (SigData* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline SigData_var& operator = (const SigData_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new SigData;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline ::CORBA::Octet& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline SigData* operator -> () { return _pd_seq; }
      inline const SigData* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator SigData& () const { return *_pd_seq; }
#else
      inline operator const SigData& () const { return *_pd_seq; }
      inline operator SigData& () { return *_pd_seq; }
#endif
        
      inline const SigData& in() const { return *_pd_seq; }
      inline SigData&       inout()    { return *_pd_seq; }
      inline SigData*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline SigData* _retn() { SigData* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class SigData_out;
      
    private:
      SigData* _pd_seq;
    };

    class SigData_out {
    public:
      inline SigData_out(SigData*& _s) : _data(_s) { _data = 0; }
      inline SigData_out(SigData_var& _s)
        : _data(_s._pd_seq) { _s = (SigData*) 0; }
      inline SigData_out(const SigData_out& _s) : _data(_s._data) {}
      inline SigData_out& operator = (const SigData_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline SigData_out& operator = (SigData* _s) {
        _data = _s;
        return *this;
      }
      inline operator SigData*&()  { return _data; }
      inline SigData*& ptr()       { return _data; }
      inline SigData* operator->() { return _data; }

      inline ::CORBA::Octet& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      SigData*& _data;

    private:
      SigData_out();
      SigData_out& operator=(const SigData_var&);
    };

  
  };

  class _objref_IPIDSManagerCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void submitSigRequest(const ::TA_Base_Bus::IPIDSManagerCorbaDef::SigData& data);
    ::CORBA::Short submitAdhocDisplayRequest(const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList& destinationList, const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsMessage& messageContent, ::CORBA::Boolean msgType, ::CORBA::Boolean showType, ::CORBA::Long trainNo, const ::TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& startTime, const ::TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& endTime, ::CORBA::Long interval, ::CORBA::Boolean isCyclic);
    ::CORBA::Short submitAdhocDisplayRequestWithMulityByteMsgContent(const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList& destinationList, const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsMessage& messageContent, ::CORBA::Boolean msgType, ::CORBA::Boolean showType, ::CORBA::Boolean isTrain, const ::TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& startTime, const ::TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& endTime, ::CORBA::Long interval, ::CORBA::Boolean isCyclic);
    ::CORBA::Short submitClearRequest(const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList& destinationList, ::CORBA::Long trainNo);

    inline _objref_IPIDSManagerCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IPIDSManagerCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IPIDSManagerCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IPIDSManagerCorbaDef(const _objref_IPIDSManagerCorbaDef&);
    _objref_IPIDSManagerCorbaDef& operator = (const _objref_IPIDSManagerCorbaDef&);
    // not implemented

    friend class IPIDSManagerCorbaDef;
  };

  class _pof_IPIDSManagerCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IPIDSManagerCorbaDef() : _OMNI_NS(proxyObjectFactory)(IPIDSManagerCorbaDef::_PD_repoId) {}
    virtual ~_pof_IPIDSManagerCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IPIDSManagerCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IPIDSManagerCorbaDef();

    virtual void submitSigRequest(const ::TA_Base_Bus::IPIDSManagerCorbaDef::SigData& data) = 0;
    virtual ::CORBA::Short submitAdhocDisplayRequest(const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList& destinationList, const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsMessage& messageContent, ::CORBA::Boolean msgType, ::CORBA::Boolean showType, ::CORBA::Long trainNo, const ::TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& startTime, const ::TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& endTime, ::CORBA::Long interval, ::CORBA::Boolean isCyclic) = 0;
    virtual ::CORBA::Short submitAdhocDisplayRequestWithMulityByteMsgContent(const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList& destinationList, const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsMessage& messageContent, ::CORBA::Boolean msgType, ::CORBA::Boolean showType, ::CORBA::Boolean isTrain, const ::TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& startTime, const ::TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& endTime, ::CORBA::Long interval, ::CORBA::Boolean isCyclic) = 0;
    virtual ::CORBA::Short submitClearRequest(const ::TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList& destinationList, ::CORBA::Long trainNo) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IPIDSManagerCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class IPIDSManagerCorbaDef :
    public virtual TA_Base_Bus::_impl_IPIDSManagerCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IPIDSManagerCorbaDef();

    inline ::TA_Base_Bus::IPIDSManagerCorbaDef_ptr _this() {
      return (::TA_Base_Bus::IPIDSManagerCorbaDef_ptr) _do_this(::TA_Base_Bus::IPIDSManagerCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::PidsMessage& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::PidsMessage* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::PidsMessage*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::PidsMessage*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestination& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestination* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestination*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestination*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::PidsDestinationList*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::MessageTime*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::SigData& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::SigData* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef::SigData*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::IPIDSManagerCorbaDef::SigData*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IPIDSManagerCorbaDef_ptr& _s);



inline void
TA_Base_Bus::IPIDSManagerCorbaDef::_marshalObjRef(::TA_Base_Bus::IPIDSManagerCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IPIDSManagerCorbaDef
#endif

#endif  // __IPIDSManagerCorbaDef_hh__

