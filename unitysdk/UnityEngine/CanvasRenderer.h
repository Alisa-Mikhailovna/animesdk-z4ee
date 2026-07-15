#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1D0F89E0)
#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_2_OFFSET UNITYSDK_OFFSET(0x1D0F89F0)
#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_3_OFFSET UNITYSDK_OFFSET(0x1D0F8A90)
#define UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1D0F88C0)
#define UNITYENGINE_CANVASRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D0F7E30)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0F8600)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0F88B0)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1D0F85F0)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_2_OFFSET UNITYSDK_OFFSET(0x1D0F8610)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_3_OFFSET UNITYSDK_OFFSET(0x1D0F86C0)
#define UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x1D0F84C0)
#define UNITYENGINE_CANVASRENDERER_DISABLERECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x1D0F7D80)
#define UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7C90)
#define UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x1D0F7C80)
#define UNITYENGINE_CANVASRENDERER_GETALPHA_OFFSET UNITYSDK_OFFSET(0x1D0F7E40)
#define UNITYENGINE_CANVASRENDERER_GETCOLORSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7C50)
#define UNITYENGINE_CANVASRENDERER_GETCOLORSCALE_OFFSET UNITYSDK_OFFSET(0x1D0F7C10)
#define UNITYENGINE_CANVASRENDERER_GETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7BE0)
#define UNITYENGINE_CANVASRENDERER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D0F7BA0)
#define UNITYENGINE_CANVASRENDERER_GETCUSTOMDEPTH_OFFSET UNITYSDK_OFFSET(0x1D0F7C70)
#define UNITYENGINE_CANVASRENDERER_GETINHERITEDALPHA_OFFSET UNITYSDK_OFFSET(0x1D0F7ED0)
#define UNITYENGINE_CANVASRENDERER_GETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1D0F7F40)
#define UNITYENGINE_CANVASRENDERER_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D0F7DA0)
#define UNITYENGINE_CANVASRENDERER_GETPOPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D0F7DC0)
#define UNITYENGINE_CANVASRENDERER_GET_ABSOLUTEDEPTH_OFFSET UNITYSDK_OFFSET(0x1D0F7AE0)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7CE0)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1D0F7CA0)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGTRANSLATEROT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7D50)
#define UNITYENGINE_CANVASRENDERER_GET_CLIPPINGTRANSLATEROT_OFFSET UNITYSDK_OFFSET(0x1D0F7D10)
#define UNITYENGINE_CANVASRENDERER_GET_CULLTRANSPARENTMESH_OFFSET UNITYSDK_OFFSET(0x1D0F7B00)
#define UNITYENGINE_CANVASRENDERER_GET_CULL_OFFSET UNITYSDK_OFFSET(0x1D0F7B40)
#define UNITYENGINE_CANVASRENDERER_GET_HASMOVED_OFFSET UNITYSDK_OFFSET(0x1D0F7AF0)
#define UNITYENGINE_CANVASRENDERER_GET_HASPOPINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1D0F7A80)
#define UNITYENGINE_CANVASRENDERER_GET_HASRECTCLIPPING_OFFSET UNITYSDK_OFFSET(0x1D0F7B20)
#define UNITYENGINE_CANVASRENDERER_GET_ISMASK_OFFSET UNITYSDK_OFFSET(0x1D0F7B60)
#define UNITYENGINE_CANVASRENDERER_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0F7AA0)
#define UNITYENGINE_CANVASRENDERER_GET_POPMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0F7AC0)
#define UNITYENGINE_CANVASRENDERER_GET_RELATIVEDEPTH_OFFSET UNITYSDK_OFFSET(0x1D0F7B30)
#define UNITYENGINE_CANVASRENDERER_SETALPHATEXTURE_OFFSET UNITYSDK_OFFSET(0x1D0F7DF0)
#define UNITYENGINE_CANVASRENDERER_SETALPHA_OFFSET UNITYSDK_OFFSET(0x1D0F7E70)
#define UNITYENGINE_CANVASRENDERER_SETCOLORSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7C00)
#define UNITYENGINE_CANVASRENDERER_SETCOLORSCALE_OFFSET UNITYSDK_OFFSET(0x1D0F7BF0)
#define UNITYENGINE_CANVASRENDERER_SETCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7B90)
#define UNITYENGINE_CANVASRENDERER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D0F7B80)
#define UNITYENGINE_CANVASRENDERER_SETCUSTOMDEPTH_OFFSET UNITYSDK_OFFSET(0x1D0F7C60)
#define UNITYENGINE_CANVASRENDERER_SETLOCALTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7E20)
#define UNITYENGINE_CANVASRENDERER_SETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D0F7E10)
#define UNITYENGINE_CANVASRENDERER_SETMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x1D0F7EE0)
#define UNITYENGINE_CANVASRENDERER_SETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D0F7D90)
#define UNITYENGINE_CANVASRENDERER_SETMESH_OFFSET UNITYSDK_OFFSET(0x1D0F7E00)
#define UNITYENGINE_CANVASRENDERER_SETPOPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D0F7DB0)
#define UNITYENGINE_CANVASRENDERER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1D0F7DE0)
#define UNITYENGINE_CANVASRENDERER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D0F7DD0)
#define UNITYENGINE_CANVASRENDERER_SETVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1D0F8DA0)
#define UNITYENGINE_CANVASRENDERER_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x1D0F8CF0)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7D00)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1D0F7CF0)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGTRANSLATEROT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D0F7D70)
#define UNITYENGINE_CANVASRENDERER_SET_CLIPPINGTRANSLATEROT_OFFSET UNITYSDK_OFFSET(0x1D0F7D60)
#define UNITYENGINE_CANVASRENDERER_SET_CULLTRANSPARENTMESH_OFFSET UNITYSDK_OFFSET(0x1D0F7B10)
#define UNITYENGINE_CANVASRENDERER_SET_CULL_OFFSET UNITYSDK_OFFSET(0x1D0F7B50)
#define UNITYENGINE_CANVASRENDERER_SET_HASPOPINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1D0F7A90)
#define UNITYENGINE_CANVASRENDERER_SET_ISMASK_OFFSET UNITYSDK_OFFSET(0x1D0F7B70)
#define UNITYENGINE_CANVASRENDERER_SET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0F7AB0)
#define UNITYENGINE_CANVASRENDERER_SET_POPMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0F7AD0)
#define UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0F8100)
#define UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0F84B0)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0F80F0)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D0F84A0)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_1_OFFSET UNITYSDK_OFFSET(0x1D0F8090)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_2_OFFSET UNITYSDK_OFFSET(0x1D0F8110)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_3_OFFSET UNITYSDK_OFFSET(0x1D0F81C0)
#define UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1D0F7F50)
#define UNITYENGINE_CANVASRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F9930)

