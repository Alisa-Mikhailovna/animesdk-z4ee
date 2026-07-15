#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_3;
namespace System { class Object; }

#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x39E89D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x39FA1E0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x2D8F7B0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2D8F7D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_CONNECTLIST_OFFSET UNITYSDK_OFFSET(0x39FA1F0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERNODELIST_OFFSET UNITYSDK_OFFSET(0x39FA260)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERTRANSITLIST_OFFSET UNITYSDK_OFFSET(0x39FA2D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2D8F5B0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x5AA0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_INIT_OFFSET UNITYSDK_OFFSET(0x8A130)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B564DD0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B565120)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B564EC0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_LOGICALNOT_OFFSET UNITYSDK_OFFSET(0x1B5651D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_CONNECTLIST_OFFSET UNITYSDK_OFFSET(0x39FA210)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERNODELIST_OFFSET UNITYSDK_OFFSET(0x39FA280)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERTRANSITLIST_OFFSET UNITYSDK_OFFSET(0x39FA2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerGraphInfo_TypeDefinitionIndex = 10362;

	struct alignas(8) LevelNavNodeInnerGraphInfo
	{
		::Class_1_43BD383C98B4C0C5_3* _Pool; // 0x10
		::System::UInt32 _Offset; // 0x18

		::System::Void Init(::Class_1_43BD383C98B4C0C5_3* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_OFFSET_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_3* get_Pool()
		{
			return ((::Class_1_43BD383C98B4C0C5_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerGraphInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerGraphInfo, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelNavNodeInnerGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_LogicalNot(::RPG::GameCore::LevelNavNodeInnerGraphInfo a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelNavNodeInnerGraphInfo))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_OP_LOGICALNOT_OFFSET))(a1);
		}

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo> get_ConnectList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_CONNECTLIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_ConnectList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerConnectInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_CONNECTLIST_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo> get_InnerNodeList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERNODELIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InnerNodeList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerNodeInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERNODELIST_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo> get_InnerTransitList()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_GET_INNERTRANSITLIST_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InnerTransitList(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::RPG::GameCore::LevelNavNodeInnerTransitInfo>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHINFO_SET_INNERTRANSITLIST_OFFSET))(this, a1);
		}
		*/
	};
}
