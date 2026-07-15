#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/SpriteMeshType.h"
#include "unitysdk/UnityEngine/SpritePackingMode.h"
#include "unitysdk/UnityEngine/SpritePackingRotation.h"
#include "unitysdk/UnityEngine/SpriteRenderDataMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D160)
#define UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_OFFSET UNITYSDK_OFFSET(0x1D05D140)
#define UNITYENGINE_SPRITE_CREATESPRITE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D1C0)
#define UNITYENGINE_SPRITE_CREATESPRITE_OFFSET UNITYSDK_OFFSET(0x1D05D170)
#define UNITYENGINE_SPRITE_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1D05DD30)
#define UNITYENGINE_SPRITE_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1D05DD60)
#define UNITYENGINE_SPRITE_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1D05E070)
#define UNITYENGINE_SPRITE_CREATE_4_OFFSET UNITYSDK_OFFSET(0x1D05E0D0)
#define UNITYENGINE_SPRITE_CREATE_5_OFFSET UNITYSDK_OFFSET(0x1D05E120)
#define UNITYENGINE_SPRITE_CREATE_6_OFFSET UNITYSDK_OFFSET(0x1D05E170)
#define UNITYENGINE_SPRITE_CREATE_7_OFFSET UNITYSDK_OFFSET(0x1D05E1C0)
#define UNITYENGINE_SPRITE_CREATE_OFFSET UNITYSDK_OFFSET(0x1D05DD00)
#define UNITYENGINE_SPRITE_GETINNERUVS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D090)
#define UNITYENGINE_SPRITE_GETINNERUVS_OFFSET UNITYSDK_OFFSET(0x1D05D050)
#define UNITYENGINE_SPRITE_GETOUTERUVS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D0E0)
#define UNITYENGINE_SPRITE_GETOUTERUVS_OFFSET UNITYSDK_OFFSET(0x1D05D0A0)
#define UNITYENGINE_SPRITE_GETPACKED_OFFSET UNITYSDK_OFFSET(0x1D05D1D0)
#define UNITYENGINE_SPRITE_GETPACKINGMODE_OFFSET UNITYSDK_OFFSET(0x1D05CFA0)
#define UNITYENGINE_SPRITE_GETPACKINGROTATION_OFFSET UNITYSDK_OFFSET(0x1D05CFB0)
#define UNITYENGINE_SPRITE_GETPADDING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D130)
#define UNITYENGINE_SPRITE_GETPADDING_OFFSET UNITYSDK_OFFSET(0x1D05D0F0)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0x1D05D4D0)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPEIMPL_OFFSET UNITYSDK_OFFSET(0x1D05D690)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPEPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D05D4E0)
#define UNITYENGINE_SPRITE_GETPHYSICSSHAPE_OFFSET UNITYSDK_OFFSET(0x1D05D5B0)
#define UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D040)
#define UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1D05D010)
#define UNITYENGINE_SPRITE_GETTEXTURERECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D000)
#define UNITYENGINE_SPRITE_GETTEXTURERECT_OFFSET UNITYSDK_OFFSET(0x1D05CFC0)
#define UNITYENGINE_SPRITE_GET_ASSOCIATEDALPHASPLITTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D05D310)
#define UNITYENGINE_SPRITE_GET_BORDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D2D0)
#define UNITYENGINE_SPRITE_GET_BORDER_OFFSET UNITYSDK_OFFSET(0x1D05D290)
#define UNITYENGINE_SPRITE_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D230)
#define UNITYENGINE_SPRITE_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1D05D1E0)
#define UNITYENGINE_SPRITE_GET_PACKED_OFFSET UNITYSDK_OFFSET(0x1D05D370)
#define UNITYENGINE_SPRITE_GET_PACKINGMODE_OFFSET UNITYSDK_OFFSET(0x1D05D390)
#define UNITYENGINE_SPRITE_GET_PACKINGROTATION_OFFSET UNITYSDK_OFFSET(0x1D05D3A0)
#define UNITYENGINE_SPRITE_GET_PADDINGALPHA_OFFSET UNITYSDK_OFFSET(0x1D05D360)
#define UNITYENGINE_SPRITE_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D350)
#define UNITYENGINE_SPRITE_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1D05D320)
#define UNITYENGINE_SPRITE_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x1D05D2F0)
#define UNITYENGINE_SPRITE_GET_RECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D05D280)
#define UNITYENGINE_SPRITE_GET_RECT_OFFSET UNITYSDK_OFFSET(0x1D05D240)
#define UNITYENGINE_SPRITE_GET_SPRITEATLASTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1D05D300)
#define UNITYENGINE_SPRITE_GET_TEXTURERECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1D05D420)
#define UNITYENGINE_SPRITE_GET_TEXTURERECT_OFFSET UNITYSDK_OFFSET(0x1D05D3B0)
#define UNITYENGINE_SPRITE_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1D05D2E0)
#define UNITYENGINE_SPRITE_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D05D4A0)
#define UNITYENGINE_SPRITE_GET_UVWITHOUTUPLOAD_OFFSET UNITYSDK_OFFSET(0x1D05D4C0)
#define UNITYENGINE_SPRITE_GET_UV_OFFSET UNITYSDK_OFFSET(0x1D05D4B0)
#define UNITYENGINE_SPRITE_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1D05D490)
#define UNITYENGINE_SPRITE_INTERNAL_GETPHYSICSSHAPEPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D05D5A0)
#define UNITYENGINE_SPRITE_OVERRIDEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1D05DCF0)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0x1D05DCD0)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_1_OFFSET UNITYSDK_OFFSET(0x1D05DCE0)
#define UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_OFFSET UNITYSDK_OFFSET(0x1D05D6A0)
#define UNITYENGINE_SPRITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D05CF90)

