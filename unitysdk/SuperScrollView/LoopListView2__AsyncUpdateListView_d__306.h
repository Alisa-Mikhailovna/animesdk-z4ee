#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { class Action; }

#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDDA0700)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDDA08C0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDDA0920)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDDA08D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDA06F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306__CTOR_OFFSET UNITYSDK_OFFSET(0xDD9DB70)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2__AsyncUpdateListView_d__306_TypeDefinitionIndex = 45874;

	class LoopListView2__AsyncUpdateListView_d__306 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::SuperScrollView::LoopListView2* __4__this; // 0x18
		::System::Action* callback; // 0x20
		::System::Single distanceForNew1; // 0x28
		::System::Single distanceForRecycle0; // 0x2C
		::System::Boolean _needContinueCheck_5__2; // 0x30
		::System::Single distanceForNew0; // 0x34
		::System::Single distanceForRecycle1; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 _maxCount_5__4; // 0x40
		::System::Int32 _checkCount_5__3; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2__ASYNCUPDATELISTVIEW_D__306_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
