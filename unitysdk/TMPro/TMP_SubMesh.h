#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/MaterialReference.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_Text; }
namespace TMPro { class TextMeshPro; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define TMPRO_TMP_SUBMESH_ADDSUBTEXTOBJECT_OFFSET UNITYSDK_OFFSET(0x1CF55450)
#define TMPRO_TMP_SUBMESH_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CF55D60)
#define TMPRO_TMP_SUBMESH_DESTROYSELF_OFFSET UNITYSDK_OFFSET(0x1CF55D30)
#define TMPRO_TMP_SUBMESH_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF54CB0)
#define TMPRO_TMP_SUBMESH_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF54F90)
#define TMPRO_TMP_SUBMESH_GETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF55DE0)
#define TMPRO_TMP_SUBMESH_GET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF550B0)
#define TMPRO_TMP_SUBMESH_GET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF551C0)
#define TMPRO_TMP_SUBMESH_GET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x1CF54C60)
#define TMPRO_TMP_SUBMESH_GET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF551E0)
#define TMPRO_TMP_SUBMESH_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF54CA0)
#define TMPRO_TMP_SUBMESH_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x1CF552A0)
#define TMPRO_TMP_SUBMESH_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1CF55380)
#define TMPRO_TMP_SUBMESH_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1CF55200)
#define TMPRO_TMP_SUBMESH_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1CF55220)
#define TMPRO_TMP_SUBMESH_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF54FE0)
#define TMPRO_TMP_SUBMESH_GET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1CF54C80)
#define TMPRO_TMP_SUBMESH_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CF553F0)
#define TMPRO_TMP_SUBMESH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CF55C20)
#define TMPRO_TMP_SUBMESH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CF55BC0)
#define TMPRO_TMP_SUBMESH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CF55AB0)
#define TMPRO_TMP_SUBMESH_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1CF56100)
#define TMPRO_TMP_SUBMESH_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF55050)
#define TMPRO_TMP_SUBMESH_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1CF55EC0)
#define TMPRO_TMP_SUBMESH_SET_FALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF550C0)
#define TMPRO_TMP_SUBMESH_SET_FALLBACKSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF551D0)
#define TMPRO_TMP_SUBMESH_SET_FONTASSET_OFFSET UNITYSDK_OFFSET(0x1CF54C70)
#define TMPRO_TMP_SUBMESH_SET_ISDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF551F0)
#define TMPRO_TMP_SUBMESH_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF54E90)
#define TMPRO_TMP_SUBMESH_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1CF553E0)
#define TMPRO_TMP_SUBMESH_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1CF55210)
#define TMPRO_TMP_SUBMESH_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF54FF0)
#define TMPRO_TMP_SUBMESH_SET_SPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1CF54C90)
#define TMPRO_TMP_SUBMESH_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CF56110)
#define TMPRO_TMP_SUBMESH_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0x1CF55E70)
#define TMPRO_TMP_SUBMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF563B0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SubMesh_TypeDefinitionIndex = 41838;

	class TMP_SubMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::TMPro::TMP_FontAsset* m_fontAsset; // 0x18
		::TMPro::TMP_SpriteAsset* m_spriteAsset; // 0x20
		::UnityEngine::Material* m_material; // 0x28
		::UnityEngine::Material* m_sharedMaterial; // 0x30
		::UnityEngine::Material* m_fallbackMaterial; // 0x38
		::UnityEngine::Material* m_fallbackSourceMaterial; // 0x40
		::System::Boolean m_isDefaultMaterial; // 0x48
		::System::Single m_padding; // 0x4C
		::UnityEngine::Renderer* m_renderer; // 0x50
		::UnityEngine::MeshFilter* m_meshFilter; // 0x58
		::UnityEngine::Mesh* m_mesh; // 0x60
		::TMPro::TextMeshPro* m_TextComponent; // 0x68
		::System::Boolean m_isRegisteredForEvents; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH__CTOR_OFFSET))(this);
		}

		::TMPro::TMP_FontAsset* get_fontAsset()
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FONTASSET_OFFSET))(this);
		}

		::System::Void set_fontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FONTASSET_OFFSET))(this, a1);
		}

		::TMPro::TMP_SpriteAsset* get_spriteAsset()
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_SPRITEASSET_OFFSET))(this);
		}

		::System::Void set_spriteAsset(::TMPro::TMP_SpriteAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_SPRITEASSET_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_MATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_sharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_SHAREDMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_fallbackMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FALLBACKMATERIAL_OFFSET))(this);
		}

		::System::Void set_fallbackMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FALLBACKMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_fallbackSourceMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_FALLBACKSOURCEMATERIAL_OFFSET))(this);
		}

		::System::Void set_fallbackSourceMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_FALLBACKSOURCEMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_isDefaultMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_ISDEFAULTMATERIAL_OFFSET))(this);
		}

		::System::Void set_isDefaultMaterial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_ISDEFAULTMATERIAL_OFFSET))(this, a1);
		}

		::System::Single get_padding()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_padding(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_PADDING_OFFSET))(this, a1);
		}

		::UnityEngine::Renderer* get_renderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_RENDERER_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_meshFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MESHFILTER_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SET_MESH_OFFSET))(this, a1);
		}

		::TMPro::TMP_Text* get_textComponent()
		{
			return ((::TMPro::TMP_Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GET_TEXTCOMPONENT_OFFSET))(this);
		}

		static ::TMPro::TMP_SubMesh* AddSubTextObject(::TMPro::TextMeshPro* a1, ::TMPro::MaterialReference a2)
		{
			return ((::TMPro::TMP_SubMesh*(*)(::TMPro::TextMeshPro*, ::TMPro::MaterialReference))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ADDSUBTEXTOBJECT_OFFSET))(a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_ONDESTROY_OFFSET))(this);
		}

		::System::Void DestroySelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_DESTROYSELF_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_CREATEMATERIALINSTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetSharedMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETSHAREDMATERIAL_OFFSET))(this, a1);
		}

		::System::Single GetPaddingForMaterial()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_GETPADDINGFORMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateMeshPadding(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_UPDATEMESHPADDING_OFFSET))(this, a1, a2);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SUBMESH_UPDATEMATERIAL_OFFSET))(this);
		}
	};
}
