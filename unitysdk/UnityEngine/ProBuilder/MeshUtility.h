#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHUTILITY_COLLAPSESHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1CE7A810)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_COMPILE_OFFSET UNITYSDK_OFFSET(0x1CE79BB0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CE75DA0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x1CE75D60)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_FITTOSIZE_OFFSET UNITYSDK_OFFSET(0x1CE7AF90)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GENERATEPERTRIANGLEMESH_OFFSET UNITYSDK_OFFSET(0x1CE74E00)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GENERATETANGENT_OFFSET UNITYSDK_OFFSET(0x1CE753C0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1CE65560)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GETINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE799F0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GETPRIMITIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1CE79A80)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1CE64120)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_ISUSEDINPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1CE7B830)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_PRINT_OFFSET UNITYSDK_OFFSET(0x1CE76DF0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_RESTOREPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1CE7B9C0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_1_OFFSET UNITYSDK_OFFSET(0x1CE7B810)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_2_OFFSET UNITYSDK_OFFSET(0x1CE7B380)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_OFFSET UNITYSDK_OFFSET(0x1CE7B350)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshUtility_TypeDefinitionIndex = 41574;

	class MeshUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* GeneratePerTriangleMesh(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GENERATEPERTRIANGLEMESH_OFFSET))(a1);
		}

		static ::System::Void GenerateTangent(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GENERATETANGENT_OFFSET))(a1);
		}

		static ::UnityEngine::Mesh* DeepCopy(::UnityEngine::Mesh* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_DEEPCOPY_OFFSET))(a1);
		}

		static ::System::Void CopyTo(::UnityEngine::Mesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_COPYTO_OFFSET))(a1, a2);
		}

		static ::System::String* Print(::UnityEngine::Mesh* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_PRINT_OFFSET))(a1);
		}

		static ::System::UInt32 GetIndexCount(::UnityEngine::Mesh* a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GETINDEXCOUNT_OFFSET))(a1);
		}

		static ::System::UInt32 GetPrimitiveCount(::UnityEngine::Mesh* a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GETPRIMITIVECOUNT_OFFSET))(a1);
		}

		static ::System::Void Compile(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2, ::UnityEngine::MeshTopology a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::UnityEngine::MeshTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_COMPILE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* GetVertices(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GETVERTICES_OFFSET))(a1);
		}

		static ::System::Void CollapseSharedVertices(::UnityEngine::Mesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_COLLAPSESHAREDVERTICES_OFFSET))(a1, a2);
		}

		static ::System::Void FitToSize(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Bounds a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Bounds, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_FITTOSIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* SanityCheck(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::String*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_OFFSET))(a1);
		}

		static ::System::String* SanityCheck_1(::UnityEngine::Mesh* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_1_OFFSET))(a1);
		}

		static ::System::String* SanityCheck_2(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_2_OFFSET))(a1);
		}

		static ::System::Boolean IsUsedInParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_ISUSEDINPARTICLESYSTEM_OFFSET))(a1);
		}

		static ::System::Void RestoreParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_RESTOREPARTICLESYSTEM_OFFSET))(a1);
		}

		static ::UnityEngine::Bounds GetBounds(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GETBOUNDS_OFFSET))(a1);
		}
	};
}
