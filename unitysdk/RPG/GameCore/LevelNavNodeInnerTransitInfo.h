#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x39E89D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x39FA460)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2D8F7B0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2D8F7D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_CONDITIONINFOS_OFFSET UNITYSDK_OFFSET(0x39FA470)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_FROMID_OFFSET UNITYSDK_OFFSET(0x39FA4D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2D8F5B0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x5AA0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_TOID_OFFSET UNITYSDK_OFFSET(0x39FA530)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_INIT_OFFSET UNITYSDK_OFFSET(0x8A130)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B566260)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B5664A0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B566370)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1B566550)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_CONDITIONINFOS_OFFSET UNITYSDK_OFFSET(0x39FA480)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_FROMID_OFFSET UNITYSDK_OFFSET(0x39FA4E0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_TOID_OFFSET UNITYSDK_OFFSET(0x39FA540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerTransitInfo_TypeDefinitionIndex = 10364;

	struct alignas(8) LevelNavNodeInnerTransitInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerTransitInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerTransitInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInnerTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavNodeInnerTransitInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerTransitInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		::RPG::GameCore::LevelNavNodeConditionInfos* get_ConditionInfos()
		{
			return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_CONDITIONINFOS_OFFSET))(this);
		}

		::System::Void set_ConditionInfos(::RPG::GameCore::LevelNavNodeConditionInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeConditionInfos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_CONDITIONINFOS_OFFSET))(this, a1);
		}

		::System::UInt32 get_FromID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_FROMID_OFFSET))(this);
		}

		::System::Void set_FromID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_FROMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ToID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_GET_TOID_OFFSET))(this);
		}

		::System::Void set_ToID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_SET_TOID_OFFSET))(this, a1);
		}
	};
}
