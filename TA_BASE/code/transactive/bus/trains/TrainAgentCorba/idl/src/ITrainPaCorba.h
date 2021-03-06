// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __ITrainPaCorba_hh__
#define __ITrainPaCorba_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
#endif



#ifndef __ITrainCommonCorba_hh_EXTERNAL_GUARD__
#define __ITrainCommonCorba_hh_EXTERNAL_GUARD__
#include <ITrainCommonCorba.h>
#endif
#ifndef __ITrainExceptionsCorba_hh_EXTERNAL_GUARD__
#define __ITrainExceptionsCorba_hh_EXTERNAL_GUARD__
#include <ITrainExceptionsCorba.h>
#endif
#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
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

#ifndef __TA__Base__Bus_mITrainPaCorba__
#define __TA__Base__Bus_mITrainPaCorba__

  class ITrainPaCorba;
  class _objref_ITrainPaCorba;
  class _impl_ITrainPaCorba;
  
  typedef _objref_ITrainPaCorba* ITrainPaCorba_ptr;
  typedef ITrainPaCorba_ptr ITrainPaCorbaRef;

  class ITrainPaCorba_Helper {
  public:
    typedef ITrainPaCorba_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_ITrainPaCorba, ITrainPaCorba_Helper> ITrainPaCorba_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_ITrainPaCorba,ITrainPaCorba_Helper > ITrainPaCorba_out;

#endif

  // interface ITrainPaCorba
  class ITrainPaCorba {
  public:
    // Declarations for this interface type.
    typedef ITrainPaCorba_ptr _ptr_type;
    typedef ITrainPaCorba_var _var_type;

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
    struct TrainLibraryInfo {
      typedef _CORBA_ConstrType_Fix_Var<TrainLibraryInfo> _var_type;

      
      ITrainCommonCorba::TrainId trainId;

      ::CORBA::UShort libraryVersion;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef TrainLibraryInfo::_var_type TrainLibraryInfo_var;

    typedef TrainLibraryInfo& TrainLibraryInfo_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TrainLibraryInfo;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_TrainLibraryInfoList;

    class TrainLibraryInfoList_var;

    class TrainLibraryInfoList : public _CORBA_Unbounded_Sequence< TrainLibraryInfo >  {
    public:
      typedef TrainLibraryInfoList_var _var_type;
      inline TrainLibraryInfoList() {}
      inline TrainLibraryInfoList(const TrainLibraryInfoList& _s)
        : _CORBA_Unbounded_Sequence< TrainLibraryInfo > (_s) {}

      inline TrainLibraryInfoList(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< TrainLibraryInfo > (_max) {}
      inline TrainLibraryInfoList(_CORBA_ULong _max, _CORBA_ULong _len, TrainLibraryInfo* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< TrainLibraryInfo > (_max, _len, _val, _rel) {}

    

      inline TrainLibraryInfoList& operator = (const TrainLibraryInfoList& _s) {
        _CORBA_Unbounded_Sequence< TrainLibraryInfo > ::operator=(_s);
        return *this;
      }
    };

    class TrainLibraryInfoList_out;

    class TrainLibraryInfoList_var {
    public:
      inline TrainLibraryInfoList_var() : _pd_seq(0) {}
      inline TrainLibraryInfoList_var(TrainLibraryInfoList* _s) : _pd_seq(_s) {}
      inline TrainLibraryInfoList_var(const TrainLibraryInfoList_var& _s) {
        if( _s._pd_seq )  _pd_seq = new TrainLibraryInfoList(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~TrainLibraryInfoList_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline TrainLibraryInfoList_var& operator = (TrainLibraryInfoList* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline TrainLibraryInfoList_var& operator = (const TrainLibraryInfoList_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new TrainLibraryInfoList;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline TrainLibraryInfo& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline TrainLibraryInfoList* operator -> () { return _pd_seq; }
      inline const TrainLibraryInfoList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator TrainLibraryInfoList& () const { return *_pd_seq; }
#else
      inline operator const TrainLibraryInfoList& () const { return *_pd_seq; }
      inline operator TrainLibraryInfoList& () { return *_pd_seq; }
#endif
        
      inline const TrainLibraryInfoList& in() const { return *_pd_seq; }
      inline TrainLibraryInfoList&       inout()    { return *_pd_seq; }
      inline TrainLibraryInfoList*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline TrainLibraryInfoList* _retn() { TrainLibraryInfoList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class TrainLibraryInfoList_out;
      
    private:
      TrainLibraryInfoList* _pd_seq;
    };

    class TrainLibraryInfoList_out {
    public:
      inline TrainLibraryInfoList_out(TrainLibraryInfoList*& _s) : _data(_s) { _data = 0; }
      inline TrainLibraryInfoList_out(TrainLibraryInfoList_var& _s)
        : _data(_s._pd_seq) { _s = (TrainLibraryInfoList*) 0; }
      inline TrainLibraryInfoList_out(const TrainLibraryInfoList_out& _s) : _data(_s._data) {}
      inline TrainLibraryInfoList_out& operator = (const TrainLibraryInfoList_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline TrainLibraryInfoList_out& operator = (TrainLibraryInfoList* _s) {
        _data = _s;
        return *this;
      }
      inline operator TrainLibraryInfoList*&()  { return _data; }
      inline TrainLibraryInfoList*& ptr()       { return _data; }
      inline TrainLibraryInfoList* operator->() { return _data; }

      inline TrainLibraryInfo& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      TrainLibraryInfoList*& _data;

    private:
      TrainLibraryInfoList_out();
      TrainLibraryInfoList_out& operator=(const TrainLibraryInfoList_var&);
    };

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_AnnouncementId;

    typedef ::CORBA::Octet AnnouncementId;
    typedef ::CORBA::Octet_out AnnouncementId_out;

    struct MessageSchedule {
      typedef _CORBA_ConstrType_Fix_Var<MessageSchedule> _var_type;

      
      ::CORBA::UShort period;

      ::CORBA::UShort duration;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef MessageSchedule::_var_type MessageSchedule_var;

    typedef MessageSchedule& MessageSchedule_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_MessageSchedule;

    enum EPaUpdateType { PaCommandResult, AnnouncementReset, CompletedAnnouncement, LiveAnnouncementReady, LiveAnnouncementContinueRequired, LiveAnnouncementContinueTimeout /*, __max_EPaUpdateType=0xffffffff */ };
    typedef EPaUpdateType& EPaUpdateType_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EPaUpdateType;

    enum EPaCommandResult { PaProceeding, PaInUse, PaInUseOptionToOverride, PaInUseFirstCycleCancelled, PaReset, PaFailed, PaDifferentOrigin, PaDifferentId, PaDifferentVersion, BadCommandBadChecksum, BadCommandUnknownCommand, BadCommandBadParameter, BadCommandUnexpectedCommand, InvalidTrainError, TransmissionFailureError, TransactionTimeoutError, TransactionCancelledError, MpuChangeoverError /*, __max_EPaCommandResult=0xffffffff */ };
    typedef EPaCommandResult& EPaCommandResult_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EPaCommandResult;

    enum EMessageCompletionStatus { Successful, InterruptedByOcc, InterruptedByPsc, InterruptedByDriver /*, __max_EMessageCompletionStatus=0xffffffff */ };
    typedef EMessageCompletionStatus& EMessageCompletionStatus_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EMessageCompletionStatus;

    struct PaUpdateEvent {
      typedef _CORBA_ConstrType_Variable_Var<PaUpdateEvent> _var_type;

      
      ITrainCommonCorba::TrainId trainId;

      AnnouncementId annId;

      ::CORBA::String_member sessionId;

      EPaUpdateType updateType;

      EPaCommandResult commandResult;

      EMessageCompletionStatus completionStatus;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef PaUpdateEvent::_var_type PaUpdateEvent_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< PaUpdateEvent,PaUpdateEvent_var > PaUpdateEvent_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_PaUpdateEvent;

    enum EPaAnnouncementUpdateType { AudioCallLost /*, __max_EPaAnnouncementUpdateType=0xffffffff */ };
    typedef EPaAnnouncementUpdateType& EPaAnnouncementUpdateType_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EPaAnnouncementUpdateType;

    struct PaAnnouncementUpdate {
      typedef _CORBA_ConstrType_Fix_Var<PaAnnouncementUpdate> _var_type;

      
      AnnouncementId annId;

      EPaAnnouncementUpdateType updateType;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef PaAnnouncementUpdate::_var_type PaAnnouncementUpdate_var;

    typedef PaAnnouncementUpdate& PaAnnouncementUpdate_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_PaAnnouncementUpdate;

  
  };

  class _objref_ITrainPaCorba :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    ::CORBA::UShort getCommandTimeout();
    ::CORBA::UShort getTrainPaLibraryVersion(::TA_Base_Bus::ITrainCommonCorba::TrainId trainId);
    ITrainPaCorba::TrainLibraryInfoList* getTrainPaLibraryVersionList();
    void preRecordedAnnouncement(const ::TA_Base_Bus::ITrainCommonCorba::TrainList& trainIdList, ::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, ::CORBA::Octet messageNumber, ::CORBA::UShort libraryVersion, ::CORBA::Boolean override, const char* sessionId);
    void cyclicAnnouncement(const ::TA_Base_Bus::ITrainCommonCorba::TrainList& trainIdList, ::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, ::CORBA::Octet messageNumber, ::CORBA::UShort libraryVersion, const ::TA_Base_Bus::ITrainPaCorba::MessageSchedule& announcementPeriod, ::CORBA::Boolean override, const char* sessionId);
    void setupLiveAnnouncement(const ::TA_Base_Bus::ITrainCommonCorba::TrainList& trainIdList, ::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, ::CORBA::Boolean override, const char* staticGroup, const char* sessionId);
    void beginLiveAnnouncement(::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, const char* sessionId);
    void continueLiveAnnouncement(::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, const char* sessionId);
    void endLiveAnnouncement(::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, const char* sessionId);
    void endBroadcast(const ::TA_Base_Bus::ITrainCommonCorba::TrainList& trainIdList, ::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, const char* sessionId);

    inline _objref_ITrainPaCorba()  { _PR_setobj(0); }  // nil
    _objref_ITrainPaCorba(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_ITrainPaCorba();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_ITrainPaCorba(const _objref_ITrainPaCorba&);
    _objref_ITrainPaCorba& operator = (const _objref_ITrainPaCorba&);
    // not implemented

    friend class ITrainPaCorba;
  };

  class _pof_ITrainPaCorba : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_ITrainPaCorba() : _OMNI_NS(proxyObjectFactory)(ITrainPaCorba::_PD_repoId) {}
    virtual ~_pof_ITrainPaCorba();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_ITrainPaCorba :
    public virtual omniServant
  {
  public:
    virtual ~_impl_ITrainPaCorba();

    virtual ::CORBA::UShort getCommandTimeout() = 0;
    virtual ::CORBA::UShort getTrainPaLibraryVersion(::TA_Base_Bus::ITrainCommonCorba::TrainId trainId) = 0;
    virtual ITrainPaCorba::TrainLibraryInfoList* getTrainPaLibraryVersionList() = 0;
    virtual void preRecordedAnnouncement(const ::TA_Base_Bus::ITrainCommonCorba::TrainList& trainIdList, ::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, ::CORBA::Octet messageNumber, ::CORBA::UShort libraryVersion, ::CORBA::Boolean override, const char* sessionId) = 0;
    virtual void cyclicAnnouncement(const ::TA_Base_Bus::ITrainCommonCorba::TrainList& trainIdList, ::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, ::CORBA::Octet messageNumber, ::CORBA::UShort libraryVersion, const ::TA_Base_Bus::ITrainPaCorba::MessageSchedule& announcementPeriod, ::CORBA::Boolean override, const char* sessionId) = 0;
    virtual void setupLiveAnnouncement(const ::TA_Base_Bus::ITrainCommonCorba::TrainList& trainIdList, ::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, ::CORBA::Boolean override, const char* staticGroup, const char* sessionId) = 0;
    virtual void beginLiveAnnouncement(::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, const char* sessionId) = 0;
    virtual void continueLiveAnnouncement(::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, const char* sessionId) = 0;
    virtual void endLiveAnnouncement(::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, const char* sessionId) = 0;
    virtual void endBroadcast(const ::TA_Base_Bus::ITrainCommonCorba::TrainList& trainIdList, ::TA_Base_Bus::ITrainPaCorba::AnnouncementId annId, const char* sessionId) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_ITrainPaCorba;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class ITrainPaCorba :
    public virtual TA_Base_Bus::_impl_ITrainPaCorba,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~ITrainPaCorba();

    inline ::TA_Base_Bus::ITrainPaCorba_ptr _this() {
      return (::TA_Base_Bus::ITrainPaCorba_ptr) _do_this(::TA_Base_Bus::ITrainPaCorba::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::TrainLibraryInfo& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::TrainLibraryInfo* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::TrainLibraryInfo*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::TrainLibraryInfo*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::TrainLibraryInfoList& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::TrainLibraryInfoList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::TrainLibraryInfoList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::TrainLibraryInfoList*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::MessageSchedule& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::MessageSchedule* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::MessageSchedule*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::MessageSchedule*& _sp);

inline void operator >>=(TA_Base_Bus::ITrainPaCorba::EPaUpdateType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::ITrainPaCorba::EPaUpdateType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::ITrainPaCorba::LiveAnnouncementContinueTimeout) {
    _e = (TA_Base_Bus::ITrainPaCorba::EPaUpdateType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::EPaUpdateType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::EPaUpdateType& _s);

inline void operator >>=(TA_Base_Bus::ITrainPaCorba::EPaCommandResult _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::ITrainPaCorba::EPaCommandResult& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::ITrainPaCorba::MpuChangeoverError) {
    _e = (TA_Base_Bus::ITrainPaCorba::EPaCommandResult) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::EPaCommandResult _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::EPaCommandResult& _s);

inline void operator >>=(TA_Base_Bus::ITrainPaCorba::EMessageCompletionStatus _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::ITrainPaCorba::EMessageCompletionStatus& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::ITrainPaCorba::InterruptedByDriver) {
    _e = (TA_Base_Bus::ITrainPaCorba::EMessageCompletionStatus) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::EMessageCompletionStatus _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::EMessageCompletionStatus& _s);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::PaUpdateEvent& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::PaUpdateEvent* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::PaUpdateEvent*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::PaUpdateEvent*& _sp);

inline void operator >>=(TA_Base_Bus::ITrainPaCorba::EPaAnnouncementUpdateType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus::ITrainPaCorba::EPaAnnouncementUpdateType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus::ITrainPaCorba::AudioCallLost) {
    _e = (TA_Base_Bus::ITrainPaCorba::EPaAnnouncementUpdateType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::EPaAnnouncementUpdateType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::EPaAnnouncementUpdateType& _s);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::PaAnnouncementUpdate& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::PaAnnouncementUpdate* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba::PaAnnouncementUpdate*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus::ITrainPaCorba::PaAnnouncementUpdate*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::ITrainPaCorba_ptr& _s);



inline void
TA_Base_Bus::ITrainPaCorba::_marshalObjRef(::TA_Base_Bus::ITrainPaCorba_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_ITrainPaCorba
#endif

#endif  // __ITrainPaCorba_hh__

