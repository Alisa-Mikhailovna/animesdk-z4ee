#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_78;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEFINISHINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD394040)
#define RPG_CLIENT_ROGUEFINISHINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD394080)
#define RPG_CLIENT_ROGUEFINISHINFO___C__GET_RECORDAVATARS_B__62_0_OFFSET UNITYSDK_OFFSET(0xD394090)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFinishInfo___c_TypeDefinitionIndex = 64459;

	class RogueFinishInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueFinishInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueFinishInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x240D0);
		}
		static ::System::Comparison_1<::Class_1_1CBA230307F9C289_78*>** StaticGet___9__62_0()
		{
			return (::System::Comparison_1<::Class_1_1CBA230307F9C289_78*>**)Il2CppClass::FromTypeDefinitionIndex(RogueFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x240D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_RecordAvatars_b__62_0(::Class_1_1CBA230307F9C289_78* a1, ::Class_1_1CBA230307F9C289_78* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289_78*, ::Class_1_1CBA230307F9C289_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C__GET_RECORDAVATARS_B__62_0_OFFSET))(this, a1, a2);
		}
	};
}
