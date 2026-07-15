#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

namespace RPG::Client::Prop { class SignItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_SIGNPUZZLE_DISPOSEPUZZLE_OFFSET UNITYSDK_OFFSET(0xD229E30)
#define RPG_CLIENT_PROP_SIGNPUZZLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD229DE0)
#define RPG_CLIENT_PROP_SIGNPUZZLE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xD229B00)
#define RPG_CLIENT_PROP_SIGNPUZZLE_INIT_OFFSET UNITYSDK_OFFSET(0xD229B80)
#define RPG_CLIENT_PROP_SIGNPUZZLE_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xD229D90)
#define RPG_CLIENT_PROP_SIGNPUZZLE_METHOD_6_0552BEF80A6A3BAA_OFFSET UNITYSDK_OFFSET(0xD229890)
#define RPG_CLIENT_PROP_SIGNPUZZLE_METHOD_6_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0xD229A60)
#define RPG_CLIENT_PROP_SIGNPUZZLE_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xD229D30)
#define RPG_CLIENT_PROP_SIGNPUZZLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD2297D0)
#define RPG_CLIENT_PROP_SIGNPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD229EC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SignPuzzle_TypeDefinitionIndex = 74907;

	class SignPuzzle : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::String* IsSignAnimStateName; // 0x48
		::Il2CppArray<::RPG::Client::Prop::SignItem*>* SignItems; // 0x50
		::System::Boolean IsPuzzleStart; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::Prop::SignItem*>* Field_6_3; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::SignItem*>* Field_6_4; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_UPDATE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_STARTPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_INIT_OFFSET))(this);
		}

		::System::Void DisposePuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_DISPOSEPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_EBAF10BBA97B82DD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_METHOD_6_EBAF10BBA97B82DD_OFFSET))(this);
		}

		::System::Boolean Method_6_0552BEF80A6A3BAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNPUZZLE_METHOD_6_0552BEF80A6A3BAA_OFFSET))(this);
		}
	};
}
