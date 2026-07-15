#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_1_OFFSET UNITYSDK_OFFSET(0x1D0AEBB0)
#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_2_OFFSET UNITYSDK_OFFSET(0x1D0AEA20)
#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0AEBF0)
#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0AEBC0)
#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1D0AEA00)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATHLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0AE940)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_1_OFFSET UNITYSDK_OFFSET(0x1D0AE830)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0AE770)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_OFFSET UNITYSDK_OFFSET(0x1D0AE670)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETTOTALPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0AE620)
#define UNITYENGINE_POLYGONCOLLIDER2D_GET_AUTOTILING_OFFSET UNITYSDK_OFFSET(0x1D0AE600)
#define UNITYENGINE_POLYGONCOLLIDER2D_GET_PATHCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0AE650)
#define UNITYENGINE_POLYGONCOLLIDER2D_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x1D0AE630)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATHLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0AE9F0)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_1_OFFSET UNITYSDK_OFFSET(0x1D0AE950)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0AE820)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_OFFSET UNITYSDK_OFFSET(0x1D0AE780)
#define UNITYENGINE_POLYGONCOLLIDER2D_SET_AUTOTILING_OFFSET UNITYSDK_OFFSET(0x1D0AE610)
#define UNITYENGINE_POLYGONCOLLIDER2D_SET_PATHCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0AE660)
#define UNITYENGINE_POLYGONCOLLIDER2D_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x1D0AE640)
#define UNITYENGINE_POLYGONCOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AEC00)

namespace UnityEngine
{
	inline static constexpr unsigned int PolygonCollider2D_TypeDefinitionIndex = 5286;

	class PolygonCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Boolean get_autoTiling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GET_AUTOTILING_OFFSET))(this);
		}

		::System::Void set_autoTiling(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SET_AUTOTILING_OFFSET))(this, a1);
		}

		::System::Int32 GetTotalPointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETTOTALPOINTCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_points()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_points(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SET_POINTS_OFFSET))(this, a1);
		}

		::System::Int32 get_pathCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GET_PATHCOUNT_OFFSET))(this);
		}

		::System::Void set_pathCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SET_PATHCOUNT_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetPath(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetPath_Internal(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_INTERNAL_OFFSET))(this, a1);
		}

		::System::Void SetPath(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_OFFSET))(this, a1, a2);
		}

		::System::Void SetPath_Internal(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPath_1(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPathList_Internal(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATHLIST_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetPath_1(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetPathList_Internal(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATHLIST_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void CreatePrimitive(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_OFFSET))(this, a1);
		}

		::System::Void CreatePrimitive_1(::System::Int32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_1_OFFSET))(this, a1, a2);
		}

		::System::Void CreatePrimitive_2(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreatePrimitive_Internal(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_INTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CreatePrimitive_Internal_Injected(::System::Int32 a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
