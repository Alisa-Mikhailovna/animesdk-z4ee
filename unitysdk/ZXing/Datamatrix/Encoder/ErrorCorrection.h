#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Datamatrix::Encoder { class SymbolInfo; }

#define ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_CREATEECCBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1D2DF610)
#define ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_CREATEECCBLOCK_OFFSET UNITYSDK_OFFSET(0x1D2DF5A0)
#define ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_ENCODEECC200_OFFSET UNITYSDK_OFFSET(0x1D2D6D30)
#define ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2DE9F0)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int ErrorCorrection_TypeDefinitionIndex = 6497;

	class ErrorCorrection : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_FACTORS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x1F10);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ALOG()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x1F18);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_FACTOR_SETS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x1F20);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_LOG()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x1F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION__CCTOR_OFFSET))();
		}

		static ::System::String* encodeECC200(::System::String* a1, ::ZXing::Datamatrix::Encoder::SymbolInfo* a2)
		{
			return ((::System::String*(*)(::System::String*, ::ZXing::Datamatrix::Encoder::SymbolInfo*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_ENCODEECC200_OFFSET))(a1, a2);
		}

		static ::System::String* createECCBlock(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_CREATEECCBLOCK_OFFSET))(a1, a2);
		}

		static ::System::String* createECCBlock_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_CREATEECCBLOCK_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
