#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CUSTOMRP_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AABCF50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderIDs_TypeDefinitionIndex = 36086;

	class ShaderIDs : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__2_MRT_SLOT1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x619B0);
		}
		static ::System::String** StaticGet__2_MRT_SLOT0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x619B8);
		}
		static ::System::String** StaticGet__3_MRT_SLOT1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x619C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Null_Keyword()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x619C8);
		}
		static ::System::Int32* StaticGet_ChromaAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F30);
		}
		static ::System::Int32* StaticGet_GaussOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F34);
		}
		static ::System::Int32* StaticGet_ACES_D()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F38);
		}
		static ::System::Int32* StaticGet_NoiseBlendScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F3C);
		}
		static ::System::Int32* StaticGet_PolaroidColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F40);
		}
		static ::System::Int32* StaticGet_BlitHiQualityPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F44);
		}
		static ::System::Int32* StaticGet__OutputToTempRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F48);
		}
		static ::System::Int32* StaticGet_HashIDMidSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F4C);
		}
		static ::System::Int32* StaticGet_NearCocImmediateTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F50);
		}
		static ::System::Int32* StaticGet__WindSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F54);
		}
		static ::System::Int32* StaticGet_FarTransitionRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F58);
		}
		static ::System::Int32* StaticGet_WhitePercent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F5C);
		}
		static ::System::Int32* StaticGet_ColorGradingMaskTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F60);
		}
		static ::System::Int32* StaticGet_FarFocalRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F64);
		}
		static ::System::Int32* StaticGet_BloomR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F68);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussLayerIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F6C);
		}
		static ::System::Int32* StaticGet_MinRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F70);
		}
		static ::System::Int32* StaticGet__NoiseSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F74);
		}
		static ::System::Int32* StaticGet_HashIDCustomToneCurve()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F78);
		}
		static ::System::Int32* StaticGet_PosX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F7C);
		}
		static ::System::Int32* StaticGet_LightenTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F80);
		}
		static ::System::Int32* StaticGet_HashIDColorGainGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F84);
		}
		static ::System::Int32* StaticGet_BloomThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F88);
		}
		static ::System::Int32* StaticGet_BlueCorrection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F8C);
		}
		static ::System::Int32* StaticGet_MaxRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F90);
		}
		static ::System::Int32* StaticGet_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F94);
		}
		static ::System::Int32* StaticGet_NoiseTextureTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F98);
		}
		static ::System::Int32* StaticGet_LensFlareElementAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10F9C);
		}
		static ::System::Int32* StaticGet_SpeedBlurStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FA0);
		}
		static ::System::Int32* StaticGet_LensFlareTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FA4);
		}
		static ::System::Int32* StaticGet__LineInts()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FA8);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FAC);
		}
		static ::System::Int32* StaticGet_LineBrightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FB0);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FB4);
		}
		static ::System::Int32* StaticGet_LensFlareDustTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FB8);
		}
		static ::System::Int32* StaticGet__WindDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FBC);
		}
		static ::System::Int32* StaticGet_LensFlareDepthBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FC0);
		}
		static ::System::Int32* StaticGet_StencilBlitDestAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FC4);
		}
		static ::System::Int32* StaticGet__CloudSDF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FC8);
		}
		static ::System::Int32* StaticGet_OutputTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FCC);
		}
		static ::System::Int32* StaticGet__CloudScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FD0);
		}
		static ::System::Int32* StaticGet_LensFlareColorThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FD4);
		}
		static ::System::Int32* StaticGet_worldToCameraMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FD8);
		}
		static ::System::Int32* StaticGet_HashIDLevelColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FDC);
		}
		static ::System::Int32* StaticGet_Input1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FE0);
		}
		static ::System::Int32* StaticGet_OffsetIndensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FE4);
		}
		static ::System::Int32* StaticGet__MainTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FE8);
		}
		static ::System::Int32* StaticGet__PPPattern_Color1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FEC);
		}
		static ::System::Int32* StaticGet__MK_BGDarkColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FF0);
		}
		static ::System::Int32* StaticGet__GrowingProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FF4);
		}
		static ::System::Int32* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FF8);
		}
		static ::System::Int32* StaticGet_CenterY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x10FFC);
		}
		static ::System::Int32* StaticGet__PPPatternGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11000);
		}
		static ::System::Int32* StaticGet_LensFlareRotationStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11004);
		}
		static ::System::Int32* StaticGet_DialogAvatarRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11008);
		}
		static ::System::Int32* StaticGet_BlinkAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1100C);
		}
		static ::System::Int32* StaticGet__NoiseAnimSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11010);
		}
		static ::System::Int32* StaticGet_MBVelocityScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11014);
		}
		static ::System::Int32* StaticGet_LensDistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11018);
		}
		static ::System::Int32* StaticGet_VelocityTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1101C);
		}
		static ::System::Int32* StaticGet_Toe()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11020);
		}
		static ::System::Int32* StaticGet_HashIDLut2D_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11024);
		}
		static ::System::Int32* StaticGet_BlitTransparentPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11028);
		}
		static ::System::Int32* StaticGet_LensFlareSampleCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1102C);
		}
		static ::System::Int32* StaticGet__RainDropVelocity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11030);
		}
		static ::System::Int32* StaticGet_TemporalFilterParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11034);
		}
		static ::System::Int32* StaticGet_OutlinePolygonOffsetUnits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11038);
		}
		static ::System::Int32* StaticGet_BloomAtlasUVClamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1103C);
		}
		static ::System::Int32* StaticGet_MBVelocityMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11040);
		}
		static ::System::Int32* StaticGet__AABBSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11044);
		}
		static ::System::Int32* StaticGet__DetailTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11048);
		}
		static ::System::Int32* StaticGet_VignetteUIOuterEdge()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1104C);
		}
		static ::System::Int32* StaticGet__LocalBoundingSphere()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11050);
		}
		static ::System::Int32* StaticGet__MK_BrightColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11054);
		}
		static ::System::Int32* StaticGet_Input2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11058);
		}
		static ::System::Int32* StaticGet_OutputTex0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1105C);
		}
		static ::System::Int32* StaticGet_cameraToWorldMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11060);
		}
		static ::System::Int32* StaticGet_HashIDCustomLUTTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11064);
		}
		static ::System::Int32* StaticGet_HashIDToeSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11068);
		}
		static ::System::Int32* StaticGet__SDFAdd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1106C);
		}
		static ::System::Int32* StaticGet_LensFlareCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11070);
		}
		static ::System::Int32* StaticGet__MK_DetailMapWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11074);
		}
		static ::System::Int32* StaticGet_LineTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11078);
		}
		static ::System::Int32* StaticGet_AdditionalColorGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1107C);
		}
		static ::System::Int32* StaticGet_DOFBokehParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11080);
		}
		static ::System::Int32* StaticGet_PlanarReflectionDepthRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11084);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11088);
		}
		static ::System::Int32* StaticGet_HashIDColorGainMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1108C);
		}
		static ::System::Int32* StaticGet_LensFlareRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11090);
		}
		static ::System::Int32* StaticGet_ForceDisableToneMapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11094);
		}
		static ::System::Int32* StaticGet_WhiteClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11098);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1109C);
		}
		static ::System::Int32* StaticGet_LineDensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110A0);
		}
		static ::System::Int32* StaticGet_ScreenSpaceDistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110A4);
		}
		static ::System::Int32* StaticGet_FocusDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110A8);
		}
		static ::System::Int32* StaticGet_NoiseTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110AC);
		}
		static ::System::Int32* StaticGet__ReflectionColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110B0);
		}
		static ::System::Int32* StaticGet_MainTex3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110B4);
		}
		static ::System::Int32* StaticGet_BlinkDist()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110B8);
		}
		static ::System::Int32* StaticGet_BlinkDistortStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110BC);
		}
		static ::System::Int32* StaticGet_LensFlareSampleStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110C0);
		}
		static ::System::Int32* StaticGet_VignetteUIInnerEdge()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110C4);
		}
		static ::System::Int32* StaticGet_LineDivideY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110C8);
		}
		static ::System::Int32* StaticGet__LensGlitch2GradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110CC);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110D0);
		}
		static ::System::Int32* StaticGet__SDFScale2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110D4);
		}
		static ::System::Int32* StaticGet_EnableBlinkSpeedline()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110D8);
		}
		static ::System::Int32* StaticGet_GaussianGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110DC);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110E0);
		}
		static ::System::Int32* StaticGet__RainMaskVal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110E4);
		}
		static ::System::Int32* StaticGet__MK_GradientWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110E8);
		}
		static ::System::Int32* StaticGet_BlinkChinkScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110EC);
		}
		static ::System::Int32* StaticGet_MainTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110F0);
		}
		static ::System::Int32* StaticGet_RadialParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110F4);
		}
		static ::System::Int32* StaticGet__NoiseSeed1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110F8);
		}
		static ::System::Int32* StaticGet_zBufferParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x110FC);
		}
		static ::System::Int32* StaticGet_NearFocalRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11100);
		}
		static ::System::Int32* StaticGet_CocModelParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11104);
		}
		static ::System::Int32* StaticGet__BoundingBoxForTraceMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11108);
		}
		static ::System::Int32* StaticGet_LengthRateLerp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1110C);
		}
		static ::System::Int32* StaticGet_ACES_E()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11110);
		}
		static ::System::Int32* StaticGet__LightedSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11114);
		}
		static ::System::Int32* StaticGet_Output_Sum2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11118);
		}
		static ::System::Int32* StaticGet_BlinkRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1111C);
		}
		static ::System::Int32* StaticGet_RadialRangeParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11120);
		}
		static ::System::Int32* StaticGet__DepthComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11124);
		}
		static ::System::Int32* StaticGet_PolygonOffsetFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11128);
		}
		static ::System::Int32* StaticGet__LocalAABBMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1112C);
		}
		static ::System::Int32* StaticGet_GaussianLayerIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11130);
		}
		static ::System::Int32* StaticGet_HDRHeadroom()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11134);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11138);
		}
		static ::System::Int32* StaticGet_BloomB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1113C);
		}
		static ::System::Int32* StaticGet_SpeedLineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11140);
		}
		static ::System::Int32* StaticGet_HalfResParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11144);
		}
		static ::System::Int32* StaticGet_ReferenceValueTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11148);
		}
		static ::System::Int32* StaticGet__DotST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1114C);
		}
		static ::System::Int32* StaticGet_LineOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11150);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11154);
		}
		static ::System::Int32* StaticGet__CloudSDF2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11158);
		}
		static ::System::Int32* StaticGet_PolygonOffsetUnits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1115C);
		}
		static ::System::Int32* StaticGet_ChromaFilterA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11160);
		}
		static ::System::Int32* StaticGet_SpeedlineEdgeSoft()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11164);
		}
		static ::System::Int32* StaticGet_Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11168);
		}
		static ::System::Int32* StaticGet__DotInts()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1116C);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11170);
		}
		static ::System::Int32* StaticGet__BlendSrc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11174);
		}
		static ::System::Int32* StaticGet_HashIDColorGainShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11178);
		}
		static ::System::Int32* StaticGet_CameraDir()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1117C);
		}
		static ::System::Int32* StaticGet_ChromaFilterB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11180);
		}
		static ::System::Int32* StaticGet_BlurScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11184);
		}
		static ::System::Int32* StaticGet__CloudHeightmap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11188);
		}
		static ::System::Int32* StaticGet_Output_Sum22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1118C);
		}
		static ::System::Int32* StaticGet_MaxBlurRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11190);
		}
		static ::System::Int32* StaticGet_LengthRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11194);
		}
		static ::System::Int32* StaticGet_EnableEffect0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11198);
		}
		static ::System::Int32* StaticGet__VigIntst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1119C);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111A0);
		}
		static ::System::Int32* StaticGet_LensFlareFadeMaxSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111A4);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111A8);
		}
		static ::System::Int32* StaticGet__BoundingBoxForTraceMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111AC);
		}
		static ::System::Int32* StaticGet_LensFlareScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111B0);
		}
		static ::System::Int32* StaticGet__MainTex1_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111B4);
		}
		static ::System::Int32* StaticGet_MotionBlurAlphaTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111B8);
		}
		static ::System::Int32* StaticGet_Lut2DTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111BC);
		}
		static ::System::Int32* StaticGet_OutlinePolygonOffsetFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111C0);
		}
		static ::System::Int32* StaticGet_NearCocTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111C4);
		}
		static ::System::Int32* StaticGet__MotionMaskHistoryTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111C8);
		}
		static ::System::Int32* StaticGet__FrameColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111CC);
		}
		static ::System::Int32* StaticGet__DotSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111D0);
		}
		static ::System::Int32* StaticGet_EndDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111D4);
		}
		static ::System::Int32* StaticGet__MK_BGBrightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111D8);
		}
		static ::System::Int32* StaticGet_HashIDLevelHighTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111DC);
		}
		static ::System::Int32* StaticGet__LineST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111E0);
		}
		static ::System::Int32* StaticGet__CameraDepthTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111E4);
		}
		static ::System::Int32* StaticGet_DialogAvatarRT2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111E8);
		}
		static ::System::Int32* StaticGet__VigST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111EC);
		}
		static ::System::Int32* StaticGet__MK_BleedColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111F0);
		}
		static ::System::Int32* StaticGet__SDFAdd2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111F4);
		}
		static ::System::Int32* StaticGet_LensDisTexTilingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111F8);
		}
		static ::System::Int32* StaticGet_DOFDilateRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x111FC);
		}
		static ::System::Int32* StaticGet_Shoulder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11200);
		}
		static ::System::Int32* StaticGet_MainTex4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11204);
		}
		static ::System::Int32* StaticGet_BlinkDuration()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11208);
		}
		static ::System::Int32* StaticGet__UseNoiseGlitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1120C);
		}
		static ::System::Int32* StaticGet_ExpandGamut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11210);
		}
		static ::System::Int32* StaticGet_CenterX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11214);
		}
		static ::System::Int32* StaticGet_BlinkRadii()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11218);
		}
		static ::System::Int32* StaticGet__LightedStar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1121C);
		}
		static ::System::Int32* StaticGet_GaussTaps()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11220);
		}
		static ::System::Int32* StaticGet_BlinkMaskColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11224);
		}
		static ::System::Int32* StaticGet__BlendDst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11228);
		}
		static ::System::Int32* StaticGet_MainTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1122C);
		}
		static ::System::Int32* StaticGet__MK_BrightColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11230);
		}
		static ::System::Int32* StaticGet_Alpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11234);
		}
		static ::System::Int32* StaticGet__RainDistortStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11238);
		}
		static ::System::Int32* StaticGet_BlackClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1123C);
		}
		static ::System::Int32* StaticGet__CloudColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11240);
		}
		static ::System::Int32* StaticGet_HashIDHueSatCon()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11244);
		}
		static ::System::Int32* StaticGet_OutlineScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11248);
		}
		static ::System::Int32* StaticGet_projectionParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1124C);
		}
		static ::System::Int32* StaticGet__Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11250);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11254);
		}
		static ::System::Int32* StaticGet_LensFlareDustTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11258);
		}
		static ::System::Int32* StaticGet__SkillRadialBlurParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1125C);
		}
		static ::System::Int32* StaticGet_viewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11260);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11264);
		}
		static ::System::Int32* StaticGet_DistrotionTextureTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11268);
		}
		static ::System::Int32* StaticGet_CoCBlurUnit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1126C);
		}
		static ::System::Int32* StaticGet_AdditionalColorGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11270);
		}
		static ::System::Int32* StaticGet_LensFlareSampleRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11274);
		}
		static ::System::Int32* StaticGet_GaussianGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11278);
		}
		static ::System::Int32* StaticGet_TileGridResParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1127C);
		}
		static ::System::Int32* StaticGet_HashIDToeSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11280);
		}
		static ::System::Int32* StaticGet_StencilOnly()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11284);
		}
		static ::System::Int32* StaticGet_ColorGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11288);
		}
		static ::System::Int32* StaticGet_BloomIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1128C);
		}
		static ::System::Int32* StaticGet__RainDropStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11290);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11294);
		}
		static ::System::Int32* StaticGet__LineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11298);
		}
		static ::System::Int32* StaticGet_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1129C);
		}
		static ::System::Int32* StaticGet_HashIDColorGainHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112A0);
		}
		static ::System::Int32* StaticGet_Exposure()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112A4);
		}
		static ::System::Int32* StaticGet_EnableHDRTonemapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112A8);
		}
		static ::System::Int32* StaticGet_UVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112AC);
		}
		static ::System::Int32* StaticGet_LensFlareUseTexmapRGB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112B0);
		}
		static ::System::Int32* StaticGet__NoiseSeed2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112B4);
		}
		static ::System::Int32* StaticGet_BlinkReverse()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112B8);
		}
		static ::System::Int32* StaticGet_BlinkDistortFreq()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112BC);
		}
		static ::System::Int32* StaticGet_HashIDColorCorrectionHighlightMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112C0);
		}
		static ::System::Int32* StaticGet__ShadowBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112C4);
		}
		static ::System::Int32* StaticGet_HashIDMidSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112C8);
		}
		static ::System::Int32* StaticGet__BoundingBoxMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112CC);
		}
		static ::System::Int32* StaticGet_HashIDCustomGradualNoiseUVScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112D0);
		}
		static ::System::Int32* StaticGet__WeatherTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112D4);
		}
		static ::System::Int32* StaticGet_PolaroidScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112D8);
		}
		static ::System::Int32* StaticGet__MainTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112DC);
		}
		static ::System::Int32* StaticGet__SkillRadialBlurParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112E0);
		}
		static ::System::Int32* StaticGet_screenParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112E4);
		}
		static ::System::Int32* StaticGet_VignetteParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112E8);
		}
		static ::System::Int32* StaticGet_BloomG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112EC);
		}
		static ::System::Int32* StaticGet__MK_DarkColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112F0);
		}
		static ::System::Int32* StaticGet_SpeedLineRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112F4);
		}
		static ::System::Int32* StaticGet_GaussianUVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112F8);
		}
		static ::System::Int32* StaticGet__DetailTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x112FC);
		}
		static ::System::Int32* StaticGet_DirectionalBlurParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11300);
		}
		static ::System::Int32* StaticGet_VignetteUIColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11304);
		}
		static ::System::Int32* StaticGet_viewAndProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11308);
		}
		static ::System::Int32* StaticGet_Slope()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1130C);
		}
		static ::System::Int32* StaticGet_StencilBlitSrcAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11310);
		}
		static ::System::Int32* StaticGet__UseSphereShape()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11314);
		}
		static ::System::Int32* StaticGet__MK_Coverage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11318);
		}
		static ::System::Int32* StaticGet_Speed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1131C);
		}
		static ::System::Int32* StaticGet_DistrotionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11320);
		}
		static ::System::Int32* StaticGet_StartDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11324);
		}
		static ::System::Int32* StaticGet_BlinkOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11328);
		}
		static ::System::Int32* StaticGet_Output_Sum12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1132C);
		}
		static ::System::Int32* StaticGet_LensFlareProbe()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11330);
		}
		static ::System::Int32* StaticGet__PPPattern_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11334);
		}
		static ::System::Int32* StaticGet_inverseViewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11338);
		}
		static ::System::Int32* StaticGet_HashIDLevelShadowTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1133C);
		}
		static ::System::Int32* StaticGet__LightDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11340);
		}
		static ::System::Int32* StaticGet_MainTex0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11344);
		}
		static ::System::Int32* StaticGet__CloudColor_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11348);
		}
		static ::System::Int32* StaticGet_ColorGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1134C);
		}
		static ::System::Int32* StaticGet_BlinkDownScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11350);
		}
		static ::System::Int32* StaticGet_worldSpaceCameraPos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11354);
		}
		static ::System::Int32* StaticGet__MotionMaskTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11358);
		}
		static ::System::Int32* StaticGet_projectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1135C);
		}
		static ::System::Int32* StaticGet__MaskTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11360);
		}
		static ::System::Int32* StaticGet__CullMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11364);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussTaps()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11368);
		}
		static ::System::Int32* StaticGet_GaussianGradualMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1136C);
		}
		static ::System::Int32* StaticGet_BlinkSmoothRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11370);
		}
		static ::System::Int32* StaticGet__MainTex_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11374);
		}
		static ::System::Int32* StaticGet_InputFgdOpacityTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11378);
		}
		static ::System::Int32* StaticGet_inverseCameraProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1137C);
		}
		static ::System::Int32* StaticGet_ACES_C()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11380);
		}
		static ::System::Int32* StaticGet_LensFlareAlphaScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11384);
		}
		static ::System::Int32* StaticGet__BoundingBoxMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11388);
		}
		static ::System::Int32* StaticGet_LensFlareIgnoreRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1138C);
		}
		static ::System::Int32* StaticGet__RainDropCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11390);
		}
		static ::System::Int32* StaticGet_DisScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11394);
		}
		static ::System::Int32* StaticGet__LightedWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11398);
		}
		static ::System::Int32* StaticGet_LightenIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1139C);
		}
		static ::System::Int32* StaticGet_MainTex5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113A0);
		}
		static ::System::Int32* StaticGet__Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113A4);
		}
		static ::System::Int32* StaticGet__MK_Transparency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113A8);
		}
		static ::System::Int32* StaticGet__NoiseIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113AC);
		}
		static ::System::Int32* StaticGet__RainDropTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113B0);
		}
		static ::System::Int32* StaticGet_HashIDShoSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113B4);
		}
		static ::System::Int32* StaticGet_GaussWeights()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113B8);
		}
		static ::System::Int32* StaticGet_LensFlareEdgeFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113BC);
		}
		static ::System::Int32* StaticGet_ACES_A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113C0);
		}
		static ::System::Int32* StaticGet__Capture3DAlphaTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113C4);
		}
		static ::System::Int32* StaticGet_BloomAtlasUVTrans()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113C8);
		}
		static ::System::Int32* StaticGet__MK_NoiseSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113CC);
		}
		static ::System::Int32* StaticGet__MK_NoiseTiling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113D0);
		}
		static ::System::Int32* StaticGet__CloudMaskScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113D4);
		}
		static ::System::Int32* StaticGet_Rotate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113D8);
		}
		static ::System::Int32* StaticGet_UseTwoTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113DC);
		}
		static ::System::Int32* StaticGet_LensFlareAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113E0);
		}
		static ::System::Int32* StaticGet_LineDivide()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113E4);
		}
		static ::System::Int32* StaticGet__DepthTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113E8);
		}
		static ::System::Int32* StaticGet_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113EC);
		}
		static ::System::Int32* StaticGet_VignetteParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113F0);
		}
		static ::System::Int32* StaticGet_CenterYScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113F4);
		}
		static ::System::Int32* StaticGet__SDFScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113F8);
		}
		static ::System::Int32* StaticGet__LerpValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x113FC);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11400);
		}
		static ::System::Int32* StaticGet_LensFlareGradient()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11404);
		}
		static ::System::Int32* StaticGet_Output_Sum11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11408);
		}
		static ::System::Int32* StaticGet_PosY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1140C);
		}
		static ::System::Int32* StaticGet_SpeedLineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11410);
		}
		static ::System::Int32* StaticGet_InputFgdTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11414);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11418);
		}
		static ::System::Int32* StaticGet__UseDualTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1141C);
		}
		static ::System::Int32* StaticGet_GaussianUVClamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11420);
		}
		static ::System::Int32* StaticGet_ACES_B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11424);
		}
		static ::System::Int32* StaticGet__DistortIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11428);
		}
		static ::System::Int32* StaticGet_HashIDShoSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1142C);
		}
		static ::System::Int32* StaticGet_ScanlineMultiple()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11430);
		}
		static ::System::Int32* StaticGet_ChromaFilterC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11434);
		}
		static ::System::Int32* StaticGet__LocalAABBMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11438);
		}
		static ::System::Int32* StaticGet_Output_Sum1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1143C);
		}
		static ::System::Int32* StaticGet__UsePolarCoord()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11440);
		}
		static ::System::Int32* StaticGet_SampleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11444);
		}
		static ::System::Int32* StaticGet_MaxRcpBlurRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11448);
		}
		static ::System::Int32* StaticGet__NoiseTilingFlow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1144C);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11450);
		}
		static ::System::Int32* StaticGet__MK_DarkColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11454);
		}
		static ::System::Int32* StaticGet_FullScreenMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11458);
		}
		static ::System::Int32* StaticGet__ColorBlendRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1145C);
		}
		static ::System::Int32* StaticGet_NearTransitionRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11460);
		}
		static ::System::Int32* StaticGet_BlitCopyPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11464);
		}
		static ::System::Int32* StaticGet_TAADestination()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11468);
		}
		static ::System::Int32* StaticGet_DepthBlurParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1146C);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11470);
		}
		static ::System::Int32* StaticGet_HashIDColorCorrectionShadowMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11474);
		}
		static ::System::Int32* StaticGet_PlanarReflectionColorRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11478);
		}
		static ::System::Int32* StaticGet_HashIDCustomLUTIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1147C);
		}
		static ::System::Int32* StaticGet__FarClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11480);
		}
		static ::System::Int32* StaticGet__MK_BleedColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11484);
		}
		static ::System::Int32* StaticGet_Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11488);
		}
		static ::System::Int32* StaticGet_orthoParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1148C);
		}
		static ::System::Int32* StaticGet_VelocityTileTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11490);
		}
		static ::System::Int32* StaticGet_DOFGoldenRot()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11494);
		}
		static ::System::Int32* StaticGet_cameraProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11498);
		}
		static ::System::Int32* StaticGet__MaskTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1149C);
		}
		static ::System::Int32* StaticGet_CocGeneralParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114A0);
		}
		static ::System::Int32* StaticGet_HashIDCustomGradualNoiseTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114A4);
		}
		static ::System::Int32* StaticGet_Lut2DTexParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114A8);
		}
		static ::System::Int32* StaticGet__MainTexSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114AC);
		}
		static ::System::Int32* StaticGet_InputBgdTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114B0);
		}
		static ::System::Int32* StaticGet__BaseColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x114B4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
