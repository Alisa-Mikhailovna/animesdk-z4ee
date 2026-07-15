#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/DragAndDropEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_INIT_OFFSET UNITYSDK_OFFSET(0x1D0DBBB0)
#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x1D0DBBF0)
#define UNITYENGINE_UIELEMENTS_DRAGENTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DBC00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragEnterEvent_TypeDefinitionIndex = 6183;

	class DragEnterEvent : public ::UnityEngine::UIElements::DragAndDropEventBase_1<::UnityEngine::UIElements::DragEnterEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_INIT_OFFSET))(this);
		}

		::System::Void LocalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGENTEREVENT_LOCALINIT_OFFSET))(this);
		}
	};
}
