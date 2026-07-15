#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_777;

#define RPG_CLIENT_MESSAGECONTENTBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xCBA7580)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCBA74D0)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISCONTEXT_OFFSET UNITYSDK_OFFSET(0xCBA7270)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xCBA7330)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCBA7680)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCBA7760)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_SETMESSAGE_OFFSET UNITYSDK_OFFSET(0xCBA7480)
#define RPG_CLIENT_MESSAGECONTENTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA77C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentBlock_TypeDefinitionIndex = 60446;

	class MessageContentBlock : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_777* _Message; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISLASTMESSAGE_OFFSET))(this);
		}

		::System::Void SetMessage(::Class_0_16E4307DCC419505_777* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_777*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_SETMESSAGE_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::MessageContentBlock* a1, ::RPG::Client::MessageContentBlock* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageContentBlock*, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::MessageContentBlock* a1, ::RPG::Client::MessageContentBlock* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageContentBlock*, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
