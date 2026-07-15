#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE60FD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CE61020)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_1_OFFSET UNITYSDK_OFFSET(0x1CE610D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_2_OFFSET UNITYSDK_OFFSET(0x1CE61180)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE61010)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__FILTERUNUSEDSUBMESHINDEXES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1CE61440)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CE61230)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_1_OFFSET UNITYSDK_OFFSET(0x1CE612E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_2_OFFSET UNITYSDK_OFFSET(0x1CE61390)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int InternalMeshUtility___c_TypeDefinitionIndex = 41697;

	class InternalMeshUtility___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x4F3D0);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x4F3D8);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x4F3E0);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x4F3E8);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x4F3F0);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x4F3F8);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility___c**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x4F400);
		}
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalMeshUtility___c_TypeDefinitionIndex)->GetStaticField(0x4F408);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* _CreateMeshWithTransform_b__1_0(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color>* _CreateMeshWithTransform_b__1_1(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* _CreateMeshWithTransform_b__1_2(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* _ResetPbObjectWithMeshFilter_b__2_0(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color>* _ResetPbObjectWithMeshFilter_b__2_1(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* _ResetPbObjectWithMeshFilter_b__2_2(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_2_OFFSET))(this, a1);
		}

		::System::Boolean _FilterUnusedSubmeshIndexes_b__3_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__FILTERUNUSEDSUBMESHINDEXES_B__3_0_OFFSET))(this, a1);
		}
	};
}
