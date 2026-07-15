#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATAREXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDF8E60)
#define RPG_CLIENT_AVATAREXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDF8E90)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__179_0_OFFSET UNITYSDK_OFFSET(0xBDF8EA0)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__180_1_OFFSET UNITYSDK_OFFSET(0xBDF8EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions___c_TypeDefinitionIndex = 59808;

	class AvatarExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Struct_2_BAC064D277DD99F1, ::System::UInt32>** StaticGet___9__180_1()
		{
			return (::System::Func_2<::Struct_2_BAC064D277DD99F1, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExtensions___c_TypeDefinitionIndex)->GetStaticField(0x512D0);
		}
		static ::RPG::Client::AvatarExtensions___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarExtensions___c_TypeDefinitionIndex)->GetStaticField(0x512D8);
		}
		static ::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet___9__179_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExtensions___c_TypeDefinitionIndex)->GetStaticField(0x512E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRecommendTraceNodeRowDataList_b__179_0(::RPG::GameCore::AvatarSkillTreeRow* a1, ::RPG::GameCore::AvatarSkillTreeRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__179_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetTraceTreeLevels_b__180_1(::Struct_2_BAC064D277DD99F1 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__180_1_OFFSET))(this, a1);
		}
	};
}