namespace UnityEngine
{
	inline static constexpr unsigned int Sprite_TypeDefinitionIndex = 4406;

	class Sprite : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetPackingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKINGMODE_OFFSET))(this);
		}

		::System::Int32 GetPackingRotation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKINGROTATION_OFFSET))(this);
		}

		::UnityEngine::Rect GetTextureRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetTextureRectOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetInnerUVs(::UnityEngine::SpriteRenderDataMode a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::SpriteRenderDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETINNERUVS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GetOuterUVs(::UnityEngine::SpriteRenderDataMode a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::SpriteRenderDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETOUTERUVS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GetPadding(::UnityEngine::SpriteRenderDataMode a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::SpriteRenderDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPADDING_OFFSET))(this, a1);
		}

		static ::UnityEngine::Sprite* CreateSpriteWithoutTextureScripting(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::UnityEngine::Texture2D* a4)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Sprite* CreateSprite(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::UInt32 a5, ::UnityEngine::SpriteMeshType a6, ::UnityEngine::Vector4 a7, ::System::Boolean a8)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 GetPacked(::UnityEngine::SpriteRenderDataMode a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::SpriteRenderDataMode))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPACKED_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BOUNDS_OFFSET))(this);
		}

		::UnityEngine::Rect get_rect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_RECT_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_border()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BORDER_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURE_OFFSET))(this);
		}

		::System::Single get_pixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIXELSPERUNIT_OFFSET))(this);
		}

		::System::Single get_spriteAtlasTextureScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_SPRITEATLASTEXTURESCALE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_associatedAlphaSplitTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_ASSOCIATEDALPHASPLITTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_pivot()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIVOT_OFFSET))(this);
		}

		::System::UInt32 get_paddingAlpha()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PADDINGALPHA_OFFSET))(this);
		}

		::System::Boolean get_packed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKED_OFFSET))(this);
		}

		::UnityEngine::SpritePackingMode get_packingMode()
		{
			return ((::UnityEngine::SpritePackingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKINGMODE_OFFSET))(this);
		}

		::UnityEngine::SpritePackingRotation get_packingRotation()
		{
			return ((::UnityEngine::SpritePackingRotation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PACKINGROTATION_OFFSET))(this);
		}

		::UnityEngine::Rect get_textureRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURERECT_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_textureRectOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TEXTURERECTOFFSET_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_VERTICES_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt16>* get_triangles()
		{
			return ((::Il2CppArray<::System::UInt16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_TRIANGLES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_UV_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uvWithoutUpload()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_UVWITHOUTUPLOAD_OFFSET))(this);
		}

		::System::Int32 GetPhysicsShapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPECOUNT_OFFSET))(this);
		}

		::System::Int32 GetPhysicsShapePointCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPEPOINTCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 Internal_GetPhysicsShapePointCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_INTERNAL_GETPHYSICSSHAPEPOINTCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetPhysicsShape(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPE_OFFSET))(this, a1, a2);
		}

		static ::System::Void GetPhysicsShapeImpl(::UnityEngine::Sprite* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Sprite*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPHYSICSSHAPEIMPL_OFFSET))(a1, a2, a3);
		}

		::System::Void OverridePhysicsShape(::System::Collections::Generic::IList_1<::Il2CppArray<::UnityEngine::Vector2>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Il2CppArray<::UnityEngine::Vector2>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_OFFSET))(this, a1);
		}

		static ::System::Void OverridePhysicsShapeCount(::UnityEngine::Sprite* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Sprite*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPECOUNT_OFFSET))(a1, a2);
		}

		static ::System::Void OverridePhysicsShape_1(::UnityEngine::Sprite* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Sprite*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEPHYSICSSHAPE_1_OFFSET))(a1, a2, a3);
		}

		::System::Void OverrideGeometry(::Il2CppArray<::UnityEngine::Vector2>* a1, ::Il2CppArray<::System::UInt16>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::UInt16>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_OVERRIDEGEOMETRY_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Sprite* Create(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::UnityEngine::Texture2D* a4)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Sprite* Create_1(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Sprite* Create_2(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::UInt32 a5, ::UnityEngine::SpriteMeshType a6, ::UnityEngine::Vector4 a7, ::System::Boolean a8)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::Sprite* Create_3(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::UInt32 a5, ::UnityEngine::SpriteMeshType a6, ::UnityEngine::Vector4 a7)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::Sprite* Create_4(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::UInt32 a5, ::UnityEngine::SpriteMeshType a6)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Sprite* Create_5(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::UInt32 a5)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_5_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Sprite* Create_6(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_6_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Sprite* Create_7(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATE_7_OFFSET))(a1, a2, a3);
		}

		::System::Void GetTextureRect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetTextureRectOffset_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETTEXTURERECTOFFSET_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetInnerUVs_Injected(::UnityEngine::SpriteRenderDataMode a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderDataMode, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETINNERUVS_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetOuterUVs_Injected(::UnityEngine::SpriteRenderDataMode a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderDataMode, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETOUTERUVS_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetPadding_Injected(::UnityEngine::SpriteRenderDataMode a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteRenderDataMode, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GETPADDING_INJECTED_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Sprite* CreateSpriteWithoutTextureScripting_Injected(::UnityEngine::Rect& a1, ::UnityEngine::Vector2& a2, ::System::Single a3, ::UnityEngine::Texture2D* a4)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Rect&, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITEWITHOUTTEXTURESCRIPTING_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Sprite* CreateSprite_Injected(::UnityEngine::Texture2D* a1, ::UnityEngine::Rect& a2, ::UnityEngine::Vector2& a3, ::System::Single a4, ::System::UInt32 a5, ::UnityEngine::SpriteMeshType a6, ::UnityEngine::Vector4& a7, ::System::Boolean a8)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect&, ::UnityEngine::Vector2&, ::System::Single, ::System::UInt32, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_CREATESPRITE_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BOUNDS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_rect_Injected(::UnityEngine::Rect& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_RECT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_border_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_BORDER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITE_GET_PIVOT_INJECTED_OFFSET))(this, a1);
		}
	};
}