namespace UnityEngine
{
	inline static constexpr unsigned int CanvasRenderer_TypeDefinitionIndex = 5345;

	class CanvasRenderer : public ::UnityEngine::Component
	{
	public:
		::System::Boolean _isMask_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_hasPopInstruction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_HASPOPINSTRUCTION_OFFSET))(this);
		}

		::System::Void set_hasPopInstruction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_HASPOPINSTRUCTION_OFFSET))(this, a1);
		}

		::System::Int32 get_materialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_MATERIALCOUNT_OFFSET))(this);
		}

		::System::Void set_materialCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_MATERIALCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_popMaterialCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_POPMATERIALCOUNT_OFFSET))(this);
		}

		::System::Void set_popMaterialCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_POPMATERIALCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_absoluteDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_ABSOLUTEDEPTH_OFFSET))(this);
		}

		::System::Boolean get_hasMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_HASMOVED_OFFSET))(this);
		}

		::System::Boolean get_cullTransparentMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CULLTRANSPARENTMESH_OFFSET))(this);
		}

		::System::Void set_cullTransparentMesh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CULLTRANSPARENTMESH_OFFSET))(this, a1);
		}

		::System::Boolean get_hasRectClipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_HASRECTCLIPPING_OFFSET))(this);
		}

		::System::Int32 get_relativeDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_RELATIVEDEPTH_OFFSET))(this);
		}

		::System::Boolean get_cull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CULL_OFFSET))(this);
		}

		::System::Void set_cull(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CULL_OFFSET))(this, a1);
		}

		::System::Boolean get_isMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_ISMASK_OFFSET))(this);
		}

		::System::Void set_isMask(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_ISMASK_OFFSET))(this, a1);
		}

		::System::Void SetColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLOR_OFFSET))(this);
		}

		::System::Void SetColorScale(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLORSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColorScale()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLORSCALE_OFFSET))(this);
		}

		::System::Void SetCustomDepth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCUSTOMDEPTH_OFFSET))(this, a1);
		}

		::System::Int32 GetCustomDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCUSTOMDEPTH_OFFSET))(this);
		}

		::System::Void EnableRectClipping(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_clippingSoftness()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_OFFSET))(this);
		}

		::System::Void set_clippingSoftness(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_clippingTranslateRot()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGTRANSLATEROT_OFFSET))(this);
		}

		::System::Void set_clippingTranslateRot(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGTRANSLATEROT_OFFSET))(this, a1);
		}

		::System::Void DisableRectClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_DISABLERECTCLIPPING_OFFSET))(this);
		}

		::System::Void SetMaterial(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMATERIAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* GetMaterial(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetPopMaterial(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETPOPMATERIAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* GetPopMaterial(::System::Int32 a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETPOPMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETTEXTURE_OFFSET))(this, a1);
		}

		::System::Void SetTexture_1(::UnityEngine::Texture* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETTEXTURE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetAlphaTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETALPHATEXTURE_OFFSET))(this, a1);
		}

		::System::Void SetMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMESH_OFFSET))(this, a1);
		}

		::System::Void SetLocalTransform(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETLOCALTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CLEAR_OFFSET))(this);
		}

		::System::Single GetAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETALPHA_OFFSET))(this);
		}

		::System::Void SetAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETALPHA_OFFSET))(this, a1);
		}

		::System::Single GetInheritedAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETINHERITEDALPHA_OFFSET))(this);
		}

		::System::Void SetMaterial_1(::UnityEngine::Material* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETMATERIAL_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* GetMaterial_1()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETMATERIAL_1_OFFSET))(this);
		}

		static ::System::Void SplitUIVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a7, ::System::Collections::Generic::List_1<::System::Int32>* a8)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void SplitUIVertexStreams_1(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a7, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a8, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a9, ::System::Collections::Generic::List_1<::System::Int32>* a10)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void SplitUIVertexStreams_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* a3, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a4, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a5, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a6, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* a7, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a8)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void SplitUIVertexStreams_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* a3, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a4, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a5, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a6, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a7, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a8, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* a9, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a10)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMS_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void CreateUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a7, ::System::Collections::Generic::List_1<::System::Int32>* a8)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void CreateUIVertexStream_1(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a7, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a8, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a9, ::System::Collections::Generic::List_1<::System::Int32>* a10)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void CreateUIVertexStream_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* a3, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a4, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a5, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a6, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* a7, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a8)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void CreateUIVertexStream_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* a3, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a4, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a5, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a6, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a7, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a8, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* a9, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a10)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAM_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void AddUIVertexStream(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a7)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void AddUIVertexStream_1(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Color32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a7, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a8, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a9)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void AddUIVertexStream_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* a3, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a4, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a5, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a6, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* a7)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void AddUIVertexStream_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* a3, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a4, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a5, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a6, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a7, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a8, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* a9)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ADDUIVERTEXSTREAM_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETVERTICES_OFFSET))(this, a1);
		}

		::System::Void SetVertices_1(::Il2CppArray<::UnityEngine::UIVertex>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIVertex>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETVERTICES_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void SplitIndicesStreamsInternal(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void SplitUIVertexStreamsInternal(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5, ::System::Object* a6, ::System::Object* a7, ::System::Object* a8, ::System::Object* a9)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void CreateUIVertexStreamInternal(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5, ::System::Object* a6, ::System::Object* a7, ::System::Object* a8, ::System::Object* a9, ::System::Object* a10)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void SplitIndicesStreamsWithArrayInternal(::System::Array* a1, ::System::Array* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITINDICESSTREAMSWITHARRAYINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SplitUIVertexStreamsWithArrayInternal(::System::Array* a1, ::System::Array* a2, ::System::Array* a3, ::System::Array* a4, ::System::Array* a5, ::System::Array* a6, ::System::Array* a7, ::System::Array* a8, ::System::Array* a9, ::System::Int32 a10)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SPLITUIVERTEXSTREAMSWITHARRAYINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void CreateUIVertexStreamWithArrayInternal(::System::Array* a1, ::System::Array* a2, ::System::Array* a3, ::System::Array* a4, ::System::Array* a5, ::System::Array* a6, ::System::Array* a7, ::System::Array* a8, ::System::Array* a9, ::System::Array* a10, ::System::Int32 a11)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_CREATEUIVERTEXSTREAMWITHARRAYINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void SetColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetColorScale_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETCOLORSCALE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetColorScale_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GETCOLORSCALE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void EnableRectClipping_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_ENABLERECTCLIPPING_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_clippingSoftness_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGSOFTNESS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_clippingSoftness_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGSOFTNESS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_clippingTranslateRot_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_GET_CLIPPINGTRANSLATEROT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_clippingTranslateRot_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SET_CLIPPINGTRANSLATEROT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetLocalTransform_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVASRENDERER_SETLOCALTRANSFORM_INJECTED_OFFSET))(this, a1);
		}
	};
}
