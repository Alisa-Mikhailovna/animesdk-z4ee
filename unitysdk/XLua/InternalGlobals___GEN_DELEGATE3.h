#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class ActivityRewardCountData; }
namespace RPG::Client { class ActivityRewardCountItemData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE3_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13D93250)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE3_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13D93280)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE3_INVOKE_OFFSET UNITYSDK_OFFSET(0x13D93240)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE3__CTOR_OFFSET UNITYSDK_OFFSET(0x13D931D0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE3_TypeDefinitionIndex = 47884;

	class InternalGlobals___GEN_DELEGATE3 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE3__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityRewardCountItemData* Invoke(::RPG::Client::ActivityRewardCountData* a1)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::PVOID, ::RPG::Client::ActivityRewardCountData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE3_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::ActivityRewardCountData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::ActivityRewardCountData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE3_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ActivityRewardCountItemData* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE3_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
