#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/System/Object.h"

class AkAudioSourceChangeCallbackInfo;
class AkBankCallbackInfo;
class AkCallbackManager_BGMCallback;
class AkCallbackManager_BGMCallbackPackage;
class AkCallbackManager_BankCallbackPackage;
class AkCallbackManager_EventCallbackPackage;
class AkCallbackManager_InitializationSettings;
class AkCallbackManager_MonitoringCallback;
class AkDurationCallbackInfo;
class AkDynamicSequenceItemCallbackInfo;
class AkEventCallbackInfo;
class AkMIDIEventCallbackInfo;
class AkMarkerCallbackInfo;
class AkMonitoringCallbackInfo;
class AkMusicPlaylistCallbackInfo;
class AkMusicSyncCallbackInfo;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKCALLBACKMANAGER_GET_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1D1AA8B0)
#define AKCALLBACKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1D1AB530)
#define AKCALLBACKMANAGER_POSTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1D1ABD70)
#define AKCALLBACKMANAGER_REMOVEBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1AAF40)
#define AKCALLBACKMANAGER_REMOVEEVENTCALLBACKCOOKIE_OFFSET UNITYSDK_OFFSET(0x1D1AAC10)
#define AKCALLBACKMANAGER_REMOVEEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1AA920)
#define AKCALLBACKMANAGER_SETBGMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1ABCA0)
#define AKCALLBACKMANAGER_SETLASTADDEDPLAYINGID_OFFSET UNITYSDK_OFFSET(0x1D1AB2A0)
#define AKCALLBACKMANAGER_SETMONITORINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1ABAD0)
#define AKCALLBACKMANAGER_SET_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1D1AA8F0)
#define AKCALLBACKMANAGER_TERM_OFFSET UNITYSDK_OFFSET(0x1D1AB790)
#define AKCALLBACKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AD890)

inline static constexpr unsigned int AkCallbackManager_TypeDefinitionIndex = 42019;

class AkCallbackManager : public ::System::Object
{
public:
	static ::AkMusicPlaylistCallbackInfo** StaticGet_AkMusicPlaylistCallbackInfo()
	{
		return (::AkMusicPlaylistCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C050);
	}
	static ::AkEventCallbackInfo** StaticGet_AkEventCallbackInfo()
	{
		return (::AkEventCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C058);
	}
	static ::AkCallbackManager_EventCallbackPackage** StaticGet_m_LastAddedEventPackage()
	{
		return (::AkCallbackManager_EventCallbackPackage**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C060);
	}
	static ::AkDurationCallbackInfo** StaticGet_AkDurationCallbackInfo()
	{
		return (::AkDurationCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C068);
	}
	static ::AkBankCallbackInfo** StaticGet_AkBankCallbackInfo()
	{
		return (::AkBankCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C070);
	}
	static ::AkMarkerCallbackInfo** StaticGet_AkMarkerCallbackInfo()
	{
		return (::AkMarkerCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C078);
	}
	static ::AkCallbackManager_MonitoringCallback** StaticGet_m_MonitoringCB()
	{
		return (::AkCallbackManager_MonitoringCallback**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C080);
	}
	static ::AkMonitoringCallbackInfo** StaticGet_AkMonitoringCallbackInfo()
	{
		return (::AkMonitoringCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C088);
	}
	static ::AkMIDIEventCallbackInfo** StaticGet_AkMIDIEventCallbackInfo()
	{
		return (::AkMIDIEventCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C090);
	}
	static ::AkDynamicSequenceItemCallbackInfo** StaticGet_AkDynamicSequenceItemCallbackInfo()
	{
		return (::AkDynamicSequenceItemCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C098);
	}
	static ::AkAudioSourceChangeCallbackInfo** StaticGet_AkAudioSourceChangeCallbackInfo()
	{
		return (::AkAudioSourceChangeCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C0A0);
	}
	static ::AkCallbackManager_BGMCallbackPackage** StaticGet_ms_sourceChangeCallbackPkg()
	{
		return (::AkCallbackManager_BGMCallbackPackage**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C0A8);
	}
	static ::AkMusicSyncCallbackInfo** StaticGet_AkMusicSyncCallbackInfo()
	{
		return (::AkMusicSyncCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C0B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_BankCallbackPackage*>** StaticGet_m_mapBankCallbacks()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_BankCallbackPackage*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C0B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_EventCallbackPackage*>** StaticGet_m_mapEventCallbacks()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_EventCallbackPackage*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5C0C0);
	}
	static ::System::IntPtr* StaticGet_m_pNotifMem()
	{
		return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x10150);
	}
	static ::System::Boolean* StaticGet__IsLoggingEnabled_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x10158);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_IsLoggingEnabled()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_GET_ISLOGGINGENABLED_OFFSET))();
	}

	static ::System::Void set_IsLoggingEnabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SET_ISLOGGINGENABLED_OFFSET))(a1);
	}

	static ::System::Void RemoveEventCallback(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEEVENTCALLBACK_OFFSET))(a1);
	}

	static ::System::Void RemoveEventCallbackCookie(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEEVENTCALLBACKCOOKIE_OFFSET))(a1);
	}

	static ::System::Void RemoveBankCallback(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEBANKCALLBACK_OFFSET))(a1);
	}

	static ::System::Void SetLastAddedPlayingID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETLASTADDEDPLAYINGID_OFFSET))(a1);
	}

	static ::AKRESULT Init(::AkCallbackManager_InitializationSettings* a1)
	{
		return ((::AKRESULT(*)(::AkCallbackManager_InitializationSettings*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_INIT_OFFSET))(a1);
	}

	static ::System::Void Term()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_TERM_OFFSET))();
	}

	static ::System::Void SetMonitoringCallback(::AkMonitorErrorLevel a1, ::AkCallbackManager_MonitoringCallback* a2)
	{
		return ((::System::Void(*)(::AkMonitorErrorLevel, ::AkCallbackManager_MonitoringCallback*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETMONITORINGCALLBACK_OFFSET))(a1, a2);
	}

	static ::System::Void SetBGMCallback(::AkCallbackManager_BGMCallback* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::AkCallbackManager_BGMCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETBGMCALLBACK_OFFSET))(a1, a2);
	}

	static ::System::Int32 PostCallbacks()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_POSTCALLBACKS_OFFSET))();
	}
};
