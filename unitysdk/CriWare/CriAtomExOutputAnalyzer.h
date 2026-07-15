#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExOutputAnalyzer_Config.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomExOutputAnalyzer_InternalPcmCaptureCallback; }
namespace CriWare { class CriAtomExOutputAnalyzer_PcmCaptureCallback; }
namespace CriWare { class CriAtomExPlayer; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUS_OFFSET UNITYSDK_OFFSET(0x1573F0C0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1573EDA0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1573DFA0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUSBYNAME_OFFSET UNITYSDK_OFFSET(0x1573F2E0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1573EFC0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_CREATE_OFFSET UNITYSDK_OFFSET(0x1573FF40)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1573ED20)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUSBYNAME_OFFSET UNITYSDK_OFFSET(0x1573F380)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1573F040)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_EXECUTEQUEUEDPCMCAPTURERCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1573FDE0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET UNITYSDK_OFFSET(0x1573FB30)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET UNITYSDK_OFFSET(0x1573F760)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET UNITYSDK_OFFSET(0x1573F940)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUS_OFFSET UNITYSDK_OFFSET(0x1573EC10)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1573EB00)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1573E630)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1573E620)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1573FE60)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x1573FBD0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1573FED0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET UNITYSDK_OFFSET(0x1573F9C0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET UNITYSDK_OFFSET(0x1573F420)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET UNITYSDK_OFFSET(0x1573F7E0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1573E190)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_INITIALIZEWITHCONFIG_OFFSET UNITYSDK_OFFSET(0x1573E250)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_SETPCMCAPTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x1573FBC0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15740010)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1573FE70)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1573E1A0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_TypeDefinitionIndex = 37889;

	class CriAtomExOutputAnalyzer : public ::CriWare::CriDisposable
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_DataL()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0x5310);
		}
		static ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback** StaticGet_UserPcmCaptureCallback()
		{
			return (::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0x5318);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_DataR()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0x5320);
		}
		static ::CriWare::CriAtomExOutputAnalyzer_InternalPcmCaptureCallback** StaticGet_DelegateObject()
		{
			return (::CriWare::CriAtomExOutputAnalyzer_InternalPcmCaptureCallback**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0x5328);
		}
		static ::System::IntPtr* StaticGet_InternalCallbackFunctionPointer()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0x3110);
		}
		// static const ::System::Int32 MaximumSpectrumBands = 0x200; // 0x0
		// static const ::System::Int32 pcmCapturerNumMaxData = 0x200; // 0x0
		::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* userPcmCaptureCallback; // 0x20
		::CriWare::CriAtomExPlayer* player; // 0x28
		::System::String* busName; // 0x30
		::Il2CppArray<::System::Single>* dataR; // 0x38
		::Il2CppArray<::System::Single>* dataL; // 0x40
		::System::IntPtr handle; // 0x48
		::System::Int32 numCapturedPcmSamples; // 0x50
		::System::Int32 numBands; // 0x54

		::System::Void _ctor(::CriWare::CriAtomExOutputAnalyzer_Config a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER__CCTOR_OFFSET))();
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Boolean AttachExPlayer(::CriWare::CriAtomExPlayer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET))(this, a1);
		}

		::System::Void DetachExPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET))(this);
		}

		::System::Boolean AttachDspBus(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUS_OFFSET))(this, a1);
		}

		::System::Void DetachDspBus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUS_OFFSET))(this);
		}

		::System::Single GetRms(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET))(this, a1);
		}

		::System::Void GetSpectrumLevels(::Il2CppArray<::System::Single>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET))(this, a1);
		}

		::System::Void GetPcmData(::Il2CppArray<::System::Single>*& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetPcmCaptureCallback(::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_SETPCMCAPTURECALLBACK_OFFSET))(this, a1);
		}

		::System::Void ExecutePcmCaptureCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_OFFSET))(this);
		}

		::System::Void ExecutePcmCaptureCallback_1(::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_EXECUTEPCMCAPTURECALLBACK_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_FINALIZE_OFFSET))(this);
		}

		::System::Void InitializeWithConfig(::CriWare::CriAtomExOutputAnalyzer_Config a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_INITIALIZEWITHCONFIG_OFFSET))(this, a1);
		}

		static ::System::Void Callback(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_Create(::CriWare::CriAtomExOutputAnalyzer_Config& a1)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExOutputAnalyzer_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_CREATE_OFFSET))(a1);
		}

		static ::System::Void criAtomExOutputAnalyzer_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomExOutputAnalyzer_AttachExPlayer(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputAnalyzer_DetachExPlayer(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputAnalyzer_AttachDspBusByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHDSPBUSBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputAnalyzer_DetachDspBusByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUSBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomExOutputAnalyzer_GetRms(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETRMS_OFFSET))(a1, a2);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_GetSpectrumLevels(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETSPECTRUMLEVELS_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExOutputAnalyzer_GetPcmData(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_GETPCMDATA_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExOutputAnalyzer_ExecuteQueuedPcmCapturerCallbacks(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_EXECUTEQUEUEDPCMCAPTURERCALLBACKS_OFFSET))(a1, a2);
		}
	};
}
