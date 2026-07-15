#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::CaseBoard { class TeamRelationViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWLINEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xC4C3470)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardShowLineParams_TypeDefinitionIndex = 75852;

	class CaseBoardShowLineParams : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* EffectList; // 0x10
		::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* TeamRelation; // 0x18
		::System::Single SagAmountRatio; // 0x20
		::System::Boolean NeedWaitFinish; // 0x24
		::System::Boolean IsShow; // 0x25
		::System::Boolean IsShowTag; // 0x26
		::System::Single TagRatio; // 0x28
		::System::Single Duration; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSHOWLINEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
