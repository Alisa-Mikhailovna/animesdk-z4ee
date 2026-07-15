#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/ExceptionArgument.h"
#include "unitysdk/Collections/Pooled/ExceptionResource.h"
#include "unitysdk/System/Object.h"

namespace System { class ArgumentException; }
namespace System { class ArgumentNullException; }
namespace System { class ArgumentOutOfRangeException; }
namespace System { class Exception; }
namespace System { class InvalidOperationException; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { class KeyNotFoundException; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COLLECTIONS_POOLED_THROWHELPER_GETADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30AE00)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A30AFD0)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30AF10)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTNAME_OFFSET UNITYSDK_OFFSET(0x1A30B120)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30B060)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A30BA40)
#define COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30AC30)
#define COLLECTIONS_POOLED_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_ENUMCURRENT_OFFSET UNITYSDK_OFFSET(0x1A30C130)
#define COLLECTIONS_POOLED_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BB90)
#define COLLECTIONS_POOLED_THROWHELPER_GETKEYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30C5A0)
#define COLLECTIONS_POOLED_THROWHELPER_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1A30B600)
#define COLLECTIONS_POOLED_THROWHELPER_GETWRONGKEYTYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30C3C0)
#define COLLECTIONS_POOLED_THROWHELPER_GETWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30C4B0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWAGGREGATEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BF60)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A30AF90)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1A30C000)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_DESTINATIONTOOSHORT_OFFSET UNITYSDK_OFFSET(0x1A30AB50)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30AED0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OVERLAPALIGNMENTMISMATCH_OFFSET UNITYSDK_OFFSET(0x1A30ABA0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A30B5A0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1A30B8E0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30B560)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A30B950)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET UNITYSDK_OFFSET(0x1A30B9B0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_3_OFFSET UNITYSDK_OFFSET(0x1A30B9F0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30AB00)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30ABF0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30AA60)
#define COLLECTIONS_POOLED_THROWHELPER_THROWCOUNTARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_COUNT_OFFSET UNITYSDK_OFFSET(0x1A30ADC0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWFORMATEXCEPTION_BADFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1A30C370)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINDEXARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30ACC0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30AAB0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A30BC10)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_CONCURRENTOPERATIONSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A30C2D0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_ENUMCURRENT_OFFSET UNITYSDK_OFFSET(0x1A30C0F0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_HANDLEISNOTINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1A30C320)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMENDED_OFFSET UNITYSDK_OFFSET(0x1A30C0A0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET UNITYSDK_OFFSET(0x1A30C1E0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMNOTSTARTED_OFFSET UNITYSDK_OFFSET(0x1A30C050)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMOPCANTHAPPEN_OFFSET UNITYSDK_OFFSET(0x1A30C230)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_NOVALUE_OFFSET UNITYSDK_OFFSET(0x1A30C280)
#define COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BB50)
#define COLLECTIONS_POOLED_THROWHELPER_THROWLENGTHARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_NEEDNONNEGNUM_OFFSET UNITYSDK_OFFSET(0x1A30AD40)
#define COLLECTIONS_POOLED_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A30BF10)
#define COLLECTIONS_POOLED_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BD90)
#define COLLECTIONS_POOLED_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A30BEB0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BE50)
#define COLLECTIONS_POOLED_THROWHELPER_THROWOUTOFMEMORYEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BFB0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWRANKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BD30)
#define COLLECTIONS_POOLED_THROWHELPER_THROWSECURITYEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BCD0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWSERIALIZATIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BC70)
#define COLLECTIONS_POOLED_THROWHELPER_THROWSTARTINDEXARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_INDEX_OFFSET UNITYSDK_OFFSET(0x1A30AD80)
#define COLLECTIONS_POOLED_THROWHELPER_THROWUNAUTHORIZEDACCESSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30BDF0)
#define COLLECTIONS_POOLED_THROWHELPER_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A30AD00)

namespace Collections::Pooled
{
	inline static constexpr unsigned int ThrowHelper_TypeDefinitionIndex = 5114;

