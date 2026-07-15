#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_B71FA21BC121C2FA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_7447B11B52391E1E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xAD503C0)
#define CLASS_2_7447B11B52391E1E_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xAD500C0)
#define CLASS_2_7447B11B52391E1E_METHOD_2_25531CE9CEF744CA_OFFSET UNITYSDK_OFFSET(0xAD50360)
#define CLASS_2_7447B11B52391E1E_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xAD501A0)
#define CLASS_2_7447B11B52391E1E_METHOD_2_42D74E8C949A6883_OFFSET UNITYSDK_OFFSET(0xAD502D0)
#define CLASS_2_7447B11B52391E1E_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0xAD50430)
#define CLASS_2_7447B11B52391E1E_METHOD_2_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0xAD4FE40)
#define CLASS_2_7447B11B52391E1E_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xAD4FD80)
#define CLASS_2_7447B11B52391E1E_METHOD_2_5E657A2D9C0A02DF_OFFSET UNITYSDK_OFFSET(0xAD50270)
#define CLASS_2_7447B11B52391E1E_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0xAD50130)
#define CLASS_2_7447B11B52391E1E_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xAD4FD30)
#define CLASS_2_7447B11B52391E1E_METHOD_2_9B63972469327399_OFFSET UNITYSDK_OFFSET(0xAD50050)
#define CLASS_2_7447B11B52391E1E_METHOD_2_A9E445C5683F09FE_OFFSET UNITYSDK_OFFSET(0xAD504A0)
#define CLASS_2_7447B11B52391E1E_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0xAD4FFD0)
#define CLASS_2_7447B11B52391E1E__CTOR_OFFSET UNITYSDK_OFFSET(0xAD50500)
#define CLASS_2_7447B11B52391E1E__ONBIND_OFFSET UNITYSDK_OFFSET(0xAD4FCB0)

inline static constexpr unsigned int Class_2_7447B11B52391E1E_TypeDefinitionIndex = 68710;

class Class_2_7447B11B52391E1E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::Class_2_B71FA21BC121C2FA* Field_2_3; // 0x60
	::Struct_2_96F8F0A04B900A9E Field_2_4; // 0x68
	::UnityEngine::Animator* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_4BD2BFB48FF90060_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B63972469327399(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_9B63972469327399_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_5E657A2D9C0A02DF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_5E657A2D9C0A02DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_42D74E8C949A6883(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_42D74E8C949A6883_OFFSET))(this, a1);
	}

	::System::Void Method_2_25531CE9CEF744CA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_25531CE9CEF744CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_A9E445C5683F09FE(::UnityEngine::Animation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_A9E445C5683F09FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7447B11B52391E1E_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}
};
