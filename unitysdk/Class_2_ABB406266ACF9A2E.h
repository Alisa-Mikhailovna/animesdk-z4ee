#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_ABDB9F9EEB76D625;
class Class_2_C14495BD13DDA597;
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_ABB406266ACF9A2E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xAD71DC0)
#define CLASS_2_ABB406266ACF9A2E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xAD71F40)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAD719D0)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xAD71A50)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xAD706C0)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_81D45978B8E3E7F2_OFFSET UNITYSDK_OFFSET(0xAD70DC0)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xAD71250)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_AB39AF650EC67EAB_OFFSET UNITYSDK_OFFSET(0xAD71590)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0xAD71620)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xAD70070)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0xAD70540)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0xAD70F20)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xAD71CA0)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xAD71D30)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xAD71C10)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_1_OFFSET UNITYSDK_OFFSET(0xAD71310)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_2_OFFSET UNITYSDK_OFFSET(0xAD71450)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xAD71110)
#define CLASS_2_ABB406266ACF9A2E_METHOD_2_F84EDFA9C4C77EA5_OFFSET UNITYSDK_OFFSET(0xAD70BD0)
#define CLASS_2_ABB406266ACF9A2E__CTOR_OFFSET UNITYSDK_OFFSET(0xAD720A0)
#define CLASS_2_ABB406266ACF9A2E__ONBIND_OFFSET UNITYSDK_OFFSET(0xAD6FD80)

inline static constexpr unsigned int Class_2_ABB406266ACF9A2E_TypeDefinitionIndex = 69008;

class Class_2_ABB406266ACF9A2E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::UI::Button* Field_2_1; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::System::Collections::Generic::List_1<::Class_2_ABDB9F9EEB76D625*>* Field_2_4; // 0x80
	::System::Collections::Generic::List_1<::Class_2_C14495BD13DDA597*>* Field_2_5; // 0x88
	::UnityEngine::UI::Text* Field_2_6; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* Field_2_7; // 0x98
	::UnityEngine::Transform* Field_2_8; // 0xA0
	::UnityEngine::Transform* Field_2_9; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Int32 Method_2_F84EDFA9C4C77EA5(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F84EDFA9C4C77EA5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightTraitLayerConfig* Method_2_81D45978B8E3E7F2(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_81D45978B8E3E7F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_1_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F7300E87EC49A206_2_OFFSET))(this);
	}

	::System::Void Method_2_AB39AF650EC67EAB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_AB39AF650EC67EAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_DDDB3490E38FF95F()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_DDDB3490E38FF95F_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABB406266ACF9A2E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
