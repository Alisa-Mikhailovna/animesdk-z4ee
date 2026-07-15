#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3207B23A0433048D.h"
#include "unitysdk/RPG/GameCore/AttackType.h"

class Class_1_DF472CB3F2039D5D;
class Class_3_BB8B7764D3497776;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0xAE90D40)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_051430E9BBCE067D_OFFSET UNITYSDK_OFFSET(0xAE912E0)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_68A897BB14FCBE65_OFFSET UNITYSDK_OFFSET(0xAE91040)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_695B2C8FB56C2CD1_OFFSET UNITYSDK_OFFSET(0xAE90E90)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_CDAAA88825EA8FA3_OFFSET UNITYSDK_OFFSET(0xAE91230)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0xAE90C60)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_D8C8308F63396DDD_OFFSET UNITYSDK_OFFSET(0xAE91400)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xAE90BC0)
#define CLASS_2_4D2D35656E2FF2AA_METHOD_2_FFF239BDEBAA6843_OFFSET UNITYSDK_OFFSET(0xAE90DD0)
#define CLASS_2_4D2D35656E2FF2AA__CTOR_OFFSET UNITYSDK_OFFSET(0xAE91540)

inline static constexpr unsigned int Class_2_4D2D35656E2FF2AA_TypeDefinitionIndex = 51265;

class Class_2_4D2D35656E2FF2AA : public ::Class_1_3207B23A0433048D
{
public:
	::System::Collections::Generic::List_1<::Class_1_DF472CB3F2039D5D*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_DF472CB3F2039D5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DF472CB3F2039D5D*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A4B38C951C5BD5(::Class_1_DF472CB3F2039D5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DF472CB3F2039D5D*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FFF239BDEBAA6843(::RPG::GameCore::AttackType a1, ::RPG::GameCore::AttackType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_FFF239BDEBAA6843_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_695B2C8FB56C2CD1(::RPG::GameCore::AttackType a1, ::Il2CppArray<::RPG::GameCore::AttackType>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackType, ::Il2CppArray<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_695B2C8FB56C2CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_68A897BB14FCBE65(::RPG::GameCore::AttackType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_68A897BB14FCBE65_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_CDAAA88825EA8FA3(::Class_3_BB8B7764D3497776* a1, ::RPG::GameCore::AttackType a2, ::RPG::GameCore::AttackType a3)
	{
		return ((::System::Boolean(*)(::Class_3_BB8B7764D3497776*, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_CDAAA88825EA8FA3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_051430E9BBCE067D(::Class_3_BB8B7764D3497776* a1, ::RPG::GameCore::AttackType a2, ::Il2CppArray<::RPG::GameCore::AttackType>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_BB8B7764D3497776*, ::RPG::GameCore::AttackType, ::Il2CppArray<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_051430E9BBCE067D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_D8C8308F63396DDD(::Class_3_BB8B7764D3497776* a1, ::RPG::GameCore::AttackType a2, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackType>* a3)
	{
		return ((::System::Void(*)(::Class_3_BB8B7764D3497776*, ::RPG::GameCore::AttackType, ::System::Collections::Generic::List_1<::RPG::GameCore::AttackType>*))((::PBYTE)hIl2Cpp + CLASS_2_4D2D35656E2FF2AA_METHOD_2_D8C8308F63396DDD_OFFSET))(a1, a2, a3);
	}
};
