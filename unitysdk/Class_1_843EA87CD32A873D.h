#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87D77BF48E779FA0;
class Class_1_C47576BEFCFAD595;
class Class_2_55373297DA27393D;
class Class_2_F3F43255EC92B83B;
namespace RPG::Client::ParkourGame { class MonoParkourProjectile; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fire; }
namespace UnityEngine { class Transform; }

#define CLASS_1_843EA87CD32A873D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB24F1F0)
#define CLASS_1_843EA87CD32A873D_METHOD_1_0D2B83799885EA6C_OFFSET UNITYSDK_OFFSET(0xB24F110)
#define CLASS_1_843EA87CD32A873D_METHOD_1_2376486C27388F69_OFFSET UNITYSDK_OFFSET(0xB24FCD0)
#define CLASS_1_843EA87CD32A873D_METHOD_1_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0xB24F270)
#define CLASS_1_843EA87CD32A873D_METHOD_1_C6B687B7DECD24D2_OFFSET UNITYSDK_OFFSET(0xB24F0B0)
#define CLASS_1_843EA87CD32A873D_METHOD_1_DFD71AA0FC97E79E_OFFSET UNITYSDK_OFFSET(0xB24FDC0)
#define CLASS_1_843EA87CD32A873D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB24FDD0)
#define CLASS_1_843EA87CD32A873D_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xB24FA00)
#define CLASS_1_843EA87CD32A873D_METHOD_1_FA4AF8FC942DAFA0_OFFSET UNITYSDK_OFFSET(0xB24FBF0)
#define CLASS_1_843EA87CD32A873D__CTOR_OFFSET UNITYSDK_OFFSET(0xB24EDE0)

inline static constexpr unsigned int Class_1_843EA87CD32A873D_TypeDefinitionIndex = 70820;

class Class_1_843EA87CD32A873D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::RPG::Client::ParkourGame::MonoParkourProjectile* Field_1_2; // 0x10
	::Class_1_C47576BEFCFAD595* Field_1_3; // 0x18
	::Class_1_87D77BF48E779FA0* Field_1_4; // 0x20
	::UnityEngine::Transform* Field_1_5; // 0x28
	::Class_2_F3F43255EC92B83B* Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x38
	::System::Single Field_1_8; // 0x3C

	::System::Void _ctor(::Class_1_C47576BEFCFAD595* a1, ::Class_2_F3F43255EC92B83B* a2, ::Class_1_87D77BF48E779FA0* a3, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C47576BEFCFAD595*, ::Class_2_F3F43255EC92B83B*, ::Class_1_87D77BF48E779FA0*, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Transform* Method_1_C6B687B7DECD24D2()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_C6B687B7DECD24D2_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_0D2B83799885EA6C()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_0D2B83799885EA6C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_FA4AF8FC942DAFA0(::Class_2_F3F43255EC92B83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3F43255EC92B83B*))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_FA4AF8FC942DAFA0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2376486C27388F69(::Class_2_55373297DA27393D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_55373297DA27393D*))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_2376486C27388F69_OFFSET))(this, a1);
	}

	::RPG::Client::ParkourGame::MonoParkourProjectile* Method_1_DFD71AA0FC97E79E()
	{
		return ((::RPG::Client::ParkourGame::MonoParkourProjectile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_DFD71AA0FC97E79E_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843EA87CD32A873D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
