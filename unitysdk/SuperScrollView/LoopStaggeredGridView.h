#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/ListItemArrangeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AnimatorButton; }
namespace SuperScrollView { class GridViewLayoutParam; }
namespace SuperScrollView { class ItemIndexData; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace SuperScrollView { class StaggeredGridItemGroup; }
namespace SuperScrollView { class StaggeredGridItemPool; }
namespace SuperScrollView { class StaggeredGridItemPrefabConfData; }
namespace SuperScrollView { class StaggeredGridViewInitParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTANCHOR_OFFSET UNITYSDK_OFFSET(0xDDA3BC0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCOLUMNORROW_OFFSET UNITYSDK_OFFSET(0xDDA4450)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCONTAINERANCHOR_OFFSET UNITYSDK_OFFSET(0xDDA7F30)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCONTAINERPIVOT_OFFSET UNITYSDK_OFFSET(0xDDA3D10)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTPIVOT_OFFSET UNITYSDK_OFFSET(0xDDA3AE0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CACHEDRAGPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0xDDA8270)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CHECKALLGROUPIFNEEDUPDATEITEMPOS_OFFSET UNITYSDK_OFFSET(0xDDA6500)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CLEARALLTMPRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xDDA5680)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CLEARALL_OFFSET UNITYSDK_OFFSET(0xDDAAA50)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDDAAEB0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETCONTENTSIZE_OFFSET UNITYSDK_OFFSET(0xDDA6660)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETCURSHOULDADDNEWITEMGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xDDA9C60)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMABSPOSBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xDDA6920)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMBYGROUPANDGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xDDAA510)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMGROUPBYINDEX_OFFSET UNITYSDK_OFFSET(0xDDA3220)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMINDEXDATA_OFFSET UNITYSDK_OFFSET(0xDDA6DA0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMPREFABCONFDATA_OFFSET UNITYSDK_OFFSET(0xDDA32B0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETNEWITEMBYGROUPANDINDEX_OFFSET UNITYSDK_OFFSET(0xDDA9440)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xDDA6D20)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ARRANGETYPE_OFFSET UNITYSDK_OFFSET(0xDDA3170)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_CONTAINERTRANS_OFFSET UNITYSDK_OFFSET(0xDDA31D0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_CURMAXCREATEDITEMINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xDDA85B0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISDRAGING_OFFSET UNITYSDK_OFFSET(0xDDA31F0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISINITED_OFFSET UNITYSDK_OFFSET(0xDDA3210)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISVERTLIST_OFFSET UNITYSDK_OFFSET(0xDDA31B0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ITEMPREFABDATALIST_OFFSET UNITYSDK_OFFSET(0xDDA3190)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ITEMTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xDDA31C0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_LAYOUTPARAM_OFFSET UNITYSDK_OFFSET(0xDDA3200)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_LISTUPDATECHECKFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xDDA31A0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_SCROLLRECT_OFFSET UNITYSDK_OFFSET(0xDDA31E0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTHEIGHT_OFFSET UNITYSDK_OFFSET(0xDDA57B0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTSIZE_OFFSET UNITYSDK_OFFSET(0xDDA65C0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTWIDTH_OFFSET UNITYSDK_OFFSET(0xDDA5740)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_INITITEMPOOL_OFFSET UNITYSDK_OFFSET(0xDDA3DF0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_INITLISTVIEW_OFFSET UNITYSDK_OFFSET(0xDDA3460)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ISCONTAINERTRANSCANMOVE_OFFSET UNITYSDK_OFFSET(0xDDAA790)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_MOVEPANELTOITEMINDEX_OFFSET UNITYSDK_OFFSET(0xDDA61C0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_NEWLISTVIEWITEM_1_OFFSET UNITYSDK_OFFSET(0xDDA5C60)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0xDDA5820)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0xDDAA6D0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xDDA81E0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDAAE60)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONDRAG_OFFSET UNITYSDK_OFFSET(0xDDA8520)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xDDA8490)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMNEW_OFFSET UNITYSDK_OFFSET(0xDDA9740)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xDDA7B60)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xDDA7050)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xDDAA4A0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RECYCLEALLITEM_OFFSET UNITYSDK_OFFSET(0xDDA55C0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RECYCLEITEMTMP_OFFSET UNITYSDK_OFFSET(0xDDA7930)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xDDA6F00)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_REFRESHITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xDDA7290)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RESETGRIDVIEWLAYOUTPARAM_OFFSET UNITYSDK_OFFSET(0xDDA5010)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RESETLISTVIEW_OFFSET UNITYSDK_OFFSET(0xDDA7690)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETANCHOREDPOSITIONX_OFFSET UNITYSDK_OFFSET(0xDDA6810)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETANCHOREDPOSITIONY_OFFSET UNITYSDK_OFFSET(0xDDA6700)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xDDA5400)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SET_ARRANGETYPE_OFFSET UNITYSDK_OFFSET(0xDDA3180)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDDAAF00)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATEALLGROUPSHOWNITEMSPOS_OFFSET UNITYSDK_OFFSET(0xDDA8600)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATECONTENTSIZE_OFFSET UNITYSDK_OFFSET(0xDDA4E10)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELAYOUTPARAMAUTOVALUE_OFFSET UNITYSDK_OFFSET(0xDDA47D0)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELISTVIEWWITHDEFAULT_OFFSET UNITYSDK_OFFSET(0xDDA9F80)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELISTVIEW_OFFSET UNITYSDK_OFFSET(0xDDA6A60)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDAA000)
#define SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDDAAF40)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopStaggeredGridView_TypeDefinitionIndex = 45883;

	class LoopStaggeredGridView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SuperScrollView::StaggeredGridItemPool*>* mItemPoolDict; // 0x18
		::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemPool*>* mItemPoolList; // 0x20
		::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemPrefabConfData*>* mItemPrefabDataList; // 0x28
		::SuperScrollView::ListItemArrangeType mArrangeType; // 0x30
		::UnityEngine::RectTransform* mContainerTrans; // 0x38
		::UnityEngine::UI::ScrollRect* mScrollRect; // 0x40
		::System::Int32 mGroupCount; // 0x48
		::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemGroup*>* mItemGroupList; // 0x50
		::System::Collections::Generic::List_1<::SuperScrollView::ItemIndexData*>* mItemIndexDataList; // 0x58
		::UnityEngine::RectTransform* mScrollRectTransform; // 0x60
		::UnityEngine::RectTransform* mViewPortRectTransform; // 0x68
		::System::Single mItemDefaultWithPaddingSize; // 0x70
		::System::Int32 mItemTotalCount; // 0x74
		::System::Boolean mIsVertList; // 0x78
		::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* mOnGetItemByItemIndex; // 0x80
		::XLua::LuaTable* mLuaTable; // 0x88
		::System::Int32 mColumnOrRowCount; // 0x90
		::System::Boolean mIsFlexible; // 0x94
		::System::Single mItemWidthOrHeight; // 0x98
		::System::Single mPaddingTopOrLeft; // 0x9C
		::System::Single mPaddingBottomOrRight; // 0xA0
		::System::Single mItemWidthOrHeightPadding; // 0xA4
		::System::Boolean mSortIndexByInput; // 0xA8
		::Il2CppArray<::UnityEngine::Vector3>* mItemWorldCorners; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* mViewPortRectLocalCorners; // 0xB8
		::System::Single mDistanceForRecycle0; // 0xC0
		::System::Single mDistanceForNew0; // 0xC4
		::System::Single mDistanceForRecycle1; // 0xC8
		::System::Single mDistanceForNew1; // 0xCC
		::System::Boolean mIsDraging; // 0xD0
		::UnityEngine::EventSystems::PointerEventData* mPointerEventData; // 0xD8
		::System::Action* mOnBeginDragAction; // 0xE0
		::System::Action* mOnDragingAction; // 0xE8
		::System::Action* mOnEndDragAction; // 0xF0
		::UnityEngine::Vector3 mLastFrameContainerPos; // 0xF8
		::System::Boolean mListViewInited; // 0x104
		::System::Int32 mListUpdateCheckFrameCount; // 0x108
		::SuperScrollView::GridViewLayoutParam* mLayoutParam; // 0x110
		::System::Single mMaxPrefabHeightOrWidth; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW__CTOR_OFFSET))(this);
		}

		::SuperScrollView::ListItemArrangeType get_ArrangeType()
		{
			return ((::SuperScrollView::ListItemArrangeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ARRANGETYPE_OFFSET))(this);
		}

		::System::Void set_ArrangeType(::SuperScrollView::ListItemArrangeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::ListItemArrangeType))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SET_ARRANGETYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemPrefabConfData*>* get_ItemPrefabDataList()
		{
			return ((::System::Collections::Generic::List_1<::SuperScrollView::StaggeredGridItemPrefabConfData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ITEMPREFABDATALIST_OFFSET))(this);
		}

		::System::Int32 get_ListUpdateCheckFrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_LISTUPDATECHECKFRAMECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsVertList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISVERTLIST_OFFSET))(this);
		}

		::System::Int32 get_ItemTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ITEMTOTALCOUNT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ContainerTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_CONTAINERTRANS_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* get_ScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_SCROLLRECT_OFFSET))(this);
		}

		::System::Boolean get_IsDraging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISDRAGING_OFFSET))(this);
		}

		::SuperScrollView::GridViewLayoutParam* get_LayoutParam()
		{
			return ((::SuperScrollView::GridViewLayoutParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_LAYOUTPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_ISINITED_OFFSET))(this);
		}

		::SuperScrollView::StaggeredGridItemGroup* GetItemGroupByIndex(::System::Int32 a1)
		{
			return ((::SuperScrollView::StaggeredGridItemGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMGROUPBYINDEX_OFFSET))(this, a1);
		}

		::SuperScrollView::StaggeredGridItemPrefabConfData* GetItemPrefabConfData(::System::String* a1)
		{
			return ((::SuperScrollView::StaggeredGridItemPrefabConfData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMPREFABCONFDATA_OFFSET))(this, a1);
		}

		::System::Void InitListView(::System::Int32 a1, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>* a2, ::XLua::LuaTable* a3, ::SuperScrollView::GridViewLayoutParam* a4, ::SuperScrollView::StaggeredGridViewInitParam* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_4<::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32, ::SuperScrollView::LoopStaggeredGridViewItem*>*, ::XLua::LuaTable*, ::SuperScrollView::GridViewLayoutParam*, ::SuperScrollView::StaggeredGridViewInitParam*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_INITLISTVIEW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ResetGridViewLayoutParam(::System::Int32 a1, ::SuperScrollView::GridViewLayoutParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SuperScrollView::GridViewLayoutParam*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RESETGRIDVIEWLAYOUTPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateLayoutParamAutoValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELAYOUTPARAMAUTOVALUE_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* NewListViewItem(::System::String* a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_NEWLISTVIEWITEM_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* NewListViewItem_1(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_NEWLISTVIEWITEM_1_OFFSET))(this, a1);
		}

		::System::Void SetListItemCount(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETLISTITEMCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void MovePanelToItemIndex(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_MOVEPANELTOITEMINDEX_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetShownItemByItemIndex(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void OnItemSizeChanged(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMSIZECHANGED_OFFSET))(this, a1);
		}

		::System::Void RefreshItemByItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_REFRESHITEMBYITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void ResetListView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RESETLISTVIEW_OFFSET))(this, a1);
		}

		::System::Single get_ViewPortSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTSIZE_OFFSET))(this);
		}

		::System::Single get_ViewPortWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTWIDTH_OFFSET))(this);
		}

		::System::Single get_ViewPortHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_VIEWPORTHEIGHT_OFFSET))(this);
		}

		::System::Void RecycleAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RECYCLEALLITEM_OFFSET))(this);
		}

		::System::Void RecycleItemTmp(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_RECYCLEITEMTMP_OFFSET))(this, a1);
		}

		::System::Void ClearAllTmpRecycledItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CLEARALLTMPRECYCLEDITEM_OFFSET))(this);
		}

		::System::Void AdjustContainerPivot(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCONTAINERPIVOT_OFFSET))(this, a1);
		}

		::System::Void AdjustPivot(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTPIVOT_OFFSET))(this, a1);
		}

		::System::Void AdjustContainerAnchor(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCONTAINERANCHOR_OFFSET))(this, a1);
		}

		::System::Void AdjustAnchor(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTANCHOR_OFFSET))(this, a1);
		}

		::System::Void InitItemPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_INITITEMPOOL_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void CacheDragPointerEventData(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CACHEDRAGPOINTEREVENTDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_CurMaxCreatedItemIndexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GET_CURMAXCREATEDITEMINDEXCOUNT_OFFSET))(this);
		}

		::System::Void SetAnchoredPositionX(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETANCHOREDPOSITIONX_OFFSET))(this, a1, a2);
		}

		::System::Void SetAnchoredPositionY(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SETANCHOREDPOSITIONY_OFFSET))(this, a1, a2);
		}

		::SuperScrollView::ItemIndexData* GetItemIndexData(::System::Int32 a1)
		{
			return ((::SuperScrollView::ItemIndexData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMINDEXDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateAllGroupShownItemsPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATEALLGROUPSHOWNITEMSPOS_OFFSET))(this);
		}

		::System::Void CheckAllGroupIfNeedUpdateItemPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CHECKALLGROUPIFNEEDUPDATEITEMPOS_OFFSET))(this);
		}

		::System::Single GetItemAbsPosByItemIndex(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMABSPOSBYITEMINDEX_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetNewItemByGroupAndIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETNEWITEMBYGROUPANDINDEX_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCurShouldAddNewItemGroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETCURSHOULDADDNEWITEMGROUPINDEX_OFFSET))(this);
		}

		::System::Void UpdateListViewWithDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELISTVIEWWITHDEFAULT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateListView(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATELISTVIEW_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetContentSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETCONTENTSIZE_OFFSET))(this);
		}

		::System::Void UpdateContentSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_UPDATECONTENTSIZE_OFFSET))(this);
		}

		::System::Boolean AdjustColumnOrRow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ADJUSTCOLUMNORROW_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* GetItemByGroupAndGroupIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_GETITEMBYGROUPANDGROUPINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void OnItemNew(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMNEW_OFFSET))(this, a1);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean IsContainerTransCanMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ISCONTAINERTRANSCANMOVE_OFFSET))(this);
		}

		::System::Void OnItemRecycle(::SuperScrollView::LoopStaggeredGridViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopStaggeredGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONITEMRECYCLE_OFFSET))(this, a1);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_CLEARALL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_DESPAWNED_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPSTAGGEREDGRIDVIEW_SPAWNED_OFFSET))(this);
		}
	};
}
