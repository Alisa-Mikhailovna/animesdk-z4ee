#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xDD9CDD0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDDA06E0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 45871;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::SuperScrollView::SnapStatus mSnapStatus; // 0x10
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x14
		::System::Single mMoveMaxAbsVec; // 0x28
		::System::Single mTargetSnapVal; // 0x2C
		::System::Int32 mIsSnapDirect; // 0x30
		::System::Int32 mTempTargetIndex; // 0x34
		::System::Single mCurSnapVal; // 0x38
		::System::Int32 mSnapTargetIndex; // 0x3C
		::System::Boolean mIsForceSnapTo; // 0x40
		::System::Boolean mIsSnapWithPredict; // 0x41
		::System::Boolean mIsFinishCallbackDone; // 0x42
		::System::Boolean mIsTempTarget; // 0x43

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET))(this);
		}
	};
}
