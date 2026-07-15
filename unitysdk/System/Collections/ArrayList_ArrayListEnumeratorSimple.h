#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x19FA7C10)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19FA7F90)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19FA7CB0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_RESET_OFFSET UNITYSDK_OFFSET(0x19FA8050)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FA8100)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA6D40)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_ArrayListEnumeratorSimple_TypeDefinitionIndex = 1455;

	class ArrayList_ArrayListEnumeratorSimple : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_dummyObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ArrayList_ArrayListEnumeratorSimple_TypeDefinitionIndex)->GetStaticField(0x3D70);
		}
		::System::Object* currentElement; // 0x10
		::System::Collections::ArrayList* list; // 0x18
		::System::Int32 index; // 0x20
		::System::Int32 version; // 0x24
		::System::Boolean isArrayList; // 0x28

		::System::Void _ctor(::System::Collections::ArrayList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE__CCTOR_OFFSET))();
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_CLONE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ARRAYLISTENUMERATORSIMPLE_RESET_OFFSET))(this);
		}
	};
}
