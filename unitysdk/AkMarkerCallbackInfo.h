#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"

namespace System { class String; }

#define AKMARKERCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D1D1EC0)
#define AKMARKERCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D1D1DA0)
#define AKMARKERCALLBACKINFO_GET_STRLABEL_OFFSET UNITYSDK_OFFSET(0x1D1D2210)
#define AKMARKERCALLBACKINFO_GET_UIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D1D20B0)
#define AKMARKERCALLBACKINFO_GET_UPOSITION_OFFSET UNITYSDK_OFFSET(0x1D1D2160)
#define AKMARKERCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D1D1DF0)
#define AKMARKERCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1D2330)
#define AKMARKERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D1C90)

inline static constexpr unsigned int AkMarkerCallbackInfo_TypeDefinitionIndex = 41958;

class AkMarkerCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMarkerCallbackInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkMarkerCallbackInfo*))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_DISPOSE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uIdentifier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GET_UIDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_uPosition()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GET_UPOSITION_OFFSET))(this);
	}

	::System::String* get_strLabel()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMARKERCALLBACKINFO_GET_STRLABEL_OFFSET))(this);
	}
};
