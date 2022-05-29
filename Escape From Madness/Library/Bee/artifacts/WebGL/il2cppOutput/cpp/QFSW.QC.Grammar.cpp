﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>
struct Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`2<QFSW.QC.Grammar.BinaryOperatorData,System.Boolean>
struct Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F;
// System.Func`2<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData>
struct Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression>
struct Func_3_tA7FA388FACF187B730F8EAC56368A51607127961;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`3<System.String,System.Type,System.Object>
struct Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839;
// System.Collections.Generic.HashSet`1<System.Char>
struct HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
// System.Collections.Generic.IEnumerable`1<QFSW.QC.Grammar.BinaryOperatorData>
struct IEnumerable_1_t01B92DCA392A2E92EB32D7C501BAF4C408BF04F9;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t84CD58C3582484C691B22BB0E534C8ADD9B22966;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,QFSW.QC.Grammar.IBinaryOperator>
struct KeyCollection_t017D0D19CD44A4B2EC6910ED11C31EF908139193;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,QFSW.QC.Grammar.IBinaryOperator>
struct ValueCollection_t3096943BCBEE2CAD68B7E71DF88EB56F35268D81;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,QFSW.QC.Grammar.IBinaryOperator>[]
struct EntryU5BU5D_tC59B74C7FE87284D1F2F89D0C325782BDB366240;
// System.Collections.Generic.HashSet`1/Slot<System.Char>[]
struct SlotU5BU5D_tD44C55E6E47FEF298803610AD06DE64ADD2843E9;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88;
// QFSW.QC.Grammar.BinaryOperatorData[]
struct BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// QFSW.QC.Grammar.AdditionOperatorGrammar
struct AdditionOperatorGrammar_tF20F94544841891712C19866AEE63EDC55ED2ECD;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar
struct BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4;
// QFSW.QC.Grammar.BinaryOperatorData
struct BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853;
// QFSW.QC.Grammar.BinaryOperatorGrammar
struct BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// QFSW.QC.Grammar.BitwiseAndOperatorGrammar
struct BitwiseAndOperatorGrammar_t892875ABF548413AF82CFFBB5AAD6E4D89298EFB;
// QFSW.QC.Grammar.BitwiseOrOperatorGrammar
struct BitwiseOrOperatorGrammar_t128A890695EC685A189B74100BA54074BD3515E5;
// QFSW.QC.Grammar.BooleanNegationGrammar
struct BooleanNegationGrammar_t0D250C96BEFBCDCE51245490AC3EBA9269F26143;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// QFSW.QC.Grammar.DivisionOperatorGrammar
struct DivisionOperatorGrammar_t7E81DD91339BA99D5A98A63AE76F49B1C6E631EB;
// QFSW.QC.Grammar.DynamicBinaryOperator
struct DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987;
// System.Exception
struct Exception_t;
// QFSW.QC.Grammar.ExclusiveOrOperatorGrammar
struct ExclusiveOrOperatorGrammar_t704EDE88069832B7EAB86411D121D1D706A4EC45;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// QFSW.QC.Grammar.ExpressionBodyGrammar
struct ExpressionBodyGrammar_tF4B909017AC355DCB00C4DB371F4FFA62272C033;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// QFSW.QC.Grammar.IBinaryOperator
struct IBinaryOperator_t6F741E14FD0057203C2F0C7E0E985E8F5305EB39;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// QFSW.QC.Grammar.ModulusOperatorGrammar
struct ModulusOperatorGrammar_t21AEAA7FC95901C542742C2AF124E7A3D64FF052;
// QFSW.QC.Grammar.MultiplyOperatorGrammar
struct MultiplyOperatorGrammar_tBC731D64EFE7BBF666275606D2D3A3D2628C819F;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// QFSW.QC.ParserInputException
struct ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// QFSW.QC.Grammar.SubtractionOperatorGrammar
struct SubtractionOperatorGrammar_tFD826B3FBD8046529480E6212A28FBDCE5747A6D;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c
struct U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F;
// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBinaryOperator_t6F741E14FD0057203C2F0C7E0E985E8F5305EB39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuantumConsoleProcessor_t44B9071AFD6CA41A648B928692745A7BDFCCC13B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AC755D1A049FCBE83614D6BFAC33ED2812E66CF;
IL2CPP_EXTERN_C String_t* _stringLiteral185DEBE76EE3B7788E2B3028DF63A43FFEE60433;
IL2CPP_EXTERN_C String_t* _stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282;
IL2CPP_EXTERN_C String_t* _stringLiteral223E609F04608873C57B0D03301EB40933215CEC;
IL2CPP_EXTERN_C String_t* _stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E;
IL2CPP_EXTERN_C String_t* _stringLiteral31600AFFD8AACB2B8EFBA05BE6524A34EC7E8BC9;
IL2CPP_EXTERN_C String_t* _stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE1D62E6A1E4A0BB86C33324FCB6307E0DFA69B;
IL2CPP_EXTERN_C String_t* _stringLiteral463882660D6BFBE518325492F5169A54BAEFA594;
IL2CPP_EXTERN_C String_t* _stringLiteral52B357E922A6C90A23D65418414B564788FD1F01;
IL2CPP_EXTERN_C String_t* _stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8DA73ECDFB841563F69A75CDF930A72BB3E0B85D;
IL2CPP_EXTERN_C String_t* _stringLiteral99A5CC4857C144971D9AB88B5563BC9BB959F4FE;
IL2CPP_EXTERN_C String_t* _stringLiteral9FA733175233DF3C1380AADE2864F52174029DD2;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB9965264187D9FE5AE1984DE641846CF5481D8C5;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8;
IL2CPP_EXTERN_C String_t* _stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryOperatorData__ctor_mA99223B536ACC8B87B5E149C7447E82CE2B6542C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryOperatorGrammar_Parse_mDBC07D891D38A5D448C6EED0E1CBD88D3182391D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_LastOr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m19D9FBC49D0F0A14E8C3E2B579B44F37972CA272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m735000F689A7C05146F34D72629A97B9AF74B91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA7DEB916010618A8766BC810E61265C23E35C1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6F28A9E8D60E3C72A77CAE0F80EA5A692449DE47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD6BF11414BC5D79E0044192FF8B4649AF599DF5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5259BBE40770C04124F4F7661A9424B1F3DFC95E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1343AD26E7BFA434BEA1CFA26C82EEDE7FF231FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m4D9F9A4E6883B6702F3573845A5A55D1D8C3B253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_mCA991CE5FE0FC7825FA2B84B9E7CB6C89D8E9DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionBodyGrammar_Parse_m12CB4CEB6DA5B36615E6A45202E84BE0CD7F15F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Add_m18CC1F4FB57BA25153CD7430283D459F4ED135C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_And_m1FC8A66790A80733B0B44A4DC2ED47D17DFFE158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Divide_m113F07743924C46DC992C3C966373D4006A6DF70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_ExclusiveOr_mC199D940A4F56AE6B9A513AB1516A47B0D5FDF07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Modulo_mD9E4CF627F34A2E16203F5C8CEA45EFA268494AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Multiply_mDDE22DF5C101E30E8E354F40CCCE373E7A8984F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Or_m57F02F6E25D92F1BECAD78DD66D991AA399CF00E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Subtract_m5FB9D33496137B06E285DB37ED4C6FDEC52F3506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_m02E7A90CFFC20EFB0BADE70F746FE74E0F76B318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetOperatorDataU3Eb__13_2_m9736B5A7BA1BD17348C51AA0BEB6271321185295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetOperatorDataU3Eb__13_3_m73CF5CA3EB086BC9F67733DAB658773CE2B41985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__0_mEEB8D63F3050061943BE723E601DB8B87ABA9CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__1_m6582762DAA5AF196F2B19204239FF0BA09CFC28B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__4_m31DD2BFEC90D58B7E788AEC0DE8339676838FC6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__5_m69297D4E9C78AF409838922FC94DD3D4F30745F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__6_mDA52C6699F0E91D778355BB27208557A0FBA7C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t652D0468F2AE29FBAEACDAB421E366BEF3024F66 
{
};

// System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>
struct Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC59B74C7FE87284D1F2F89D0C325782BDB366240* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t017D0D19CD44A4B2EC6910ED11C31EF908139193* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3096943BCBEE2CAD68B7E71DF88EB56F35268D81* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Char>
struct HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tD44C55E6E47FEF298803610AD06DE64ADD2843E9* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};
struct Il2CppArrayBounds;

// QFSW.QC.Grammar.BinaryOperatorData
struct BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853  : public RuntimeObject
{
	// System.Type QFSW.QC.Grammar.BinaryOperatorData::<LArg>k__BackingField
	Type_t* ___U3CLArgU3Ek__BackingField_0;
	// System.Type QFSW.QC.Grammar.BinaryOperatorData::<RArg>k__BackingField
	Type_t* ___U3CRArgU3Ek__BackingField_1;
	// System.Type QFSW.QC.Grammar.BinaryOperatorData::<Ret>k__BackingField
	Type_t* ___U3CRetU3Ek__BackingField_2;
	// System.Reflection.MethodInfo QFSW.QC.Grammar.BinaryOperatorData::_method
	MethodInfo_t* ____method_3;
};

// QFSW.QC.Grammar.BinaryOperatorGrammar
struct BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex QFSW.QC.Grammar.BinaryOperatorGrammar::_operatorRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____operatorRegex_0;
	// System.Collections.Generic.HashSet`1<System.Type> QFSW.QC.Grammar.BinaryOperatorGrammar::_missingOperatorTable
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ____missingOperatorTable_1;
	// System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator> QFSW.QC.Grammar.BinaryOperatorGrammar::_foundOperatorTable
	Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* ____foundOperatorTable_2;
};

// QFSW.QC.Grammar.BooleanNegationGrammar
struct BooleanNegationGrammar_t0D250C96BEFBCDCE51245490AC3EBA9269F26143  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex QFSW.QC.Grammar.BooleanNegationGrammar::_negationRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____negationRegex_0;
};

