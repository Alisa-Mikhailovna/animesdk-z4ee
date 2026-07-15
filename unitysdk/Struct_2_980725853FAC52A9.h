#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/AvatarInstanceType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_980725853FAC52A9_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x82730)
#define STRUCT_2_980725853FAC52A9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x82700)
#define STRUCT_2_980725853FAC52A9_EQUALS_OFFSET UNITYSDK_OFFSET(0x82690)
#define STRUCT_2_980725853FAC52A9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x82680)
#define STRUCT_2_980725853FAC52A9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1E130)
#define STRUCT_2_980725853FAC52A9_GET_INSTANCESUBID_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define STRUCT_2_980725853FAC52A9_GET_INSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x5EF0)
#define STRUCT_2_980725853FAC52A9_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB15CE60)
#define STRUCT_2_980725853FAC52A9_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB15CE20)
#define STRUCT_2_980725853FAC52A9_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x82660)
#define STRUCT_2_980725853FAC52A9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x21F0)
#define STRUCT_2_980725853FAC52A9_SET_INSTANCESUBID_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define STRUCT_2_980725853FAC52A9_SET_INSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x2CAC0)
#define STRUCT_2_980725853FAC52A9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x82650)
#define STRUCT_2_980725853FAC52A9__CTOR_OFFSET UNITYSDK_OFFSET(0x82640)

inline static constexpr unsigned int Struct_2_980725853FAC52A9_TypeDefinitionIndex = 49530;

struct alignas(4) Struct_2_980725853FAC52A9
{
	::RPG::AvatarSystem::AvatarInstanceType _InstanceType_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x14
	::System::UInt32 _InstanceSubID_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::AvatarSystem::AvatarInstanceType a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::AvatarSystem::AvatarInstanceType get_InstanceType()
	{
		return ((::RPG::AvatarSystem::AvatarInstanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_GET_INSTANCETYPE_OFFSET))(this);
	}

	::System::Void set_InstanceType(::RPG::AvatarSystem::AvatarInstanceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_SET_INSTANCETYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceSubID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_GET_INSTANCESUBID_OFFSET))(this);
	}

	::System::Void set_InstanceSubID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_SET_INSTANCESUBID_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_980725853FAC52A9 a1, ::Struct_2_980725853FAC52A9 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_980725853FAC52A9, ::Struct_2_980725853FAC52A9))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_980725853FAC52A9 a1, ::Struct_2_980725853FAC52A9 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_980725853FAC52A9, ::Struct_2_980725853FAC52A9))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_980725853FAC52A9 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_980725853FAC52A9))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::RPG::AvatarSystem::AvatarInstanceType& a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarInstanceType&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_980725853FAC52A9_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
	}
};
