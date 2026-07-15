#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_961B735E8DD4898D_GET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x1A49AEE0)
#define CLASS_1_961B735E8DD4898D_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x1A49AF00)
#define CLASS_1_961B735E8DD4898D_GET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1A49AF20)
#define CLASS_1_961B735E8DD4898D_GET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x1A49AF60)
#define CLASS_1_961B735E8DD4898D_GET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1A49AF40)
#define CLASS_1_961B735E8DD4898D_METHOD_1_2CEBCCAF54FB984A_OFFSET UNITYSDK_OFFSET(0x1A49AFE0)
#define CLASS_1_961B735E8DD4898D_METHOD_1_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0x1A49B6B0)
#define CLASS_1_961B735E8DD4898D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A49AF80)
#define CLASS_1_961B735E8DD4898D_METHOD_1_EEA082F774806CCC_1_OFFSET UNITYSDK_OFFSET(0x1A49B4E0)
#define CLASS_1_961B735E8DD4898D_METHOD_1_EEA082F774806CCC_OFFSET UNITYSDK_OFFSET(0x1A49B310)
#define CLASS_1_961B735E8DD4898D_SET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x1A49AEF0)
#define CLASS_1_961B735E8DD4898D_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x1A49AF10)
#define CLASS_1_961B735E8DD4898D_SET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1A49AF30)
#define CLASS_1_961B735E8DD4898D_SET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x1A49AF70)
#define CLASS_1_961B735E8DD4898D_SET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1A49AF50)
#define CLASS_1_961B735E8DD4898D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49B8A0)

inline static constexpr unsigned int Class_1_961B735E8DD4898D_TypeDefinitionIndex = 35902;

class Class_1_961B735E8DD4898D : public ::System::Object
{
public:
	::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::UInt32 _NextFieldEffectID_k__BackingField; // 0x28
	::System::Int32 _InitRandSeed_k__BackingField; // 0x2C
	::System::UInt32 Field_1_5; // 0x30
	::System::Boolean _PauseCat_k__BackingField; // 0x34
	::System::Boolean _KeepRunWithoutOnlinePlayer_k__BackingField; // 0x35
	::System::Boolean _TimeDynamicScale_k__BackingField; // 0x36
	::System::Boolean Field_1_9; // 0x37
	::System::UInt32 Field_1_10; // 0x38
	::System::UInt32 Field_1_11; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D__CTOR_OFFSET))(this);
	}

	::System::Int32 get_InitRandSeed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_INITRANDSEED_OFFSET))(this);
	}

	::System::Void set_InitRandSeed(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_INITRANDSEED_OFFSET))(this, a1);
	}

	::System::Boolean get_KeepRunWithoutOnlinePlayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this);
	}

	::System::Void set_KeepRunWithoutOnlinePlayer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this, a1);
	}

	::System::UInt32 get_NextFieldEffectID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_NEXTFIELDEFFECTID_OFFSET))(this);
	}

	::System::Void set_NextFieldEffectID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_NEXTFIELDEFFECTID_OFFSET))(this, a1);
	}

	::System::Boolean get_TimeDynamicScale()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_TIMEDYNAMICSCALE_OFFSET))(this);
	}

	::System::Void set_TimeDynamicScale(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_TIMEDYNAMICSCALE_OFFSET))(this, a1);
	}

	::System::Boolean get_PauseCat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_PAUSECAT_OFFSET))(this);
	}

	::System::Void set_PauseCat(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_PAUSECAT_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2CEBCCAF54FB984A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_2CEBCCAF54FB984A_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA082F774806CCC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_EEA082F774806CCC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA082F774806CCC_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_EEA082F774806CCC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6632BA9E17A7643A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_6632BA9E17A7643A_OFFSET))(this, a1);
	}
};
