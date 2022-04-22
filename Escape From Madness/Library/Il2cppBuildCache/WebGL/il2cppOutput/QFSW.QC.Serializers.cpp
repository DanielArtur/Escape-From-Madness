#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>
struct BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3;
// QFSW.QC.BasicQcSerializer`1<System.Object>
struct BasicQcSerializer_1_tFD5BCD50F13974085624472F225BA2B804302936;
// QFSW.QC.BasicQcSerializer`1<System.String>
struct BasicQcSerializer_1_tAB7ADAEBEFBD0962C2B82270701533000E509549;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2>
struct BasicQcSerializer_1_tC00DA591A3DA38C7C1646B8753695A75DB4F5B6C;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2Int>
struct BasicQcSerializer_1_t7133F4E40E5379AA7C7F6654EC345D13B26E538A;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3>
struct BasicQcSerializer_1_tCB77C9B7E71E2214E628DD6AB9C31045BF406F9E;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3Int>
struct BasicQcSerializer_1_t1C7198EA013ED61F27A14546C10B8E2FB04214A3;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector4>
struct BasicQcSerializer_1_t8DAF4E0142EA0E50A45634EFF778CD2FE001E95A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>
struct Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E;
// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String>
struct Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71;
// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IDictionary>
struct IEnumerableSerializer_1_tDD423F9C4EA26E413DAD6E073A17B20151B591E9;
// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IEnumerable>
struct IEnumerableSerializer_1_tFC2115B7A645BE77165A0EEB074415A8684DF7FA;
// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Object>
struct IEnumerableSerializer_1_t8518C3D1404A08D276F9759B2EEB3F73D40012BA;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Reflection.PropertyInfo>
struct KeyCollection_t0A94BC42F472BEE2CE48F4B634912376D0A02A56;
// System.Collections.Generic.List`1<QFSW.QC.CollectionFormatter>
struct List_1_t261BFD240858FE2575671837FC1901D96C95CB70;
// System.Collections.Generic.List`1<QFSW.QC.TypeColorFormatter>
struct List_1_t6199F3A9C60F03935155B05D6D6D48D38528BD72;
// QFSW.QC.PolymorphicQcSerializer`1<System.Collections.IEnumerable>
struct PolymorphicQcSerializer_1_t9C435A1D2F138D4B8CBFEC223F1CD0786229C92F;
// QFSW.QC.PolymorphicQcSerializer`1<System.Object>
struct PolymorphicQcSerializer_1_tB032028F0E81D673CCF0ED503296B178FCA7C5A8;
// QFSW.QC.PolymorphicQcSerializer`1<UnityEngine.Object>
struct PolymorphicQcSerializer_1_t3373E8A3871A337CFD87F03910E4B354DFBFEAE1;
// QFSW.QC.PolymorphicQcSerializer`1<System.Type>
struct PolymorphicQcSerializer_1_t66E3A93ED80ED07D01F3EE02C94BC5B244C0F289;
// QFSW.QC.Pool`1<System.Text.StringBuilder>
struct Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Reflection.PropertyInfo>
struct ValueCollection_tD24D1517A0DB151AB0677F8ED0E05FE1B0E42B90;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Reflection.PropertyInfo>[]
struct EntryU5BU5D_tE3668892B77FA54C49102366F30C49230F84C80F;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// QFSW.QC.Serializers.DictionaryEntrySerializer
struct DictionaryEntrySerializer_t5170FCB773C32507913476AE4252D6FDED83DF22;
// QFSW.QC.GenericQcSerializer
struct GenericQcSerializer_t1F9D6524F87E90A7F58DC2DAB1C149EF93A6832B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t8A89A8564EADF5FFB8494092DFED7D7C063F1501;
// QFSW.QC.Serializers.IDictionarySerializer
struct IDictionarySerializer_tCDEBA51D33E2FAC505337D2C9CBF8FF30E1DD5C5;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// QFSW.QC.Serializers.IEnumerableSerializer
struct IEnumerableSerializer_tD73CC8410D1E059D631790215510A622CBA10C83;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// QFSW.QC.Serializers.KeyValuePairSerializer
struct KeyValuePairSerializer_tA26F391A5443783EF770DC4599EE9825AA3898F5;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// QFSW.QC.QuantumTheme
struct QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// QFSW.QC.Serializers.StringSerializer
struct StringSerializer_tB7C70FA39C254875C15072240440AA87C02D3058;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// System.Type
struct Type_t;
// QFSW.QC.Serializers.TypeSerialiazer
struct TypeSerialiazer_t2CB55019BE515F2BFF860276764E175D72A6220C;
// QFSW.QC.Serializers.UnityObjectSerializer
struct UnityObjectSerializer_tDFD9299BD88AFDB9CD4D037F5D973F21C108B3AC;
// QFSW.QC.Serializers.Vector2IntSerializer
struct Vector2IntSerializer_t193C624FA1371B14008E7BF8BAB457FFC470C3E2;
// QFSW.QC.Serializers.Vector2Serializer
struct Vector2Serializer_tAE469522B5026A44C9DB3A20D4275FDEAC8B2409;
// QFSW.QC.Serializers.Vector3IntSerializer
struct Vector3IntSerializer_tB049F1D769D8BD6FEB06D775C5E4A23A4C2B7EA9;
// QFSW.QC.Serializers.Vector3Serializer
struct Vector3Serializer_t6059DD1BD7A871DF5792306E1A8F31AEA1C572D2;
// QFSW.QC.Serializers.Vector4Serializer
struct Vector4Serializer_tC6A91836248BC20BD00DB306A5FC26E6398906D5;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0
struct U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F;

IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m378372EF588D09E2A83F161E9D0EA46B35C0876A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m45241F761F042DC550C057B3FA1943661F7BBEE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m5CF694AD1DB5490A56E65525DC1FB6FC03DDE6B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m7113165550DAB186923C59AB92D31D24C65DBABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m8D57FEA91DF3848A52FA56C38454D2306CDF7170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m9F3DEA60647F8AA09F22E2D582798EB744FAAD2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_mF970362D800E54EC35CFF270A42106C38EDD7A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4FBBD7DFFF56404A3DCEF4F1C9D457A4760A35D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7A3DED1C797F7E2A8A47E1DDC6115ECBF174220C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m2EA4FBF270CC9AF71BCFB801BF36C186662A4A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m22D13143638B74BAA46AF6F295963E6797D456C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEnumerableSerializer_1__ctor_mC4D10545FC81216D2F3C6A92FF8A1FC954FB028C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEnumerableSerializer_1__ctor_mFA0387C937EFE45BCA473D9CA847002292D3B687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PolymorphicQcSerializer_1__ctor_mA9DD628720AF6E7813B67F7BD05FC81F44B2FC70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PolymorphicQcSerializer_1__ctor_mC5BF1CD195B3425D33A06AA145CC34E793B18CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PolymorphicQcSerializer_1_get_Priority_mF31B4F312FADED94E9163B8A28FC98E87DCE390A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerator_Reset_mCF8DAFDE6F7CF58A9B4B497E40650EE407A372C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_t4451D0958080362C54F19A3F39A254682CE0D1D5_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t53D6C13506511705D39418B92D1AED5EB805ABD7 
{
public:

public:
};


// System.Object


// QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>
struct BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.BasicQcSerializer`1<System.String>
struct BasicQcSerializer_1_tAB7ADAEBEFBD0962C2B82270701533000E509549  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(BasicQcSerializer_1_tAB7ADAEBEFBD0962C2B82270701533000E509549, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2>
struct BasicQcSerializer_1_tC00DA591A3DA38C7C1646B8753695A75DB4F5B6C  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(BasicQcSerializer_1_tC00DA591A3DA38C7C1646B8753695A75DB4F5B6C, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2Int>
struct BasicQcSerializer_1_t7133F4E40E5379AA7C7F6654EC345D13B26E538A  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(BasicQcSerializer_1_t7133F4E40E5379AA7C7F6654EC345D13B26E538A, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3>
struct BasicQcSerializer_1_tCB77C9B7E71E2214E628DD6AB9C31045BF406F9E  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(BasicQcSerializer_1_tCB77C9B7E71E2214E628DD6AB9C31045BF406F9E, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3Int>
struct BasicQcSerializer_1_t1C7198EA013ED61F27A14546C10B8E2FB04214A3  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(BasicQcSerializer_1_t1C7198EA013ED61F27A14546C10B8E2FB04214A3, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector4>
struct BasicQcSerializer_1_t8DAF4E0142EA0E50A45634EFF778CD2FE001E95A  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(BasicQcSerializer_1_t8DAF4E0142EA0E50A45634EFF778CD2FE001E95A, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>
struct Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE3668892B77FA54C49102366F30C49230F84C80F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0A94BC42F472BEE2CE48F4B634912376D0A02A56 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD24D1517A0DB151AB0677F8ED0E05FE1B0E42B90 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___entries_1)); }
	inline EntryU5BU5D_tE3668892B77FA54C49102366F30C49230F84C80F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE3668892B77FA54C49102366F30C49230F84C80F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE3668892B77FA54C49102366F30C49230F84C80F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___keys_7)); }
	inline KeyCollection_t0A94BC42F472BEE2CE48F4B634912376D0A02A56 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0A94BC42F472BEE2CE48F4B634912376D0A02A56 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0A94BC42F472BEE2CE48F4B634912376D0A02A56 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ___values_8)); }
	inline ValueCollection_tD24D1517A0DB151AB0677F8ED0E05FE1B0E42B90 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD24D1517A0DB151AB0677F8ED0E05FE1B0E42B90 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD24D1517A0DB151AB0677F8ED0E05FE1B0E42B90 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// QFSW.QC.PolymorphicQcSerializer`1<System.Collections.IDictionary>
