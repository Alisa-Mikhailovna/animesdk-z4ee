#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_NEWSTICKERITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED8230)
#define RPG_CLIENT_NEWSTICKERITEM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCED82A0)
#define RPG_CLIENT_NEWSTICKERITEM_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xCED8290)
#define RPG_CLIENT_NEWSTICKERITEM_GET_USEROBJECT_OFFSET UNITYSDK_OFFSET(0xCED82C0)
#define RPG_CLIENT_NEWSTICKERITEM_ONCREATED_OFFSET UNITYSDK_OFFSET(0xCED8180)
#define RPG_CLIENT_NEWSTICKERITEM_ONRECYCLED_OFFSET UNITYSDK_OFFSET(0xCED81D0)
#define RPG_CLIENT_NEWSTICKERITEM_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCED82B0)
#define RPG_CLIENT_NEWSTICKERITEM_SET_USEROBJECT_OFFSET UNITYSDK_OFFSET(0xCED82D0)
#define RPG_CLIENT_NEWSTICKERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCED8170)

namespace RPG::Client
{
	inline static constexpr unsigned int NewsTickerItem_TypeDefinitionIndex = 65920;

	class NewsTickerItem : public ::System::Object
	{
	public:
		::System::Object* _UserObject_k__BackingField; // 0x10
		::UnityEngine::RectTransform* _Transform; // 0x18
		::System::UInt32 _Index_k__BackingField; // 0x20

		::System::Void _ctor(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void OnCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_ONCREATED_OFFSET))(this);
		}

		::System::Void OnRecycled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_ONRECYCLED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_Transform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_GET_TRANSFORM_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Object* get_UserObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_GET_USEROBJECT_OFFSET))(this);
		}

		::System::Void set_UserObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWSTICKERITEM_SET_USEROBJECT_OFFSET))(this, a1);
		}
	};
}
