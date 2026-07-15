#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_1_2AA304B71C6E8B6D;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_95EEF67A826E14FF_GET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x149AF8B0)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_12B9BCF82817FBA3_OFFSET UNITYSDK_OFFSET(0x149AF8D0)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_2AD3741D25035F49_OFFSET UNITYSDK_OFFSET(0x149AFA50)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x149AFC10)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x149AFBD0)
#define CLASS_1_95EEF67A826E14FF_SET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x149AF8C0)
#define CLASS_1_95EEF67A826E14FF__CTOR_OFFSET UNITYSDK_OFFSET(0x149AFC60)

inline static constexpr unsigned int Class_1_95EEF67A826E14FF_TypeDefinitionIndex = 68312;

class Class_1_95EEF67A826E14FF : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_1_2AA304B71C6E8B6D* Field_1_2; // 0x20
	::Il2CppArray<::System::Object*>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31
	::RPG::GameCore::EnumStatusType Field_1_6; // 0x34
	::RPG::Client::TextID Field_1_7; // 0x38
	::System::Single Field_1_8; // 0x48
	::System::UInt32 _MergedCount_k__BackingField; // 0x4C
	::System::Single Field_1_10; // 0x50
	::RPG::GameCore::FloatMessageType Field_1_11; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MergedCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_GET_MERGEDCOUNT_OFFSET))(this);
	}

	::System::Void set_MergedCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_SET_MERGEDCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_12B9BCF82817FBA3(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_12B9BCF82817FBA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2AD3741D25035F49(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_2AD3741D25035F49_OFFSET))(this, a1);
	}
};
