#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TGEN_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D1CD630)
#define AKMIDIEVENT_TGEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D1CD440)
#define AKMIDIEVENT_TGEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D1CD560)
#define AKMIDIEVENT_TGEN_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D1CD390)
#define AKMIDIEVENT_TGEN_GET_BYPARAM1_OFFSET UNITYSDK_OFFSET(0x1D1CD8D0)
#define AKMIDIEVENT_TGEN_GET_BYPARAM2_OFFSET UNITYSDK_OFFSET(0x1D1CDA40)
#define AKMIDIEVENT_TGEN_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D1CD3E0)
#define AKMIDIEVENT_TGEN_SET_BYPARAM1_OFFSET UNITYSDK_OFFSET(0x1D1CD810)
#define AKMIDIEVENT_TGEN_SET_BYPARAM2_OFFSET UNITYSDK_OFFSET(0x1D1CD980)
#define AKMIDIEVENT_TGEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1CDAF0)
#define AKMIDIEVENT_TGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CD380)

inline static constexpr unsigned int AkMIDIEvent_tGen_TypeDefinitionIndex = 41948;

class AkMIDIEvent_tGen : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tGen* a1)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tGen*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_byParam1(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_SET_BYPARAM1_OFFSET))(this, a1);
	}

	::System::Byte get_byParam1()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_GET_BYPARAM1_OFFSET))(this);
	}

	::System::Void set_byParam2(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_SET_BYPARAM2_OFFSET))(this, a1);
	}

	::System::Byte get_byParam2()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_GET_BYPARAM2_OFFSET))(this);
	}
};
