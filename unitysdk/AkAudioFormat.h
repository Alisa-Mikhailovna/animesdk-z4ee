#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkChannelConfig;

#define AKAUDIOFORMAT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D19F5E0)
#define AKAUDIOFORMAT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D19F3F0)
#define AKAUDIOFORMAT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D19F510)
#define AKAUDIOFORMAT_GETBITSPERSAMPLE_OFFSET UNITYSDK_OFFSET(0x1D1A0210)
#define AKAUDIOFORMAT_GETBLOCKALIGN_OFFSET UNITYSDK_OFFSET(0x1D1A02C0)
#define AKAUDIOFORMAT_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D19F340)
#define AKAUDIOFORMAT_GETINTERLEAVEID_OFFSET UNITYSDK_OFFSET(0x1D1A0420)
#define AKAUDIOFORMAT_GETNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x1D1A0160)
#define AKAUDIOFORMAT_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1D1A0370)
#define AKAUDIOFORMAT_GET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1D19FAA0)
#define AKAUDIOFORMAT_GET_UBITSPERSAMPLE_OFFSET UNITYSDK_OFFSET(0x1D19FC60)
#define AKAUDIOFORMAT_GET_UBLOCKALIGN_OFFSET UNITYSDK_OFFSET(0x1D19FDD0)
#define AKAUDIOFORMAT_GET_UINTERLEAVEID_OFFSET UNITYSDK_OFFSET(0x1D1A00B0)
#define AKAUDIOFORMAT_GET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1D19F880)
#define AKAUDIOFORMAT_GET_UTYPEID_OFFSET UNITYSDK_OFFSET(0x1D19FF40)
#define AKAUDIOFORMAT_ISCHANNELCONFIGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D1A0640)
#define AKAUDIOFORMAT_SETALL_OFFSET UNITYSDK_OFFSET(0x1D1A04D0)
#define AKAUDIOFORMAT_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D19F390)
#define AKAUDIOFORMAT_SET_CHANNELCONFIG_OFFSET UNITYSDK_OFFSET(0x1D19F930)
#define AKAUDIOFORMAT_SET_UBITSPERSAMPLE_OFFSET UNITYSDK_OFFSET(0x1D19FBA0)
#define AKAUDIOFORMAT_SET_UBLOCKALIGN_OFFSET UNITYSDK_OFFSET(0x1D19FD10)
#define AKAUDIOFORMAT_SET_UINTERLEAVEID_OFFSET UNITYSDK_OFFSET(0x1D19FFF0)
#define AKAUDIOFORMAT_SET_USAMPLERATE_OFFSET UNITYSDK_OFFSET(0x1D19F7C0)
#define AKAUDIOFORMAT_SET_UTYPEID_OFFSET UNITYSDK_OFFSET(0x1D19FE80)
#define AKAUDIOFORMAT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1A06F0)
#define AKAUDIOFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19F330)

inline static constexpr unsigned int AkAudioFormat_TypeDefinitionIndex = 41912;

class AkAudioFormat : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkAudioFormat* a1)
	{
		return ((::System::IntPtr(*)(::AkAudioFormat*))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_uSampleRate(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_USAMPLERATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uSampleRate()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_USAMPLERATE_OFFSET))(this);
	}

	::System::Void set_channelConfig(::AkChannelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkChannelConfig*))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_CHANNELCONFIG_OFFSET))(this, a1);
	}

	::AkChannelConfig* get_channelConfig()
	{
		return ((::AkChannelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_CHANNELCONFIG_OFFSET))(this);
	}

	::System::Void set_uBitsPerSample(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_UBITSPERSAMPLE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uBitsPerSample()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_UBITSPERSAMPLE_OFFSET))(this);
	}

	::System::Void set_uBlockAlign(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_UBLOCKALIGN_OFFSET))(this, a1);
	}

	::System::UInt32 get_uBlockAlign()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_UBLOCKALIGN_OFFSET))(this);
	}

	::System::Void set_uTypeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_UTYPEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_uTypeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_UTYPEID_OFFSET))(this);
	}

	::System::Void set_uInterleaveID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SET_UINTERLEAVEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_uInterleaveID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GET_UINTERLEAVEID_OFFSET))(this);
	}

	::System::UInt32 GetNumChannels()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETNUMCHANNELS_OFFSET))(this);
	}

	::System::UInt32 GetBitsPerSample()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETBITSPERSAMPLE_OFFSET))(this);
	}

	::System::UInt32 GetBlockAlign()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETBLOCKALIGN_OFFSET))(this);
	}

	::System::UInt32 GetTypeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETTYPEID_OFFSET))(this);
	}

	::System::UInt32 GetInterleaveID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_GETINTERLEAVEID_OFFSET))(this);
	}

	::System::Void SetAll(::System::UInt32 a1, ::AkChannelConfig* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkChannelConfig*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_SETALL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean IsChannelConfigSupported()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOFORMAT_ISCHANNELCONFIGSUPPORTED_OFFSET))(this);
	}
};
