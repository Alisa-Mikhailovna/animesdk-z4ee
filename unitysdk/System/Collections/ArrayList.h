#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Type; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_ADAPTER_OFFSET UNITYSDK_OFFSET(0x19FA6480)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x19FA67C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x19FA65A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x19FA6850)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x19FA6880)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19FA68E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x19FA6AC0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_2_OFFSET UNITYSDK_OFFSET(0x19FA6BB0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x19FA6A30)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x19FA66F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19FA6CA0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19FA62B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19FA62C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19FA62D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19FA62E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19FA6330)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19FA62F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19FA6DD0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x19FA7000)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x19FA6DF0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_1_OFFSET UNITYSDK_OFFSET(0x19FA7480)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_OFFSET UNITYSDK_OFFSET(0x19FA7410)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19FA76B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x19FA7770)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19FA75A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x19FA6200)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19FA63A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SORT_1_OFFSET UNITYSDK_OFFSET(0x19FA79E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET UNITYSDK_OFFSET(0x19FA78E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_1_OFFSET UNITYSDK_OFFSET(0x19FA7B30)
#define SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x19FA7AF0)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FA7BD0)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FA5F00)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19FA5FD0)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA5EC0)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_TypeDefinitionIndex = 1451;

	class ArrayList : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_emptyArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ArrayList_TypeDefinitionIndex)->GetStaticField(0x3C90);
		}
		::Il2CppArray<::System::Object*>* _items; // 0x10
		::System::Object* _syncRoot; // 0x18
		::System::Int32 _size; // 0x20
		::System::Int32 _version; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Collections::ICollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CCTOR_OFFSET))();
		}

		::System::Void set_Capacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SET_CAPACITY_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::ArrayList* Adapter(::System::Collections::IList* a1)
		{
			return ((::System::Collections::ArrayList*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADAPTER_OFFSET))(a1);
		}

		::System::Int32 Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADD_OFFSET))(this, a1);
		}

		::System::Void AddRange(::System::Collections::ICollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADDRANGE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET))(this, a1);
		}

		::System::Void CopyTo_1(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_1_OFFSET))(this, a1, a2);
		}

		::System::Void CopyTo_2(::System::Int32 a1, ::System::Array* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EnsureCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ENSURECAPACITY_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void InsertRange(::System::Int32 a1, ::System::Collections::ICollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INSERTRANGE_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::IList* ReadOnly(::System::Collections::IList* a1)
		{
			return ((::System::Collections::IList*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_OFFSET))(a1);
		}

		static ::System::Collections::ArrayList* ReadOnly_1(::System::Collections::ArrayList* a1)
		{
			return ((::System::Collections::ArrayList*(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_1_OFFSET))(a1);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void RemoveRange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVERANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Sort(::System::Collections::IComparer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET))(this, a1);
		}

		::System::Void Sort_1(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::IComparer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SORT_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET))(this);
		}

		::System::Array* ToArray_1(::System::Type* a1)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_1_OFFSET))(this, a1);
		}
	};
}
