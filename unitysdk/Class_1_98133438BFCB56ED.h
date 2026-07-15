#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CollisionDataFlag.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_440;
class Class_0_16E4307DCC419505_441;
class Class_1_D30B741E780CB2FD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98133438BFCB56ED_CLEAR_OFFSET UNITYSDK_OFFSET(0x14790ED0)
#define CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_1_OFFSET UNITYSDK_OFFSET(0x14791020)
#define CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_OFFSET UNITYSDK_OFFSET(0x14790FD0)
#define CLASS_1_98133438BFCB56ED_METHOD_1_4D7F2CC1DBA24BC8_OFFSET UNITYSDK_OFFSET(0x14790F80)
#define CLASS_1_98133438BFCB56ED_METHOD_1_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0x14791070)
#define CLASS_1_98133438BFCB56ED__CTOR_OFFSET UNITYSDK_OFFSET(0x147910E0)

inline static constexpr unsigned int Class_1_98133438BFCB56ED_TypeDefinitionIndex = 51201;

class Class_1_98133438BFCB56ED : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_440* Field_1_0; // 0x10
	::System::Object* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_441* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* Field_1_3; // 0x28
	::RPG::GameCore::FixVec2 Field_1_4; // 0x30
	::RPG::GameCore::FixVec2 Field_1_5; // 0x40
	::RPG::GameCore::FixVec2 Field_1_6; // 0x50
	::System::UInt32 Field_1_7; // 0x60
	::System::UInt32 Field_1_8; // 0x64
	::RPG::GameCore::CollisionDataFlag Field_1_9; // 0x68
	::System::UInt32 Field_1_10; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_4D7F2CC1DBA24BC8(::RPG::GameCore::CollisionDataFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_METHOD_1_4D7F2CC1DBA24BC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F8EFB6D63ADB169(::RPG::GameCore::CollisionDataFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F8EFB6D63ADB169_1(::RPG::GameCore::CollisionDataFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F86E3F6E3E2B1642(::Class_1_98133438BFCB56ED* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_METHOD_1_F86E3F6E3E2B1642_OFFSET))(this, a1);
	}
};