struct PolymorphicQcSerializer_1_tB768C0B504F0AC83FD576B29426950D8E5F20073  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(PolymorphicQcSerializer_1_tB768C0B504F0AC83FD576B29426950D8E5F20073, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.PolymorphicQcSerializer`1<System.Collections.IEnumerable>
struct PolymorphicQcSerializer_1_t9C435A1D2F138D4B8CBFEC223F1CD0786229C92F  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(PolymorphicQcSerializer_1_t9C435A1D2F138D4B8CBFEC223F1CD0786229C92F, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.PolymorphicQcSerializer`1<UnityEngine.Object>
struct PolymorphicQcSerializer_1_t3373E8A3871A337CFD87F03910E4B354DFBFEAE1  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(PolymorphicQcSerializer_1_t3373E8A3871A337CFD87F03910E4B354DFBFEAE1, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// QFSW.QC.PolymorphicQcSerializer`1<System.Type>
struct PolymorphicQcSerializer_1_t66E3A93ED80ED07D01F3EE02C94BC5B244C0F289  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(PolymorphicQcSerializer_1_t66E3A93ED80ED07D01F3EE02C94BC5B244C0F289, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// QFSW.QC.GenericQcSerializer
struct GenericQcSerializer_t1F9D6524F87E90A7F58DC2DAB1C149EF93A6832B  : public RuntimeObject
{
public:
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.GenericQcSerializer::_recursiveSerializer
	Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * ____recursiveSerializer_0;

public:
	inline static int32_t get_offset_of__recursiveSerializer_0() { return static_cast<int32_t>(offsetof(GenericQcSerializer_t1F9D6524F87E90A7F58DC2DAB1C149EF93A6832B, ____recursiveSerializer_0)); }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * get__recursiveSerializer_0() const { return ____recursiveSerializer_0; }
	inline Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 ** get_address_of__recursiveSerializer_0() { return &____recursiveSerializer_0; }
	inline void set__recursiveSerializer_0(Func_3_tEDC89B172856F1335D1EC625A13F7CF1E7A55D71 * value)
	{
		____recursiveSerializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recursiveSerializer_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0
struct U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F  : public RuntimeObject
{
public:
	// System.Int32 QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IDictionary QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::value
	RuntimeObject* ___value_3;
	// System.Collections.IDictionary QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>3__value
	RuntimeObject* ___U3CU3E3__value_4;
	// System.Collections.IDictionaryEnumerator QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F, ___value_3)); }
	inline RuntimeObject* get_value_3() const { return ___value_3; }
	inline RuntimeObject** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__value_4() { return static_cast<int32_t>(offsetof(U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F, ___U3CU3E3__value_4)); }
	inline RuntimeObject* get_U3CU3E3__value_4() const { return ___U3CU3E3__value_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__value_4() { return &___U3CU3E3__value_4; }
	inline void set_U3CU3E3__value_4(RuntimeObject* value)
	{
		___U3CU3E3__value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__value_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F, ___U3CU3E7__wrap1_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}
};


// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IDictionary>
struct IEnumerableSerializer_1_tDD423F9C4EA26E413DAD6E073A17B20151B591E9  : public PolymorphicQcSerializer_1_tB768C0B504F0AC83FD576B29426950D8E5F20073
{
public:
	// QFSW.QC.Pool`1<System.Text.StringBuilder> QFSW.QC.Serializers.IEnumerableSerializer`1::_builderPool
	Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5 * ____builderPool_1;

public:
	inline static int32_t get_offset_of__builderPool_1() { return static_cast<int32_t>(offsetof(IEnumerableSerializer_1_tDD423F9C4EA26E413DAD6E073A17B20151B591E9, ____builderPool_1)); }
	inline Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5 * get__builderPool_1() const { return ____builderPool_1; }
	inline Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5 ** get_address_of__builderPool_1() { return &____builderPool_1; }
	inline void set__builderPool_1(Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5 * value)
	{
		____builderPool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____builderPool_1), (void*)value);
	}
};


// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IEnumerable>
struct IEnumerableSerializer_1_tFC2115B7A645BE77165A0EEB074415A8684DF7FA  : public PolymorphicQcSerializer_1_t9C435A1D2F138D4B8CBFEC223F1CD0786229C92F
{
public:
	// QFSW.QC.Pool`1<System.Text.StringBuilder> QFSW.QC.Serializers.IEnumerableSerializer`1::_builderPool
	Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5 * ____builderPool_1;

public:
	inline static int32_t get_offset_of__builderPool_1() { return static_cast<int32_t>(offsetof(IEnumerableSerializer_1_tFC2115B7A645BE77165A0EEB074415A8684DF7FA, ____builderPool_1)); }
	inline Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5 * get__builderPool_1() const { return ____builderPool_1; }
	inline Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5 ** get_address_of__builderPool_1() { return &____builderPool_1; }
	inline void set__builderPool_1(Pool_1_tEC65216CF12556A1D70402DC6961B39CD540EDE5 * value)
	{
		____builderPool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____builderPool_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// QFSW.QC.Serializers.DictionaryEntrySerializer
struct DictionaryEntrySerializer_t5170FCB773C32507913476AE4252D6FDED83DF22  : public BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// QFSW.QC.Serializers.KeyValuePairSerializer
struct KeyValuePairSerializer_tA26F391A5443783EF770DC4599EE9825AA3898F5  : public GenericQcSerializer_t1F9D6524F87E90A7F58DC2DAB1C149EF93A6832B
{
public:
	// System.Type QFSW.QC.Serializers.KeyValuePairSerializer::<GenericType>k__BackingField
	Type_t * ___U3CGenericTypeU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo> QFSW.QC.Serializers.KeyValuePairSerializer::_keyPropertyLookup
	Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * ____keyPropertyLookup_2;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo> QFSW.QC.Serializers.KeyValuePairSerializer::_valuePropertyLookup
	Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * ____valuePropertyLookup_3;

public:
	inline static int32_t get_offset_of_U3CGenericTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(KeyValuePairSerializer_tA26F391A5443783EF770DC4599EE9825AA3898F5, ___U3CGenericTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CGenericTypeU3Ek__BackingField_1() const { return ___U3CGenericTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CGenericTypeU3Ek__BackingField_1() { return &___U3CGenericTypeU3Ek__BackingField_1; }
	inline void set_U3CGenericTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CGenericTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGenericTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyPropertyLookup_2() { return static_cast<int32_t>(offsetof(KeyValuePairSerializer_tA26F391A5443783EF770DC4599EE9825AA3898F5, ____keyPropertyLookup_2)); }
	inline Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * get__keyPropertyLookup_2() const { return ____keyPropertyLookup_2; }
	inline Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E ** get_address_of__keyPropertyLookup_2() { return &____keyPropertyLookup_2; }
	inline void set__keyPropertyLookup_2(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * value)
	{
		____keyPropertyLookup_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyPropertyLookup_2), (void*)value);
	}

	inline static int32_t get_offset_of__valuePropertyLookup_3() { return static_cast<int32_t>(offsetof(KeyValuePairSerializer_tA26F391A5443783EF770DC4599EE9825AA3898F5, ____valuePropertyLookup_3)); }
	inline Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * get__valuePropertyLookup_3() const { return ____valuePropertyLookup_3; }
	inline Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E ** get_address_of__valuePropertyLookup_3() { return &____valuePropertyLookup_3; }
	inline void set__valuePropertyLookup_3(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * value)
	{
		____valuePropertyLookup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____valuePropertyLookup_3), (void*)value);
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// QFSW.QC.Serializers.StringSerializer
struct StringSerializer_tB7C70FA39C254875C15072240440AA87C02D3058  : public BasicQcSerializer_1_tAB7ADAEBEFBD0962C2B82270701533000E509549
{
public:

public:
};


// QFSW.QC.Serializers.TypeSerialiazer
struct TypeSerialiazer_t2CB55019BE515F2BFF860276764E175D72A6220C  : public PolymorphicQcSerializer_1_t66E3A93ED80ED07D01F3EE02C94BC5B244C0F289
{
public:

public:
};


// QFSW.QC.Serializers.UnityObjectSerializer
struct UnityObjectSerializer_tDFD9299BD88AFDB9CD4D037F5D973F21C108B3AC  : public PolymorphicQcSerializer_1_t3373E8A3871A337CFD87F03910E4B354DFBFEAE1
{
public:

public:
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// QFSW.QC.Serializers.Vector2IntSerializer
struct Vector2IntSerializer_t193C624FA1371B14008E7BF8BAB457FFC470C3E2  : public BasicQcSerializer_1_t7133F4E40E5379AA7C7F6654EC345D13B26E538A
{
public:

public:
};


// QFSW.QC.Serializers.Vector2Serializer
struct Vector2Serializer_tAE469522B5026A44C9DB3A20D4275FDEAC8B2409  : public BasicQcSerializer_1_tC00DA591A3DA38C7C1646B8753695A75DB4F5B6C
{
public:

public:
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
	}
};


// QFSW.QC.Serializers.Vector3IntSerializer
struct Vector3IntSerializer_tB049F1D769D8BD6FEB06D775C5E4A23A4C2B7EA9  : public BasicQcSerializer_1_t1C7198EA013ED61F27A14546C10B8E2FB04214A3
{
public:

public:
};


// QFSW.QC.Serializers.Vector3Serializer
struct Vector3Serializer_t6059DD1BD7A871DF5792306E1A8F31AEA1C572D2  : public BasicQcSerializer_1_tCB77C9B7E71E2214E628DD6AB9C31045BF406F9E
{
public:

public:
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// QFSW.QC.Serializers.Vector4Serializer
struct Vector4Serializer_tC6A91836248BC20BD00DB306A5FC26E6398906D5  : public BasicQcSerializer_1_t8DAF4E0142EA0E50A45634EFF778CD2FE001E95A
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// QFSW.QC.Serializers.IDictionarySerializer
struct IDictionarySerializer_tCDEBA51D33E2FAC505337D2C9CBF8FF30E1DD5C5  : public IEnumerableSerializer_1_tDD423F9C4EA26E413DAD6E073A17B20151B591E9
{
public:

public:
};


// QFSW.QC.Serializers.IEnumerableSerializer
struct IEnumerableSerializer_tD73CC8410D1E059D631790215510A622CBA10C83  : public IEnumerableSerializer_1_tFC2115B7A645BE77165A0EEB074415A8684DF7FA
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// QFSW.QC.QuantumTheme
struct QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// TMPro.TMP_FontAsset QFSW.QC.QuantumTheme::Font
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___Font_4;
	// UnityEngine.Material QFSW.QC.QuantumTheme::PanelMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___PanelMaterial_5;
	// UnityEngine.Color QFSW.QC.QuantumTheme::PanelColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___PanelColor_6;
	// UnityEngine.Color QFSW.QC.QuantumTheme::CommandLogColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___CommandLogColor_7;
	// UnityEngine.Color QFSW.QC.QuantumTheme::SelectedSuggestionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___SelectedSuggestionColor_8;
	// UnityEngine.Color QFSW.QC.QuantumTheme::SuggestionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___SuggestionColor_9;
	// UnityEngine.Color QFSW.QC.QuantumTheme::ErrorColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ErrorColor_10;
	// UnityEngine.Color QFSW.QC.QuantumTheme::WarningColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___WarningColor_11;
	// UnityEngine.Color QFSW.QC.QuantumTheme::SuccessColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___SuccessColor_12;
	// System.String QFSW.QC.QuantumTheme::TimestampFormat
	String_t* ___TimestampFormat_13;
	// UnityEngine.Color QFSW.QC.QuantumTheme::DefaultReturnValueColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___DefaultReturnValueColor_14;
	// System.Collections.Generic.List`1<QFSW.QC.TypeColorFormatter> QFSW.QC.QuantumTheme::TypeFormatters
	List_1_t6199F3A9C60F03935155B05D6D6D48D38528BD72 * ___TypeFormatters_15;
	// System.Collections.Generic.List`1<QFSW.QC.CollectionFormatter> QFSW.QC.QuantumTheme::CollectionFormatters
	List_1_t261BFD240858FE2575671837FC1901D96C95CB70 * ___CollectionFormatters_16;

public:
	inline static int32_t get_offset_of_Font_4() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___Font_4)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_Font_4() const { return ___Font_4; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_Font_4() { return &___Font_4; }
	inline void set_Font_4(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_PanelMaterial_5() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___PanelMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_PanelMaterial_5() const { return ___PanelMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_PanelMaterial_5() { return &___PanelMaterial_5; }
	inline void set_PanelMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___PanelMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PanelMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of_PanelColor_6() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___PanelColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_PanelColor_6() const { return ___PanelColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_PanelColor_6() { return &___PanelColor_6; }
	inline void set_PanelColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___PanelColor_6 = value;
	}

	inline static int32_t get_offset_of_CommandLogColor_7() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___CommandLogColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_CommandLogColor_7() const { return ___CommandLogColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_CommandLogColor_7() { return &___CommandLogColor_7; }
	inline void set_CommandLogColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___CommandLogColor_7 = value;
	}

	inline static int32_t get_offset_of_SelectedSuggestionColor_8() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___SelectedSuggestionColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_SelectedSuggestionColor_8() const { return ___SelectedSuggestionColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_SelectedSuggestionColor_8() { return &___SelectedSuggestionColor_8; }
	inline void set_SelectedSuggestionColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___SelectedSuggestionColor_8 = value;
	}

	inline static int32_t get_offset_of_SuggestionColor_9() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___SuggestionColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_SuggestionColor_9() const { return ___SuggestionColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_SuggestionColor_9() { return &___SuggestionColor_9; }
	inline void set_SuggestionColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___SuggestionColor_9 = value;
	}

	inline static int32_t get_offset_of_ErrorColor_10() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___ErrorColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ErrorColor_10() const { return ___ErrorColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ErrorColor_10() { return &___ErrorColor_10; }
	inline void set_ErrorColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ErrorColor_10 = value;
	}

	inline static int32_t get_offset_of_WarningColor_11() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___WarningColor_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_WarningColor_11() const { return ___WarningColor_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_WarningColor_11() { return &___WarningColor_11; }
	inline void set_WarningColor_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___WarningColor_11 = value;
	}

	inline static int32_t get_offset_of_SuccessColor_12() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___SuccessColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_SuccessColor_12() const { return ___SuccessColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_SuccessColor_12() { return &___SuccessColor_12; }
	inline void set_SuccessColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___SuccessColor_12 = value;
	}

	inline static int32_t get_offset_of_TimestampFormat_13() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___TimestampFormat_13)); }
	inline String_t* get_TimestampFormat_13() const { return ___TimestampFormat_13; }
	inline String_t** get_address_of_TimestampFormat_13() { return &___TimestampFormat_13; }
	inline void set_TimestampFormat_13(String_t* value)
	{
		___TimestampFormat_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimestampFormat_13), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultReturnValueColor_14() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___DefaultReturnValueColor_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_DefaultReturnValueColor_14() const { return ___DefaultReturnValueColor_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_DefaultReturnValueColor_14() { return &___DefaultReturnValueColor_14; }
	inline void set_DefaultReturnValueColor_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___DefaultReturnValueColor_14 = value;
	}

	inline static int32_t get_offset_of_TypeFormatters_15() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___TypeFormatters_15)); }
	inline List_1_t6199F3A9C60F03935155B05D6D6D48D38528BD72 * get_TypeFormatters_15() const { return ___TypeFormatters_15; }
	inline List_1_t6199F3A9C60F03935155B05D6D6D48D38528BD72 ** get_address_of_TypeFormatters_15() { return &___TypeFormatters_15; }
	inline void set_TypeFormatters_15(List_1_t6199F3A9C60F03935155B05D6D6D48D38528BD72 * value)
	{
		___TypeFormatters_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeFormatters_15), (void*)value);
	}

	inline static int32_t get_offset_of_CollectionFormatters_16() { return static_cast<int32_t>(offsetof(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A, ___CollectionFormatters_16)); }
	inline List_1_t261BFD240858FE2575671837FC1901D96C95CB70 * get_CollectionFormatters_16() const { return ___CollectionFormatters_16; }
	inline List_1_t261BFD240858FE2575671837FC1901D96C95CB70 ** get_address_of_CollectionFormatters_16() { return &___CollectionFormatters_16; }
	inline void set_CollectionFormatters_16(List_1_t261BFD240858FE2575671837FC1901D96C95CB70 * value)
	{
		___CollectionFormatters_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionFormatters_16), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.String QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>::SerializeRecursive(System.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6_gshared (BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3 * __this, RuntimeObject * ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m378372EF588D09E2A83F161E9D0EA46B35C0876A_gshared (BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.Serializers.IEnumerableSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumerableSerializer_1__ctor_mF5EF6BD0DC39980CA8FFF80DF4D95F45C63C8C96_gshared (IEnumerableSerializer_1_t8518C3D1404A08D276F9759B2EEB3F73D40012BA * __this, const RuntimeMethod* method);
// System.Int32 QFSW.QC.PolymorphicQcSerializer`1<System.Object>::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PolymorphicQcSerializer_1_get_Priority_m29816CC9BAA8813934F03CC836A8E40053C2BDF6_gshared (PolymorphicQcSerializer_1_tB032028F0E81D673CCF0ED503296B178FCA7C5A8 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m30FC1A04FAAF400F0B7E0666F132877B943D303B_gshared (BasicQcSerializer_1_tFD5BCD50F13974085624472F225BA2B804302936 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.PolymorphicQcSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolymorphicQcSerializer_1__ctor_m43AEEA68E13A58ECC223466E97CE5CE7133ADE55_gshared (PolymorphicQcSerializer_1_tB032028F0E81D673CCF0ED503296B178FCA7C5A8 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m9F3DEA60647F8AA09F22E2D582798EB744FAAD2B_gshared (BasicQcSerializer_1_t7133F4E40E5379AA7C7F6654EC345D13B26E538A * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m7113165550DAB186923C59AB92D31D24C65DBABC_gshared (BasicQcSerializer_1_tC00DA591A3DA38C7C1646B8753695A75DB4F5B6C * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_mF970362D800E54EC35CFF270A42106C38EDD7A22_gshared (BasicQcSerializer_1_t1C7198EA013ED61F27A14546C10B8E2FB04214A3 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m8D57FEA91DF3848A52FA56C38454D2306CDF7170_gshared (BasicQcSerializer_1_tCB77C9B7E71E2214E628DD6AB9C31045BF406F9E * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m45241F761F042DC550C057B3FA1943661F7BBEE4_gshared (BasicQcSerializer_1_t8DAF4E0142EA0E50A45634EFF778CD2FE001E95A * __this, const RuntimeMethod* method);

// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.String QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>::SerializeRecursive(System.Object,QFSW.QC.QuantumTheme)
inline String_t* BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6 (BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3 * __this, RuntimeObject * ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3 *, RuntimeObject *, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A *, const RuntimeMethod*))BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6_gshared)(__this, ___value0, ___theme1, method);
}
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>::.ctor()
inline void BasicQcSerializer_1__ctor_m378372EF588D09E2A83F161E9D0EA46B35C0876A (BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_t76382623377D3706941D07510C7E7215101DF2F3 *, const RuntimeMethod*))BasicQcSerializer_1__ctor_m378372EF588D09E2A83F161E9D0EA46B35C0876A_gshared)(__this, method);
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0__ctor_m790E19F962925AD91E0456B2D5B6AECB9165E45E (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IDictionary>::.ctor()
inline void IEnumerableSerializer_1__ctor_mC4D10545FC81216D2F3C6A92FF8A1FC954FB028C (IEnumerableSerializer_1_tDD423F9C4EA26E413DAD6E073A17B20151B591E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (IEnumerableSerializer_1_tDD423F9C4EA26E413DAD6E073A17B20151B591E9 *, const RuntimeMethod*))IEnumerableSerializer_1__ctor_mF5EF6BD0DC39980CA8FFF80DF4D95F45C63C8C96_gshared)(__this, method);
}
// System.Int32 QFSW.QC.PolymorphicQcSerializer`1<System.Collections.IEnumerable>::get_Priority()
inline int32_t PolymorphicQcSerializer_1_get_Priority_mF31B4F312FADED94E9163B8A28FC98E87DCE390A (PolymorphicQcSerializer_1_t9C435A1D2F138D4B8CBFEC223F1CD0786229C92F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PolymorphicQcSerializer_1_t9C435A1D2F138D4B8CBFEC223F1CD0786229C92F *, const RuntimeMethod*))PolymorphicQcSerializer_1_get_Priority_m29816CC9BAA8813934F03CC836A8E40053C2BDF6_gshared)(__this, method);
}
// System.Void QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IEnumerable>::.ctor()
inline void IEnumerableSerializer_1__ctor_mFA0387C937EFE45BCA473D9CA847002292D3B687 (IEnumerableSerializer_1_tFC2115B7A645BE77165A0EEB074415A8684DF7FA * __this, const RuntimeMethod* method)
{
	((  void (*) (IEnumerableSerializer_1_tFC2115B7A645BE77165A0EEB074415A8684DF7FA *, const RuntimeMethod*))IEnumerableSerializer_1__ctor_mF5EF6BD0DC39980CA8FFF80DF4D95F45C63C8C96_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4FBBD7DFFF56404A3DCEF4F1C9D457A4760A35D6 (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>::get_Item(!0)
inline PropertyInfo_t * Dictionary_2_get_Item_m2EA4FBF270CC9AF71BCFB801BF36C186662A4A5D (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  PropertyInfo_t * (*) (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m22D13143638B74BAA46AF6F295963E6797D456C9 (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * __this, Type_t * ___key0, PropertyInfo_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E *, Type_t *, PropertyInfo_t *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.String QFSW.QC.GenericQcSerializer::SerializeRecursive(System.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericQcSerializer_SerializeRecursive_m2BED57DC39DA6FD4AB435DED96E3FFD5B99C0188 (GenericQcSerializer_t1F9D6524F87E90A7F58DC2DAB1C149EF93A6832B * __this, RuntimeObject * ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>::.ctor()
inline void Dictionary_2__ctor_m7A3DED1C797F7E2A8A47E1DDC6115ECBF174220C (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void QFSW.QC.GenericQcSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericQcSerializer__ctor_m293C13796EB38AF9DE657157349B0E304452C695 (GenericQcSerializer_t1F9D6524F87E90A7F58DC2DAB1C149EF93A6832B * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<System.String>::.ctor()
inline void BasicQcSerializer_1__ctor_m5CF694AD1DB5490A56E65525DC1FB6FC03DDE6B7 (BasicQcSerializer_1_tAB7ADAEBEFBD0962C2B82270701533000E509549 * __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_tAB7ADAEBEFBD0962C2B82270701533000E509549 *, const RuntimeMethod*))BasicQcSerializer_1__ctor_m30FC1A04FAAF400F0B7E0666F132877B943D303B_gshared)(__this, method);
}
// System.String QFSW.QC.Utilities.ReflectionExtensions::GetDisplayName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1 (Type_t * ___type0, bool ___includeNamespace1, const RuntimeMethod* method);
// System.Void QFSW.QC.PolymorphicQcSerializer`1<System.Type>::.ctor()
inline void PolymorphicQcSerializer_1__ctor_mC5BF1CD195B3425D33A06AA145CC34E793B18CFA (PolymorphicQcSerializer_1_t66E3A93ED80ED07D01F3EE02C94BC5B244C0F289 * __this, const RuntimeMethod* method)
{
	((  void (*) (PolymorphicQcSerializer_1_t66E3A93ED80ED07D01F3EE02C94BC5B244C0F289 *, const RuntimeMethod*))PolymorphicQcSerializer_1__ctor_m43AEEA68E13A58ECC223466E97CE5CE7133ADE55_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.PolymorphicQcSerializer`1<UnityEngine.Object>::.ctor()
inline void PolymorphicQcSerializer_1__ctor_mA9DD628720AF6E7813B67F7BD05FC81F44B2FC70 (PolymorphicQcSerializer_1_t3373E8A3871A337CFD87F03910E4B354DFBFEAE1 * __this, const RuntimeMethod* method)
{
	((  void (*) (PolymorphicQcSerializer_1_t3373E8A3871A337CFD87F03910E4B354DFBFEAE1 *, const RuntimeMethod*))PolymorphicQcSerializer_1__ctor_m43AEEA68E13A58ECC223466E97CE5CE7133ADE55_gshared)(__this, method);
}
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2Int>::.ctor()
inline void BasicQcSerializer_1__ctor_m9F3DEA60647F8AA09F22E2D582798EB744FAAD2B (BasicQcSerializer_1_t7133F4E40E5379AA7C7F6654EC345D13B26E538A * __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_t7133F4E40E5379AA7C7F6654EC345D13B26E538A *, const RuntimeMethod*))BasicQcSerializer_1__ctor_m9F3DEA60647F8AA09F22E2D582798EB744FAAD2B_gshared)(__this, method);
}
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2>::.ctor()
inline void BasicQcSerializer_1__ctor_m7113165550DAB186923C59AB92D31D24C65DBABC (BasicQcSerializer_1_tC00DA591A3DA38C7C1646B8753695A75DB4F5B6C * __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_tC00DA591A3DA38C7C1646B8753695A75DB4F5B6C *, const RuntimeMethod*))BasicQcSerializer_1__ctor_m7113165550DAB186923C59AB92D31D24C65DBABC_gshared)(__this, method);
}
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3Int>::.ctor()
inline void BasicQcSerializer_1__ctor_mF970362D800E54EC35CFF270A42106C38EDD7A22 (BasicQcSerializer_1_t1C7198EA013ED61F27A14546C10B8E2FB04214A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_t1C7198EA013ED61F27A14546C10B8E2FB04214A3 *, const RuntimeMethod*))BasicQcSerializer_1__ctor_mF970362D800E54EC35CFF270A42106C38EDD7A22_gshared)(__this, method);
}
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3>::.ctor()
inline void BasicQcSerializer_1__ctor_m8D57FEA91DF3848A52FA56C38454D2306CDF7170 (BasicQcSerializer_1_tCB77C9B7E71E2214E628DD6AB9C31045BF406F9E * __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_tCB77C9B7E71E2214E628DD6AB9C31045BF406F9E *, const RuntimeMethod*))BasicQcSerializer_1__ctor_m8D57FEA91DF3848A52FA56C38454D2306CDF7170_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector4>::.ctor()
inline void BasicQcSerializer_1__ctor_m45241F761F042DC550C057B3FA1943661F7BBEE4 (BasicQcSerializer_1_t8DAF4E0142EA0E50A45634EFF778CD2FE001E95A * __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_t8DAF4E0142EA0E50A45634EFF778CD2FE001E95A *, const RuntimeMethod*))BasicQcSerializer_1__ctor_m45241F761F042DC550C057B3FA1943661F7BBEE4_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_U3CU3Em__Finally1_m56A5D3EE4DA1BBDD91E7251AA1C205787132D12C (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_System_IDisposable_Dispose_mB1156312AF486FE561F101DD20B231BB07ABE6B5 (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObjectStreamU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mFD382DC1C1E2B3ED92BA2A5FDEBC6E6B79EFA8A4 (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String QFSW.QC.Serializers.DictionaryEntrySerializer::SerializeFormatted(System.Collections.DictionaryEntry,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DictionaryEntrySerializer_SerializeFormatted_m411AEBC5D7B73CABCA6137BAD8475F7A3A4852AC (DictionaryEntrySerializer_t5170FCB773C32507913476AE4252D6FDED83DF22 * __this, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string innerKey = SerializeRecursive(value.Key, theme);
		RuntimeObject * L_0;
		L_0 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&___value0), /*hidden argument*/NULL);
		QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * L_1 = ___theme1;
		String_t* L_2;
		L_2 = BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6(__this, L_0, L_1, /*hidden argument*/BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6_RuntimeMethod_var);
		// string innerValue = SerializeRecursive(value.Value, theme);
		RuntimeObject * L_3;
		L_3 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&___value0), /*hidden argument*/NULL);
		QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * L_4 = ___theme1;
		String_t* L_5;
		L_5 = BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6(__this, L_3, L_4, /*hidden argument*/BasicQcSerializer_1_SerializeRecursive_m96EF02D52CB3089DE26FB0B5A9D26433BE6748A6_RuntimeMethod_var);
		V_0 = L_5;
		// return $"{innerKey}: {innerValue}";
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void QFSW.QC.Serializers.DictionaryEntrySerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntrySerializer__ctor_mC6340B3E6765451482AAC28098D3F7518D5D314A (DictionaryEntrySerializer_t5170FCB773C32507913476AE4252D6FDED83DF22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m378372EF588D09E2A83F161E9D0EA46B35C0876A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m378372EF588D09E2A83F161E9D0EA46B35C0876A(__this, /*hidden argument*/BasicQcSerializer_1__ctor_m378372EF588D09E2A83F161E9D0EA46B35C0876A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerable QFSW.QC.Serializers.IDictionarySerializer::GetObjectStream(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IDictionarySerializer_GetObjectStream_m3FDB3AD429B065897258DDFE21B8C1A8B23C0964 (IDictionarySerializer_tCDEBA51D33E2FAC505337D2C9CBF8FF30E1DD5C5 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * L_0 = (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F *)il2cpp_codegen_object_new(U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F_il2cpp_TypeInfo_var);
		U3CGetObjectStreamU3Ed__0__ctor_m790E19F962925AD91E0456B2D5B6AECB9165E45E(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * L_1 = L_0;
		RuntimeObject* L_2 = ___value0;
		L_1->set_U3CU3E3__value_4(L_2);
		return L_1;
	}
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDictionarySerializer__ctor_m4997EAE04C2793814A3EB5C2CB45522E9F8BD8A8 (IDictionarySerializer_tCDEBA51D33E2FAC505337D2C9CBF8FF30E1DD5C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableSerializer_1__ctor_mC4D10545FC81216D2F3C6A92FF8A1FC954FB028C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IEnumerableSerializer_1__ctor_mC4D10545FC81216D2F3C6A92FF8A1FC954FB028C(__this, /*hidden argument*/IEnumerableSerializer_1__ctor_mC4D10545FC81216D2F3C6A92FF8A1FC954FB028C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 QFSW.QC.Serializers.IEnumerableSerializer::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IEnumerableSerializer_get_Priority_m31018DE9953DB57FCCE3B09EE1A078E7837249E7 (IEnumerableSerializer_tD73CC8410D1E059D631790215510A622CBA10C83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolymorphicQcSerializer_1_get_Priority_mF31B4F312FADED94E9163B8A28FC98E87DCE390A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override int Priority => base.Priority - 1000;
		int32_t L_0;
		L_0 = PolymorphicQcSerializer_1_get_Priority_mF31B4F312FADED94E9163B8A28FC98E87DCE390A(__this, /*hidden argument*/PolymorphicQcSerializer_1_get_Priority_mF31B4F312FADED94E9163B8A28FC98E87DCE390A_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)1000)));
	}
}
// System.Collections.IEnumerable QFSW.QC.Serializers.IEnumerableSerializer::GetObjectStream(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IEnumerableSerializer_GetObjectStream_m91DAD4661DA17DF721BD94D93A27F52B54AF4BEF (IEnumerableSerializer_tD73CC8410D1E059D631790215510A622CBA10C83 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// return value;
		RuntimeObject* L_0 = ___value0;
		return L_0;
	}
}
// System.Void QFSW.QC.Serializers.IEnumerableSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumerableSerializer__ctor_m20ABF8951F2F9896FA1E381450804BA7E359FC54 (IEnumerableSerializer_tD73CC8410D1E059D631790215510A622CBA10C83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableSerializer_1__ctor_mFA0387C937EFE45BCA473D9CA847002292D3B687_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IEnumerableSerializer_1__ctor_mFA0387C937EFE45BCA473D9CA847002292D3B687(__this, /*hidden argument*/IEnumerableSerializer_1__ctor_mFA0387C937EFE45BCA473D9CA847002292D3B687_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type QFSW.QC.Serializers.KeyValuePairSerializer::get_GenericType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * KeyValuePairSerializer_get_GenericType_mB729FEC62376AFEBA9F015E42DE776E8FF152290 (KeyValuePairSerializer_tA26F391A5443783EF770DC4599EE9825AA3898F5 * __this, const RuntimeMethod* method)
{
	{
		// protected override Type GenericType { get; } = typeof(KeyValuePair<,>);
		Type_t * L_0 = __this->get_U3CGenericTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String QFSW.QC.Serializers.KeyValuePairSerializer::SerializeFormatted(System.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValuePairSerializer_SerializeFormatted_m226CAC8B71BE2BD7E76905A2353EBE54E77FC475 (KeyValuePairSerializer_tA26F391A5443783EF770DC4599EE9825AA3898F5 * __this, RuntimeObject * ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4FBBD7DFFF56404A3DCEF4F1C9D457A4760A35D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m2EA4FBF270CC9AF71BCFB801BF36C186662A4A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m22D13143638B74BAA46AF6F295963E6797D456C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// Type type = value.GetType();
		RuntimeObject * L_0 = ___value0;
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (_keyPropertyLookup.ContainsKey(type))
		Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * L_2 = __this->get__keyPropertyLookup_2();
		Type_t * L_3 = V_0;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m4FBBD7DFFF56404A3DCEF4F1C9D457A4760A35D6(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m4FBBD7DFFF56404A3DCEF4F1C9D457A4760A35D6_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// keyProperty = _keyPropertyLookup[type];
		Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * L_5 = __this->get__keyPropertyLookup_2();
		Type_t * L_6 = V_0;
		PropertyInfo_t * L_7;
		L_7 = Dictionary_2_get_Item_m2EA4FBF270CC9AF71BCFB801BF36C186662A4A5D(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m2EA4FBF270CC9AF71BCFB801BF36C186662A4A5D_RuntimeMethod_var);
		V_1 = L_7;
		// }
		goto IL_003d;
	}

IL_0024:
	{
		// keyProperty = type.GetProperty("Key");
		Type_t * L_8 = V_0;
		PropertyInfo_t * L_9;
		L_9 = Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89(L_8, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, /*hidden argument*/NULL);
		V_1 = L_9;
		// _keyPropertyLookup[type] = keyProperty;
		Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * L_10 = __this->get__keyPropertyLookup_2();
		Type_t * L_11 = V_0;
		PropertyInfo_t * L_12 = V_1;
		Dictionary_2_set_Item_m22D13143638B74BAA46AF6F295963E6797D456C9(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_m22D13143638B74BAA46AF6F295963E6797D456C9_RuntimeMethod_var);
	}

IL_003d:
	{
		// if (_valuePropertyLookup.ContainsKey(type))
		Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * L_13 = __this->get__valuePropertyLookup_3();
		Type_t * L_14 = V_0;
		bool L_15;
		L_15 = Dictionary_2_ContainsKey_m4FBBD7DFFF56404A3DCEF4F1C9D457A4760A35D6(L_13, L_14, /*hidden argument*/Dictionary_2_ContainsKey_m4FBBD7DFFF56404A3DCEF4F1C9D457A4760A35D6_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		// valueProperty = _valuePropertyLookup[type];
		Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * L_16 = __this->get__valuePropertyLookup_3();
		Type_t * L_17 = V_0;
		PropertyInfo_t * L_18;
		L_18 = Dictionary_2_get_Item_m2EA4FBF270CC9AF71BCFB801BF36C186662A4A5D(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m2EA4FBF270CC9AF71BCFB801BF36C186662A4A5D_RuntimeMethod_var);
		V_2 = L_18;
		// }
		goto IL_0073;
	}

IL_005a:
	{
		// valueProperty = type.GetProperty("Value");
		Type_t * L_19 = V_0;
		PropertyInfo_t * L_20;
		L_20 = Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89(L_19, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, /*hidden argument*/NULL);
		V_2 = L_20;
		// _valuePropertyLookup[type] = valueProperty;
		Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * L_21 = __this->get__valuePropertyLookup_3();
		Type_t * L_22 = V_0;
		PropertyInfo_t * L_23 = V_2;
		Dictionary_2_set_Item_m22D13143638B74BAA46AF6F295963E6797D456C9(L_21, L_22, L_23, /*hidden argument*/Dictionary_2_set_Item_m22D13143638B74BAA46AF6F295963E6797D456C9_RuntimeMethod_var);
	}

IL_0073:
	{
		// string innerKey = SerializeRecursive(keyProperty.GetValue(value, null), theme);
		PropertyInfo_t * L_24 = V_1;
		RuntimeObject * L_25 = ___value0;
		RuntimeObject * L_26;
		L_26 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_24, L_25, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * L_27 = ___theme1;
		String_t* L_28;
		L_28 = GenericQcSerializer_SerializeRecursive_m2BED57DC39DA6FD4AB435DED96E3FFD5B99C0188(__this, L_26, L_27, /*hidden argument*/NULL);
		// string innerValue = SerializeRecursive(valueProperty.GetValue(value, null), theme);
		PropertyInfo_t * L_29 = V_2;
		RuntimeObject * L_30 = ___value0;
		RuntimeObject * L_31;
		L_31 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_29, L_30, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * L_32 = ___theme1;
		String_t* L_33;
		L_33 = GenericQcSerializer_SerializeRecursive_m2BED57DC39DA6FD4AB435DED96E3FFD5B99C0188(__this, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		// return $"{innerKey}: {innerValue}";
		String_t* L_34 = V_3;
		String_t* L_35;
		L_35 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_28, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Void QFSW.QC.Serializers.KeyValuePairSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePairSerializer__ctor_mB2CE5F3AADBC6786B0E8DC92283CF5CB94688BC2 (KeyValuePairSerializer_tA26F391A5443783EF770DC4599EE9825AA3898F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7A3DED1C797F7E2A8A47E1DDC6115ECBF174220C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t4451D0958080362C54F19A3F39A254682CE0D1D5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Type GenericType { get; } = typeof(KeyValuePair<,>);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (KeyValuePair_2_t4451D0958080362C54F19A3F39A254682CE0D1D5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		__this->set_U3CGenericTypeU3Ek__BackingField_1(L_1);
		// private readonly Dictionary<Type, PropertyInfo> _keyPropertyLookup = new Dictionary<Type, PropertyInfo>();
		Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * L_2 = (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E *)il2cpp_codegen_object_new(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7A3DED1C797F7E2A8A47E1DDC6115ECBF174220C(L_2, /*hidden argument*/Dictionary_2__ctor_m7A3DED1C797F7E2A8A47E1DDC6115ECBF174220C_RuntimeMethod_var);
		__this->set__keyPropertyLookup_2(L_2);
		// private readonly Dictionary<Type, PropertyInfo> _valuePropertyLookup = new Dictionary<Type, PropertyInfo>();
		Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E * L_3 = (Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E *)il2cpp_codegen_object_new(Dictionary_2_t9A92579FF4B7A9A0364C0096750A91ACCBC51E7E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7A3DED1C797F7E2A8A47E1DDC6115ECBF174220C(L_3, /*hidden argument*/Dictionary_2__ctor_m7A3DED1C797F7E2A8A47E1DDC6115ECBF174220C_RuntimeMethod_var);
		__this->set__valuePropertyLookup_3(L_3);
		GenericQcSerializer__ctor_m293C13796EB38AF9DE657157349B0E304452C695(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 QFSW.QC.Serializers.StringSerializer::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSerializer_get_Priority_m253D50452299E20A9F5F48ED3BD4C36DD4823983 (StringSerializer_tB7C70FA39C254875C15072240440AA87C02D3058 * __this, const RuntimeMethod* method)
{
	{
		// public override int Priority => int.MaxValue;
		return ((int32_t)2147483647LL);
	}
}
// System.String QFSW.QC.Serializers.StringSerializer::SerializeFormatted(System.String,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSerializer_SerializeFormatted_mA6E3D9E372BA6B1D34D0D2895E5D0ADB654F95ED (StringSerializer_tB7C70FA39C254875C15072240440AA87C02D3058 * __this, String_t* ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	{
		// return value;
		String_t* L_0 = ___value0;
		return L_0;
	}
}
// System.Void QFSW.QC.Serializers.StringSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSerializer__ctor_m183958436C6F8DC3BC797D7CD196D7A479108F5F (StringSerializer_tB7C70FA39C254875C15072240440AA87C02D3058 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m5CF694AD1DB5490A56E65525DC1FB6FC03DDE6B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m5CF694AD1DB5490A56E65525DC1FB6FC03DDE6B7(__this, /*hidden argument*/BasicQcSerializer_1__ctor_m5CF694AD1DB5490A56E65525DC1FB6FC03DDE6B7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String QFSW.QC.Serializers.TypeSerialiazer::SerializeFormatted(System.Type,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSerialiazer_SerializeFormatted_m5DD06E9C362CA573A07187B2BC2C2F7FEB394E3E (TypeSerialiazer_t2CB55019BE515F2BFF860276764E175D72A6220C * __this, Type_t * ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value.GetDisplayName();
		Type_t * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1(L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void QFSW.QC.Serializers.TypeSerialiazer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSerialiazer__ctor_m5D5AC5D2EDF0753DFB520BA050B23CC813AD7B45 (TypeSerialiazer_t2CB55019BE515F2BFF860276764E175D72A6220C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolymorphicQcSerializer_1__ctor_mC5BF1CD195B3425D33A06AA145CC34E793B18CFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PolymorphicQcSerializer_1__ctor_mC5BF1CD195B3425D33A06AA145CC34E793B18CFA(__this, /*hidden argument*/PolymorphicQcSerializer_1__ctor_mC5BF1CD195B3425D33A06AA145CC34E793B18CFA_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String QFSW.QC.Serializers.UnityObjectSerializer::SerializeFormatted(UnityEngine.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityObjectSerializer_SerializeFormatted_m6278CE9A10B38C68C8B0CBEF800076427984F18E (UnityObjectSerializer_tDFD9299BD88AFDB9CD4D037F5D973F21C108B3AC * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	{
		// return value.name;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___value0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void QFSW.QC.Serializers.UnityObjectSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectSerializer__ctor_m2A6D85260E31223BEAB17EC275A9E7850488195C (UnityObjectSerializer_tDFD9299BD88AFDB9CD4D037F5D973F21C108B3AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolymorphicQcSerializer_1__ctor_mA9DD628720AF6E7813B67F7BD05FC81F44B2FC70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PolymorphicQcSerializer_1__ctor_mA9DD628720AF6E7813B67F7BD05FC81F44B2FC70(__this, /*hidden argument*/PolymorphicQcSerializer_1__ctor_mA9DD628720AF6E7813B67F7BD05FC81F44B2FC70_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String QFSW.QC.Serializers.Vector2IntSerializer::SerializeFormatted(UnityEngine.Vector2Int,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2IntSerializer_SerializeFormatted_mB190707682903E6EE63AAC57133A9F21FD72FD8B (Vector2IntSerializer_t193C624FA1371B14008E7BF8BAB457FFC470C3E2 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y})";
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___value0), /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___value0), /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void QFSW.QC.Serializers.Vector2IntSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntSerializer__ctor_m5DE93140D9F7DE182DA20714B5D6F1A0A42E5EBA (Vector2IntSerializer_t193C624FA1371B14008E7BF8BAB457FFC470C3E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m9F3DEA60647F8AA09F22E2D582798EB744FAAD2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m9F3DEA60647F8AA09F22E2D582798EB744FAAD2B(__this, /*hidden argument*/BasicQcSerializer_1__ctor_m9F3DEA60647F8AA09F22E2D582798EB744FAAD2B_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String QFSW.QC.Serializers.Vector2Serializer::SerializeFormatted(UnityEngine.Vector2,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2Serializer_SerializeFormatted_mE3E5E58293B5BBEE840F953C51ECA33B8A7701E8 (Vector2Serializer_tAE469522B5026A44C9DB3A20D4275FDEAC8B2409 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y})";
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		float L_1 = L_0.get_x_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___value0;
		float L_5 = L_4.get_y_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_3, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void QFSW.QC.Serializers.Vector2Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Serializer__ctor_m004D2025A55787BAF0DE95DB8BA1910707E84E55 (Vector2Serializer_tAE469522B5026A44C9DB3A20D4275FDEAC8B2409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m7113165550DAB186923C59AB92D31D24C65DBABC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m7113165550DAB186923C59AB92D31D24C65DBABC(__this, /*hidden argument*/BasicQcSerializer_1__ctor_m7113165550DAB186923C59AB92D31D24C65DBABC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String QFSW.QC.Serializers.Vector3IntSerializer::SerializeFormatted(UnityEngine.Vector3Int,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3IntSerializer_SerializeFormatted_m10283EEBCFB8D98F475D58BBF5AD6D7F38A1B4A7 (Vector3IntSerializer_tB049F1D769D8BD6FEB06D775C5E4A23A4C2B7EA9 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y}, {value.z})";
		int32_t L_0;
		L_0 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___value0), /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___value0), /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6;
		L_6 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___value0), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void QFSW.QC.Serializers.Vector3IntSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntSerializer__ctor_m2DD2EF9B3055DDDBEA4A458EDE6D4412366D3E4F (Vector3IntSerializer_tB049F1D769D8BD6FEB06D775C5E4A23A4C2B7EA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_mF970362D800E54EC35CFF270A42106C38EDD7A22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_mF970362D800E54EC35CFF270A42106C38EDD7A22(__this, /*hidden argument*/BasicQcSerializer_1__ctor_mF970362D800E54EC35CFF270A42106C38EDD7A22_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String QFSW.QC.Serializers.Vector3Serializer::SerializeFormatted(UnityEngine.Vector3,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3Serializer_SerializeFormatted_mE40C81C1BFC9093D87C3EFF7F87634A426A3966F (Vector3Serializer_t6059DD1BD7A871DF5792306E1A8F31AEA1C572D2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y}, {value.z})";
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		float L_1 = L_0.get_x_2();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = L_4.get_y_3();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___value0;
		float L_9 = L_8.get_z_4();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_3, L_7, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void QFSW.QC.Serializers.Vector3Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Serializer__ctor_mC51FF9153C1FE64A60B89D4D44C2FD16D94B66B2 (Vector3Serializer_t6059DD1BD7A871DF5792306E1A8F31AEA1C572D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m8D57FEA91DF3848A52FA56C38454D2306CDF7170_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m8D57FEA91DF3848A52FA56C38454D2306CDF7170(__this, /*hidden argument*/BasicQcSerializer_1__ctor_m8D57FEA91DF3848A52FA56C38454D2306CDF7170_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String QFSW.QC.Serializers.Vector4Serializer::SerializeFormatted(UnityEngine.Vector4,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4Serializer_SerializeFormatted_m4B7386DA7604514020C27883634541120E03E80C (Vector4Serializer_tC6A91836248BC20BD00DB306A5FC26E6398906D5 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value0, QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y}, {value.z}, {value.w})";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___value0;
		float L_3 = L_2.get_x_1();
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = ___value0;
		float L_8 = L_7.get_y_2();
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_6;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___value0;
		float L_13 = L_12.get_z_3();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_11;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17 = ___value0;
		float L_18 = L_17.get_w_4();
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_19);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		String_t* L_21;
		L_21 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05, L_16, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void QFSW.QC.Serializers.Vector4Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Serializer__ctor_m53B21B6C5D72BBA3D93066E92408A7F82A5C9434 (Vector4Serializer_tC6A91836248BC20BD00DB306A5FC26E6398906D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m45241F761F042DC550C057B3FA1943661F7BBEE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m45241F761F042DC550C057B3FA1943661F7BBEE4(__this, /*hidden argument*/BasicQcSerializer_1__ctor_m45241F761F042DC550C057B3FA1943661F7BBEE4_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0__ctor_m790E19F962925AD91E0456B2D5B6AECB9165E45E (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_System_IDisposable_Dispose_mB1156312AF486FE561F101DD20B231BB07ABE6B5 (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetObjectStreamU3Ed__0_U3CU3Em__Finally1_m56A5D3EE4DA1BBDD91E7251AA1C205787132D12C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetObjectStreamU3Ed__0_MoveNext_m57706E394F5FB8B26FB6067E1AF03AB2CEBA131A (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_005c;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_0089;
		}

IL_0012:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (DictionaryEntry item in value)
			RuntimeObject* L_3 = __this->get_value_3();
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_5(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0064;
		}

IL_0034:
		{
			// foreach (DictionaryEntry item in value)
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_5();
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			V_2 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_6, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			// yield return item;
			DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_7 = V_2;
			DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_8 = L_7;
			RuntimeObject * L_9 = Box(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var, &L_8);
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0089;
		}

IL_005c:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0064:
		{
			// foreach (DictionaryEntry item in value)
			RuntimeObject* L_10 = __this->get_U3CU3E7__wrap1_5();
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0034;
			}
		}

IL_0071:
		{
			U3CGetObjectStreamU3Ed__0_U3CU3Em__Finally1_m56A5D3EE4DA1BBDD91E7251AA1C205787132D12C(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_5((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_0089;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0082;
	}

FAULT_0082:
	{ // begin fault (depth: 1)
		U3CGetObjectStreamU3Ed__0_System_IDisposable_Dispose_mB1156312AF486FE561F101DD20B231BB07ABE6B5(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	} // end fault
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_U3CU3Em__Finally1_m56A5D3EE4DA1BBDD91E7251AA1C205787132D12C (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_5();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetObjectStreamU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m88733BE499CF6BEF641DD495E533440251295B31 (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerator_Reset_mCF8DAFDE6F7CF58A9B4B497E40650EE407A372C0 (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerator_Reset_mCF8DAFDE6F7CF58A9B4B497E40650EE407A372C0_RuntimeMethod_var)));
	}
}
// System.Object QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerator_get_Current_m58F1DC7703C06E03479A426056DE3A03152023CD (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObjectStreamU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mFD382DC1C1E2B3ED92BA2A5FDEBC6E6B79EFA8A4 (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * L_3 = (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F *)il2cpp_codegen_object_new(U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F_il2cpp_TypeInfo_var);
		U3CGetObjectStreamU3Ed__0__ctor_m790E19F962925AD91E0456B2D5B6AECB9165E45E(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * L_4 = V_0;
		RuntimeObject* L_5 = __this->get_U3CU3E3__value_4();
		L_4->set_value_3(L_5);
		U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerable_GetEnumerator_m9F9679BBDD020EDEB59BEE8B87D002C7872B8591 (U3CGetObjectStreamU3Ed__0_tFDE42F67D81398B058A4A01215B8FF81188EEE0F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetObjectStreamU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mFD382DC1C1E2B3ED92BA2A5FDEBC6E6B79EFA8A4(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__key_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
