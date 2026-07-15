#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F127B01B07319136.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardAvatarTextMode.h"

namespace System { class String; }

#define CLASS_2_2956BAF0F97343C0_GET_AGILITYLEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC140)
#define CLASS_2_2956BAF0F97343C0_GET_ENDURANCELEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC120)
#define CLASS_2_2956BAF0F97343C0_GET_INVISIBLE_OFFSET UNITYSDK_OFFSET(0xB9FBE70)
#define CLASS_2_2956BAF0F97343C0_GET_LUCKLEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC180)
#define CLASS_2_2956BAF0F97343C0_GET_MANALEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC160)
#define CLASS_2_2956BAF0F97343C0_GET_STRENGTHLEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC100)
#define CLASS_2_2956BAF0F97343C0_GET_UNKNOWN_OFFSET UNITYSDK_OFFSET(0xB9FBE10)
#define CLASS_2_2956BAF0F97343C0_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xB9FC1A0)
#define CLASS_2_2956BAF0F97343C0_METHOD_2_61B2BEE1A537C4F9_OFFSET UNITYSDK_OFFSET(0xB9FC220)
#define CLASS_2_2956BAF0F97343C0_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xB9FC390)
#define CLASS_2_2956BAF0F97343C0_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0xB9FC3A0)
#define CLASS_2_2956BAF0F97343C0_METHOD_2_A0FB0B00BE3FDFFC_OFFSET UNITYSDK_OFFSET(0xB9FBFE0)
#define CLASS_2_2956BAF0F97343C0_SET_AGILITYLEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC150)
#define CLASS_2_2956BAF0F97343C0_SET_ENDURANCELEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC130)
#define CLASS_2_2956BAF0F97343C0_SET_LUCKLEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC190)
#define CLASS_2_2956BAF0F97343C0_SET_MANALEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC170)
#define CLASS_2_2956BAF0F97343C0_SET_STRENGTHLEVEL_OFFSET UNITYSDK_OFFSET(0xB9FC110)
#define CLASS_2_2956BAF0F97343C0__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9FC4E0)
#define CLASS_2_2956BAF0F97343C0__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB9FBF40)
#define CLASS_2_2956BAF0F97343C0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FBED0)

inline static constexpr unsigned int Class_2_2956BAF0F97343C0_TypeDefinitionIndex = 75819;

class Class_2_2956BAF0F97343C0 : public ::Class_1_F127B01B07319136
{
public:
	static ::Class_2_2956BAF0F97343C0** StaticGet__Invisible_k__BackingField()
	{
		return (::Class_2_2956BAF0F97343C0**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2956BAF0F97343C0_TypeDefinitionIndex)->GetStaticField(0x2D390);
	}
	static ::Class_2_2956BAF0F97343C0** StaticGet__Unknown_k__BackingField()
	{
		return (::Class_2_2956BAF0F97343C0**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2956BAF0F97343C0_TypeDefinitionIndex)->GetStaticField(0x2D398);
	}
	// static const ::System::String* Field_2_2; // 0x0
	::System::String* _LuckLevel_k__BackingField; // 0x20
	::System::String* _EnduranceLevel_k__BackingField; // 0x28
	::System::String* _ManaLevel_k__BackingField; // 0x30
	::System::String* _AgilityLevel_k__BackingField; // 0x38
	::System::String* Field_2_7; // 0x40
	::System::String* _StrengthLevel_k__BackingField; // 0x48

	::System::Void _ctor(::Class_1_F127B01B07319136* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F127B01B07319136*))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_2_2956BAF0F97343C0* a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2956BAF0F97343C0*, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0__CCTOR_OFFSET))();
	}

	static ::Class_2_2956BAF0F97343C0* get_Unknown()
	{
		return ((::Class_2_2956BAF0F97343C0*(*)())((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_GET_UNKNOWN_OFFSET))();
	}

	static ::Class_2_2956BAF0F97343C0* get_Invisible()
	{
		return ((::Class_2_2956BAF0F97343C0*(*)())((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_GET_INVISIBLE_OFFSET))();
	}

	::Class_2_2956BAF0F97343C0* Method_2_A0FB0B00BE3FDFFC(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a1)
	{
		return ((::Class_2_2956BAF0F97343C0*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_METHOD_2_A0FB0B00BE3FDFFC_OFFSET))(this, a1);
	}

	::System::String* get_StrengthLevel()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_GET_STRENGTHLEVEL_OFFSET))(this);
	}

	::System::Void set_StrengthLevel(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_SET_STRENGTHLEVEL_OFFSET))(this, a1);
	}

	::System::String* get_EnduranceLevel()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_GET_ENDURANCELEVEL_OFFSET))(this);
	}

	::System::Void set_EnduranceLevel(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_SET_ENDURANCELEVEL_OFFSET))(this, a1);
	}

	::System::String* get_AgilityLevel()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_GET_AGILITYLEVEL_OFFSET))(this);
	}

	::System::Void set_AgilityLevel(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_SET_AGILITYLEVEL_OFFSET))(this, a1);
	}

	::System::String* get_ManaLevel()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_GET_MANALEVEL_OFFSET))(this);
	}

	::System::Void set_ManaLevel(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_SET_MANALEVEL_OFFSET))(this, a1);
	}

	::System::String* get_LuckLevel()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_GET_LUCKLEVEL_OFFSET))(this);
	}

	::System::Void set_LuckLevel(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_SET_LUCKLEVEL_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_61B2BEE1A537C4F9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_METHOD_2_61B2BEE1A537C4F9_OFFSET))(this);
	}

	::System::Boolean Method_2_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2956BAF0F97343C0_METHOD_2_8F059A365E90744C_OFFSET))(this);
	}
};