// QFSW.QC.Grammar.DynamicBinaryOperator
struct DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987  : public RuntimeObject
{
	// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::<LArg>k__BackingField
	Type_t* ___U3CLArgU3Ek__BackingField_0;
	// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::<RArg>k__BackingField
	Type_t* ___U3CRArgU3Ek__BackingField_1;
	// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::<Ret>k__BackingField
	Type_t* ___U3CRetU3Ek__BackingField_2;
	// System.Delegate QFSW.QC.Grammar.DynamicBinaryOperator::_del
	Delegate_t* ____del_3;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// QFSW.QC.Grammar.ExpressionBodyGrammar
struct ExpressionBodyGrammar_tF4B909017AC355DCB00C4DB371F4FFA62272C033  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex QFSW.QC.Grammar.ExpressionBodyGrammar::_expressionBodyRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____expressionBodyRegex_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// QFSW.QC.TextProcessing
struct TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2  : public RuntimeObject
{
};

struct TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_StaticFields
{
	// System.Char[] QFSW.QC.TextProcessing::DefaultLeftScopers
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DefaultLeftScopers_0;
	// System.Char[] QFSW.QC.TextProcessing::DefaultRightScopers
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DefaultRightScopers_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c
struct U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F  : public RuntimeObject
{
};

struct U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields
{
	// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<>9
	U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<>9__13_2
	Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* ___U3CU3E9__13_2_1;
	// System.Func`2<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData> QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<>9__13_3
	Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* ___U3CU3E9__13_3_2;
};

// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F  : public RuntimeObject
{
	// QFSW.QC.Grammar.BinaryOperatorGrammar QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<>4__this
	BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* ___U3CU3E4__this_0;
	// System.Type QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::type
	Type_t* ___type_1;
};

// QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar
struct BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707  : public BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568
{
	// System.Collections.Generic.HashSet`1<System.Char> QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::_operatorChars
	HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* ____operatorChars_3;
	// System.Collections.Generic.HashSet`1<System.Char> QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::_ignoreChars
	HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* ____ignoreChars_4;
};

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Right>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CRightU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Left>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CLeftU3Ek__BackingField_4;
};

// QFSW.QC.Grammar.BitwiseAndOperatorGrammar
struct BitwiseAndOperatorGrammar_t892875ABF548413AF82CFFBB5AAD6E4D89298EFB  : public BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568
{
};

// QFSW.QC.Grammar.BitwiseOrOperatorGrammar
struct BitwiseOrOperatorGrammar_t128A890695EC685A189B74100BA54074BD3515E5  : public BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// QFSW.QC.Grammar.DivisionOperatorGrammar
struct DivisionOperatorGrammar_t7E81DD91339BA99D5A98A63AE76F49B1C6E631EB  : public BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568
{
};

// QFSW.QC.Grammar.ExclusiveOrOperatorGrammar
struct ExclusiveOrOperatorGrammar_t704EDE88069832B7EAB86411D121D1D706A4EC45  : public BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// QFSW.QC.Grammar.ModulusOperatorGrammar
struct ModulusOperatorGrammar_t21AEAA7FC95901C542742C2AF124E7A3D64FF052  : public BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568
{
};

// QFSW.QC.Grammar.MultiplyOperatorGrammar
struct MultiplyOperatorGrammar_tBC731D64EFE7BBF666275606D2D3A3D2628C819F  : public BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568
{
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// QFSW.QC.Grammar.AdditionOperatorGrammar
struct AdditionOperatorGrammar_tF20F94544841891712C19866AEE63EDC55ED2ECD  : public BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// QFSW.QC.Grammar.SubtractionOperatorGrammar
struct SubtractionOperatorGrammar_tFD826B3FBD8046529480E6212A28FBDCE5747A6D  : public BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707
{
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// QFSW.QC.ParserException
struct ParserException_t7E0B243F7F63D45C8A512BECAB147817C92BA289  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`2<QFSW.QC.Grammar.BinaryOperatorData,System.Boolean>
struct Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData>
struct Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164  : public MulticastDelegate_t
{
};

// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression>
struct Func_3_tA7FA388FACF187B730F8EAC56368A51607127961  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Type,System.Object>
struct Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// QFSW.QC.ParserInputException
struct ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3  : public ParserException_t7E0B243F7F63D45C8A512BECAB147817C92BA289
{
};

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// QFSW.QC.Grammar.BinaryOperatorData[]
struct BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923  : public RuntimeArray
{
	ALIGN_FIELD (8) BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* m_Items[1];

	inline BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Int32> QFSW.QC.TextProcessing::GetScopedSplitPoints<System.Object>(System.String,System.Char,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextProcessing_GetScopedSplitPoints_TisRuntimeObject_m5E2F659B20AAE88E1FA07FD39D5CDF5A747B399C_gshared (String_t* ___input0, Il2CppChar ___splitChar1, RuntimeObject* ___leftScopers2, RuntimeObject* ___rightScopers3, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1343AD26E7BFA434BEA1CFA26C82EEDE7FF231FE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Char>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B_gshared (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* __this, Il2CppChar ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853_gshared (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Char>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_gshared (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* __this, Il2CppChar ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// T QFSW.QC.Utilities.CollectionExtensions::LastOr<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionExtensions_LastOr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m19D9FBC49D0F0A14E8C3E2B579B44F37972CA272_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7 (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryAndUnaryOperatorGrammar__ctor_m0137D401D251ACFB11F6171E6CAC425D78D3B3D0 (BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Int32> QFSW.QC.TextProcessing::GetScopedSplitPoints<System.Char[]>(System.String,System.Char,T,T)
inline RuntimeObject* TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_m02E7A90CFFC20EFB0BADE70F746FE74E0F76B318 (String_t* ___input0, Il2CppChar ___splitChar1, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___leftScopers2, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___rightScopers3, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, Il2CppChar, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))TextProcessing_GetScopedSplitPoints_TisRuntimeObject_m5E2F659B20AAE88E1FA07FD39D5CDF5A747B399C_gshared)(___input0, ___splitChar1, ___leftScopers2, ___rightScopers3, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1343AD26E7BFA434BEA1CFA26C82EEDE7FF231FE (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1343AD26E7BFA434BEA1CFA26C82EEDE7FF231FE_gshared)(___source0, method);
}
// System.Boolean QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::IsValidBinaryOperator(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryAndUnaryOperatorGrammar_IsValidBinaryOperator_m6599913AC460810AC9A4A1EA9AE6B5D308B1E254 (BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707* __this, String_t* ___value0, int32_t ___position1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Char>::Contains(T)
inline bool HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A*, Il2CppChar, const RuntimeMethod*))HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Char>::.ctor()
inline void HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853 (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A*, const RuntimeMethod*))HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Char>::Add(T)
inline bool HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A*, Il2CppChar, const RuntimeMethod*))HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_gshared)(__this, ___item0, method);
}
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3 (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Contains(T)
inline bool HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar::IsSyntaxMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryOperatorGrammar_IsSyntaxMatch_m9E17D6166B6FEFC63AD0C453258D41EBA4B1CB34 (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA7DEB916010618A8766BC810E61265C23E35C1F9 (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// QFSW.QC.Grammar.IBinaryOperator QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorData(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryOperatorGrammar_GetOperatorData_mD9D0A9B7875E7C51E6C43C4AC36922C37B43907D (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>::Add(TKey,TValue)
inline void Dictionary_2_Add_m735000F689A7C05146F34D72629A97B9AF74B91B (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(T)
inline bool HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1 (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m8A586D167BAF005A949FE7DA1EDBC08216A5F3D4 (U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.String QFSW.QC.Utilities.ReflectionExtensions::GetDisplayName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_GetDisplayName_mB54D69C23D18477259E12B2102276D2FC647B700 (Type_t* ___type0, bool ___includeNamespace1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.MethodInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0 (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD (RuntimeObject* ___source0, Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m885DC456521D4C851E28A007A12909BC639DEA16 (Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m4D9F9A4E6883B6702F3573845A5A55D1D8C3B253 (RuntimeObject* ___source0, Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<QFSW.QC.Grammar.BinaryOperatorData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923* Enumerable_ToArray_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_mCA991CE5FE0FC7825FA2B84B9E7CB6C89D8E9DF7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void System.Func`2<QFSW.QC.Grammar.BinaryOperatorData,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB6397F5F470FA57A4AB7C3653FB8DAFFC24E1FDC (Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<QFSW.QC.Grammar.BinaryOperatorData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7 (RuntimeObject* ___source0, Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F* ___predicate1, const RuntimeMethod* method)
{
	return ((  BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* (*) (RuntimeObject*, Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m89A7FC9E77581DB0D6C05F91BD328EDCA61A19BA_gshared)(___source0, ___predicate1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<QFSW.QC.Grammar.BinaryOperatorData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5259BBE40770C04124F4F7661A9424B1F3DFC95E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318 (Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression>::Invoke(T1,T2)
inline BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* Func_3_Invoke_m55BC1EE8FD256D820EACE88496A511EBDF451E2E_inline (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* __this, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg10, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg21, const RuntimeMethod* method)
{
	return ((  BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* (*) (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression::Lambda(System.Linq.Expressions.Expression,System.Boolean,System.Linq.Expressions.ParameterExpression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* Expression_Lambda_m5955FC45317F05AF168E359D2D5297A3DFC3CC56 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___body0, bool ___tailCall1, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___parameters2, const RuntimeMethod* method) ;
// System.Delegate System.Linq.Expressions.LambdaExpression::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7 (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.Grammar.DynamicBinaryOperator::.ctor(System.Delegate,System.Type,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicBinaryOperator__ctor_m1F5CEC10EC95358710AC177F6E0E43D3E22EBF59 (DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987* __this, Delegate_t* ___del0, Type_t* ___lArg1, Type_t* ___rArg2, Type_t* ___ret3, const RuntimeMethod* method) ;
// T QFSW.QC.Utilities.CollectionExtensions::LastOr<System.Int32>(System.Collections.Generic.IEnumerable`1<T>,T)
inline int32_t CollectionExtensions_LastOr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m19D9FBC49D0F0A14E8C3E2B579B44F37972CA272 (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, const RuntimeMethod*))CollectionExtensions_LastOr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m19D9FBC49D0F0A14E8C3E2B579B44F37972CA272_gshared)(___source0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_mD6BF11414BC5D79E0044192FF8B4649AF599DF5F (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// TResult System.Func`3<System.String,System.Type,System.Object>::Invoke(T1,T2)
inline RuntimeObject* Func_3_Invoke_m6ED93010CEAE74B9A86E809C14F43BA5EDCF4EFE_inline (Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839* __this, String_t* ___arg10, Type_t* ___arg21, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839*, String_t*, Type_t*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>::.ctor()
inline void Dictionary_2__ctor_m6F28A9E8D60E3C72A77CAE0F80EA5A692449DE47 (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_LArg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* BinaryOperatorData_get_LArg_m22DA9591E63B14500D1CCC142DFB249DEA8D6470_inline (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, const RuntimeMethod* method) ;
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_RArg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* BinaryOperatorData_get_RArg_m4B0170F1BECCC36D57CBE9D615FC66D18F94444A_inline (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC5A65CA2DAB277CADC9A91B16E97796A9F33EBED (U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.Grammar.BinaryOperatorData::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryOperatorData__ctor_mA99223B536ACC8B87B5E149C7447E82CE2B6542C (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, MethodInfo_t* ___OperatorMethod0, const RuntimeMethod* method) ;
// System.Object System.Delegate::DynamicInvoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4 (Delegate_t* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String QFSW.QC.TextProcessing::ReduceScope(System.String,System.Char,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextProcessing_ReduceScope_m879F77497142F1C4E1CB57A43EA1A1080A3881A9 (String_t* ___input0, Il2CppChar ___leftScoper1, Il2CppChar ___rightScoper2, int32_t ___maxReduction3, const RuntimeMethod* method) ;
// System.Object QFSW.QC.QuantumConsoleProcessor::InvokeCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuantumConsoleProcessor_InvokeCommand_m0A419878E9149CC8A2A8866CC35074DC3F247B82 (String_t* ___commandString0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void QFSW.QC.ParserInputException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserInputException__ctor_m9DB00413A928FA4273AB31BF73D895AA2B22F211 (ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions::IsCastableTo(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsCastableTo_m77CCEE3F1DDC3DD313B01E210EB551849F02134B (Type_t* ___from0, Type_t* ___to1, bool ___implicitly2, const RuntimeMethod* method) ;
// System.Object QFSW.QC.Utilities.ReflectionExtensions::Cast(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionExtensions_Cast_m9451CE0B95C1639F8476F26BEB6A8CFB26A53BB2 (Type_t* ___type0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
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
// System.Int32 QFSW.QC.Grammar.AdditionOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdditionOperatorGrammar_get_Precedence_m7EDFE3D4229CB5AE77634D51691FA4643994A933 (AdditionOperatorGrammar_tF20F94544841891712C19866AEE63EDC55ED2ECD* __this, const RuntimeMethod* method) 
{
	{
		// public override int Precedence => 0;
		return 0;
	}
}
// System.Char QFSW.QC.Grammar.AdditionOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AdditionOperatorGrammar_get_OperatorToken_m76196886D9A174D6C322592862410C162578CD7A (AdditionOperatorGrammar_tF20F94544841891712C19866AEE63EDC55ED2ECD* __this, const RuntimeMethod* method) 
{
	{
		// protected override char OperatorToken => '+';
		return ((int32_t)43);
	}
}
// System.String QFSW.QC.Grammar.AdditionOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdditionOperatorGrammar_get_OperatorMethodName_mE0D447859F563B877A0E317231B4D9882BDEFAB8 (AdditionOperatorGrammar_tF20F94544841891712C19866AEE63EDC55ED2ECD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string OperatorMethodName => "op_Addition";
		return _stringLiteralA7F05001843983A3F6D671FC591DB8FC9139A826;
	}
}
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.AdditionOperatorGrammar::get_PrimitiveExpressionGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* AdditionOperatorGrammar_get_PrimitiveExpressionGenerator_m64ED5D3A925AC105CEF596EDC73483095CCCDD4D (AdditionOperatorGrammar_tF20F94544841891712C19866AEE63EDC55ED2ECD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Add_m18CC1F4FB57BA25153CD7430283D459F4ED135C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Add;
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_0 = (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*)il2cpp_codegen_object_new(Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7(L_0, NULL, (intptr_t)((void*)Expression_Add_m18CC1F4FB57BA25153CD7430283D459F4ED135C9_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.AdditionOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionOperatorGrammar__ctor_mF2E97A58607046E8E4299D07B0B69E8DFFCE6223 (AdditionOperatorGrammar_tF20F94544841891712C19866AEE63EDC55ED2ECD* __this, const RuntimeMethod* method) 
{
	{
		BinaryAndUnaryOperatorGrammar__ctor_m0137D401D251ACFB11F6171E6CAC425D78D3B3D0(__this, NULL);
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
// System.Int32 QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::GetOperatorPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryAndUnaryOperatorGrammar_GetOperatorPosition_m068CCA91CF6B7F0DF5E189D2BA52C348C96EAFEC (BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1343AD26E7BFA434BEA1CFA26C82EEDE7FF231FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_m02E7A90CFFC20EFB0BADE70F746FE74E0F76B318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// IEnumerable<int> splitPoints = TextProcessing.GetScopedSplitPoints(value, OperatorToken, TextProcessing.DefaultLeftScopers, TextProcessing.DefaultRightScopers);
		String_t* L_0 = ___value0;
		Il2CppChar L_1;
		L_1 = VirtualFuncInvoker0< Il2CppChar >::Invoke(8 /* System.Char QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorToken() */, __this);
		il2cpp_codegen_runtime_class_init_inline(TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ((TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_StaticFields*)il2cpp_codegen_static_fields_for(TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var))->___DefaultLeftScopers_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ((TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_StaticFields*)il2cpp_codegen_static_fields_for(TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var))->___DefaultRightScopers_1;
		RuntimeObject* L_4;
		L_4 = TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_m02E7A90CFFC20EFB0BADE70F746FE74E0F76B318(L_0, L_1, L_2, L_3, TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_m02E7A90CFFC20EFB0BADE70F746FE74E0F76B318_RuntimeMethod_var);
		// foreach (int index in splitPoints.Reverse())
		RuntimeObject* L_5;
		L_5 = Enumerable_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1343AD26E7BFA434BEA1CFA26C82EEDE7FF231FE(L_4, Enumerable_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1343AD26E7BFA434BEA1CFA26C82EEDE7FF231FE_RuntimeMethod_var);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_004b;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_004b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_0023_1:
			{
				// foreach (int index in splitPoints.Reverse())
				RuntimeObject* L_9 = V_0;
				int32_t L_10;
				L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				// if (IsValidBinaryOperator(value, index))
				String_t* L_11 = ___value0;
				int32_t L_12 = V_1;
				bool L_13;
				L_13 = BinaryAndUnaryOperatorGrammar_IsValidBinaryOperator_m6599913AC460810AC9A4A1EA9AE6B5D308B1E254(__this, L_11, L_12, NULL);
				if (!L_13)
				{
					goto IL_0038_1;
				}
			}
			{
				// return index;
				int32_t L_14 = V_1;
				V_2 = L_14;
				goto IL_004e;
			}

IL_0038_1:
			{
				// foreach (int index in splitPoints.Reverse())
				RuntimeObject* L_15 = V_0;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// return -1;
		return (-1);
	}

IL_004e:
	{
		// }
		int32_t L_17 = V_2;
		return L_17;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::IsValidBinaryOperator(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryAndUnaryOperatorGrammar_IsValidBinaryOperator_m6599913AC460810AC9A4A1EA9AE6B5D308B1E254 (BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707* __this, String_t* ___value0, int32_t ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		goto IL_002f;
	}

IL_0002:
	{
		// char ch = value[--position];
		String_t* L_0 = ___value0;
		int32_t L_1 = ___position1;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		___position1 = L_2;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_2, NULL);
		V_0 = L_3;
		// if (_operatorChars.Contains(ch)) { return false; }
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_4 = __this->____operatorChars_3;
		Il2CppChar L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B(L_4, L_5, HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		// if (_operatorChars.Contains(ch)) { return false; }
		return (bool)0;
	}

IL_001f:
	{
		// if (!_ignoreChars.Contains(ch)) { return true; }
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_7 = __this->____ignoreChars_4;
		Il2CppChar L_8 = V_0;
		bool L_9;
		L_9 = HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B(L_7, L_8, HashSet_1_Contains_mE60FDE27327895B50551345B5D75DFDD5349801B_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		// if (!_ignoreChars.Contains(ch)) { return true; }
		return (bool)1;
	}

IL_002f:
	{
		// while (position > 0)
		int32_t L_10 = ___position1;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryAndUnaryOperatorGrammar__ctor_m0137D401D251ACFB11F6171E6CAC425D78D3B3D0 (BinaryAndUnaryOperatorGrammar_tA63887C12D1827C756068088F8D29C5301F01707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HashSet<char> _operatorChars = new HashSet<char>()
		// {
		//     '+',
		//     '-',
		//     '*',
		//     '/',
		//     '&',
		//     '|',
		//     '^',
		//     '=',
		//     '!',
		//     ','
		// };
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_0 = (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A*)il2cpp_codegen_object_new(HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853(L_0, HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_1 = L_0;
		bool L_2;
		L_2 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_1, ((int32_t)43), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_3 = L_1;
		bool L_4;
		L_4 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_3, ((int32_t)45), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_5 = L_3;
		bool L_6;
		L_6 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_5, ((int32_t)42), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_7 = L_5;
		bool L_8;
		L_8 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_7, ((int32_t)47), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_9 = L_7;
		bool L_10;
		L_10 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_9, ((int32_t)38), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_11 = L_9;
		bool L_12;
		L_12 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_11, ((int32_t)124), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_13 = L_11;
		bool L_14;
		L_14 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_13, ((int32_t)94), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_15 = L_13;
		bool L_16;
		L_16 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_15, ((int32_t)61), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_17 = L_15;
		bool L_18;
		L_18 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_17, ((int32_t)33), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_19 = L_17;
		bool L_20;
		L_20 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_19, ((int32_t)44), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		__this->____operatorChars_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____operatorChars_3), (void*)L_19);
		// private readonly HashSet<char> _ignoreChars = new HashSet<char>()
		// {
		//     ' ',
		//     '\0'
		// };
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_21 = (HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A*)il2cpp_codegen_object_new(HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853(L_21, HashSet_1__ctor_m0468553BC44FAC4BA6BA8F517CBD7C8D42F42853_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_22 = L_21;
		bool L_23;
		L_23 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_22, ((int32_t)32), HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		HashSet_1_t699860DBA06D8F002CD3C64E462BF860ACAD5E9A* L_24 = L_22;
		bool L_25;
		L_25 = HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A(L_24, 0, HashSet_1_Add_mC54C49D2322343A65275FF0C6DCCA0948B6AD12A_RuntimeMethod_var);
		__this->____ignoreChars_4 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ignoreChars_4), (void*)L_24);
		BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3(__this, NULL);
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
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_LArg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* BinaryOperatorData_get_LArg_m22DA9591E63B14500D1CCC142DFB249DEA8D6470 (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, const RuntimeMethod* method) 
{
	{
		// public Type LArg { get; }
		Type_t* L_0 = __this->___U3CLArgU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_RArg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* BinaryOperatorData_get_RArg_m4B0170F1BECCC36D57CBE9D615FC66D18F94444A (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, const RuntimeMethod* method) 
{
	{
		// public Type RArg { get; }
		Type_t* L_0 = __this->___U3CRArgU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_Ret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* BinaryOperatorData_get_Ret_m7DBF835DDFB26C2FF0FABC14E9DF50D1D3A8A34A (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, const RuntimeMethod* method) 
{
	{
		// public Type Ret { get; }
		Type_t* L_0 = __this->___U3CRetU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.BinaryOperatorData::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryOperatorData__ctor_mA99223B536ACC8B87B5E149C7447E82CE2B6542C (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, MethodInfo_t* ___OperatorMethod0, const RuntimeMethod* method) 
{
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	{
		// public BinaryOperatorData(MethodInfo OperatorMethod)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _method = OperatorMethod;
		MethodInfo_t* L_0 = ___OperatorMethod0;
		__this->____method_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____method_3), (void*)L_0);
		// Ret = OperatorMethod.ReturnType;
		MethodInfo_t* L_1 = ___OperatorMethod0;
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_1);
		__this->___U3CRetU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRetU3Ek__BackingField_2), (void*)L_2);
		// ParameterInfo[] paramData = _method.GetParameters();
		MethodInfo_t* L_3 = __this->____method_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4;
		L_4 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		V_0 = L_4;
		// if (paramData.Length != 2)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)2)))
		{
			goto IL_0043;
		}
	}
	{
		// throw new ArgumentException($"Cannot create a binary operator from a method with {paramData.Length} parameters");
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_6 = V_0;
		int32_t L_7 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral463882660D6BFBE518325492F5169A54BAEFA594)), L_8, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BinaryOperatorData__ctor_mA99223B536ACC8B87B5E149C7447E82CE2B6542C_RuntimeMethod_var)));
	}

IL_0043:
	{
		// LArg = paramData[0].ParameterType;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_11 = V_0;
		int32_t L_12 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		__this->___U3CLArgU3Ek__BackingField_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLArgU3Ek__BackingField_0), (void*)L_14);
		// RArg = paramData[1].ParameterType;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_15 = V_0;
		int32_t L_16 = 1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_17);
		__this->___U3CRArgU3Ek__BackingField_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRArgU3Ek__BackingField_1), (void*)L_18);
		// }
		return;
	}
}
// System.Object QFSW.QC.Grammar.BinaryOperatorData::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryOperatorData_Invoke_mC57FF503714B5066B3315936AEDB4901E53B6EF3 (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _method.Invoke(null, new[] { left, right });
		MethodInfo_t* L_0 = __this->____method_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___left0;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___right1;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		RuntimeObject* L_6;
		L_6 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, NULL, L_4, NULL);
		return L_6;
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
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar::Match(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryOperatorGrammar_Match_mFAAA8A7B05DC2BAA1E03EFD4E46003B1C4A44A1C (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, String_t* ___value0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m735000F689A7C05146F34D72629A97B9AF74B91B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA7DEB916010618A8766BC810E61265C23E35C1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_missingOperatorTable.Contains(type))
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_0 = __this->____missingOperatorTable_1;
		Type_t* L_1 = ___type1;
		bool L_2;
		L_2 = HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D(L_0, L_1, HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (!IsSyntaxMatch(value))
		String_t* L_3 = ___value0;
		bool L_4;
		L_4 = BinaryOperatorGrammar_IsSyntaxMatch_m9E17D6166B6FEFC63AD0C453258D41EBA4B1CB34(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001b:
	{
		// if (_foundOperatorTable.ContainsKey(type))
		Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* L_5 = __this->____foundOperatorTable_2;
		Type_t* L_6 = ___type1;
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mA7DEB916010618A8766BC810E61265C23E35C1F9(L_5, L_6, Dictionary_2_ContainsKey_mA7DEB916010618A8766BC810E61265C23E35C1F9_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// IBinaryOperator operatorData = GetOperatorData(type);
		Type_t* L_8 = ___type1;
		RuntimeObject* L_9;
		L_9 = BinaryOperatorGrammar_GetOperatorData_mD9D0A9B7875E7C51E6C43C4AC36922C37B43907D(__this, L_8, NULL);
		V_0 = L_9;
		// if (operatorData != null)
		RuntimeObject* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		// _foundOperatorTable.Add(type, operatorData);
		Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* L_11 = __this->____foundOperatorTable_2;
		Type_t* L_12 = ___type1;
		RuntimeObject* L_13 = V_0;
		Dictionary_2_Add_m735000F689A7C05146F34D72629A97B9AF74B91B(L_11, L_12, L_13, Dictionary_2_Add_m735000F689A7C05146F34D72629A97B9AF74B91B_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0045:
	{
		// _missingOperatorTable.Add(type);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_14 = __this->____missingOperatorTable_1;
		Type_t* L_15 = ___type1;
		bool L_16;
		L_16 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_14, L_15, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar::IsSyntaxMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryOperatorGrammar_IsSyntaxMatch_m9E17D6166B6FEFC63AD0C453258D41EBA4B1CB34 (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9965264187D9FE5AE1984DE641846CF5481D8C5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_operatorRegex == null)
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = __this->____operatorRegex_0;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// _operatorRegex = new Regex($@"^.+\{OperatorToken}.+$");
		Il2CppChar L_1;
		L_1 = VirtualFuncInvoker0< Il2CppChar >::Invoke(8 /* System.Char QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorToken() */, __this);
		Il2CppChar L_2 = L_1;
		RuntimeObject* L_3 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB9965264187D9FE5AE1984DE641846CF5481D8C5, L_3, NULL);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_5 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_5, L_4, NULL);
		__this->____operatorRegex_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____operatorRegex_0), (void*)L_5);
	}

IL_0028:
	{
		// if (!_operatorRegex.IsMatch(value))
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_6 = __this->____operatorRegex_0;
		String_t* L_7 = ___value0;
		bool L_8;
		L_8 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// int operatorPos = GetOperatorPosition(value);
		String_t* L_9 = ___value0;
		int32_t L_10;
		L_10 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorPosition(System.String) */, __this, L_9);
		V_0 = L_10;
		// return operatorPos > 0 && operatorPos < value.Length;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_12 = V_0;
		String_t* L_13 = ___value0;
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		return (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
	}

IL_004e:
	{
		return (bool)0;
	}
}
// QFSW.QC.Grammar.IBinaryOperator QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorData(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryOperatorGrammar_GetOperatorData_mD9D0A9B7875E7C51E6C43C4AC36922C37B43907D (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5259BBE40770C04124F4F7661A9424B1F3DFC95E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m4D9F9A4E6883B6702F3573845A5A55D1D8C3B253_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_mCA991CE5FE0FC7825FA2B84B9E7CB6C89D8E9DF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetOperatorDataU3Eb__13_2_m9736B5A7BA1BD17348C51AA0BEB6271321185295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetOperatorDataU3Eb__13_3_m73CF5CA3EB086BC9F67733DAB658773CE2B41985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__0_mEEB8D63F3050061943BE723E601DB8B87ABA9CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__1_m6582762DAA5AF196F2B19204239FF0BA09CFC28B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__4_m31DD2BFEC90D58B7E788AEC0DE8339676838FC6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__5_m69297D4E9C78AF409838922FC94DD3D4F30745F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__6_mDA52C6699F0E91D778355BB27208557A0FBA7C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AC755D1A049FCBE83614D6BFAC33ED2812E66CF);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* V_0 = NULL;
	BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923* V_1 = NULL;
	String_t* V_2 = NULL;
	Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* G_B10_0 = NULL;
	BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* G_B7_0 = NULL;
	BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* G_B8_0 = NULL;
	BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_0 = (U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m8A586D167BAF005A949FE7DA1EDBC08216A5F3D4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_1 = V_0;
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_2 = V_0;
		Type_t* L_3 = ___type0;
		L_2->___type_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___type_1), (void*)L_3);
		// if (type.IsPrimitive)
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_4 = V_0;
		Type_t* L_5 = L_4->___type_1;
		bool L_6;
		L_6 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_5, NULL);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// string typeName = QFSW.QC.Utilities.ReflectionExtensions.GetDisplayName(type);
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_7 = V_0;
		Type_t* L_8 = L_7->___type_1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = ReflectionExtensions_GetDisplayName_mB54D69C23D18477259E12B2102276D2FC647B700(L_8, (bool)0, NULL);
		V_2 = L_9;
		// UnityEngine.Debug.LogWarning($"{typeName} {OperatorToken} {typeName} is not supported as IL2CPP does not support dynamic value typed generics.");
		String_t* L_10 = V_2;
		Il2CppChar L_11;
		L_11 = VirtualFuncInvoker0< Il2CppChar >::Invoke(8 /* System.Char QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorToken() */, __this);
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = V_2;
		String_t* L_15;
		L_15 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral0AC755D1A049FCBE83614D6BFAC33ED2812E66CF, L_10, L_13, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_15, NULL);
	}

IL_004a:
	{
		// MethodInfo[] methods = type.GetMethods(BindingFlags.Public | BindingFlags.Static);
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_16 = V_0;
		Type_t* L_17 = L_16->___type_1;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_18;
		L_18 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(96 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_17, ((int32_t)24));
		// BinaryOperatorData[] candidates = methods.Where(x => x.Name == OperatorMethodName)
		//                                          .Where(x => x.ReturnType == type)
		//                                          .Where(x => x.GetParameters().Length == 2)
		//                                          .Select(x => new BinaryOperatorData(x))
		//                                          .ToArray();
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_19 = V_0;
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_20 = (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*)il2cpp_codegen_object_new(Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__0_mEEB8D63F3050061943BE723E601DB8B87ABA9CBC_RuntimeMethod_var), NULL);
		RuntimeObject* L_21;
		L_21 = Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD((RuntimeObject*)L_18, L_20, Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD_RuntimeMethod_var);
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_22 = V_0;
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_23 = (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*)il2cpp_codegen_object_new(Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__1_m6582762DAA5AF196F2B19204239FF0BA09CFC28B_RuntimeMethod_var), NULL);
		RuntimeObject* L_24;
		L_24 = Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD(L_21, L_23, Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var);
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_25 = ((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9__13_2_1;
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_26 = L_25;
		G_B3_0 = L_26;
		G_B3_1 = L_24;
		if (L_26)
		{
			G_B4_0 = L_26;
			G_B4_1 = L_24;
			goto IL_0098;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var);
		U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F* L_27 = ((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_28 = (Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164*)il2cpp_codegen_object_new(Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164_il2cpp_TypeInfo_var);
		Func_2__ctor_m85EFD3541E8A8498FD05A6169ED11E00D408A2F0(L_28, L_27, (intptr_t)((void*)U3CU3Ec_U3CGetOperatorDataU3Eb__13_2_m9736B5A7BA1BD17348C51AA0BEB6271321185295_RuntimeMethod_var), NULL);
		Func_2_t48B62DF57727FFB990D76F189BB41D4DC86FF164* L_29 = L_28;
		((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9__13_2_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9__13_2_1), (void*)L_29);
		G_B4_0 = L_29;
		G_B4_1 = G_B3_1;
	}

IL_0098:
	{
		RuntimeObject* L_30;
		L_30 = Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD(G_B4_1, G_B4_0, Enumerable_Where_TisMethodInfo_t_mCC9C03022907A007A75315AF95C22E4FD1AF78DD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var);
		Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* L_31 = ((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9__13_3_2;
		Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* L_32 = L_31;
		G_B5_0 = L_32;
		G_B5_1 = L_30;
		if (L_32)
		{
			G_B6_0 = L_32;
			G_B6_1 = L_30;
			goto IL_00bc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var);
		U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F* L_33 = ((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* L_34 = (Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D*)il2cpp_codegen_object_new(Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D_il2cpp_TypeInfo_var);
		Func_2__ctor_m885DC456521D4C851E28A007A12909BC639DEA16(L_34, L_33, (intptr_t)((void*)U3CU3Ec_U3CGetOperatorDataU3Eb__13_3_m73CF5CA3EB086BC9F67733DAB658773CE2B41985_RuntimeMethod_var), NULL);
		Func_2_t21ABFBCE108BE4ACA9DF3F945944D0FDFCBFC40D* L_35 = L_34;
		((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9__13_3_2 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9__13_3_2), (void*)L_35);
		G_B6_0 = L_35;
		G_B6_1 = G_B5_1;
	}

IL_00bc:
	{
		RuntimeObject* L_36;
		L_36 = Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m4D9F9A4E6883B6702F3573845A5A55D1D8C3B253(G_B6_1, G_B6_0, Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m4D9F9A4E6883B6702F3573845A5A55D1D8C3B253_RuntimeMethod_var);
		BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923* L_37;
		L_37 = Enumerable_ToArray_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_mCA991CE5FE0FC7825FA2B84B9E7CB6C89D8E9DF7(L_36, Enumerable_ToArray_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_mCA991CE5FE0FC7825FA2B84B9E7CB6C89D8E9DF7_RuntimeMethod_var);
		V_1 = L_37;
		// BinaryOperatorData idealCandidate = candidates.FirstOrDefault(x => x.LArg == type && x.RArg == type)
		//                                  ?? candidates.FirstOrDefault(x => x.LArg == type)
		//                                  ?? candidates.FirstOrDefault(x => x.RArg == type)
		//                                  ?? candidates.FirstOrDefault();
		BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923* L_38 = V_1;
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_39 = V_0;
		Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F* L_40 = (Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F*)il2cpp_codegen_object_new(Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F_il2cpp_TypeInfo_var);
		Func_2__ctor_mB6397F5F470FA57A4AB7C3653FB8DAFFC24E1FDC(L_40, L_39, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__4_m31DD2BFEC90D58B7E788AEC0DE8339676838FC6A_RuntimeMethod_var), NULL);
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_41;
		L_41 = Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7((RuntimeObject*)L_38, L_40, Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7_RuntimeMethod_var);
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_42 = L_41;
		G_B7_0 = L_42;
		if (L_42)
		{
			G_B10_0 = L_42;
			goto IL_010f;
		}
	}
	{
		BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923* L_43 = V_1;
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_44 = V_0;
		Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F* L_45 = (Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F*)il2cpp_codegen_object_new(Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F_il2cpp_TypeInfo_var);
		Func_2__ctor_mB6397F5F470FA57A4AB7C3653FB8DAFFC24E1FDC(L_45, L_44, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__5_m69297D4E9C78AF409838922FC94DD3D4F30745F7_RuntimeMethod_var), NULL);
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_46;
		L_46 = Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7((RuntimeObject*)L_43, L_45, Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7_RuntimeMethod_var);
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_47 = L_46;
		G_B8_0 = L_47;
		if (L_47)
		{
			G_B10_0 = L_47;
			goto IL_010f;
		}
	}
	{
		BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923* L_48 = V_1;
		U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* L_49 = V_0;
		Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F* L_50 = (Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F*)il2cpp_codegen_object_new(Func_2_t132ABC8E58B79FB5B403FD0DFDD7F98A341D6F9F_il2cpp_TypeInfo_var);
		Func_2__ctor_mB6397F5F470FA57A4AB7C3653FB8DAFFC24E1FDC(L_50, L_49, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__6_mDA52C6699F0E91D778355BB27208557A0FBA7C12_RuntimeMethod_var), NULL);
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_51;
		L_51 = Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7((RuntimeObject*)L_48, L_50, Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5BB9239CE5F920223545F2CA69201D4ED038E4C7_RuntimeMethod_var);
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_52 = L_51;
		G_B9_0 = L_52;
		if (L_52)
		{
			G_B10_0 = L_52;
			goto IL_010f;
		}
	}
	{
		BinaryOperatorDataU5BU5D_t7AC831797ABDA6173146A0FC91B336EC7B495923* L_53 = V_1;
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_54;
		L_54 = Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5259BBE40770C04124F4F7661A9424B1F3DFC95E((RuntimeObject*)L_53, Enumerable_FirstOrDefault_TisBinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_m5259BBE40770C04124F4F7661A9424B1F3DFC95E_RuntimeMethod_var);
		G_B10_0 = L_54;
	}

IL_010f:
	{
		// return idealCandidate;
		return G_B10_0;
	}
}
// QFSW.QC.Grammar.IBinaryOperator QFSW.QC.Grammar.BinaryOperatorGrammar::GeneratePrimitiveOperator(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryOperatorGrammar_GeneratePrimitiveOperator_mC564D31363B52909CC156F0B03D94AA1F6C3D8A7 (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_0 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_1 = NULL;
	BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ParameterExpression leftParam = Expression.Parameter(type, "left");
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_1;
		L_1 = Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318(L_0, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, NULL);
		V_0 = L_1;
		// ParameterExpression rightParam = Expression.Parameter(type, "right");
		Type_t* L_2 = ___type0;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_3;
		L_3 = Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318(L_2, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, NULL);
		V_1 = L_3;
	}
	try
	{// begin try (depth: 1)
		// body = PrimitiveExpressionGenerator(leftParam, rightParam);
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_4;
		L_4 = VirtualFuncInvoker0< Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* >::Invoke(10 /* System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.BinaryOperatorGrammar::get_PrimitiveExpressionGenerator() */, __this);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_5 = V_0;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_6 = V_1;
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_7;
		L_7 = Func_3_Invoke_m55BC1EE8FD256D820EACE88496A511EBDF451E2E_inline(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		// }
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{// begin catch(System.InvalidOperationException)
		// catch (InvalidOperationException)
		// return null;
		V_3 = (RuntimeObject*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	}// end catch (depth: 1)

IL_002d:
	{
		// Delegate expr = Expression.Lambda(body, true, leftParam, rightParam).Compile();
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_8 = V_2;
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_9 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)SZArrayNew(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_10 = L_9;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_11 = V_0;
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_11);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_12 = L_10;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_13 = V_1;
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_13);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_14;
		L_14 = Expression_Lambda_m5955FC45317F05AF168E359D2D5297A3DFC3CC56(L_8, (bool)1, L_12, NULL);
		Delegate_t* L_15;
		L_15 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_14, NULL);
		// return new DynamicBinaryOperator(expr, type, type, type);
		Type_t* L_16 = ___type0;
		Type_t* L_17 = ___type0;
		Type_t* L_18 = ___type0;
		DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987* L_19 = (DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987*)il2cpp_codegen_object_new(DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987_il2cpp_TypeInfo_var);
		DynamicBinaryOperator__ctor_m1F5CEC10EC95358710AC177F6E0E43D3E22EBF59(L_19, L_15, L_16, L_17, L_18, NULL);
		return L_19;
	}

IL_0050:
	{
		// }
		RuntimeObject* L_20 = V_3;
		return L_20;
	}
}
// System.Int32 QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryOperatorGrammar_GetOperatorPosition_m8C923DBF6E9BA5D223F479133ED73B9F1F384E0F (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_LastOr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m19D9FBC49D0F0A14E8C3E2B579B44F37972CA272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_m02E7A90CFFC20EFB0BADE70F746FE74E0F76B318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TextProcessing.GetScopedSplitPoints(value, OperatorToken, TextProcessing.DefaultLeftScopers, TextProcessing.DefaultRightScopers).LastOr(-1);
		String_t* L_0 = ___value0;
		Il2CppChar L_1;
		L_1 = VirtualFuncInvoker0< Il2CppChar >::Invoke(8 /* System.Char QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorToken() */, __this);
		il2cpp_codegen_runtime_class_init_inline(TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ((TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_StaticFields*)il2cpp_codegen_static_fields_for(TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var))->___DefaultLeftScopers_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ((TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_StaticFields*)il2cpp_codegen_static_fields_for(TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var))->___DefaultRightScopers_1;
		RuntimeObject* L_4;
		L_4 = TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_m02E7A90CFFC20EFB0BADE70F746FE74E0F76B318(L_0, L_1, L_2, L_3, TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_m02E7A90CFFC20EFB0BADE70F746FE74E0F76B318_RuntimeMethod_var);
		int32_t L_5;
		L_5 = CollectionExtensions_LastOr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m19D9FBC49D0F0A14E8C3E2B579B44F37972CA272(L_4, (-1), CollectionExtensions_LastOr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m19D9FBC49D0F0A14E8C3E2B579B44F37972CA272_RuntimeMethod_var);
		return L_5;
	}
}
// System.Object QFSW.QC.Grammar.BinaryOperatorGrammar::Parse(System.String,System.Type,System.Func`3<System.String,System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryOperatorGrammar_Parse_mDBC07D891D38A5D448C6EED0E1CBD88D3182391D (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, String_t* ___value0, Type_t* ___type1, Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839* ___recursiveParser2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD6BF11414BC5D79E0044192FF8B4649AF599DF5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBinaryOperator_t6F741E14FD0057203C2F0C7E0E985E8F5305EB39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B4_0 = NULL;
	Exception_t* G_B3_0 = NULL;
	{
		// IBinaryOperator operatorData = _foundOperatorTable[type];
		Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* L_0 = __this->____foundOperatorTable_2;
		Type_t* L_1 = ___type1;
		RuntimeObject* L_2;
		L_2 = Dictionary_2_get_Item_mD6BF11414BC5D79E0044192FF8B4649AF599DF5F(L_0, L_1, Dictionary_2_get_Item_mD6BF11414BC5D79E0044192FF8B4649AF599DF5F_RuntimeMethod_var);
		V_0 = L_2;
		// int splitIndex = GetOperatorPosition(value);
		String_t* L_3 = ___value0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorPosition(System.String) */, __this, L_3);
		V_1 = L_4;
		// string left = value.Substring(0, splitIndex);
		String_t* L_5 = ___value0;
		int32_t L_6 = V_1;
		String_t* L_7;
		L_7 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, 0, L_6, NULL);
		V_2 = L_7;
		// string right = value.Substring(splitIndex + 1);
		String_t* L_8 = ___value0;
		int32_t L_9 = V_1;
		String_t* L_10;
		L_10 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		V_3 = L_10;
		// object leftVal = recursiveParser(left, operatorData.LArg);
		Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839* L_11 = ___recursiveParser2;
		String_t* L_12 = V_2;
		RuntimeObject* L_13 = V_0;
		Type_t* L_14;
		L_14 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* System.Type QFSW.QC.Grammar.IBinaryOperator::get_LArg() */, IBinaryOperator_t6F741E14FD0057203C2F0C7E0E985E8F5305EB39_il2cpp_TypeInfo_var, L_13);
		RuntimeObject* L_15;
		L_15 = Func_3_Invoke_m6ED93010CEAE74B9A86E809C14F43BA5EDCF4EFE_inline(L_11, L_12, L_14, NULL);
		V_4 = L_15;
		// object rightVal = recursiveParser(right, operatorData.RArg);
		Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839* L_16 = ___recursiveParser2;
		String_t* L_17 = V_3;
		RuntimeObject* L_18 = V_0;
		Type_t* L_19;
		L_19 = InterfaceFuncInvoker0< Type_t* >::Invoke(1 /* System.Type QFSW.QC.Grammar.IBinaryOperator::get_RArg() */, IBinaryOperator_t6F741E14FD0057203C2F0C7E0E985E8F5305EB39_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20;
		L_20 = Func_3_Invoke_m6ED93010CEAE74B9A86E809C14F43BA5EDCF4EFE_inline(L_16, L_17, L_19, NULL);
		V_5 = L_20;
	}
	try
	{// begin try (depth: 1)
		// return operatorData.Invoke(leftVal, rightVal);
		RuntimeObject* L_21 = V_0;
		RuntimeObject* L_22 = V_4;
		RuntimeObject* L_23 = V_5;
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(3 /* System.Object QFSW.QC.Grammar.IBinaryOperator::Invoke(System.Object,System.Object) */, IBinaryOperator_t6F741E14FD0057203C2F0C7E0E985E8F5305EB39_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		V_6 = L_24;
		goto IL_0064;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{// begin catch(System.Reflection.TargetInvocationException)
		{
			// catch (TargetInvocationException e)
			V_7 = ((TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*));
			// throw e.InnerException ?? e;
			TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_25 = V_7;
			Exception_t* L_26;
			L_26 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_25, NULL);
			Exception_t* L_27 = L_26;
			G_B3_0 = L_27;
			if (L_27)
			{
				G_B4_0 = L_27;
				goto IL_0063;
			}
		}
		{
			TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_28 = V_7;
			G_B4_0 = ((Exception_t*)(L_28));
		}

IL_0063:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(G_B4_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BinaryOperatorGrammar_Parse_mDBC07D891D38A5D448C6EED0E1CBD88D3182391D_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

IL_0064:
	{
		// }
		RuntimeObject* L_29 = V_6;
		return L_29;
	}
}
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3 (BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6F28A9E8D60E3C72A77CAE0F80EA5A692449DE47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HashSet<Type> _missingOperatorTable = new HashSet<Type>();
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_0 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_0, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		__this->____missingOperatorTable_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____missingOperatorTable_1), (void*)L_0);
		// private readonly Dictionary<Type, IBinaryOperator> _foundOperatorTable = new Dictionary<Type, IBinaryOperator>();
		Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2* L_1 = (Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2*)il2cpp_codegen_object_new(Dictionary_2_tAE104053E3C793F30B8DCC3476F8CDC029CDD3F2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6F28A9E8D60E3C72A77CAE0F80EA5A692449DE47(L_1, Dictionary_2__ctor_m6F28A9E8D60E3C72A77CAE0F80EA5A692449DE47_RuntimeMethod_var);
		__this->____foundOperatorTable_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____foundOperatorTable_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m8A586D167BAF005A949FE7DA1EDBC08216A5F3D4 (U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__0_mEEB8D63F3050061943BE723E601DB8B87ABA9CBC (U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* __this, MethodInfo_t* ___x0, const RuntimeMethod* method) 
{
	{
		// BinaryOperatorData[] candidates = methods.Where(x => x.Name == OperatorMethodName)
		MethodInfo_t* L_0 = ___x0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		BinaryOperatorGrammar_tBAA28F0A6294C0BD7BE48A42AF39D5B844734568* L_2 = __this->___U3CU3E4__this_0;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorMethodName() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__1_m6582762DAA5AF196F2B19204239FF0BA09CFC28B (U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* __this, MethodInfo_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x.ReturnType == type)
		MethodInfo_t* L_0 = ___x0;
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		Type_t* L_2 = __this->___type_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__4(QFSW.QC.Grammar.BinaryOperatorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__4_m31DD2BFEC90D58B7E788AEC0DE8339676838FC6A (U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* __this, BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BinaryOperatorData idealCandidate = candidates.FirstOrDefault(x => x.LArg == type && x.RArg == type)
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_0 = ___x0;
		Type_t* L_1;
		L_1 = BinaryOperatorData_get_LArg_m22DA9591E63B14500D1CCC142DFB249DEA8D6470_inline(L_0, NULL);
		Type_t* L_2 = __this->___type_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_4 = ___x0;
		Type_t* L_5;
		L_5 = BinaryOperatorData_get_RArg_m4B0170F1BECCC36D57CBE9D615FC66D18F94444A_inline(L_4, NULL);
		Type_t* L_6 = __this->___type_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_5, L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__5(QFSW.QC.Grammar.BinaryOperatorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__5_m69297D4E9C78AF409838922FC94DD3D4F30745F7 (U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* __this, BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ?? candidates.FirstOrDefault(x => x.LArg == type)
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_0 = ___x0;
		Type_t* L_1;
		L_1 = BinaryOperatorData_get_LArg_m22DA9591E63B14500D1CCC142DFB249DEA8D6470_inline(L_0, NULL);
		Type_t* L_2 = __this->___type_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__6(QFSW.QC.Grammar.BinaryOperatorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__6_mDA52C6699F0E91D778355BB27208557A0FBA7C12 (U3CU3Ec__DisplayClass13_0_tB2AB7C0CFAED23AD7ED761BBF25B523605B1F75F* __this, BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ?? candidates.FirstOrDefault(x => x.RArg == type)
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_0 = ___x0;
		Type_t* L_1;
		L_1 = BinaryOperatorData_get_RArg_m4B0170F1BECCC36D57CBE9D615FC66D18F94444A_inline(L_0, NULL);
		Type_t* L_2 = __this->___type_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_2, NULL);
		return L_3;
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
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9DCA6C03DDAFA876104186C7F9F070552DAA3234 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F* L_0 = (U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F*)il2cpp_codegen_object_new(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC5A65CA2DAB277CADC9A91B16E97796A9F33EBED(L_0, NULL);
		((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC5A65CA2DAB277CADC9A91B16E97796A9F33EBED (U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<GetOperatorData>b__13_2(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetOperatorDataU3Eb__13_2_m9736B5A7BA1BD17348C51AA0BEB6271321185295 (U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F* __this, MethodInfo_t* ___x0, const RuntimeMethod* method) 
{
	{
		// .Where(x => x.GetParameters().Length == 2)
		MethodInfo_t* L_0 = ___x0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		return (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)2))? 1 : 0);
	}
}
// QFSW.QC.Grammar.BinaryOperatorData QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<GetOperatorData>b__13_3(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* U3CU3Ec_U3CGetOperatorDataU3Eb__13_3_m73CF5CA3EB086BC9F67733DAB658773CE2B41985 (U3CU3Ec_tB29ADE947690F38ECFB98E297FD5FD00BB0BA05F* __this, MethodInfo_t* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(x => new BinaryOperatorData(x))
		MethodInfo_t* L_0 = ___x0;
		BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* L_1 = (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853*)il2cpp_codegen_object_new(BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853_il2cpp_TypeInfo_var);
		BinaryOperatorData__ctor_mA99223B536ACC8B87B5E149C7447E82CE2B6542C(L_1, L_0, NULL);
		return L_1;
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
// System.Int32 QFSW.QC.Grammar.BitwiseAndOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseAndOperatorGrammar_get_Precedence_mAAC19DF0AE9C3FABEEE7A3B0DA3B56659E8273A5 (BitwiseAndOperatorGrammar_t892875ABF548413AF82CFFBB5AAD6E4D89298EFB* __this, const RuntimeMethod* method) 
{
	{
		// public override int Precedence => 6;
		return 6;
	}
}
// System.Char QFSW.QC.Grammar.BitwiseAndOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BitwiseAndOperatorGrammar_get_OperatorToken_m3250609563CC56979A59EE54B4552BC103A5B0A0 (BitwiseAndOperatorGrammar_t892875ABF548413AF82CFFBB5AAD6E4D89298EFB* __this, const RuntimeMethod* method) 
{
	{
		// protected override char OperatorToken => '&';
		return ((int32_t)38);
	}
}
// System.String QFSW.QC.Grammar.BitwiseAndOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitwiseAndOperatorGrammar_get_OperatorMethodName_mB92B7F17FDFE9F807F4B34E1FC61F73925C67830 (BitwiseAndOperatorGrammar_t892875ABF548413AF82CFFBB5AAD6E4D89298EFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral223E609F04608873C57B0D03301EB40933215CEC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string OperatorMethodName => "op_bitwiseAnd";
		return _stringLiteral223E609F04608873C57B0D03301EB40933215CEC;
	}
}
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.BitwiseAndOperatorGrammar::get_PrimitiveExpressionGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* BitwiseAndOperatorGrammar_get_PrimitiveExpressionGenerator_m4B37BB2ADE136C4B55224CA5D2811DA354D80B7A (BitwiseAndOperatorGrammar_t892875ABF548413AF82CFFBB5AAD6E4D89298EFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_And_m1FC8A66790A80733B0B44A4DC2ED47D17DFFE158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.And;
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_0 = (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*)il2cpp_codegen_object_new(Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7(L_0, NULL, (intptr_t)((void*)Expression_And_m1FC8A66790A80733B0B44A4DC2ED47D17DFFE158_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.BitwiseAndOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseAndOperatorGrammar__ctor_m20E187639B138B11B64BD0077A70E1098D6AF33D (BitwiseAndOperatorGrammar_t892875ABF548413AF82CFFBB5AAD6E4D89298EFB* __this, const RuntimeMethod* method) 
{
	{
		BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3(__this, NULL);
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
// System.Int32 QFSW.QC.Grammar.BitwiseOrOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseOrOperatorGrammar_get_Precedence_mE3FAC40EA79F14B278972DB81C4EAA48CFC59027 (BitwiseOrOperatorGrammar_t128A890695EC685A189B74100BA54074BD3515E5* __this, const RuntimeMethod* method) 
{
	{
		// public override int Precedence => 5;
		return 5;
	}
}
// System.Char QFSW.QC.Grammar.BitwiseOrOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BitwiseOrOperatorGrammar_get_OperatorToken_m1048532FB8C33B0AD3036F1CF05DA4990AFFB2A3 (BitwiseOrOperatorGrammar_t128A890695EC685A189B74100BA54074BD3515E5* __this, const RuntimeMethod* method) 
{
	{
		// protected override char OperatorToken => '|';
		return ((int32_t)124);
	}
}
// System.String QFSW.QC.Grammar.BitwiseOrOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitwiseOrOperatorGrammar_get_OperatorMethodName_m52AFE42B8E722F00E9385E01A9A7EB872934BB17 (BitwiseOrOperatorGrammar_t128A890695EC685A189B74100BA54074BD3515E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FA733175233DF3C1380AADE2864F52174029DD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string OperatorMethodName => "op_bitwiseOr";
		return _stringLiteral9FA733175233DF3C1380AADE2864F52174029DD2;
	}
}
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.BitwiseOrOperatorGrammar::get_PrimitiveExpressionGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* BitwiseOrOperatorGrammar_get_PrimitiveExpressionGenerator_m6AB5BBF73079A31DBAA81CB43DE618F0B6550849 (BitwiseOrOperatorGrammar_t128A890695EC685A189B74100BA54074BD3515E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Or_m57F02F6E25D92F1BECAD78DD66D991AA399CF00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Or;
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_0 = (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*)il2cpp_codegen_object_new(Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7(L_0, NULL, (intptr_t)((void*)Expression_Or_m57F02F6E25D92F1BECAD78DD66D991AA399CF00E_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.BitwiseOrOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseOrOperatorGrammar__ctor_m2D005D2A677DD400DDA77A0E068050E29F1EB981 (BitwiseOrOperatorGrammar_t128A890695EC685A189B74100BA54074BD3515E5* __this, const RuntimeMethod* method) 
{
	{
		BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3(__this, NULL);
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
// System.Int32 QFSW.QC.Grammar.DivisionOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DivisionOperatorGrammar_get_Precedence_mC00183E9F472284EFEBC2D41E513506CA76CEE7A (DivisionOperatorGrammar_t7E81DD91339BA99D5A98A63AE76F49B1C6E631EB* __this, const RuntimeMethod* method) 
{
	{
		// public override int Precedence => 3;
		return 3;
	}
}
// System.Char QFSW.QC.Grammar.DivisionOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DivisionOperatorGrammar_get_OperatorToken_m4524522397DA7BDDAC5949773BDFDE9B0B683804 (DivisionOperatorGrammar_t7E81DD91339BA99D5A98A63AE76F49B1C6E631EB* __this, const RuntimeMethod* method) 
{
	{
		// protected override char OperatorToken => '/';
		return ((int32_t)47);
	}
}
// System.String QFSW.QC.Grammar.DivisionOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DivisionOperatorGrammar_get_OperatorMethodName_m1BA5568935CD7DE7AB966B428FE5050C65E082C2 (DivisionOperatorGrammar_t7E81DD91339BA99D5A98A63AE76F49B1C6E631EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string OperatorMethodName => "op_Division";
		return _stringLiteralED17F69B2D9A3AC1E6ECABC7CA795B4E7CD990B7;
	}
}
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.DivisionOperatorGrammar::get_PrimitiveExpressionGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* DivisionOperatorGrammar_get_PrimitiveExpressionGenerator_m499158B9DCCF02CABAAFAEB6D97BE1906AF3ED4F (DivisionOperatorGrammar_t7E81DD91339BA99D5A98A63AE76F49B1C6E631EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Divide_m113F07743924C46DC992C3C966373D4006A6DF70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Divide;
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_0 = (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*)il2cpp_codegen_object_new(Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7(L_0, NULL, (intptr_t)((void*)Expression_Divide_m113F07743924C46DC992C3C966373D4006A6DF70_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.DivisionOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivisionOperatorGrammar__ctor_mDB67E8C17130828A9D717EC9F22F1D759154FED4 (DivisionOperatorGrammar_t7E81DD91339BA99D5A98A63AE76F49B1C6E631EB* __this, const RuntimeMethod* method) 
{
	{
		BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3(__this, NULL);
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
// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::get_LArg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* DynamicBinaryOperator_get_LArg_mCD3028EAC340954920BEFF00B1C856E6F9955BA8 (DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987* __this, const RuntimeMethod* method) 
{
	{
		// public Type LArg { get; }
		Type_t* L_0 = __this->___U3CLArgU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::get_RArg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* DynamicBinaryOperator_get_RArg_m06B206748B1F47D037DC77C8DF7C704D8CDB1698 (DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987* __this, const RuntimeMethod* method) 
{
	{
		// public Type RArg { get; }
		Type_t* L_0 = __this->___U3CRArgU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::get_Ret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* DynamicBinaryOperator_get_Ret_m19A1F8A082B3468E1E1ACBB7A7DEF54F5F23ECA1 (DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987* __this, const RuntimeMethod* method) 
{
	{
		// public Type Ret { get; }
		Type_t* L_0 = __this->___U3CRetU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.DynamicBinaryOperator::.ctor(System.Delegate,System.Type,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicBinaryOperator__ctor_m1F5CEC10EC95358710AC177F6E0E43D3E22EBF59 (DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987* __this, Delegate_t* ___del0, Type_t* ___lArg1, Type_t* ___rArg2, Type_t* ___ret3, const RuntimeMethod* method) 
{
	{
		// public DynamicBinaryOperator(Delegate del, Type lArg, Type rArg, Type ret)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _del = del;
		Delegate_t* L_0 = ___del0;
		__this->____del_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____del_3), (void*)L_0);
		// LArg = lArg;
		Type_t* L_1 = ___lArg1;
		__this->___U3CLArgU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLArgU3Ek__BackingField_0), (void*)L_1);
		// RArg = rArg;
		Type_t* L_2 = ___rArg2;
		__this->___U3CRArgU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRArgU3Ek__BackingField_1), (void*)L_2);
		// Ret = ret;
		Type_t* L_3 = ___ret3;
		__this->___U3CRetU3Ek__BackingField_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRetU3Ek__BackingField_2), (void*)L_3);
		// }
		return;
	}
}
// System.Object QFSW.QC.Grammar.DynamicBinaryOperator::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DynamicBinaryOperator_Invoke_m8ADE505FD24EAA0CFDB92D7DE411C1D0F6446217 (DynamicBinaryOperator_tFB686BD5D8FA88E986DE73F46F417D810FE0E987* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _del.DynamicInvoke(left, right);
		Delegate_t* L_0 = __this->____del_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___left0;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___right1;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		RuntimeObject* L_6;
		L_6 = Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4(L_0, L_4, NULL);
		return L_6;
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
// System.Int32 QFSW.QC.Grammar.ExclusiveOrOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExclusiveOrOperatorGrammar_get_Precedence_m493012D8EB61DBAA1467F7C8C7BE7E6A36080D21 (ExclusiveOrOperatorGrammar_t704EDE88069832B7EAB86411D121D1D706A4EC45* __this, const RuntimeMethod* method) 
{
	{
		// public override int Precedence => 7;
		return 7;
	}
}
// System.Char QFSW.QC.Grammar.ExclusiveOrOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar ExclusiveOrOperatorGrammar_get_OperatorToken_mB77C31BDA29F51A17FF6CD218AC6B7022243EEB5 (ExclusiveOrOperatorGrammar_t704EDE88069832B7EAB86411D121D1D706A4EC45* __this, const RuntimeMethod* method) 
{
	{
		// protected override char OperatorToken => '^';
		return ((int32_t)94);
	}
}
// System.String QFSW.QC.Grammar.ExclusiveOrOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExclusiveOrOperatorGrammar_get_OperatorMethodName_mCFAAA33C7D18808DAE780C100A499D10A6BB0BF6 (ExclusiveOrOperatorGrammar_t704EDE88069832B7EAB86411D121D1D706A4EC45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string OperatorMethodName => "op_ExclusiveOr";
		return _stringLiteral6BA14B0B41748EF861D62E24E3A98CBE88811C08;
	}
}
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.ExclusiveOrOperatorGrammar::get_PrimitiveExpressionGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* ExclusiveOrOperatorGrammar_get_PrimitiveExpressionGenerator_mDD76B5D3B31EBB03BABD6F56AFBDEA5EC4370AF6 (ExclusiveOrOperatorGrammar_t704EDE88069832B7EAB86411D121D1D706A4EC45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_ExclusiveOr_mC199D940A4F56AE6B9A513AB1516A47B0D5FDF07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.ExclusiveOr;
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_0 = (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*)il2cpp_codegen_object_new(Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7(L_0, NULL, (intptr_t)((void*)Expression_ExclusiveOr_mC199D940A4F56AE6B9A513AB1516A47B0D5FDF07_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.ExclusiveOrOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExclusiveOrOperatorGrammar__ctor_m3BF3FF88E6FAE1766A11EC01394CC34F868F5CEC (ExclusiveOrOperatorGrammar_t704EDE88069832B7EAB86411D121D1D706A4EC45* __this, const RuntimeMethod* method) 
{
	{
		BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3(__this, NULL);
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
// System.Int32 QFSW.QC.Grammar.ModulusOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModulusOperatorGrammar_get_Precedence_m724239E88C661096F757ADF63A6590C0DB86B00D (ModulusOperatorGrammar_t21AEAA7FC95901C542742C2AF124E7A3D64FF052* __this, const RuntimeMethod* method) 
{
	{
		// public override int Precedence => 4;
		return 4;
	}
}
// System.Char QFSW.QC.Grammar.ModulusOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar ModulusOperatorGrammar_get_OperatorToken_m3372F06F60AB95816D44195E76C79A258CCE4A7B (ModulusOperatorGrammar_t21AEAA7FC95901C542742C2AF124E7A3D64FF052* __this, const RuntimeMethod* method) 
{
	{
		// protected override char OperatorToken => '%';
		return ((int32_t)37);
	}
}
// System.String QFSW.QC.Grammar.ModulusOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModulusOperatorGrammar_get_OperatorMethodName_m36AEC3048E3B4D85C8B631CCC41CFA54BC42AA31 (ModulusOperatorGrammar_t21AEAA7FC95901C542742C2AF124E7A3D64FF052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string OperatorMethodName => "op_Modulus";
		return _stringLiteral23CA98CF33B0C404D3A01DE0C23D58AD1CF75E7E;
	}
}
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.ModulusOperatorGrammar::get_PrimitiveExpressionGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* ModulusOperatorGrammar_get_PrimitiveExpressionGenerator_mF2B59FD1101762C59CEBEF1FAAB8EFAF972F81D8 (ModulusOperatorGrammar_t21AEAA7FC95901C542742C2AF124E7A3D64FF052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Modulo_mD9E4CF627F34A2E16203F5C8CEA45EFA268494AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Modulo;
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_0 = (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*)il2cpp_codegen_object_new(Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7(L_0, NULL, (intptr_t)((void*)Expression_Modulo_mD9E4CF627F34A2E16203F5C8CEA45EFA268494AC_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.ModulusOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusOperatorGrammar__ctor_m480293E76706E81DD7BC487071C6539A224DCD5F (ModulusOperatorGrammar_t21AEAA7FC95901C542742C2AF124E7A3D64FF052* __this, const RuntimeMethod* method) 
{
	{
		BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3(__this, NULL);
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
// System.Int32 QFSW.QC.Grammar.MultiplyOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplyOperatorGrammar_get_Precedence_mC46A791FD8628BCAFFCF9C19D3BA6376F959A4B9 (MultiplyOperatorGrammar_tBC731D64EFE7BBF666275606D2D3A3D2628C819F* __this, const RuntimeMethod* method) 
{
	{
		// public override int Precedence => 2;
		return 2;
	}
}
// System.Char QFSW.QC.Grammar.MultiplyOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MultiplyOperatorGrammar_get_OperatorToken_m92FB8F94A016B3D9F3B474094029F85D6CF86475 (MultiplyOperatorGrammar_tBC731D64EFE7BBF666275606D2D3A3D2628C819F* __this, const RuntimeMethod* method) 
{
	{
		// protected override char OperatorToken => '*';
		return ((int32_t)42);
	}
}
// System.String QFSW.QC.Grammar.MultiplyOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultiplyOperatorGrammar_get_OperatorMethodName_m526B39D53009E6359A20D60D8568FD3377FB6F0E (MultiplyOperatorGrammar_tBC731D64EFE7BBF666275606D2D3A3D2628C819F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string OperatorMethodName => "op_Multiply";
		return _stringLiteral7680806CDAEB580844B287F4CB4986C7ED3A7FAB;
	}
}
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.MultiplyOperatorGrammar::get_PrimitiveExpressionGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* MultiplyOperatorGrammar_get_PrimitiveExpressionGenerator_m4C60CA7597116658620D49FAE6C347BE8313FC9B (MultiplyOperatorGrammar_tBC731D64EFE7BBF666275606D2D3A3D2628C819F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Multiply_mDDE22DF5C101E30E8E354F40CCCE373E7A8984F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Multiply;
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_0 = (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*)il2cpp_codegen_object_new(Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7(L_0, NULL, (intptr_t)((void*)Expression_Multiply_mDDE22DF5C101E30E8E354F40CCCE373E7A8984F1_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.MultiplyOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplyOperatorGrammar__ctor_mFE4FC055E0B295409CFE643E4353C62E7E59F363 (MultiplyOperatorGrammar_tBC731D64EFE7BBF666275606D2D3A3D2628C819F* __this, const RuntimeMethod* method) 
{
	{
		BinaryOperatorGrammar__ctor_mD68263A6AE65D0FC40F52A92471341D357C9FDB3(__this, NULL);
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
// System.Int32 QFSW.QC.Grammar.SubtractionOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubtractionOperatorGrammar_get_Precedence_m84890F8F931A9B2FF81F6A7CB11B1E04644AB994 (SubtractionOperatorGrammar_tFD826B3FBD8046529480E6212A28FBDCE5747A6D* __this, const RuntimeMethod* method) 
{
	{
		// public override int Precedence => 1;
		return 1;
	}
}
// System.Char QFSW.QC.Grammar.SubtractionOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar SubtractionOperatorGrammar_get_OperatorToken_mD2B5013302A24373A5A9C0BF3364CDD94DB26CAC (SubtractionOperatorGrammar_tFD826B3FBD8046529480E6212A28FBDCE5747A6D* __this, const RuntimeMethod* method) 
{
	{
		// protected override char OperatorToken => '-';
		return ((int32_t)45);
	}
}
// System.String QFSW.QC.Grammar.SubtractionOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubtractionOperatorGrammar_get_OperatorMethodName_m755A88182391A1917978A9C57083FE3E11BB78DA (SubtractionOperatorGrammar_tFD826B3FBD8046529480E6212A28FBDCE5747A6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string OperatorMethodName => "op_Subtraction";
		return _stringLiteral1C04630CF70FD38EEF0AC7C42DD20ECB94667282;
	}
}
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.SubtractionOperatorGrammar::get_PrimitiveExpressionGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* SubtractionOperatorGrammar_get_PrimitiveExpressionGenerator_m1F7539F5F1D72F0482BA99410DF7FD328217F1DC (SubtractionOperatorGrammar_tFD826B3FBD8046529480E6212A28FBDCE5747A6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Subtract_m5FB9D33496137B06E285DB37ED4C6FDEC52F3506_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Subtract;
		Func_3_tA7FA388FACF187B730F8EAC56368A51607127961* L_0 = (Func_3_tA7FA388FACF187B730F8EAC56368A51607127961*)il2cpp_codegen_object_new(Func_3_tA7FA388FACF187B730F8EAC56368A51607127961_il2cpp_TypeInfo_var);
		Func_3__ctor_mA337F4E94E71E6B4C2A9E8FB261AC3CDD7EAB3F7(L_0, NULL, (intptr_t)((void*)Expression_Subtract_m5FB9D33496137B06E285DB37ED4C6FDEC52F3506_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.SubtractionOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubtractionOperatorGrammar__ctor_mA70AFBB1FE2678F0733B97F7835AFE42ADA8FC83 (SubtractionOperatorGrammar_tFD826B3FBD8046529480E6212A28FBDCE5747A6D* __this, const RuntimeMethod* method) 
{
	{
		BinaryAndUnaryOperatorGrammar__ctor_m0137D401D251ACFB11F6171E6CAC425D78D3B3D0(__this, NULL);
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
// System.Int32 QFSW.QC.Grammar.BooleanNegationGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BooleanNegationGrammar_get_Precedence_m29F46AD763DAC77E4514886B072E3F56F455B480 (BooleanNegationGrammar_t0D250C96BEFBCDCE51245490AC3EBA9269F26143* __this, const RuntimeMethod* method) 
{
	{
		// public int Precedence => 0;
		return 0;
	}
}
// System.Boolean QFSW.QC.Grammar.BooleanNegationGrammar::Match(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BooleanNegationGrammar_Match_mC1F8E446042B67BC0554964117CF1B69B8BDCFAD (BooleanNegationGrammar_t0D250C96BEFBCDCE51245490AC3EBA9269F26143* __this, String_t* ___value0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type == typeof(bool) && _negationRegex.IsMatch(value);
		Type_t* L_0 = ___type1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_4 = __this->____negationRegex_0;
		String_t* L_5 = ___value0;
		bool L_6;
		L_6 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_4, L_5, NULL);
		return L_6;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Object QFSW.QC.Grammar.BooleanNegationGrammar::Parse(System.String,System.Type,System.Func`3<System.String,System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BooleanNegationGrammar_Parse_m5890D4F928F857E71F6497D996D2403D72901CE5 (BooleanNegationGrammar_t0D250C96BEFBCDCE51245490AC3EBA9269F26143* __this, String_t* ___value0, Type_t* ___type1, Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839* ___recursiveParser2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value = value.Substring(1);
		String_t* L_0 = ___value0;
		String_t* L_1;
		L_1 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_0, 1, NULL);
		___value0 = L_1;
		// return !(bool)recursiveParser(value, type);
		Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839* L_2 = ___recursiveParser2;
		String_t* L_3 = ___value0;
		Type_t* L_4 = ___type1;
		RuntimeObject* L_5;
		L_5 = Func_3_Invoke_m6ED93010CEAE74B9A86E809C14F43BA5EDCF4EFE_inline(L_2, L_3, L_4, NULL);
		bool L_6 = ((bool)((((int32_t)((*(bool*)((bool*)(bool*)UnBox(L_5, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Void QFSW.QC.Grammar.BooleanNegationGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanNegationGrammar__ctor_m6F83C32651310FAF022402CA923694A2BAF7F891 (BooleanNegationGrammar_t0D250C96BEFBCDCE51245490AC3EBA9269F26143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DA73ECDFB841563F69A75CDF930A72BB3E0B85D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Regex _negationRegex = new Regex(@"^!\S+$");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral8DA73ECDFB841563F69A75CDF930A72BB3E0B85D, NULL);
		__this->____negationRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____negationRegex_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 QFSW.QC.Grammar.ExpressionBodyGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpressionBodyGrammar_get_Precedence_mAF4F45484C095C53F8FF26394C3713982AE9A901 (ExpressionBodyGrammar_tF4B909017AC355DCB00C4DB371F4FFA62272C033* __this, const RuntimeMethod* method) 
{
	{
		// public int Precedence => 0;
		return 0;
	}
}
// System.Boolean QFSW.QC.Grammar.ExpressionBodyGrammar::Match(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionBodyGrammar_Match_m7AE3E57EB42DF715717B2C9AB0EEA649D6D85622 (ExpressionBodyGrammar_tF4B909017AC355DCB00C4DB371F4FFA62272C033* __this, String_t* ___value0, Type_t* ___type1, const RuntimeMethod* method) 
{
	{
		// return _expressionBodyRegex.IsMatch(value);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = __this->____expressionBodyRegex_0;
		String_t* L_1 = ___value0;
		bool L_2;
		L_2 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Object QFSW.QC.Grammar.ExpressionBodyGrammar::Parse(System.String,System.Type,System.Func`3<System.String,System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpressionBodyGrammar_Parse_m12CB4CEB6DA5B36615E6A45202E84BE0CD7F15F1 (ExpressionBodyGrammar_tF4B909017AC355DCB00C4DB371F4FFA62272C033* __this, String_t* ___value0, Type_t* ___type1, Func_3_t35174DB44274EE9757FA9977DE1D3E2072A14839* ___recursiveParser2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuantumConsoleProcessor_t44B9071AFD6CA41A648B928692745A7BDFCCC13B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// bool nullable = false;
		V_0 = (bool)0;
		// if (value.EndsWith("?"))
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_0, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// nullable = true;
		V_0 = (bool)1;
		// value = value.Substring(0, value.Length - 1);
		String_t* L_2 = ___value0;
		String_t* L_3 = ___value0;
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		String_t* L_5;
		L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_2, 0, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		___value0 = L_5;
	}

IL_0022:
	{
		// value = value.ReduceScope('{', '}');
		String_t* L_6 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TextProcessing_tDAA26586362D02423CF2BF87A75EA89A2F2077B2_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = TextProcessing_ReduceScope_m879F77497142F1C4E1CB57A43EA1A1080A3881A9(L_6, ((int32_t)123), ((int32_t)125), (-1), NULL);
		___value0 = L_7;
		// object result = QuantumConsoleProcessor.InvokeCommand(value);
		String_t* L_8 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(QuantumConsoleProcessor_t44B9071AFD6CA41A648B928692745A7BDFCCC13B_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = QuantumConsoleProcessor_InvokeCommand_m0A419878E9149CC8A2A8866CC35074DC3F247B82(L_8, NULL);
		V_1 = L_9;
		// if (result is null)
		RuntimeObject* L_10 = V_1;
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		// if (nullable)
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		// if (type.IsClass)
		Type_t* L_12 = ___type1;
		bool L_13;
		L_13 = Type_get_IsClass_mACC1E0E79C9996ADE9973F81971B740132B64549(L_12, NULL);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		// return result;
		RuntimeObject* L_14 = V_1;
		return L_14;
	}

IL_0046:
	{
		// throw new ParserInputException($"Expression body {{{value}}} evaluated to null which is incompatible with the expected type '{type.GetDisplayName()}'.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		ArrayElementTypeCheck (L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		String_t* L_18 = ___value0;
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
		ArrayElementTypeCheck (L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99A5CC4857C144971D9AB88B5563BC9BB959F4FE)));
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99A5CC4857C144971D9AB88B5563BC9BB959F4FE)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		Type_t* L_21 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var)));
		String_t* L_22;
		L_22 = ReflectionExtensions_GetDisplayName_mB54D69C23D18477259E12B2102276D2FC647B700(L_21, (bool)0, NULL);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_20;
		ArrayElementTypeCheck (L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8)));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8)));
		String_t* L_24;
		L_24 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_23, NULL);
		ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3* L_25 = (ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3_il2cpp_TypeInfo_var)));
		ParserInputException__ctor_m9DB00413A928FA4273AB31BF73D895AA2B22F211(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionBodyGrammar_Parse_m12CB4CEB6DA5B36615E6A45202E84BE0CD7F15F1_RuntimeMethod_var)));
	}

IL_007d:
	{
		// throw new ParserInputException($"Expression body {{{value}}} evaluated to null. If this is intended, please use nullable expression bodies, {{expr}}?");
		String_t* L_26 = ___value0;
		String_t* L_27;
		L_27 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)), L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52B357E922A6C90A23D65418414B564788FD1F01)), NULL);
		ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3* L_28 = (ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3_il2cpp_TypeInfo_var)));
		ParserInputException__ctor_m9DB00413A928FA4273AB31BF73D895AA2B22F211(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionBodyGrammar_Parse_m12CB4CEB6DA5B36615E6A45202E84BE0CD7F15F1_RuntimeMethod_var)));
	}

IL_0093:
	{
		// else if (result.GetType().IsCastableTo(type, true))
		RuntimeObject* L_29 = V_1;
		Type_t* L_30;
		L_30 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_29, NULL);
		Type_t* L_31 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = ReflectionExtensions_IsCastableTo_m77CCEE3F1DDC3DD313B01E210EB551849F02134B(L_30, L_31, (bool)1, NULL);
		if (!L_32)
		{
			goto IL_00aa;
		}
	}
	{
		// return type.Cast(result);
		Type_t* L_33 = ___type1;
		RuntimeObject* L_34 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var);
		RuntimeObject* L_35;
		L_35 = ReflectionExtensions_Cast_m9451CE0B95C1639F8476F26BEB6A8CFB26A53BB2(L_33, L_34, NULL);
		return L_35;
	}

IL_00aa:
	{
		// throw new ParserInputException($"Expression body {{{value}}} evaluated to an object of type '{result.GetType().GetDisplayName()}', " +
		//     $"which is incompatible with the expected type '{type.GetDisplayName()}'.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		ArrayElementTypeCheck (L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)));
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		String_t* L_39 = ___value0;
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_38;
		ArrayElementTypeCheck (L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3AE1D62E6A1E4A0BB86C33324FCB6307E0DFA69B)));
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3AE1D62E6A1E4A0BB86C33324FCB6307E0DFA69B)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		RuntimeObject* L_42 = V_1;
		Type_t* L_43;
		L_43 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_42, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var)));
		String_t* L_44;
		L_44 = ReflectionExtensions_GetDisplayName_mB54D69C23D18477259E12B2102276D2FC647B700(L_43, (bool)0, NULL);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_41;
		ArrayElementTypeCheck (L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31600AFFD8AACB2B8EFBA05BE6524A34EC7E8BC9)));
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31600AFFD8AACB2B8EFBA05BE6524A34EC7E8BC9)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		Type_t* L_47 = ___type1;
		String_t* L_48;
		L_48 = ReflectionExtensions_GetDisplayName_mB54D69C23D18477259E12B2102276D2FC647B700(L_47, (bool)0, NULL);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_48);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_46;
		ArrayElementTypeCheck (L_49, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8)));
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8)));
		String_t* L_50;
		L_50 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_49, NULL);
		ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3* L_51 = (ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParserInputException_t6CAAAF2BF77ABCBDA73AB96DAFF7D943B4CAA6F3_il2cpp_TypeInfo_var)));
		ParserInputException__ctor_m9DB00413A928FA4273AB31BF73D895AA2B22F211(L_51, L_50, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionBodyGrammar_Parse_m12CB4CEB6DA5B36615E6A45202E84BE0CD7F15F1_RuntimeMethod_var)));
	}
}
// System.Void QFSW.QC.Grammar.ExpressionBodyGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionBodyGrammar__ctor_mB96CD636F11A0C933A088C0C9735A1B43680B23A (ExpressionBodyGrammar_tF4B909017AC355DCB00C4DB371F4FFA62272C033* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral185DEBE76EE3B7788E2B3028DF63A43FFEE60433);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Regex _expressionBodyRegex = new Regex(@"^{.+}\??$");
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral185DEBE76EE3B7788E2B3028DF63A43FFEE60433, NULL);
		__this->____expressionBodyRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____expressionBodyRegex_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* BinaryOperatorData_get_LArg_m22DA9591E63B14500D1CCC142DFB249DEA8D6470_inline (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, const RuntimeMethod* method) 
{
	{
		// public Type LArg { get; }
		Type_t* L_0 = __this->___U3CLArgU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* BinaryOperatorData_get_RArg_m4B0170F1BECCC36D57CBE9D615FC66D18F94444A_inline (BinaryOperatorData_t03AE8DC68A3F1ADC426D48F8365E9B5F9A0F6853* __this, const RuntimeMethod* method) 
{
	{
		// public Type RArg { get; }
		Type_t* L_0 = __this->___U3CRArgU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
