#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKTRIANGLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D243D70)
#define AKTRIANGLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D243ED0)
#define AKTRIANGLE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D243870)
#define AKTRIANGLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D243680)
#define AKTRIANGLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D2437A0)
#define AKTRIANGLE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D2435D0)
#define AKTRIANGLE_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1D243E20)
#define AKTRIANGLE_GET_POINT0_OFFSET UNITYSDK_OFFSET(0x1D23A500)
#define AKTRIANGLE_GET_POINT1_OFFSET UNITYSDK_OFFSET(0x1D23A5B0)
#define AKTRIANGLE_GET_POINT2_OFFSET UNITYSDK_OFFSET(0x1D23A660)
#define AKTRIANGLE_GET_SURFACE_OFFSET UNITYSDK_OFFSET(0x1D243CC0)
#define AKTRIANGLE_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D243620)
#define AKTRIANGLE_SET_POINT0_OFFSET UNITYSDK_OFFSET(0x1D23A200)
#define AKTRIANGLE_SET_POINT1_OFFSET UNITYSDK_OFFSET(0x1D23A2C0)
#define AKTRIANGLE_SET_POINT2_OFFSET UNITYSDK_OFFSET(0x1D23A380)
#define AKTRIANGLE_SET_SURFACE_OFFSET UNITYSDK_OFFSET(0x1D23A440)
#define AKTRIANGLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D243A50)
#define AKTRIANGLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D243AD0)
#define AKTRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2435C0)

inline static constexpr unsigned int AkTriangle_TypeDefinitionIndex = 41991;

class AkTriangle : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTRIANGLE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::IntPtr getCPtr(::AkTriangle* a1)
	{
		return ((::System::IntPtr(*)(::AkTriangle*))((::PBYTE)hIl2Cpp + AKTRIANGLE_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIANGLE_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTRIANGLE_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_point0(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE_SET_POINT0_OFFSET))(this, a1);
	}

	::System::UInt16 get_point0()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_GET_POINT0_OFFSET))(this);
	}

	::System::Void set_point1(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE_SET_POINT1_OFFSET))(this, a1);
	}

	::System::UInt16 get_point1()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_GET_POINT1_OFFSET))(this);
	}

	::System::Void set_point2(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE_SET_POINT2_OFFSET))(this, a1);
	}

	::System::UInt16 get_point2()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_GET_POINT2_OFFSET))(this);
	}

	::System::Void set_surface(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE_SET_SURFACE_OFFSET))(this, a1);
	}

	::System::UInt16 get_surface()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_GET_SURFACE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_CLEAR_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKTRIANGLE_GETSIZEOF_OFFSET))();
	}

	::System::Void Clone(::AkTriangle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkTriangle*))((::PBYTE)hIl2Cpp + AKTRIANGLE_CLONE_OFFSET))(this, a1);
	}
};
