// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IStationPaMethod_hh__
#define __IStationPaMethod_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <core/exceptions/IDL/src/CommonExceptionsCorbaDef.h>
#endif
#ifndef __IPAAgentCorbaDef_hh_EXTERNAL_GUARD__
#define __IPAAgentCorbaDef_hh_EXTERNAL_GUARD__
#include <bus/pa/pa_agent/IDL/src/IPAAgentCorbaDef.h>
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

#ifndef __TA__Base__Bus_mIStationPaMethod__
#define __TA__Base__Bus_mIStationPaMethod__

  class IStationPaMethod;
  class _objref_IStationPaMethod;
  class _impl_IStationPaMethod;
  
  typedef _objref_IStationPaMethod* IStationPaMethod_ptr;
  typedef IStationPaMethod_ptr IStationPaMethodRef;

  class IStationPaMethod_Helper {
  public:
    typedef IStationPaMethod_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IStationPaMethod, IStationPaMethod_Helper> IStationPaMethod_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IStationPaMethod,IStationPaMethod_Helper > IStationPaMethod_out;

#endif

  // interface IStationPaMethod
  class IStationPaMethod {
  public:
    // Declarations for this interface type.
    typedef IStationPaMethod_ptr _ptr_type;
    typedef IStationPaMethod_var _var_type;

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

  class _objref_IStationPaMethod :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    char* broadcastStationScheduleDva(const ::TA_Base_Bus::IPAAgentCorbaDef::MessageKeySeq& messages, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, ::CORBA::UShort dwellInSecs, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, const char* groupName, const ::TA_Base_Bus::IPAAgentCorbaDef::StationCyclicParams& stCyclicParams, const char* sessionId);
    char* broadcastStationDva(const ::TA_Base_Bus::IPAAgentCorbaDef::MessageKeySeq& messages, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, ::CORBA::UShort dwellInSecs, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, const char* groupName, const char* sessionId);
    void stopBroadcastStationDva(const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId);
    void enableZoneMonitoring(::CORBA::Boolean bEnable, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId);
    char* playbackStationDva(::CORBA::ULong messageKey, ::CORBA::UShort sourceId, const char* sessionId);
    void stopPlaybackStationDva(const char* sessionId);
    char* broadcastStationLive(::CORBA::Boolean hasChime, ::CORBA::UShort sourceId, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* groupName, const char* sessionId);
    void stopBroadcastStationLive(const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId);
    IPAAgentCorbaDef::EBackupKeyState getBackupKeyStatus(const char* backupName);
    void broadcastStationMusic(::TA_Base_Bus::IPAAgentCorbaDef::EMusicType musicType, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId);
    char* recordAdhocMessage(::CORBA::UShort sourceId, ::CORBA::ULong messageKey, ::CORBA::UShort usMsgType, const char* sessionId);
    void retryStationBroadcast(const char* broadcastId, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId);
    void agentLinkTest();
    ::CORBA::Boolean hardwareLinkTest(const char* broadcastId, const char* sessionId);
    void terminateBroadcast(const char* broadcastId, const char* sessionId);
    void removeBroadcast(const char* broadcastId, const char* sessionId);
    void removeScheduleBroadcast(::CORBA::ULong ulScheduleKey, const char* sessionId);
    void restoreBroadcast(const char* broadcastId, const char* sessionId);
    ::CORBA::Boolean setAdhocType(::CORBA::ULong messageKey, ::CORBA::UShort messageType, const char* sessionId);
    ::CORBA::Boolean setAdhocLabel(::CORBA::ULong messageKey, const char* label, const char* sessionId);
    IPAAgentCorbaDef::BroadcastIdTypeSeq* getBroadcastIdTypes();
    void changeBroadcastId(const char* fromBroadcastId, const char* toBroadcastId, const char* sessionId);
    IPAAgentCorbaDef::BroadcastConfig* getBroadcastConfig(const char* broadcastId);
    IPAAgentCorbaDef::ProgressReport* getProgressReport(const char* broadcastId);
    IPAAgentCorbaDef::EMusicType getMusicStatus(const char* sessionId);
    void forceTerminateAllExistPA();
    IPAAgentCorbaDef::StationDvaMessageRecords* getStationDvaMessageRecords();
    IPAAgentCorbaDef::DvaVersionRecords* getDvaVersionRecords();
    void broadcastEventTriggeredStationDva(::CORBA::ULong messageKey, const char* messageVersionNumber, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, ::CORBA::ULong durationInSecs, ::CORBA::UShort periodInSecs, const char* sessionId, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones);
    void broadcastEventTriggeredStationDvaForStation(::CORBA::ULong messageKey, const char* messageVersionNumber, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, ::CORBA::ULong durationInSecs, ::CORBA::UShort periodInSecs, const char* sessionId);
    void broadcastEventTriggeredStationDvaForArea(::CORBA::ULong messageKey, const char* messageVersionNumber, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, ::CORBA::ULong durationInSecs, ::CORBA::UShort periodInSecs, const char* sessionId, const char* zoneArea);
    void broadcastEventTriggeredStationDvaForGroup(::CORBA::ULong messageKey, const char* messageVersionNumber, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, ::CORBA::ULong durationInSecs, ::CORBA::UShort periodInSecs, const char* sessionId, const char* zoneGroupLabel);
    void broadcastSigTriggeredStationDva(::CORBA::ULong ulEventType, ::CORBA::ULong ulSrcStationLocationKey, ::CORBA::ULong ulDestStationLocationKey, ::CORBA::ULong ulDestPlatformId, ::CORBA::Boolean bIsLastTrain, ::CORBA::Boolean bTrainInfoValid, ::TA_Base_Bus::IPAAgentCorbaDef::DateTime dtStartTime);
    void broadcastFasTriggeredStationDva(::CORBA::ULong ulAlarmEntityKey, ::CORBA::ULong ulSrcStationLocationKey);

    inline _objref_IStationPaMethod()  { _PR_setobj(0); }  // nil
    _objref_IStationPaMethod(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IStationPaMethod();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IStationPaMethod(const _objref_IStationPaMethod&);
    _objref_IStationPaMethod& operator = (const _objref_IStationPaMethod&);
    // not implemented

    friend class IStationPaMethod;
  };

  class _pof_IStationPaMethod : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IStationPaMethod() : _OMNI_NS(proxyObjectFactory)(IStationPaMethod::_PD_repoId) {}
    virtual ~_pof_IStationPaMethod();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IStationPaMethod :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IStationPaMethod();

    virtual char* broadcastStationScheduleDva(const ::TA_Base_Bus::IPAAgentCorbaDef::MessageKeySeq& messages, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, ::CORBA::UShort dwellInSecs, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, const char* groupName, const ::TA_Base_Bus::IPAAgentCorbaDef::StationCyclicParams& stCyclicParams, const char* sessionId) = 0;
    virtual char* broadcastStationDva(const ::TA_Base_Bus::IPAAgentCorbaDef::MessageKeySeq& messages, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, ::CORBA::UShort dwellInSecs, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, const char* groupName, const char* sessionId) = 0;
    virtual void stopBroadcastStationDva(const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId) = 0;
    virtual void enableZoneMonitoring(::CORBA::Boolean bEnable, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId) = 0;
    virtual char* playbackStationDva(::CORBA::ULong messageKey, ::CORBA::UShort sourceId, const char* sessionId) = 0;
    virtual void stopPlaybackStationDva(const char* sessionId) = 0;
    virtual char* broadcastStationLive(::CORBA::Boolean hasChime, ::CORBA::UShort sourceId, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* groupName, const char* sessionId) = 0;
    virtual void stopBroadcastStationLive(const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId) = 0;
    virtual IPAAgentCorbaDef::EBackupKeyState getBackupKeyStatus(const char* backupName) = 0;
    virtual void broadcastStationMusic(::TA_Base_Bus::IPAAgentCorbaDef::EMusicType musicType, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId) = 0;
    virtual char* recordAdhocMessage(::CORBA::UShort sourceId, ::CORBA::ULong messageKey, ::CORBA::UShort usMsgType, const char* sessionId) = 0;
    virtual void retryStationBroadcast(const char* broadcastId, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones, const char* sessionId) = 0;
    virtual void agentLinkTest() = 0;
    virtual ::CORBA::Boolean hardwareLinkTest(const char* broadcastId, const char* sessionId) = 0;
    virtual void terminateBroadcast(const char* broadcastId, const char* sessionId) = 0;
    virtual void removeBroadcast(const char* broadcastId, const char* sessionId) = 0;
    virtual void removeScheduleBroadcast(::CORBA::ULong ulScheduleKey, const char* sessionId) = 0;
    virtual void restoreBroadcast(const char* broadcastId, const char* sessionId) = 0;
    virtual ::CORBA::Boolean setAdhocType(::CORBA::ULong messageKey, ::CORBA::UShort messageType, const char* sessionId) = 0;
    virtual ::CORBA::Boolean setAdhocLabel(::CORBA::ULong messageKey, const char* label, const char* sessionId) = 0;
    virtual IPAAgentCorbaDef::BroadcastIdTypeSeq* getBroadcastIdTypes() = 0;
    virtual void changeBroadcastId(const char* fromBroadcastId, const char* toBroadcastId, const char* sessionId) = 0;
    virtual IPAAgentCorbaDef::BroadcastConfig* getBroadcastConfig(const char* broadcastId) = 0;
    virtual IPAAgentCorbaDef::ProgressReport* getProgressReport(const char* broadcastId) = 0;
    virtual IPAAgentCorbaDef::EMusicType getMusicStatus(const char* sessionId) = 0;
    virtual void forceTerminateAllExistPA() = 0;
    virtual IPAAgentCorbaDef::StationDvaMessageRecords* getStationDvaMessageRecords() = 0;
    virtual IPAAgentCorbaDef::DvaVersionRecords* getDvaVersionRecords() = 0;
    virtual void broadcastEventTriggeredStationDva(::CORBA::ULong messageKey, const char* messageVersionNumber, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, ::CORBA::ULong durationInSecs, ::CORBA::UShort periodInSecs, const char* sessionId, const ::TA_Base_Bus::IPAAgentCorbaDef::ZoneCoverage& zones) = 0;
    virtual void broadcastEventTriggeredStationDvaForStation(::CORBA::ULong messageKey, const char* messageVersionNumber, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, ::CORBA::ULong durationInSecs, ::CORBA::UShort periodInSecs, const char* sessionId) = 0;
    virtual void broadcastEventTriggeredStationDvaForArea(::CORBA::ULong messageKey, const char* messageVersionNumber, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, ::CORBA::ULong durationInSecs, ::CORBA::UShort periodInSecs, const char* sessionId, const char* zoneArea) = 0;
    virtual void broadcastEventTriggeredStationDvaForGroup(::CORBA::ULong messageKey, const char* messageVersionNumber, ::CORBA::Boolean hasChime, ::CORBA::Boolean isSynchronisedWithTis, ::CORBA::ULong durationInSecs, ::CORBA::UShort periodInSecs, const char* sessionId, const char* zoneGroupLabel) = 0;
    virtual void broadcastSigTriggeredStationDva(::CORBA::ULong ulEventType, ::CORBA::ULong ulSrcStationLocationKey, ::CORBA::ULong ulDestStationLocationKey, ::CORBA::ULong ulDestPlatformId, ::CORBA::Boolean bIsLastTrain, ::CORBA::Boolean bTrainInfoValid, ::TA_Base_Bus::IPAAgentCorbaDef::DateTime dtStartTime) = 0;
    virtual void broadcastFasTriggeredStationDva(::CORBA::ULong ulAlarmEntityKey, ::CORBA::ULong ulSrcStationLocationKey) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IStationPaMethod;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class IStationPaMethod :
    public virtual TA_Base_Bus::_impl_IStationPaMethod,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IStationPaMethod();

    inline ::TA_Base_Bus::IStationPaMethod_ptr _this() {
      return (::TA_Base_Bus::IStationPaMethod_ptr) _do_this(::TA_Base_Bus::IStationPaMethod::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IStationPaMethod_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IStationPaMethod_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IStationPaMethod_ptr& _s);



inline void
TA_Base_Bus::IStationPaMethod::_marshalObjRef(::TA_Base_Bus::IStationPaMethod_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IStationPaMethod
#endif

#endif  // __IStationPaMethod_hh__

