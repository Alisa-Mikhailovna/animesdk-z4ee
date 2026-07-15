#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_Asset.h"
#include "unitysdk/UnityEngine/TextCore/FaceInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Sprite; }
namespace TMPro { class TMP_SpriteCharacter; }
namespace TMPro { class TMP_SpriteGlyph; }
namespace UnityEngine { class Texture; }

#define TMPRO_TMP_SPRITEASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CF52710)
#define TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF52CB0)
#define TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMNAME_OFFSET UNITYSDK_OFFSET(0x1CF52DD0)
#define TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMUNICODE_OFFSET UNITYSDK_OFFSET(0x1CF52D20)
#define TMPRO_TMP_SPRITEASSET_GET_FACEINFO_OFFSET UNITYSDK_OFFSET(0x1CF51E90)
#define TMPRO_TMP_SPRITEASSET_GET_SPRITECHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1CF33400)
#define TMPRO_TMP_SPRITEASSET_GET_SPRITECHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x1CF51DD0)
#define TMPRO_TMP_SPRITEASSET_GET_SPRITEGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x1CF526F0)
#define TMPRO_TMP_SPRITEASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1CF51E70)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1CF53AB0)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CF538F0)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF53470)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1CF53340)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CF53230)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODE_OFFSET UNITYSDK_OFFSET(0x1CF52F40)
#define TMPRO_TMP_SPRITEASSET_SET_FACEINFO_OFFSET UNITYSDK_OFFSET(0x1CF51ED0)
#define TMPRO_TMP_SPRITEASSET_SET_SPRITECHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1CF526E0)
#define TMPRO_TMP_SPRITEASSET_SET_SPRITECHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x1CF526D0)
#define TMPRO_TMP_SPRITEASSET_SET_SPRITEGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x1CF52700)
#define TMPRO_TMP_SPRITEASSET_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1CF51E80)
#define TMPRO_TMP_SPRITEASSET_SORTCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0x1CF53CD0)
#define TMPRO_TMP_SPRITEASSET_SORTGLYPHANDCHARACTERTABLES_OFFSET UNITYSDK_OFFSET(0x1CF53E20)
#define TMPRO_TMP_SPRITEASSET_SORTGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0x1CF53B80)
#define TMPRO_TMP_SPRITEASSET_UPDATELOOKUPTABLES_OFFSET UNITYSDK_OFFSET(0x1CF51F10)
#define TMPRO_TMP_SPRITEASSET_UPGRADESPRITEASSET_OFFSET UNITYSDK_OFFSET(0x1CF52740)
#define TMPRO_TMP_SPRITEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF53FB0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAsset_TypeDefinitionIndex = 41832;

	class TMP_SpriteAsset : public ::TMPro::TMP_Asset
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_k_searchedSpriteAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TMP_SpriteAsset_TypeDefinitionIndex)->GetStaticField(0x53E40);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_NameLookup; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* m_GlyphIndexLookup; // 0x38
		::System::String* m_Version; // 0x40
		::UnityEngine::TextCore::FaceInfo m_FaceInfo; // 0x48
		::UnityEngine::Texture* spriteSheet; // 0xA8
		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterTable; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>* m_SpriteCharacterLookup; // 0xB8
		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* m_SpriteGlyphTable; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteGlyph*>* m_SpriteGlyphLookup; // 0xC8
		::System::Collections::Generic::List_1<::TMPro::TMP_Sprite*>* spriteInfoList; // 0xD0
		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* fallbackSpriteAssets; // 0xD8
		::System::Boolean m_IsSpriteAssetLookupTablesDirty; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET__CTOR_OFFSET))(this);
		}

		::System::String* get_version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_version(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_VERSION_OFFSET))(this, a1);
		}

		::UnityEngine::TextCore::FaceInfo get_faceInfo()
		{
			return ((::UnityEngine::TextCore::FaceInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_FACEINFO_OFFSET))(this);
		}

		::System::Void set_faceInfo(::UnityEngine::TextCore::FaceInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextCore::FaceInfo))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_FACEINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* get_spriteCharacterTable()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_SPRITECHARACTERTABLE_OFFSET))(this);
		}

		::System::Void set_spriteCharacterTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteCharacter*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_SPRITECHARACTERTABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>* get_spriteCharacterLookupTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_SPRITECHARACTERLOOKUPTABLE_OFFSET))(this);
		}

		::System::Void set_spriteCharacterLookupTable(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::TMPro::TMP_SpriteCharacter*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_SPRITECHARACTERLOOKUPTABLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* get_spriteGlyphTable()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_SPRITEGLYPHTABLE_OFFSET))(this);
		}

		::System::Void set_spriteGlyphTable(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_SpriteGlyph*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_SPRITEGLYPHTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateLookupTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_UPDATELOOKUPTABLES_OFFSET))(this);
		}

		::System::Int32 GetSpriteIndexFromHashcode(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMHASHCODE_OFFSET))(this, a1);
		}

		::System::Int32 GetSpriteIndexFromUnicode(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMUNICODE_OFFSET))(this, a1);
		}

		::System::Int32 GetSpriteIndexFromName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMNAME_OFFSET))(this, a1);
		}

		static ::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicode(::TMPro::TMP_SpriteAsset* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal_1(::TMPro::TMP_SpriteAsset* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::UInt32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCode(::TMPro::TMP_SpriteAsset* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::System::Collections::Generic::List_1<::TMPro::TMP_SpriteAsset*>*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal_1(::TMPro::TMP_SpriteAsset* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32& a4)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void SortGlyphTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SORTGLYPHTABLE_OFFSET))(this);
		}

		::System::Void SortCharacterTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SORTCHARACTERTABLE_OFFSET))(this);
		}

		::System::Void SortGlyphAndCharacterTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SORTGLYPHANDCHARACTERTABLES_OFFSET))(this);
		}

		::System::Void UpgradeSpriteAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_UPGRADESPRITEASSET_OFFSET))(this);
		}
	};
}