	class ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowArrayTypeMismatchException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARRAYTYPEMISMATCHEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowIndexOutOfRangeException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINDEXOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentOutOfRangeException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException_DestinationTooShort()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_DESTINATIONTOOSHORT_OFFSET))();
		}

		static ::System::Void ThrowArgumentException_OverlapAlignmentMismatch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OVERLAPALIGNMENTMISMATCH_OFFSET))();
		}

		static ::System::Void ThrowArgumentOutOfRange_IndexException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINDEXARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowValueArgumentOutOfRange_NeedNonNegNumException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWVALUEARGUMENTOUTOFRANGE_NEEDNONNEGNUMEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowLengthArgumentOutOfRange_ArgumentOutOfRange_NeedNonNegNum()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWLENGTHARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_NEEDNONNEGNUM_OFFSET))();
		}

		static ::System::Void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWSTARTINDEXARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_INDEX_OFFSET))();
		}

		static ::System::Void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWCOUNTARGUMENTOUTOFRANGE_ARGUMENTOUTOFRANGE_COUNT_OFFSET))();
		}

		static ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object* a1)
		{
			return ((::System::ArgumentException*(*)(::System::Object*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETADDINGDUPLICATEWITHKEYARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentException_1(::Collections::Pooled::ExceptionResource a1, ::Collections::Pooled::ExceptionArgument a2)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource, ::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_1_OFFSET))(a1, a2);
		}

		static ::System::ArgumentNullException* GetArgumentNullException(::Collections::Pooled::ExceptionArgument a1)
		{
			return ((::System::ArgumentNullException*(*)(::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentNullException(::Collections::Pooled::ExceptionArgument a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentNullException_1(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_1_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentNullException_2(::Collections::Pooled::ExceptionArgument a1, ::Collections::Pooled::ExceptionResource a2)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_2_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_1(::Collections::Pooled::ExceptionArgument a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_2(::Collections::Pooled::ExceptionArgument a1, ::Collections::Pooled::ExceptionResource a2)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_2_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowArgumentOutOfRangeException_3(::Collections::Pooled::ExceptionArgument a1, ::System::Int32 a2, ::Collections::Pooled::ExceptionResource a3)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionArgument, ::System::Int32, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ThrowInvalidOperationException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowInvalidOperationException_1(::Collections::Pooled::ExceptionResource a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource, ::System::Exception*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_1_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowSerializationException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWSERIALIZATIONEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowSecurityException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWSECURITYEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowRankException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWRANKEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowNotSupportedException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowUnauthorizedAccessException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWUNAUTHORIZEDACCESSEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowObjectDisposedException(::System::String* a1, ::Collections::Pooled::ExceptionResource a2)
		{
			return ((::System::Void(*)(::System::String*, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowObjectDisposedException_1(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWOBJECTDISPOSEDEXCEPTION_1_OFFSET))(a1);
		}

		static ::System::Void ThrowNotSupportedException_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWNOTSUPPORTEDEXCEPTION_1_OFFSET))();
		}

		static ::System::Void ThrowAggregateException(::System::Collections::Generic::List_1<::System::Exception*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWAGGREGATEEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowOutOfMemoryException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWOUTOFMEMORYEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException_Argument_InvalidArrayType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMNOTSTARTED_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumEnded()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMENDED_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_EnumCurrent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_ENUMCURRENT_OFFSET))(a1);
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMOPCANTHAPPEN_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_NoValue()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_NOVALUE_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_CONCURRENTOPERATIONSNOTSUPPORTED_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_HandleIsNotInitialized()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_HANDLEISNOTINITIALIZED_OFFSET))();
		}

		static ::System::Void ThrowFormatException_BadFormatSpecifier()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_THROWFORMATEXCEPTION_BADFORMATSPECIFIER_OFFSET))();
		}

		static ::System::ArgumentException* GetArgumentException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::ArgumentException*(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::InvalidOperationException* GetInvalidOperationException(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::InvalidOperationException*(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_OFFSET))(a1);
		}

		static ::System::ArgumentException* GetWrongKeyTypeArgumentException(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::ArgumentException*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETWRONGKEYTYPEARGUMENTEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::ArgumentException* GetWrongValueTypeArgumentException(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::ArgumentException*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object* a1)
		{
			return ((::System::Collections::Generic::KeyNotFoundException*(*)(::System::Object*))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETKEYNOTFOUNDEXCEPTION_OFFSET))(a1);
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::Collections::Pooled::ExceptionArgument a1, ::Collections::Pooled::ExceptionResource a2)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::Collections::Pooled::ExceptionArgument, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::ArgumentException* GetArgumentException_1(::Collections::Pooled::ExceptionResource a1, ::Collections::Pooled::ExceptionArgument a2)
		{
			return ((::System::ArgumentException*(*)(::Collections::Pooled::ExceptionResource, ::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_1_OFFSET))(a1, a2);
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException_1(::Collections::Pooled::ExceptionArgument a1, ::System::Int32 a2, ::Collections::Pooled::ExceptionResource a3)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::Collections::Pooled::ExceptionArgument, ::System::Int32, ::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_1_OFFSET))(a1, a2, a3);
		}

		static ::System::InvalidOperationException* GetInvalidOperationException_EnumCurrent(::System::Int32 a1)
		{
			return ((::System::InvalidOperationException*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETINVALIDOPERATIONEXCEPTION_ENUMCURRENT_OFFSET))(a1);
		}

		static ::System::String* GetArgumentName(::Collections::Pooled::ExceptionArgument a1)
		{
			return ((::System::String*(*)(::Collections::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETARGUMENTNAME_OFFSET))(a1);
		}

		static ::System::String* GetResourceString(::Collections::Pooled::ExceptionResource a1)
		{
			return ((::System::String*(*)(::Collections::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_THROWHELPER_GETRESOURCESTRING_OFFSET))(a1);
		}
	};
}
