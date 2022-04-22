#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>
struct Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75;
// System.Func`2<QFSW.QC.Grammar.BinaryOperatorData,System.Boolean>
struct Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6;
// System.Func`2<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData>
struct Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression>
struct Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27;
// System.Func`3<System.String,System.Type,System.Object>
struct Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912;
// System.Collections.Generic.HashSet`1<System.Char>
struct HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9;
// System.Collections.Generic.IEnumerable`1<QFSW.QC.Grammar.BinaryOperatorData>
struct IEnumerable_1_t8DBE12A6B2080F0B037F67504AA0CA59FAA7A9E9;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t7371CA721C62572380049BFDF1E23202E4E35496;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t14D152F51FFEB2DFB3BB3C565BF985F2F0EE1483;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,QFSW.QC.Grammar.IBinaryOperator>
struct KeyCollection_t5DFC913BDD5F6ECEB868B318ABB2FFC8F05BF79D;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,QFSW.QC.Grammar.IBinaryOperator>
struct ValueCollection_t29E1FE3F3F51A7BA6BF5DC10C16DB388A44E128E;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,QFSW.QC.Grammar.IBinaryOperator>[]
struct EntryU5BU5D_t0FAA10BB896CE23624A701D9E3C545DC88410326;
// System.Collections.Generic.HashSet`1/Slot<System.Char>[]
struct SlotU5BU5D_t9E15B791DC1B3E591A6512D11828A8A6EFA2F435;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69;
// QFSW.QC.Grammar.BinaryOperatorData[]
struct BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// QFSW.QC.Grammar.AdditionOperatorGrammar
struct AdditionOperatorGrammar_tC71FA01CAC59F05E0B1EE963C4072441EEC16171;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar
struct BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79;
// QFSW.QC.Grammar.BinaryOperatorData
struct BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3;
// QFSW.QC.Grammar.BinaryOperatorGrammar
struct BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// QFSW.QC.Grammar.BitwiseAndOperatorGrammar
struct BitwiseAndOperatorGrammar_t635DF94C83C7B9DED41573DB68E7D65BC4AE8377;
// QFSW.QC.Grammar.BitwiseOrOperatorGrammar
struct BitwiseOrOperatorGrammar_t84380FC777C7C086C0E484ADC807AFB36E4D5CA6;
// QFSW.QC.Grammar.BooleanNegationGrammar
struct BooleanNegationGrammar_t68A1B9465DAAC72DF98AB6C5AA6AD5F5AC5F3C61;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// QFSW.QC.Grammar.DivisionOperatorGrammar
struct DivisionOperatorGrammar_tE0D010B9ACDC8BC3EA7FBBBFC3C1069BAD7CCCBD;
// QFSW.QC.Grammar.DynamicBinaryOperator
struct DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610;
// System.Exception
struct Exception_t;
// QFSW.QC.Grammar.ExclusiveOrOperatorGrammar
struct ExclusiveOrOperatorGrammar_t5A3089AF6147093A048E1EEA57C6AD683EB95CC7;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// QFSW.QC.Grammar.ExpressionBodyGrammar
struct ExpressionBodyGrammar_t459CD6DF30F1EAA8E5CBFED41091EF8613B5D6B7;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// QFSW.QC.Grammar.IBinaryOperator
struct IBinaryOperator_t5BBA02B64F28CD162F1070500E272864DE78E19B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// QFSW.QC.Grammar.ModulusOperatorGrammar
struct ModulusOperatorGrammar_tE69C120FC4E41E4DCCBFE22917F109A355EA7537;
// QFSW.QC.Grammar.MultiplyOperatorGrammar
struct MultiplyOperatorGrammar_t116E2715D8DF252BD3A1E473E5FB1280C5F84E67;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// QFSW.QC.ParserInputException
struct ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// QFSW.QC.Grammar.SubtractionOperatorGrammar
struct SubtractionOperatorGrammar_tD4C2AA53FD7444B8358F07854BFFC1412059C5F8;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c
struct U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E;
// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBinaryOperator_t5BBA02B64F28CD162F1070500E272864DE78E19B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* BinaryOperatorData__ctor_mE73650A755A9E13DF46741AF3AB596AB8053921D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryOperatorGrammar_Parse_mDE26CB33F405890F97C7B72D17D4E30D194D81DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_LastOr_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC4E39A08AC6CE59E2F8EC60A41792E13948C1590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m40B7165BD08CFE3D9A67BE76EC92C00BDC2BD13D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB080542633E9BD2F5FE386881C83050B961B00FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBF43F53CE01845024B51BA409E224744211545ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6185D7A3A26C861FF47511CC65020FADF92625DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mDE606C08B0F8444736D0545E94FF2277228F71E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDC6B8C06761E114344E8D7DC789723E8463B36FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA51D390785DD1C0045DCF7BF45E7979FD03B1A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mB8F52DAA516432A5D4B6761543276CD8657EC573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionBodyGrammar_Parse_m82672462E57D386EB2FB69CE79BF43F7C13AF115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Add_mB5109955F7A70086257D0978658103BE902C1199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_And_mE34A4759A8F61D731093F4D3F0FBB2C4DEDBB287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Divide_m390636D60DE41FC9240516B2E77E9F41D35D4B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_ExclusiveOr_m28610A0267884E4F88DC90542DA4485229C6B050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Modulo_m7D9A44AD71C5253090C91CD9BB70C9649A7EB07D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Multiply_m3A2CBEE34AE8ABD7CE12A92C8737F1B155E6E52C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Or_mF53A796D924DDEB60836312C3EEDA64FC7DAB9CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Subtract_m0BFA48F4180B86A89C118E872395324E6E84145B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC401EC6336486BAAB48D8CAACCA531D103D70BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m93874C0445D4B2159497E4A04827144310E3E9BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_m293D0AF3F669BC0171859F5B7548724D8D1EB155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetOperatorDataU3Eb__13_2_m328EB3C2B66E7BB06489F33A1115210738CA7EDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetOperatorDataU3Eb__13_3_m7C0FFEA36F0ECAE741D46A7ADA396C30B80E948E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__0_mEAFB88BFEAC1C198F2711058E3F1FFBC8D371E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__1_m42DDE4AFD4C1D2876910682A2B29A3DE5A35C314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__4_m28BBC7E0B92D26A7CEBC03523E06B71B3FC25BB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__5_m1956D3C6B999A1D2D6E2B1DB66EF032499591F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__6_m16F7392B9D8998184A117E37E1C25A35FDEF2860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD8BD93477991114F381D46A6D352379944EA4400 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>
struct Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0FAA10BB896CE23624A701D9E3C545DC88410326* ___entries_1;
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
	KeyCollection_t5DFC913BDD5F6ECEB868B318ABB2FFC8F05BF79D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t29E1FE3F3F51A7BA6BF5DC10C16DB388A44E128E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___entries_1)); }
	inline EntryU5BU5D_t0FAA10BB896CE23624A701D9E3C545DC88410326* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0FAA10BB896CE23624A701D9E3C545DC88410326** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0FAA10BB896CE23624A701D9E3C545DC88410326* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___keys_7)); }
	inline KeyCollection_t5DFC913BDD5F6ECEB868B318ABB2FFC8F05BF79D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5DFC913BDD5F6ECEB868B318ABB2FFC8F05BF79D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5DFC913BDD5F6ECEB868B318ABB2FFC8F05BF79D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ___values_8)); }
	inline ValueCollection_t29E1FE3F3F51A7BA6BF5DC10C16DB388A44E128E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t29E1FE3F3F51A7BA6BF5DC10C16DB388A44E128E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t29E1FE3F3F51A7BA6BF5DC10C16DB388A44E128E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Char>
struct HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t9E15B791DC1B3E591A6512D11828A8A6EFA2F435* ____slots_8;
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
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488, ____slots_8)); }
	inline SlotU5BU5D_t9E15B791DC1B3E591A6512D11828A8A6EFA2F435* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t9E15B791DC1B3E591A6512D11828A8A6EFA2F435** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t9E15B791DC1B3E591A6512D11828A8A6EFA2F435* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* ____slots_8;
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
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____slots_8)); }
	inline SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// QFSW.QC.Grammar.BinaryOperatorData
struct BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3  : public RuntimeObject
{
public:
	// System.Type QFSW.QC.Grammar.BinaryOperatorData::<LArg>k__BackingField
	Type_t * ___U3CLArgU3Ek__BackingField_0;
	// System.Type QFSW.QC.Grammar.BinaryOperatorData::<RArg>k__BackingField
	Type_t * ___U3CRArgU3Ek__BackingField_1;
	// System.Type QFSW.QC.Grammar.BinaryOperatorData::<Ret>k__BackingField
	Type_t * ___U3CRetU3Ek__BackingField_2;
	// System.Reflection.MethodInfo QFSW.QC.Grammar.BinaryOperatorData::_method
	MethodInfo_t * ____method_3;

public:
	inline static int32_t get_offset_of_U3CLArgU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3, ___U3CLArgU3Ek__BackingField_0)); }
	inline Type_t * get_U3CLArgU3Ek__BackingField_0() const { return ___U3CLArgU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CLArgU3Ek__BackingField_0() { return &___U3CLArgU3Ek__BackingField_0; }
	inline void set_U3CLArgU3Ek__BackingField_0(Type_t * value)
	{
		___U3CLArgU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLArgU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRArgU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3, ___U3CRArgU3Ek__BackingField_1)); }
	inline Type_t * get_U3CRArgU3Ek__BackingField_1() const { return ___U3CRArgU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CRArgU3Ek__BackingField_1() { return &___U3CRArgU3Ek__BackingField_1; }
	inline void set_U3CRArgU3Ek__BackingField_1(Type_t * value)
	{
		___U3CRArgU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRArgU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3, ___U3CRetU3Ek__BackingField_2)); }
	inline Type_t * get_U3CRetU3Ek__BackingField_2() const { return ___U3CRetU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CRetU3Ek__BackingField_2() { return &___U3CRetU3Ek__BackingField_2; }
	inline void set_U3CRetU3Ek__BackingField_2(Type_t * value)
	{
		___U3CRetU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRetU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of__method_3() { return static_cast<int32_t>(offsetof(BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3, ____method_3)); }
	inline MethodInfo_t * get__method_3() const { return ____method_3; }
	inline MethodInfo_t ** get_address_of__method_3() { return &____method_3; }
	inline void set__method_3(MethodInfo_t * value)
	{
		____method_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____method_3), (void*)value);
	}
};


// QFSW.QC.Grammar.BinaryOperatorGrammar
struct BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex QFSW.QC.Grammar.BinaryOperatorGrammar::_operatorRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____operatorRegex_0;
	// System.Collections.Generic.HashSet`1<System.Type> QFSW.QC.Grammar.BinaryOperatorGrammar::_missingOperatorTable
	HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * ____missingOperatorTable_1;
	// System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator> QFSW.QC.Grammar.BinaryOperatorGrammar::_foundOperatorTable
	Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * ____foundOperatorTable_2;

public:
	inline static int32_t get_offset_of__operatorRegex_0() { return static_cast<int32_t>(offsetof(BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C, ____operatorRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__operatorRegex_0() const { return ____operatorRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__operatorRegex_0() { return &____operatorRegex_0; }
	inline void set__operatorRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____operatorRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____operatorRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of__missingOperatorTable_1() { return static_cast<int32_t>(offsetof(BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C, ____missingOperatorTable_1)); }
	inline HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * get__missingOperatorTable_1() const { return ____missingOperatorTable_1; }
	inline HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 ** get_address_of__missingOperatorTable_1() { return &____missingOperatorTable_1; }
	inline void set__missingOperatorTable_1(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * value)
	{
		____missingOperatorTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____missingOperatorTable_1), (void*)value);
	}

	inline static int32_t get_offset_of__foundOperatorTable_2() { return static_cast<int32_t>(offsetof(BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C, ____foundOperatorTable_2)); }
	inline Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * get__foundOperatorTable_2() const { return ____foundOperatorTable_2; }
	inline Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 ** get_address_of__foundOperatorTable_2() { return &____foundOperatorTable_2; }
	inline void set__foundOperatorTable_2(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * value)
	{
		____foundOperatorTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____foundOperatorTable_2), (void*)value);
	}
};


// QFSW.QC.Grammar.BooleanNegationGrammar
struct BooleanNegationGrammar_t68A1B9465DAAC72DF98AB6C5AA6AD5F5AC5F3C61  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex QFSW.QC.Grammar.BooleanNegationGrammar::_negationRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____negationRegex_0;

public:
	inline static int32_t get_offset_of__negationRegex_0() { return static_cast<int32_t>(offsetof(BooleanNegationGrammar_t68A1B9465DAAC72DF98AB6C5AA6AD5F5AC5F3C61, ____negationRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__negationRegex_0() const { return ____negationRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__negationRegex_0() { return &____negationRegex_0; }
	inline void set__negationRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____negationRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____negationRegex_0), (void*)value);
	}
};


// QFSW.QC.Grammar.DynamicBinaryOperator
struct DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610  : public RuntimeObject
{
public:
	// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::<LArg>k__BackingField
	Type_t * ___U3CLArgU3Ek__BackingField_0;
	// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::<RArg>k__BackingField
	Type_t * ___U3CRArgU3Ek__BackingField_1;
	// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::<Ret>k__BackingField
	Type_t * ___U3CRetU3Ek__BackingField_2;
	// System.Delegate QFSW.QC.Grammar.DynamicBinaryOperator::_del
	Delegate_t * ____del_3;

public:
	inline static int32_t get_offset_of_U3CLArgU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610, ___U3CLArgU3Ek__BackingField_0)); }
	inline Type_t * get_U3CLArgU3Ek__BackingField_0() const { return ___U3CLArgU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CLArgU3Ek__BackingField_0() { return &___U3CLArgU3Ek__BackingField_0; }
	inline void set_U3CLArgU3Ek__BackingField_0(Type_t * value)
	{
		___U3CLArgU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLArgU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRArgU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610, ___U3CRArgU3Ek__BackingField_1)); }
	inline Type_t * get_U3CRArgU3Ek__BackingField_1() const { return ___U3CRArgU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CRArgU3Ek__BackingField_1() { return &___U3CRArgU3Ek__BackingField_1; }
	inline void set_U3CRArgU3Ek__BackingField_1(Type_t * value)
	{
		___U3CRArgU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRArgU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610, ___U3CRetU3Ek__BackingField_2)); }
	inline Type_t * get_U3CRetU3Ek__BackingField_2() const { return ___U3CRetU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CRetU3Ek__BackingField_2() { return &___U3CRetU3Ek__BackingField_2; }
	inline void set_U3CRetU3Ek__BackingField_2(Type_t * value)
	{
		___U3CRetU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRetU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of__del_3() { return static_cast<int32_t>(offsetof(DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610, ____del_3)); }
	inline Delegate_t * get__del_3() const { return ____del_3; }
	inline Delegate_t ** get_address_of__del_3() { return &____del_3; }
	inline void set__del_3(Delegate_t * value)
	{
		____del_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____del_3), (void*)value);
	}
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// QFSW.QC.Grammar.ExpressionBodyGrammar
struct ExpressionBodyGrammar_t459CD6DF30F1EAA8E5CBFED41091EF8613B5D6B7  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex QFSW.QC.Grammar.ExpressionBodyGrammar::_expressionBodyRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____expressionBodyRegex_0;

public:
	inline static int32_t get_offset_of__expressionBodyRegex_0() { return static_cast<int32_t>(offsetof(ExpressionBodyGrammar_t459CD6DF30F1EAA8E5CBFED41091EF8613B5D6B7, ____expressionBodyRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__expressionBodyRegex_0() const { return ____expressionBodyRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__expressionBodyRegex_0() { return &____expressionBodyRegex_0; }
	inline void set__expressionBodyRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____expressionBodyRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expressionBodyRegex_0), (void*)value);
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


// QFSW.QC.TextProcessing
struct TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A  : public RuntimeObject
{
public:

public:
};

struct TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_StaticFields
{
public:
	// System.Char[] QFSW.QC.TextProcessing::DefaultLeftScopers
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___DefaultLeftScopers_0;
	// System.Char[] QFSW.QC.TextProcessing::DefaultRightScopers
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___DefaultRightScopers_1;

public:
	inline static int32_t get_offset_of_DefaultLeftScopers_0() { return static_cast<int32_t>(offsetof(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_StaticFields, ___DefaultLeftScopers_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_DefaultLeftScopers_0() const { return ___DefaultLeftScopers_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_DefaultLeftScopers_0() { return &___DefaultLeftScopers_0; }
	inline void set_DefaultLeftScopers_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___DefaultLeftScopers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultLeftScopers_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultRightScopers_1() { return static_cast<int32_t>(offsetof(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_StaticFields, ___DefaultRightScopers_1)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_DefaultRightScopers_1() const { return ___DefaultRightScopers_1; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_DefaultRightScopers_1() { return &___DefaultRightScopers_1; }
	inline void set_DefaultRightScopers_1(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___DefaultRightScopers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultRightScopers_1), (void*)value);
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

// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c
struct U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields
{
public:
	// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<>9
	U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<>9__13_2
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___U3CU3E9__13_2_1;
	// System.Func`2<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData> QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<>9__13_3
	Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * ___U3CU3E9__13_3_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields, ___U3CU3E9__13_2_1)); }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * get_U3CU3E9__13_2_1() const { return ___U3CU3E9__13_2_1; }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D ** get_address_of_U3CU3E9__13_2_1() { return &___U3CU3E9__13_2_1; }
	inline void set_U3CU3E9__13_2_1(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * value)
	{
		___U3CU3E9__13_2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_2_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_3_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields, ___U3CU3E9__13_3_2)); }
	inline Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * get_U3CU3E9__13_3_2() const { return ___U3CU3E9__13_3_2; }
	inline Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 ** get_address_of_U3CU3E9__13_3_2() { return &___U3CU3E9__13_3_2; }
	inline void set_U3CU3E9__13_3_2(Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * value)
	{
		___U3CU3E9__13_3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_3_2), (void*)value);
	}
};


// QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0  : public RuntimeObject
{
public:
	// QFSW.QC.Grammar.BinaryOperatorGrammar QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<>4__this
	BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * ___U3CU3E4__this_0;
	// System.Type QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0, ___U3CU3E4__this_0)); }
	inline BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};


// QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar
struct BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB  : public BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C
{
public:
	// System.Collections.Generic.HashSet`1<System.Char> QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::_operatorChars
	HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * ____operatorChars_3;
	// System.Collections.Generic.HashSet`1<System.Char> QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::_ignoreChars
	HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * ____ignoreChars_4;

public:
	inline static int32_t get_offset_of__operatorChars_3() { return static_cast<int32_t>(offsetof(BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB, ____operatorChars_3)); }
	inline HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * get__operatorChars_3() const { return ____operatorChars_3; }
	inline HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 ** get_address_of__operatorChars_3() { return &____operatorChars_3; }
	inline void set__operatorChars_3(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * value)
	{
		____operatorChars_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____operatorChars_3), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreChars_4() { return static_cast<int32_t>(offsetof(BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB, ____ignoreChars_4)); }
	inline HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * get__ignoreChars_4() const { return ____ignoreChars_4; }
	inline HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 ** get_address_of__ignoreChars_4() { return &____ignoreChars_4; }
	inline void set__ignoreChars_4(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * value)
	{
		____ignoreChars_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ignoreChars_4), (void*)value);
	}
};


// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Right>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CRightU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Left>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CLeftU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79, ___U3CRightU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CRightU3Ek__BackingField_3() const { return ___U3CRightU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CRightU3Ek__BackingField_3() { return &___U3CRightU3Ek__BackingField_3; }
	inline void set_U3CRightU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CRightU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79, ___U3CLeftU3Ek__BackingField_4)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CLeftU3Ek__BackingField_4() const { return ___U3CLeftU3Ek__BackingField_4; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CLeftU3Ek__BackingField_4() { return &___U3CLeftU3Ek__BackingField_4; }
	inline void set_U3CLeftU3Ek__BackingField_4(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CLeftU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_4), (void*)value);
	}
};


// QFSW.QC.Grammar.BitwiseAndOperatorGrammar
struct BitwiseAndOperatorGrammar_t635DF94C83C7B9DED41573DB68E7D65BC4AE8377  : public BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C
{
public:

public:
};


// QFSW.QC.Grammar.BitwiseOrOperatorGrammar
struct BitwiseOrOperatorGrammar_t84380FC777C7C086C0E484ADC807AFB36E4D5CA6  : public BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C
{
public:

public:
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// QFSW.QC.Grammar.DivisionOperatorGrammar
struct DivisionOperatorGrammar_tE0D010B9ACDC8BC3EA7FBBBFC3C1069BAD7CCCBD  : public BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C
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

// QFSW.QC.Grammar.ExclusiveOrOperatorGrammar
struct ExclusiveOrOperatorGrammar_t5A3089AF6147093A048E1EEA57C6AD683EB95CC7  : public BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C
{
public:

public:
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


// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474, ____body_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get__body_3() const { return ____body_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// QFSW.QC.Grammar.ModulusOperatorGrammar
struct ModulusOperatorGrammar_tE69C120FC4E41E4DCCBFE22917F109A355EA7537  : public BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C
{
public:

public:
};


// QFSW.QC.Grammar.MultiplyOperatorGrammar
struct MultiplyOperatorGrammar_t116E2715D8DF252BD3A1E473E5FB1280C5F84E67  : public BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C
{
public:

public:
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
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


// QFSW.QC.Grammar.AdditionOperatorGrammar
struct AdditionOperatorGrammar_tC71FA01CAC59F05E0B1EE963C4072441EEC16171  : public BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB
{
public:

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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// QFSW.QC.Grammar.SubtractionOperatorGrammar
struct SubtractionOperatorGrammar_tD4C2AA53FD7444B8358F07854BFFC1412059C5F8  : public BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB
{
public:

public:
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// QFSW.QC.ParserException
struct ParserException_t9112AAA26E823E3C394CB4188FA94BF08753A022  : public Exception_t
{
public:

public:
};


// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_8), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_9), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_10), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_12)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_12), (void*)value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_13)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_13), (void*)value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_14)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_14() const { return ___code_14; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_14), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_16), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
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


// System.Func`2<QFSW.QC.Grammar.BinaryOperatorData,System.Boolean>
struct Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData>
struct Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression>
struct Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.String,System.Type,System.Object>
struct Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// QFSW.QC.ParserInputException
struct ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D  : public ParserException_t9112AAA26E823E3C394CB4188FA94BF08753A022
{
public:

public:
};


// System.Reflection.TargetInvocationException
struct TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// QFSW.QC.Grammar.BinaryOperatorData[]
struct BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * m_Items[1];

public:
	inline BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mD14F35586915F2F8014526C264BEA9D1FFAB667D_gshared (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Int32> QFSW.QC.TextProcessing::GetScopedSplitPoints<System.Object>(System.String,System.Char,!!0,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextProcessing_GetScopedSplitPoints_TisRuntimeObject_mE4A402E152F4FF0D9CE95733D1F8C9F0C7C2C86B_gshared (String_t* ___input0, Il2CppChar ___splitChar1, RuntimeObject * ___leftScopers2, RuntimeObject * ___rightScopers3, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDC6B8C06761E114344E8D7DC789723E8463B36FD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Char>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB_gshared (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * __this, Il2CppChar ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879_gshared (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Char>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_gshared (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * __this, Il2CppChar ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_3_Invoke_mB97AAD621BCAD6A2DB25DAE966EC3A2EF2D3AB0A_gshared (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// !!0 QFSW.QC.Utilities.CollectionExtensions::LastOr<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionExtensions_LastOr_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC4E39A08AC6CE59E2F8EC60A41792E13948C1590_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.Void System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mD14F35586915F2F8014526C264BEA9D1FFAB667D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryAndUnaryOperatorGrammar__ctor_m4CF96587D87AADEEBEA09A2A6F484BD68B0AE241 (BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Int32> QFSW.QC.TextProcessing::GetScopedSplitPoints<System.Char[]>(System.String,System.Char,!!0,!!0)
inline RuntimeObject* TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_m293D0AF3F669BC0171859F5B7548724D8D1EB155 (String_t* ___input0, Il2CppChar ___splitChar1, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___leftScopers2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___rightScopers3, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, Il2CppChar, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, const RuntimeMethod*))TextProcessing_GetScopedSplitPoints_TisRuntimeObject_mE4A402E152F4FF0D9CE95733D1F8C9F0C7C2C86B_gshared)(___input0, ___splitChar1, ___leftScopers2, ___rightScopers3, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Reverse<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Reverse_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDC6B8C06761E114344E8D7DC789723E8463B36FD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDC6B8C06761E114344E8D7DC789723E8463B36FD_gshared)(___source0, method);
}
// System.Boolean QFSW.QC.Grammar.BinaryAndUnaryOperatorGrammar::IsValidBinaryOperator(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryAndUnaryOperatorGrammar_IsValidBinaryOperator_mC4E448D2D3A227AA0CC11CE279F73AD61C744E0D (BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB * __this, String_t* ___value0, int32_t ___position1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Char>::Contains(!0)
inline bool HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 *, Il2CppChar, const RuntimeMethod*))HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Char>::.ctor()
inline void HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879 (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 *, const RuntimeMethod*))HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Char>::Add(!0)
inline bool HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80 (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 *, Il2CppChar, const RuntimeMethod*))HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_gshared)(__this, ___item0, method);
}
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4 (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Contains(!0)
inline bool HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3 (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, Type_t *, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar::IsSyntaxMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryOperatorGrammar_IsSyntaxMatch_m032718D6CFD41E0EFA3807CEA7C9C921783EDD93 (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mB080542633E9BD2F5FE386881C83050B961B00FD (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// QFSW.QC.Grammar.IBinaryOperator QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorData(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryOperatorGrammar_GetOperatorData_mE4045ADA5F25BB142112D3E9725E59BD8FC8C439 (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>::Add(!0,!1)
inline void Dictionary_2_Add_m40B7165BD08CFE3D9A67BE76EC92C00BDC2BD13D (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * __this, Type_t * ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 *, Type_t *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(!0)
inline bool HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6 (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, Type_t *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m9AE90DC1C9D423165EAFB13C539F338F141C1777 (U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.String QFSW.QC.Utilities.ReflectionExtensions::GetDisplayName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1 (Type_t * ___type0, bool ___includeNamespace1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.MethodInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6 (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C (RuntimeObject* ___source0, Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC401EC6336486BAAB48D8CAACCA531D103D70BE3 (Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Reflection.MethodInfo,QFSW.QC.Grammar.BinaryOperatorData>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA51D390785DD1C0045DCF7BF45E7979FD03B1A33 (RuntimeObject* ___source0, Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<QFSW.QC.Grammar.BinaryOperatorData>(System.Collections.Generic.IEnumerable`1<!!0>)
inline BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532* Enumerable_ToArray_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mB8F52DAA516432A5D4B6761543276CD8657EC573 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Void System.Func`2<QFSW.QC.Grammar.BinaryOperatorData,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566 (Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<QFSW.QC.Grammar.BinaryOperatorData>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE (RuntimeObject* ___source0, Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 * ___predicate1, const RuntimeMethod* method)
{
	return ((  BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * (*) (RuntimeObject*, Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared)(___source0, ___predicate1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<QFSW.QC.Grammar.BinaryOperatorData>(System.Collections.Generic.IEnumerable`1<!!0>)
inline BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mDE606C08B0F8444736D0545E94FF2277228F71E9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared)(___source0, method);
}
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333 (Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method);
// !2 System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression>::Invoke(!0,!1)
inline BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * Func_3_Invoke_m93874C0445D4B2159497E4A04827144310E3E9BF (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___arg10, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___arg21, const RuntimeMethod* method)
{
	return ((  BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * (*) (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, const RuntimeMethod*))Func_3_Invoke_mB97AAD621BCAD6A2DB25DAE966EC3A2EF2D3AB0A_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression::Lambda(System.Linq.Expressions.Expression,System.Boolean,System.Linq.Expressions.ParameterExpression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * Expression_Lambda_m347893C2E1192262A7BDFF73C6A0BC2B3B9BCAAB (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___body0, bool ___tailCall1, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ___parameters2, const RuntimeMethod* method);
// System.Delegate System.Linq.Expressions.LambdaExpression::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * LambdaExpression_Compile_m048FA82F0A218295A345F878FB5D0AB390F02BE6 (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.Grammar.DynamicBinaryOperator::.ctor(System.Delegate,System.Type,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicBinaryOperator__ctor_m9F04C0FDBB162B5DD4210737DDD048722E05AD50 (DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610 * __this, Delegate_t * ___del0, Type_t * ___lArg1, Type_t * ___rArg2, Type_t * ___ret3, const RuntimeMethod* method);
// !!0 QFSW.QC.Utilities.CollectionExtensions::LastOr<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline int32_t CollectionExtensions_LastOr_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC4E39A08AC6CE59E2F8EC60A41792E13948C1590 (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, int32_t, const RuntimeMethod*))CollectionExtensions_LastOr_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC4E39A08AC6CE59E2F8EC60A41792E13948C1590_gshared)(___source0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>::get_Item(!0)
inline RuntimeObject* Dictionary_2_get_Item_m6185D7A3A26C861FF47511CC65020FADF92625DC (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// !2 System.Func`3<System.String,System.Type,System.Object>::Invoke(!0,!1)
inline RuntimeObject * Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9 (Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912 * __this, String_t* ___arg10, Type_t * ___arg21, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912 *, String_t*, Type_t *, const RuntimeMethod*))Func_3_Invoke_mB97AAD621BCAD6A2DB25DAE966EC3A2EF2D3AB0A_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,QFSW.QC.Grammar.IBinaryOperator>::.ctor()
inline void Dictionary_2__ctor_mBF43F53CE01845024B51BA409E224744211545ED (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object System.Delegate::DynamicInvoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Delegate_DynamicInvoke_m53122A57C6068A5EE443D102801A0FB0E661F4BA (Delegate_t * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String QFSW.QC.TextProcessing::ReduceScope(System.String,System.Char,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextProcessing_ReduceScope_m880115F59B74962C9A1132D7DACE76D3F6B70D31 (String_t* ___input0, Il2CppChar ___leftScoper1, Il2CppChar ___rightScoper2, int32_t ___maxReduction3, const RuntimeMethod* method);
// System.Object QFSW.QC.QuantumConsoleProcessor::InvokeCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * QuantumConsoleProcessor_InvokeCommand_m10AFE201F1513195DBDD69057FD3D0D7364120CC (String_t* ___commandString0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787 (Type_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void QFSW.QC.ParserInputException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserInputException__ctor_m4BDDFC54749632A71A3E6BE861E9246DB2348FD9 (ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions::IsCastableTo(System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsCastableTo_m522C11C31F2A87A36158E476B5C0FC205630FAD9 (Type_t * ___from0, Type_t * ___to1, bool ___implicitly2, const RuntimeMethod* method);
// System.Object QFSW.QC.Utilities.ReflectionExtensions::Cast(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionExtensions_Cast_m4A207767C5CBF250AF4289E83BEE1C28D789D6C3 (Type_t * ___type0, RuntimeObject * ___data1, const RuntimeMethod* method);
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m125874F16869E73F612369349C80AB7CAF3199C6 (U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.Grammar.BinaryOperatorData::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryOperatorData__ctor_mE73650A755A9E13DF46741AF3AB596AB8053921D (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, MethodInfo_t * ___OperatorMethod0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_LArg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * BinaryOperatorData_get_LArg_m52C4EB1E357BDCE4F1B705C38593F94A65D6E542_inline (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, const RuntimeMethod* method);
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_RArg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * BinaryOperatorData_get_RArg_mF4AFB8C724E1DAA8A75A4C1C7D1596CB63D039D1_inline (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, const RuntimeMethod* method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdditionOperatorGrammar_get_Precedence_mC137E030BFF00B3346D00FFCB65615CB36C4042C (AdditionOperatorGrammar_tC71FA01CAC59F05E0B1EE963C4072441EEC16171 * __this, const RuntimeMethod* method)
{
	{
		// public override int Precedence => 0;
		return 0;
	}
}
// System.Char QFSW.QC.Grammar.AdditionOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AdditionOperatorGrammar_get_OperatorToken_mB2C2B145D284F7E66AEA96FDA9F4023A6C5E8C29 (AdditionOperatorGrammar_tC71FA01CAC59F05E0B1EE963C4072441EEC16171 * __this, const RuntimeMethod* method)
{
	{
		// protected override char OperatorToken => '+';
		return ((int32_t)43);
	}
}
// System.String QFSW.QC.Grammar.AdditionOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdditionOperatorGrammar_get_OperatorMethodName_mC12240F2BD9CA4600CEBD7CEFD0E33B37EC51312 (AdditionOperatorGrammar_tC71FA01CAC59F05E0B1EE963C4072441EEC16171 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * AdditionOperatorGrammar_get_PrimitiveExpressionGenerator_m4E49E456D7E997CEB8E4877A1FEC22E8174FD4F8 (AdditionOperatorGrammar_tC71FA01CAC59F05E0B1EE963C4072441EEC16171 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Add_mB5109955F7A70086257D0978658103BE902C1199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Add;
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_0 = (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *)il2cpp_codegen_object_new(Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC(L_0, NULL, (intptr_t)((intptr_t)Expression_Add_mB5109955F7A70086257D0978658103BE902C1199_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.AdditionOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdditionOperatorGrammar__ctor_mED16A08F6702CA87ADCF9A5A3EEE46BB4870DF92 (AdditionOperatorGrammar_tC71FA01CAC59F05E0B1EE963C4072441EEC16171 * __this, const RuntimeMethod* method)
{
	{
		BinaryAndUnaryOperatorGrammar__ctor_m4CF96587D87AADEEBEA09A2A6F484BD68B0AE241(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryAndUnaryOperatorGrammar_GetOperatorPosition_m6C24A4E236992E7F9BA3EB3069C642241329B870 (BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDC6B8C06761E114344E8D7DC789723E8463B36FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_m293D0AF3F669BC0171859F5B7548724D8D1EB155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// IEnumerable<int> splitPoints = TextProcessing.GetScopedSplitPoints(value, OperatorToken, TextProcessing.DefaultLeftScopers, TextProcessing.DefaultRightScopers);
		String_t* L_0 = ___value0;
		Il2CppChar L_1;
		L_1 = VirtFuncInvoker0< Il2CppChar >::Invoke(8 /* System.Char QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorToken() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ((TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_StaticFields*)il2cpp_codegen_static_fields_for(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var))->get_DefaultLeftScopers_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ((TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_StaticFields*)il2cpp_codegen_static_fields_for(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var))->get_DefaultRightScopers_1();
		RuntimeObject* L_4;
		L_4 = TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_m293D0AF3F669BC0171859F5B7548724D8D1EB155(L_0, L_1, L_2, L_3, /*hidden argument*/TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_m293D0AF3F669BC0171859F5B7548724D8D1EB155_RuntimeMethod_var);
		// foreach (int index in splitPoints.Reverse())
		RuntimeObject* L_5;
		L_5 = Enumerable_Reverse_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDC6B8C06761E114344E8D7DC789723E8463B36FD(L_4, /*hidden argument*/Enumerable_Reverse_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDC6B8C06761E114344E8D7DC789723E8463B36FD_RuntimeMethod_var);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_0023:
		{
			// foreach (int index in splitPoints.Reverse())
			RuntimeObject* L_7 = V_0;
			int32_t L_8;
			L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_7);
			V_1 = L_8;
			// if (IsValidBinaryOperator(value, index))
			String_t* L_9 = ___value0;
			int32_t L_10 = V_1;
			bool L_11;
			L_11 = BinaryAndUnaryOperatorGrammar_IsValidBinaryOperator_mC4E448D2D3A227AA0CC11CE279F73AD61C744E0D(__this, L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0038;
			}
		}

IL_0034:
		{
			// return index;
			int32_t L_12 = V_1;
			V_2 = L_12;
			IL2CPP_LEAVE(0x4E, FINALLY_0042);
		}

IL_0038:
		{
			// foreach (int index in splitPoints.Reverse())
			RuntimeObject* L_13 = V_0;
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0023;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_0;
			if (!L_15)
			{
				goto IL_004b;
			}
		}

IL_0045:
		{
			RuntimeObject* L_16 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryAndUnaryOperatorGrammar_IsValidBinaryOperator_mC4E448D2D3A227AA0CC11CE279F73AD61C744E0D (BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB * __this, String_t* ___value0, int32_t ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB_RuntimeMethod_var);
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
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		___position1 = L_2;
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (_operatorChars.Contains(ch)) { return false; }
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_4 = __this->get__operatorChars_3();
		Il2CppChar L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB(L_4, L_5, /*hidden argument*/HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB_RuntimeMethod_var);
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
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_7 = __this->get__ignoreChars_4();
		Il2CppChar L_8 = V_0;
		bool L_9;
		L_9 = HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB(L_7, L_8, /*hidden argument*/HashSet_1_Contains_m6B0CAE700CB31DAB77D20AAC56CA3B654033AEFB_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryAndUnaryOperatorGrammar__ctor_m4CF96587D87AADEEBEA09A2A6F484BD68B0AE241 (BinaryAndUnaryOperatorGrammar_t11879D78B0768D4127B8FB4C318CF6D5B7F458CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488_il2cpp_TypeInfo_var);
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
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_0 = (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 *)il2cpp_codegen_object_new(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879(L_0, /*hidden argument*/HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_1 = L_0;
		bool L_2;
		L_2 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_1, ((int32_t)43), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_3 = L_1;
		bool L_4;
		L_4 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_3, ((int32_t)45), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_5 = L_3;
		bool L_6;
		L_6 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_5, ((int32_t)42), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_7 = L_5;
		bool L_8;
		L_8 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_7, ((int32_t)47), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_9 = L_7;
		bool L_10;
		L_10 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_9, ((int32_t)38), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_11 = L_9;
		bool L_12;
		L_12 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_11, ((int32_t)124), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_13 = L_11;
		bool L_14;
		L_14 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_13, ((int32_t)94), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_15 = L_13;
		bool L_16;
		L_16 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_15, ((int32_t)61), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_17 = L_15;
		bool L_18;
		L_18 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_17, ((int32_t)33), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_19 = L_17;
		bool L_20;
		L_20 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_19, ((int32_t)44), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		__this->set__operatorChars_3(L_19);
		// private readonly HashSet<char> _ignoreChars = new HashSet<char>()
		// {
		//     ' ',
		//     '\0'
		// };
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_21 = (HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 *)il2cpp_codegen_object_new(HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879(L_21, /*hidden argument*/HashSet_1__ctor_m5F2A4711630617AF1C3AC004A934A4701E4B6879_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_22 = L_21;
		bool L_23;
		L_23 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_22, ((int32_t)32), /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		HashSet_1_t64694F1841F026350E09C7F835AC8D3B148B2488 * L_24 = L_22;
		bool L_25;
		L_25 = HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80(L_24, 0, /*hidden argument*/HashSet_1_Add_m2C225C8AEDE96394AF9A0FEB87D5A56256847C80_RuntimeMethod_var);
		__this->set__ignoreChars_4(L_24);
		BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * BinaryOperatorData_get_LArg_m52C4EB1E357BDCE4F1B705C38593F94A65D6E542 (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, const RuntimeMethod* method)
{
	{
		// public Type LArg { get; }
		Type_t * L_0 = __this->get_U3CLArgU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_RArg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * BinaryOperatorData_get_RArg_mF4AFB8C724E1DAA8A75A4C1C7D1596CB63D039D1 (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, const RuntimeMethod* method)
{
	{
		// public Type RArg { get; }
		Type_t * L_0 = __this->get_U3CRArgU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Type QFSW.QC.Grammar.BinaryOperatorData::get_Ret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * BinaryOperatorData_get_Ret_m0E35098B85539CE0B6319D681E41DAB49C23454A (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, const RuntimeMethod* method)
{
	{
		// public Type Ret { get; }
		Type_t * L_0 = __this->get_U3CRetU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.BinaryOperatorData::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryOperatorData__ctor_mE73650A755A9E13DF46741AF3AB596AB8053921D (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, MethodInfo_t * ___OperatorMethod0, const RuntimeMethod* method)
{
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	{
		// public BinaryOperatorData(MethodInfo OperatorMethod)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _method = OperatorMethod;
		MethodInfo_t * L_0 = ___OperatorMethod0;
		__this->set__method_3(L_0);
		// Ret = OperatorMethod.ReturnType;
		MethodInfo_t * L_1 = ___OperatorMethod0;
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_1);
		__this->set_U3CRetU3Ek__BackingField_2(L_2);
		// ParameterInfo[] paramData = _method.GetParameters();
		MethodInfo_t * L_3 = __this->get__method_3();
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4;
		L_4 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		V_0 = L_4;
		// if (paramData.Length != 2)
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_5 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) == ((int32_t)2)))
		{
			goto IL_0043;
		}
	}
	{
		// throw new ArgumentException($"Cannot create a binary operator from a method with {paramData.Length} parameters");
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_6 = V_0;
		int32_t L_7 = ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		RuntimeObject * L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral463882660D6BFBE518325492F5169A54BAEFA594)), L_8, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BinaryOperatorData__ctor_mE73650A755A9E13DF46741AF3AB596AB8053921D_RuntimeMethod_var)));
	}

IL_0043:
	{
		// LArg = paramData[0].ParameterType;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_11 = V_0;
		int32_t L_12 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		__this->set_U3CLArgU3Ek__BackingField_0(L_14);
		// RArg = paramData[1].ParameterType;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_15 = V_0;
		int32_t L_16 = 1;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Type_t * L_18;
		L_18 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_17);
		__this->set_U3CRArgU3Ek__BackingField_1(L_18);
		// }
		return;
	}
}
// System.Object QFSW.QC.Grammar.BinaryOperatorData::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BinaryOperatorData_Invoke_mEC260319452D20680697F90EE2460088582370FD (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, RuntimeObject * ___left0, RuntimeObject * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _method.Invoke(null, new[] { left, right });
		MethodInfo_t * L_0 = __this->get__method_3();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		RuntimeObject * L_3 = ___left0;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___right1;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		RuntimeObject * L_6;
		L_6 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, NULL, L_4, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryOperatorGrammar_Match_mDD3F86F54A77420C052FF56648DC532AFEDE13F3 (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, String_t* ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m40B7165BD08CFE3D9A67BE76EC92C00BDC2BD13D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB080542633E9BD2F5FE386881C83050B961B00FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_missingOperatorTable.Contains(type))
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_0 = __this->get__missingOperatorTable_1();
		Type_t * L_1 = ___type1;
		bool L_2;
		L_2 = HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3(L_0, L_1, /*hidden argument*/HashSet_1_Contains_m303390862F6C11B5759A9A68E40495EB38F983E3_RuntimeMethod_var);
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
		L_4 = BinaryOperatorGrammar_IsSyntaxMatch_m032718D6CFD41E0EFA3807CEA7C9C921783EDD93(__this, L_3, /*hidden argument*/NULL);
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
		Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * L_5 = __this->get__foundOperatorTable_2();
		Type_t * L_6 = ___type1;
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mB080542633E9BD2F5FE386881C83050B961B00FD(L_5, L_6, /*hidden argument*/Dictionary_2_ContainsKey_mB080542633E9BD2F5FE386881C83050B961B00FD_RuntimeMethod_var);
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
		Type_t * L_8 = ___type1;
		RuntimeObject* L_9;
		L_9 = BinaryOperatorGrammar_GetOperatorData_mE4045ADA5F25BB142112D3E9725E59BD8FC8C439(__this, L_8, /*hidden argument*/NULL);
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
		Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * L_11 = __this->get__foundOperatorTable_2();
		Type_t * L_12 = ___type1;
		RuntimeObject* L_13 = V_0;
		Dictionary_2_Add_m40B7165BD08CFE3D9A67BE76EC92C00BDC2BD13D(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_Add_m40B7165BD08CFE3D9A67BE76EC92C00BDC2BD13D_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0045:
	{
		// _missingOperatorTable.Add(type);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_14 = __this->get__missingOperatorTable_1();
		Type_t * L_15 = ___type1;
		bool L_16;
		L_16 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_14, L_15, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar::IsSyntaxMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryOperatorGrammar_IsSyntaxMatch_m032718D6CFD41E0EFA3807CEA7C9C921783EDD93 (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9965264187D9FE5AE1984DE641846CF5481D8C5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_operatorRegex == null)
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = __this->get__operatorRegex_0();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// _operatorRegex = new Regex($@"^.+\{OperatorToken}.+$");
		Il2CppChar L_1;
		L_1 = VirtFuncInvoker0< Il2CppChar >::Invoke(8 /* System.Char QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorToken() */, __this);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB9965264187D9FE5AE1984DE641846CF5481D8C5, L_3, /*hidden argument*/NULL);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_5 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_5, L_4, /*hidden argument*/NULL);
		__this->set__operatorRegex_0(L_5);
	}

IL_0028:
	{
		// if (!_operatorRegex.IsMatch(value))
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_6 = __this->get__operatorRegex_0();
		String_t* L_7 = ___value0;
		bool L_8;
		L_8 = Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859(L_6, L_7, /*hidden argument*/NULL);
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
		L_10 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorPosition(System.String) */, __this, L_9);
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
		L_14 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_13, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
	}

IL_004e:
	{
		return (bool)0;
	}
}
// QFSW.QC.Grammar.IBinaryOperator QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorData(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryOperatorGrammar_GetOperatorData_mE4045ADA5F25BB142112D3E9725E59BD8FC8C439 (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mDE606C08B0F8444736D0545E94FF2277228F71E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA51D390785DD1C0045DCF7BF45E7979FD03B1A33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mB8F52DAA516432A5D4B6761543276CD8657EC573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mC401EC6336486BAAB48D8CAACCA531D103D70BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetOperatorDataU3Eb__13_2_m328EB3C2B66E7BB06489F33A1115210738CA7EDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetOperatorDataU3Eb__13_3_m7C0FFEA36F0ECAE741D46A7ADA396C30B80E948E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__0_mEAFB88BFEAC1C198F2711058E3F1FFBC8D371E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__1_m42DDE4AFD4C1D2876910682A2B29A3DE5A35C314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__4_m28BBC7E0B92D26A7CEBC03523E06B71B3FC25BB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__5_m1956D3C6B999A1D2D6E2B1DB66EF032499591F3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__6_m16F7392B9D8998184A117E37E1C25A35FDEF2860_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AC755D1A049FCBE83614D6BFAC33ED2812E66CF);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * V_0 = NULL;
	BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532* V_1 = NULL;
	String_t* V_2 = NULL;
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * G_B10_0 = NULL;
	BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * G_B7_0 = NULL;
	BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * G_B8_0 = NULL;
	BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * G_B9_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_0 = (U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m9AE90DC1C9D423165EAFB13C539F338F141C1777(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_1 = V_0;
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_2 = V_0;
		Type_t * L_3 = ___type0;
		L_2->set_type_1(L_3);
		// if (type.IsPrimitive)
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_4 = V_0;
		Type_t * L_5 = L_4->get_type_1();
		bool L_6;
		L_6 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// string typeName = QFSW.QC.Utilities.ReflectionExtensions.GetDisplayName(type);
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_7 = V_0;
		Type_t * L_8 = L_7->get_type_1();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1(L_8, (bool)0, /*hidden argument*/NULL);
		V_2 = L_9;
		// UnityEngine.Debug.LogWarning($"{typeName} {OperatorToken} {typeName} is not supported as IL2CPP does not support dynamic value typed generics.");
		String_t* L_10 = V_2;
		Il2CppChar L_11;
		L_11 = VirtFuncInvoker0< Il2CppChar >::Invoke(8 /* System.Char QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorToken() */, __this);
		Il2CppChar L_12 = L_11;
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = V_2;
		String_t* L_15;
		L_15 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral0AC755D1A049FCBE83614D6BFAC33ED2812E66CF, L_10, L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_15, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// MethodInfo[] methods = type.GetMethods(BindingFlags.Public | BindingFlags.Static);
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_16 = V_0;
		Type_t * L_17 = L_16->get_type_1();
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_18;
		L_18 = VirtFuncInvoker1< MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_17, ((int32_t)24));
		// BinaryOperatorData[] candidates = methods.Where(x => x.Name == OperatorMethodName)
		//                                          .Where(x => x.ReturnType == type)
		//                                          .Where(x => x.GetParameters().Length == 2)
		//                                          .Select(x => new BinaryOperatorData(x))
		//                                          .ToArray();
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_19 = V_0;
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_20 = (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *)il2cpp_codegen_object_new(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var);
		Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__0_mEAFB88BFEAC1C198F2711058E3F1FFBC8D371E03_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var);
		RuntimeObject* L_21;
		L_21 = Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C((RuntimeObject*)(RuntimeObject*)L_18, L_20, /*hidden argument*/Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var);
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_22 = V_0;
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_23 = (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *)il2cpp_codegen_object_new(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var);
		Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__1_m42DDE4AFD4C1D2876910682A2B29A3DE5A35C314_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var);
		RuntimeObject* L_24;
		L_24 = Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C(L_21, L_23, /*hidden argument*/Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var);
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_25 = ((U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var))->get_U3CU3E9__13_2_1();
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_26 = L_25;
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
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var);
		U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * L_27 = ((U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_28 = (Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D *)il2cpp_codegen_object_new(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D_il2cpp_TypeInfo_var);
		Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6(L_28, L_27, (intptr_t)((intptr_t)U3CU3Ec_U3CGetOperatorDataU3Eb__13_2_m328EB3C2B66E7BB06489F33A1115210738CA7EDF_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF905688E1931A04968409C615C79B807A1F45EA6_RuntimeMethod_var);
		Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * L_29 = L_28;
		((U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var))->set_U3CU3E9__13_2_1(L_29);
		G_B4_0 = L_29;
		G_B4_1 = G_B3_1;
	}

IL_0098:
	{
		RuntimeObject* L_30;
		L_30 = Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C(G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisMethodInfo_t_m8564F6C5317CF08B6AAC139C495C3DFDB4A2189C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var);
		Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * L_31 = ((U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var))->get_U3CU3E9__13_3_2();
		Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * L_32 = L_31;
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
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var);
		U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * L_33 = ((U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * L_34 = (Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 *)il2cpp_codegen_object_new(Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373_il2cpp_TypeInfo_var);
		Func_2__ctor_mC401EC6336486BAAB48D8CAACCA531D103D70BE3(L_34, L_33, (intptr_t)((intptr_t)U3CU3Ec_U3CGetOperatorDataU3Eb__13_3_m7C0FFEA36F0ECAE741D46A7ADA396C30B80E948E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC401EC6336486BAAB48D8CAACCA531D103D70BE3_RuntimeMethod_var);
		Func_2_t22B44926D690ED5E8094C9011CFE643F36D02373 * L_35 = L_34;
		((U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var))->set_U3CU3E9__13_3_2(L_35);
		G_B6_0 = L_35;
		G_B6_1 = G_B5_1;
	}

IL_00bc:
	{
		RuntimeObject* L_36;
		L_36 = Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA51D390785DD1C0045DCF7BF45E7979FD03B1A33(G_B6_1, G_B6_0, /*hidden argument*/Enumerable_Select_TisMethodInfo_t_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA51D390785DD1C0045DCF7BF45E7979FD03B1A33_RuntimeMethod_var);
		BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532* L_37;
		L_37 = Enumerable_ToArray_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mB8F52DAA516432A5D4B6761543276CD8657EC573(L_36, /*hidden argument*/Enumerable_ToArray_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mB8F52DAA516432A5D4B6761543276CD8657EC573_RuntimeMethod_var);
		V_1 = L_37;
		// BinaryOperatorData idealCandidate = candidates.FirstOrDefault(x => x.LArg == type && x.RArg == type)
		//                                  ?? candidates.FirstOrDefault(x => x.LArg == type)
		//                                  ?? candidates.FirstOrDefault(x => x.RArg == type)
		//                                  ?? candidates.FirstOrDefault();
		BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532* L_38 = V_1;
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_39 = V_0;
		Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 * L_40 = (Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 *)il2cpp_codegen_object_new(Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6_il2cpp_TypeInfo_var);
		Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566(L_40, L_39, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__4_m28BBC7E0B92D26A7CEBC03523E06B71B3FC25BB8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566_RuntimeMethod_var);
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_41;
		L_41 = Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE((RuntimeObject*)(RuntimeObject*)L_38, L_40, /*hidden argument*/Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE_RuntimeMethod_var);
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_42 = L_41;
		G_B7_0 = L_42;
		if (L_42)
		{
			G_B10_0 = L_42;
			goto IL_010f;
		}
	}
	{
		BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532* L_43 = V_1;
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_44 = V_0;
		Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 * L_45 = (Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 *)il2cpp_codegen_object_new(Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6_il2cpp_TypeInfo_var);
		Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566(L_45, L_44, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__5_m1956D3C6B999A1D2D6E2B1DB66EF032499591F3B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566_RuntimeMethod_var);
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_46;
		L_46 = Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE((RuntimeObject*)(RuntimeObject*)L_43, L_45, /*hidden argument*/Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE_RuntimeMethod_var);
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_47 = L_46;
		G_B8_0 = L_47;
		if (L_47)
		{
			G_B10_0 = L_47;
			goto IL_010f;
		}
	}
	{
		BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532* L_48 = V_1;
		U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * L_49 = V_0;
		Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 * L_50 = (Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6 *)il2cpp_codegen_object_new(Func_2_t5E54577E42A7759BE1C99F4D1380F94D112050B6_il2cpp_TypeInfo_var);
		Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566(L_50, L_49, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__6_m16F7392B9D8998184A117E37E1C25A35FDEF2860_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD87594F0B54D88BC1DCDBB246AAC612217747566_RuntimeMethod_var);
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_51;
		L_51 = Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE((RuntimeObject*)(RuntimeObject*)L_48, L_50, /*hidden argument*/Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mA87D3320D041E401A94AE885C44930F0CA87CCDE_RuntimeMethod_var);
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_52 = L_51;
		G_B9_0 = L_52;
		if (L_52)
		{
			G_B10_0 = L_52;
			goto IL_010f;
		}
	}
	{
		BinaryOperatorDataU5BU5D_t64A69DD257567B9652E728D37BB487EAA0D77532* L_53 = V_1;
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_54;
		L_54 = Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mDE606C08B0F8444736D0545E94FF2277228F71E9((RuntimeObject*)(RuntimeObject*)L_53, /*hidden argument*/Enumerable_FirstOrDefault_TisBinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_mDE606C08B0F8444736D0545E94FF2277228F71E9_RuntimeMethod_var);
		G_B10_0 = L_54;
	}

IL_010f:
	{
		// return idealCandidate;
		return G_B10_0;
	}
}
// QFSW.QC.Grammar.IBinaryOperator QFSW.QC.Grammar.BinaryOperatorGrammar::GeneratePrimitiveOperator(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryOperatorGrammar_GeneratePrimitiveOperator_m7AD0F2A4C69E4C7C7D23F0AF1CD72A6218A30811 (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m93874C0445D4B2159497E4A04827144310E3E9BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_0 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_1 = NULL;
	BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// ParameterExpression leftParam = Expression.Parameter(type, "left");
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_1;
		L_1 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_0, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, /*hidden argument*/NULL);
		V_0 = L_1;
		// ParameterExpression rightParam = Expression.Parameter(type, "right");
		Type_t * L_2 = ___type0;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_3;
		L_3 = Expression_Parameter_m1613C069AFED7D393811F36BC7F91188D668A333(L_2, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		// body = PrimitiveExpressionGenerator(leftParam, rightParam);
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_4;
		L_4 = VirtFuncInvoker0< Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * >::Invoke(10 /* System.Func`3<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.BinaryExpression> QFSW.QC.Grammar.BinaryOperatorGrammar::get_PrimitiveExpressionGenerator() */, __this);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_5 = V_0;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_6 = V_1;
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_7;
		L_7 = Func_3_Invoke_m93874C0445D4B2159497E4A04827144310E3E9BF(L_4, L_5, L_6, /*hidden argument*/Func_3_Invoke_m93874C0445D4B2159497E4A04827144310E3E9BF_RuntimeMethod_var);
		V_2 = L_7;
		// }
		goto IL_002d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{ // begin catch(System.InvalidOperationException)
		// catch (InvalidOperationException)
		// return null;
		V_3 = (RuntimeObject*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	} // end catch (depth: 1)

IL_002d:
	{
		// Delegate expr = Expression.Lambda(body, true, leftParam, rightParam).Compile();
		BinaryExpression_tCD79755962D104E6603B50D89E7F0E41D1D9CA79 * L_8 = V_2;
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_9 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_10 = L_9;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_11 = V_0;
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_11);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_12 = L_10;
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_13 = V_1;
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * L_14;
		L_14 = Expression_Lambda_m347893C2E1192262A7BDFF73C6A0BC2B3B9BCAAB(L_8, (bool)1, L_12, /*hidden argument*/NULL);
		Delegate_t * L_15;
		L_15 = LambdaExpression_Compile_m048FA82F0A218295A345F878FB5D0AB390F02BE6(L_14, /*hidden argument*/NULL);
		// return new DynamicBinaryOperator(expr, type, type, type);
		Type_t * L_16 = ___type0;
		Type_t * L_17 = ___type0;
		Type_t * L_18 = ___type0;
		DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610 * L_19 = (DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610 *)il2cpp_codegen_object_new(DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610_il2cpp_TypeInfo_var);
		DynamicBinaryOperator__ctor_m9F04C0FDBB162B5DD4210737DDD048722E05AD50(L_19, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryOperatorGrammar_GetOperatorPosition_mEEE9F71FF6F404A5A47873C5405D58A4583A46AE (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_LastOr_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC4E39A08AC6CE59E2F8EC60A41792E13948C1590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_m293D0AF3F669BC0171859F5B7548724D8D1EB155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TextProcessing.GetScopedSplitPoints(value, OperatorToken, TextProcessing.DefaultLeftScopers, TextProcessing.DefaultRightScopers).LastOr(-1);
		String_t* L_0 = ___value0;
		Il2CppChar L_1;
		L_1 = VirtFuncInvoker0< Il2CppChar >::Invoke(8 /* System.Char QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorToken() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ((TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_StaticFields*)il2cpp_codegen_static_fields_for(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var))->get_DefaultLeftScopers_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ((TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_StaticFields*)il2cpp_codegen_static_fields_for(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var))->get_DefaultRightScopers_1();
		RuntimeObject* L_4;
		L_4 = TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_m293D0AF3F669BC0171859F5B7548724D8D1EB155(L_0, L_1, L_2, L_3, /*hidden argument*/TextProcessing_GetScopedSplitPoints_TisCharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_m293D0AF3F669BC0171859F5B7548724D8D1EB155_RuntimeMethod_var);
		int32_t L_5;
		L_5 = CollectionExtensions_LastOr_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC4E39A08AC6CE59E2F8EC60A41792E13948C1590(L_4, (-1), /*hidden argument*/CollectionExtensions_LastOr_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC4E39A08AC6CE59E2F8EC60A41792E13948C1590_RuntimeMethod_var);
		return L_5;
	}
}
// System.Object QFSW.QC.Grammar.BinaryOperatorGrammar::Parse(System.String,System.Type,System.Func`3<System.String,System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BinaryOperatorGrammar_Parse_mDE26CB33F405890F97C7B72D17D4E30D194D81DC (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, String_t* ___value0, Type_t * ___type1, Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912 * ___recursiveParser2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6185D7A3A26C861FF47511CC65020FADF92625DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBinaryOperator_t5BBA02B64F28CD162F1070500E272864DE78E19B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Exception_t * G_B4_0 = NULL;
	Exception_t * G_B3_0 = NULL;
	{
		// IBinaryOperator operatorData = _foundOperatorTable[type];
		Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * L_0 = __this->get__foundOperatorTable_2();
		Type_t * L_1 = ___type1;
		RuntimeObject* L_2;
		L_2 = Dictionary_2_get_Item_m6185D7A3A26C861FF47511CC65020FADF92625DC(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m6185D7A3A26C861FF47511CC65020FADF92625DC_RuntimeMethod_var);
		V_0 = L_2;
		// int splitIndex = GetOperatorPosition(value);
		String_t* L_3 = ___value0;
		int32_t L_4;
		L_4 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(11 /* System.Int32 QFSW.QC.Grammar.BinaryOperatorGrammar::GetOperatorPosition(System.String) */, __this, L_3);
		V_1 = L_4;
		// string left = value.Substring(0, splitIndex);
		String_t* L_5 = ___value0;
		int32_t L_6 = V_1;
		String_t* L_7;
		L_7 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_5, 0, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// string right = value.Substring(splitIndex + 1);
		String_t* L_8 = ___value0;
		int32_t L_9 = V_1;
		String_t* L_10;
		L_10 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_10;
		// object leftVal = recursiveParser(left, operatorData.LArg);
		Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912 * L_11 = ___recursiveParser2;
		String_t* L_12 = V_2;
		RuntimeObject* L_13 = V_0;
		Type_t * L_14;
		L_14 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type QFSW.QC.Grammar.IBinaryOperator::get_LArg() */, IBinaryOperator_t5BBA02B64F28CD162F1070500E272864DE78E19B_il2cpp_TypeInfo_var, L_13);
		RuntimeObject * L_15;
		L_15 = Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9(L_11, L_12, L_14, /*hidden argument*/Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9_RuntimeMethod_var);
		V_4 = L_15;
		// object rightVal = recursiveParser(right, operatorData.RArg);
		Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912 * L_16 = ___recursiveParser2;
		String_t* L_17 = V_3;
		RuntimeObject* L_18 = V_0;
		Type_t * L_19;
		L_19 = InterfaceFuncInvoker0< Type_t * >::Invoke(1 /* System.Type QFSW.QC.Grammar.IBinaryOperator::get_RArg() */, IBinaryOperator_t5BBA02B64F28CD162F1070500E272864DE78E19B_il2cpp_TypeInfo_var, L_18);
		RuntimeObject * L_20;
		L_20 = Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9(L_16, L_17, L_19, /*hidden argument*/Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9_RuntimeMethod_var);
		V_5 = L_20;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		// return operatorData.Invoke(leftVal, rightVal);
		RuntimeObject* L_21 = V_0;
		RuntimeObject * L_22 = V_4;
		RuntimeObject * L_23 = V_5;
		RuntimeObject * L_24;
		L_24 = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(3 /* System.Object QFSW.QC.Grammar.IBinaryOperator::Invoke(System.Object,System.Object) */, IBinaryOperator_t5BBA02B64F28CD162F1070500E272864DE78E19B_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		V_6 = L_24;
		goto IL_0064;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{ // begin catch(System.Reflection.TargetInvocationException)
		{
			// catch (TargetInvocationException e)
			V_7 = ((TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *));
			// throw e.InnerException ?? e;
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_25 = V_7;
			Exception_t * L_26;
			L_26 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_25, /*hidden argument*/NULL);
			Exception_t * L_27 = L_26;
			G_B3_0 = L_27;
			if (L_27)
			{
				G_B4_0 = L_27;
				goto IL_0063;
			}
		}

IL_0060:
		{
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_28 = V_7;
			G_B4_0 = ((Exception_t *)(L_28));
		}

IL_0063:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(G_B4_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BinaryOperatorGrammar_Parse_mDE26CB33F405890F97C7B72D17D4E30D194D81DC_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_0064:
	{
		// }
		RuntimeObject * L_29 = V_6;
		return L_29;
	}
}
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4 (BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBF43F53CE01845024B51BA409E224744211545ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HashSet<Type> _missingOperatorTable = new HashSet<Type>();
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_0 = (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *)il2cpp_codegen_object_new(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D(L_0, /*hidden argument*/HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		__this->set__missingOperatorTable_1(L_0);
		// private readonly Dictionary<Type, IBinaryOperator> _foundOperatorTable = new Dictionary<Type, IBinaryOperator>();
		Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 * L_1 = (Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75 *)il2cpp_codegen_object_new(Dictionary_2_tFB0A3A2935B984731239E8DBFD50BD2CA82A3D75_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBF43F53CE01845024B51BA409E224744211545ED(L_1, /*hidden argument*/Dictionary_2__ctor_mBF43F53CE01845024B51BA409E224744211545ED_RuntimeMethod_var);
		__this->set__foundOperatorTable_2(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 QFSW.QC.Grammar.BitwiseAndOperatorGrammar::get_Precedence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseAndOperatorGrammar_get_Precedence_m7F8AA8F4626B2EA9D375854541D1444137FBD6BE (BitwiseAndOperatorGrammar_t635DF94C83C7B9DED41573DB68E7D65BC4AE8377 * __this, const RuntimeMethod* method)
{
	{
		// public override int Precedence => 6;
		return 6;
	}
}
// System.Char QFSW.QC.Grammar.BitwiseAndOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BitwiseAndOperatorGrammar_get_OperatorToken_m26617522CDDF1B91E6BE4935F778F981AAB8B072 (BitwiseAndOperatorGrammar_t635DF94C83C7B9DED41573DB68E7D65BC4AE8377 * __this, const RuntimeMethod* method)
{
	{
		// protected override char OperatorToken => '&';
		return ((int32_t)38);
	}
}
// System.String QFSW.QC.Grammar.BitwiseAndOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitwiseAndOperatorGrammar_get_OperatorMethodName_m59AC027888AC6B2674B03B494BD1CEF107C84553 (BitwiseAndOperatorGrammar_t635DF94C83C7B9DED41573DB68E7D65BC4AE8377 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * BitwiseAndOperatorGrammar_get_PrimitiveExpressionGenerator_mFB32354E014C6A12D3C21A2060B1594640C8EFA7 (BitwiseAndOperatorGrammar_t635DF94C83C7B9DED41573DB68E7D65BC4AE8377 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_And_mE34A4759A8F61D731093F4D3F0FBB2C4DEDBB287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.And;
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_0 = (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *)il2cpp_codegen_object_new(Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC(L_0, NULL, (intptr_t)((intptr_t)Expression_And_mE34A4759A8F61D731093F4D3F0FBB2C4DEDBB287_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.BitwiseAndOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseAndOperatorGrammar__ctor_mA81DF257A25B7C3B42433A7A65926A850E335087 (BitwiseAndOperatorGrammar_t635DF94C83C7B9DED41573DB68E7D65BC4AE8377 * __this, const RuntimeMethod* method)
{
	{
		BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitwiseOrOperatorGrammar_get_Precedence_m757BEC17FC5637F10D4C51264C96AA0A98AA98D7 (BitwiseOrOperatorGrammar_t84380FC777C7C086C0E484ADC807AFB36E4D5CA6 * __this, const RuntimeMethod* method)
{
	{
		// public override int Precedence => 5;
		return 5;
	}
}
// System.Char QFSW.QC.Grammar.BitwiseOrOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar BitwiseOrOperatorGrammar_get_OperatorToken_mCC2DF9A24713237E29BA5894EFB9093D09D0B867 (BitwiseOrOperatorGrammar_t84380FC777C7C086C0E484ADC807AFB36E4D5CA6 * __this, const RuntimeMethod* method)
{
	{
		// protected override char OperatorToken => '|';
		return ((int32_t)124);
	}
}
// System.String QFSW.QC.Grammar.BitwiseOrOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitwiseOrOperatorGrammar_get_OperatorMethodName_m84C1F9F963E46EFFEDEA1C461475B5759A809EDF (BitwiseOrOperatorGrammar_t84380FC777C7C086C0E484ADC807AFB36E4D5CA6 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * BitwiseOrOperatorGrammar_get_PrimitiveExpressionGenerator_m24C9C247C3867931F811B695BDE42F2CA12FDB87 (BitwiseOrOperatorGrammar_t84380FC777C7C086C0E484ADC807AFB36E4D5CA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Or_mF53A796D924DDEB60836312C3EEDA64FC7DAB9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Or;
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_0 = (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *)il2cpp_codegen_object_new(Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC(L_0, NULL, (intptr_t)((intptr_t)Expression_Or_mF53A796D924DDEB60836312C3EEDA64FC7DAB9CB_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.BitwiseOrOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitwiseOrOperatorGrammar__ctor_m3BFFF789AB51BCAB041246FC224C8A8367A8FB44 (BitwiseOrOperatorGrammar_t84380FC777C7C086C0E484ADC807AFB36E4D5CA6 * __this, const RuntimeMethod* method)
{
	{
		BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BooleanNegationGrammar_get_Precedence_m7E28E12B3F6E6427174D2B3DABDC1D08AE850392 (BooleanNegationGrammar_t68A1B9465DAAC72DF98AB6C5AA6AD5F5AC5F3C61 * __this, const RuntimeMethod* method)
{
	{
		// public int Precedence => 0;
		return 0;
	}
}
// System.Boolean QFSW.QC.Grammar.BooleanNegationGrammar::Match(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BooleanNegationGrammar_Match_m4FC44446C2DADB75447182996D61B6825F1DB70F (BooleanNegationGrammar_t68A1B9465DAAC72DF98AB6C5AA6AD5F5AC5F3C61 * __this, String_t* ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type == typeof(bool) && _negationRegex.IsMatch(value);
		Type_t * L_0 = ___type1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_4 = __this->get__negationRegex_0();
		String_t* L_5 = ___value0;
		bool L_6;
		L_6 = Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Object QFSW.QC.Grammar.BooleanNegationGrammar::Parse(System.String,System.Type,System.Func`3<System.String,System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BooleanNegationGrammar_Parse_m61EBC189671118B465C16A296EB12DB296761CFC (BooleanNegationGrammar_t68A1B9465DAAC72DF98AB6C5AA6AD5F5AC5F3C61 * __this, String_t* ___value0, Type_t * ___type1, Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912 * ___recursiveParser2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value = value.Substring(1);
		String_t* L_0 = ___value0;
		String_t* L_1;
		L_1 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_0, 1, /*hidden argument*/NULL);
		___value0 = L_1;
		// return !(bool)recursiveParser(value, type);
		Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912 * L_2 = ___recursiveParser2;
		String_t* L_3 = ___value0;
		Type_t * L_4 = ___type1;
		RuntimeObject * L_5;
		L_5 = Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_m613607A2AE5AD70C239BAF66E4C8D9A64B21FBA9_RuntimeMethod_var);
		bool L_6 = ((bool)((((int32_t)((*(bool*)((bool*)UnBox(L_5, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))) == ((int32_t)0))? 1 : 0));
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}
}
// System.Void QFSW.QC.Grammar.BooleanNegationGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanNegationGrammar__ctor_m153C789DE920261D65E08B2F73E3A66935416270 (BooleanNegationGrammar_t68A1B9465DAAC72DF98AB6C5AA6AD5F5AC5F3C61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DA73ECDFB841563F69A75CDF930A72BB3E0B85D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Regex _negationRegex = new Regex(@"^!\S+$");
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_0, _stringLiteral8DA73ECDFB841563F69A75CDF930A72BB3E0B85D, /*hidden argument*/NULL);
		__this->set__negationRegex_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DivisionOperatorGrammar_get_Precedence_mF4AD626AFBB2063D9392E6A176012B0CC2073980 (DivisionOperatorGrammar_tE0D010B9ACDC8BC3EA7FBBBFC3C1069BAD7CCCBD * __this, const RuntimeMethod* method)
{
	{
		// public override int Precedence => 3;
		return 3;
	}
}
// System.Char QFSW.QC.Grammar.DivisionOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DivisionOperatorGrammar_get_OperatorToken_mCBE74C699E6FD5B25AD2B091BC69D5AA944B458C (DivisionOperatorGrammar_tE0D010B9ACDC8BC3EA7FBBBFC3C1069BAD7CCCBD * __this, const RuntimeMethod* method)
{
	{
		// protected override char OperatorToken => '/';
		return ((int32_t)47);
	}
}
// System.String QFSW.QC.Grammar.DivisionOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DivisionOperatorGrammar_get_OperatorMethodName_mEEB9C47EE6EE546DB03366816B2DABED7342F4D6 (DivisionOperatorGrammar_tE0D010B9ACDC8BC3EA7FBBBFC3C1069BAD7CCCBD * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * DivisionOperatorGrammar_get_PrimitiveExpressionGenerator_mA0B9714383DBE0355AFAB09FEA62E97DF9E0AACE (DivisionOperatorGrammar_tE0D010B9ACDC8BC3EA7FBBBFC3C1069BAD7CCCBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Divide_m390636D60DE41FC9240516B2E77E9F41D35D4B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Divide;
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_0 = (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *)il2cpp_codegen_object_new(Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC(L_0, NULL, (intptr_t)((intptr_t)Expression_Divide_m390636D60DE41FC9240516B2E77E9F41D35D4B19_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.DivisionOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivisionOperatorGrammar__ctor_mB5AAA979FE10A1529888A237BAD2728D16203DFD (DivisionOperatorGrammar_tE0D010B9ACDC8BC3EA7FBBBFC3C1069BAD7CCCBD * __this, const RuntimeMethod* method)
{
	{
		BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DynamicBinaryOperator_get_LArg_mA307BAA213D651AFBA3A61DE21125644529BE85F (DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610 * __this, const RuntimeMethod* method)
{
	{
		// public Type LArg { get; }
		Type_t * L_0 = __this->get_U3CLArgU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::get_RArg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DynamicBinaryOperator_get_RArg_m28B6C02F125503B634A366DEC1F11936A92BB016 (DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610 * __this, const RuntimeMethod* method)
{
	{
		// public Type RArg { get; }
		Type_t * L_0 = __this->get_U3CRArgU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Type QFSW.QC.Grammar.DynamicBinaryOperator::get_Ret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DynamicBinaryOperator_get_Ret_m5FF8357578AC4313F5577DCB9AF2CA79B77DBA72 (DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610 * __this, const RuntimeMethod* method)
{
	{
		// public Type Ret { get; }
		Type_t * L_0 = __this->get_U3CRetU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.DynamicBinaryOperator::.ctor(System.Delegate,System.Type,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicBinaryOperator__ctor_m9F04C0FDBB162B5DD4210737DDD048722E05AD50 (DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610 * __this, Delegate_t * ___del0, Type_t * ___lArg1, Type_t * ___rArg2, Type_t * ___ret3, const RuntimeMethod* method)
{
	{
		// public DynamicBinaryOperator(Delegate del, Type lArg, Type rArg, Type ret)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _del = del;
		Delegate_t * L_0 = ___del0;
		__this->set__del_3(L_0);
		// LArg = lArg;
		Type_t * L_1 = ___lArg1;
		__this->set_U3CLArgU3Ek__BackingField_0(L_1);
		// RArg = rArg;
		Type_t * L_2 = ___rArg2;
		__this->set_U3CRArgU3Ek__BackingField_1(L_2);
		// Ret = ret;
		Type_t * L_3 = ___ret3;
		__this->set_U3CRetU3Ek__BackingField_2(L_3);
		// }
		return;
	}
}
// System.Object QFSW.QC.Grammar.DynamicBinaryOperator::Invoke(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DynamicBinaryOperator_Invoke_mA91781783F88B6B36B31D2F6DD9A7337B94F3D7D (DynamicBinaryOperator_tEF7F5F297F900F5406AA9446F2A5924B003BA610 * __this, RuntimeObject * ___left0, RuntimeObject * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _del.DynamicInvoke(left, right);
		Delegate_t * L_0 = __this->get__del_3();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		RuntimeObject * L_3 = ___left0;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		RuntimeObject * L_5 = ___right1;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		RuntimeObject * L_6;
		L_6 = Delegate_DynamicInvoke_m53122A57C6068A5EE443D102801A0FB0E661F4BA(L_0, L_4, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExclusiveOrOperatorGrammar_get_Precedence_mE79B1F0E44EE4DFE7F18FAE6A7C0F39ED2BDC101 (ExclusiveOrOperatorGrammar_t5A3089AF6147093A048E1EEA57C6AD683EB95CC7 * __this, const RuntimeMethod* method)
{
	{
		// public override int Precedence => 7;
		return 7;
	}
}
// System.Char QFSW.QC.Grammar.ExclusiveOrOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar ExclusiveOrOperatorGrammar_get_OperatorToken_mC758C15D1412B80BC715D47343520FDFBD8F8E2D (ExclusiveOrOperatorGrammar_t5A3089AF6147093A048E1EEA57C6AD683EB95CC7 * __this, const RuntimeMethod* method)
{
	{
		// protected override char OperatorToken => '^';
		return ((int32_t)94);
	}
}
// System.String QFSW.QC.Grammar.ExclusiveOrOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExclusiveOrOperatorGrammar_get_OperatorMethodName_m6650D5C4E10F372E4720352FF876A41A8037D946 (ExclusiveOrOperatorGrammar_t5A3089AF6147093A048E1EEA57C6AD683EB95CC7 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * ExclusiveOrOperatorGrammar_get_PrimitiveExpressionGenerator_m4FC722BD7487E715D062C29B4DBFFD4170E8C905 (ExclusiveOrOperatorGrammar_t5A3089AF6147093A048E1EEA57C6AD683EB95CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_ExclusiveOr_m28610A0267884E4F88DC90542DA4485229C6B050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.ExclusiveOr;
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_0 = (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *)il2cpp_codegen_object_new(Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC(L_0, NULL, (intptr_t)((intptr_t)Expression_ExclusiveOr_m28610A0267884E4F88DC90542DA4485229C6B050_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.ExclusiveOrOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExclusiveOrOperatorGrammar__ctor_mCBEB697E3CC019CA88C6F5C8FB0B1197ADD2B5C0 (ExclusiveOrOperatorGrammar_t5A3089AF6147093A048E1EEA57C6AD683EB95CC7 * __this, const RuntimeMethod* method)
{
	{
		BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpressionBodyGrammar_get_Precedence_m85C4C956FE568B571570AE86197D86C9F7E266C1 (ExpressionBodyGrammar_t459CD6DF30F1EAA8E5CBFED41091EF8613B5D6B7 * __this, const RuntimeMethod* method)
{
	{
		// public int Precedence => 0;
		return 0;
	}
}
// System.Boolean QFSW.QC.Grammar.ExpressionBodyGrammar::Match(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionBodyGrammar_Match_m6BC2BA0E18970080BB911F63238AAA337098F22F (ExpressionBodyGrammar_t459CD6DF30F1EAA8E5CBFED41091EF8613B5D6B7 * __this, String_t* ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	{
		// return _expressionBodyRegex.IsMatch(value);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = __this->get__expressionBodyRegex_0();
		String_t* L_1 = ___value0;
		bool L_2;
		L_2 = Regex_IsMatch_m872C1D85AC5BF891AC3C3FC789BBC4E2393FB859(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object QFSW.QC.Grammar.ExpressionBodyGrammar::Parse(System.String,System.Type,System.Func`3<System.String,System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExpressionBodyGrammar_Parse_m82672462E57D386EB2FB69CE79BF43F7C13AF115 (ExpressionBodyGrammar_t459CD6DF30F1EAA8E5CBFED41091EF8613B5D6B7 * __this, String_t* ___value0, Type_t * ___type1, Func_3_t1C7DFADBBCCDD9B72EA497EEA1F4933239BA7912 * ___recursiveParser2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		// bool nullable = false;
		V_0 = (bool)0;
		// if (value.EndsWith("?"))
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_0, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, /*hidden argument*/NULL);
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
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_2, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		___value0 = L_5;
	}

IL_0022:
	{
		// value = value.ReduceScope('{', '}');
		String_t* L_6 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(TextProcessing_tCACADB2E0911F72BBCAF3F39ED7B86DCBE397F4A_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = TextProcessing_ReduceScope_m880115F59B74962C9A1132D7DACE76D3F6B70D31(L_6, ((int32_t)123), ((int32_t)125), (-1), /*hidden argument*/NULL);
		___value0 = L_7;
		// object result = QuantumConsoleProcessor.InvokeCommand(value);
		String_t* L_8 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var);
		RuntimeObject * L_9;
		L_9 = QuantumConsoleProcessor_InvokeCommand_m10AFE201F1513195DBDD69057FD3D0D7364120CC(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (result is null)
		RuntimeObject * L_10 = V_1;
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
		Type_t * L_12 = ___type1;
		bool L_13;
		L_13 = Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		// return result;
		RuntimeObject * L_14 = V_1;
		return L_14;
	}

IL_0046:
	{
		// throw new ParserInputException($"Expression body {{{value}}} evaluated to null which is incompatible with the expected type '{type.GetDisplayName()}'.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		ArrayElementTypeCheck (L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		String_t* L_18 = ___value0;
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_17;
		ArrayElementTypeCheck (L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99A5CC4857C144971D9AB88B5563BC9BB959F4FE)));
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99A5CC4857C144971D9AB88B5563BC9BB959F4FE)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		Type_t * L_21 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var)));
		String_t* L_22;
		L_22 = ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1(L_21, (bool)0, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_20;
		ArrayElementTypeCheck (L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8)));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8)));
		String_t* L_24;
		L_24 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_23, /*hidden argument*/NULL);
		ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D * L_25 = (ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D_il2cpp_TypeInfo_var)));
		ParserInputException__ctor_m4BDDFC54749632A71A3E6BE861E9246DB2348FD9(L_25, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionBodyGrammar_Parse_m82672462E57D386EB2FB69CE79BF43F7C13AF115_RuntimeMethod_var)));
	}

IL_007d:
	{
		// throw new ParserInputException($"Expression body {{{value}}} evaluated to null. If this is intended, please use nullable expression bodies, {{expr}}?");
		String_t* L_26 = ___value0;
		String_t* L_27;
		L_27 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)), L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52B357E922A6C90A23D65418414B564788FD1F01)), /*hidden argument*/NULL);
		ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D * L_28 = (ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D_il2cpp_TypeInfo_var)));
		ParserInputException__ctor_m4BDDFC54749632A71A3E6BE861E9246DB2348FD9(L_28, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionBodyGrammar_Parse_m82672462E57D386EB2FB69CE79BF43F7C13AF115_RuntimeMethod_var)));
	}

IL_0093:
	{
		// else if (result.GetType().IsCastableTo(type, true))
		RuntimeObject * L_29 = V_1;
		Type_t * L_30;
		L_30 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_29, /*hidden argument*/NULL);
		Type_t * L_31 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = ReflectionExtensions_IsCastableTo_m522C11C31F2A87A36158E476B5C0FC205630FAD9(L_30, L_31, (bool)1, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00aa;
		}
	}
	{
		// return type.Cast(result);
		Type_t * L_33 = ___type1;
		RuntimeObject * L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		RuntimeObject * L_35;
		L_35 = ReflectionExtensions_Cast_m4A207767C5CBF250AF4289E83BEE1C28D789D6C3(L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00aa:
	{
		// throw new ParserInputException($"Expression body {{{value}}} evaluated to an object of type '{result.GetType().GetDisplayName()}', " +
		//     $"which is incompatible with the expected type '{type.GetDisplayName()}'.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		ArrayElementTypeCheck (L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)));
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33643351DB533CFFD9D3514F861A07E78B5990B1)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		String_t* L_39 = ___value0;
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_38;
		ArrayElementTypeCheck (L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3AE1D62E6A1E4A0BB86C33324FCB6307E0DFA69B)));
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3AE1D62E6A1E4A0BB86C33324FCB6307E0DFA69B)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		RuntimeObject * L_42 = V_1;
		Type_t * L_43;
		L_43 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var)));
		String_t* L_44;
		L_44 = ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1(L_43, (bool)0, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_44);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_41;
		ArrayElementTypeCheck (L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31600AFFD8AACB2B8EFBA05BE6524A34EC7E8BC9)));
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31600AFFD8AACB2B8EFBA05BE6524A34EC7E8BC9)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		Type_t * L_47 = ___type1;
		String_t* L_48;
		L_48 = ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1(L_47, (bool)0, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_48);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_46;
		ArrayElementTypeCheck (L_49, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8)));
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8)));
		String_t* L_50;
		L_50 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_49, /*hidden argument*/NULL);
		ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D * L_51 = (ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParserInputException_t4F3E0880BEB55D4A4A0952EE76765F89354F3B3D_il2cpp_TypeInfo_var)));
		ParserInputException__ctor_m4BDDFC54749632A71A3E6BE861E9246DB2348FD9(L_51, L_50, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExpressionBodyGrammar_Parse_m82672462E57D386EB2FB69CE79BF43F7C13AF115_RuntimeMethod_var)));
	}
}
// System.Void QFSW.QC.Grammar.ExpressionBodyGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionBodyGrammar__ctor_m4DEC68E413200EE578EC7F53A47C524B12D9D5B3 (ExpressionBodyGrammar_t459CD6DF30F1EAA8E5CBFED41091EF8613B5D6B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral185DEBE76EE3B7788E2B3028DF63A43FFEE60433);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Regex _expressionBodyRegex = new Regex(@"^{.+}\??$");
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_0, _stringLiteral185DEBE76EE3B7788E2B3028DF63A43FFEE60433, /*hidden argument*/NULL);
		__this->set__expressionBodyRegex_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModulusOperatorGrammar_get_Precedence_m4932E23A0B67378797EFF824CA2EF1FC18F7E7AE (ModulusOperatorGrammar_tE69C120FC4E41E4DCCBFE22917F109A355EA7537 * __this, const RuntimeMethod* method)
{
	{
		// public override int Precedence => 4;
		return 4;
	}
}
// System.Char QFSW.QC.Grammar.ModulusOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar ModulusOperatorGrammar_get_OperatorToken_m445814A4242104EFE060D6E5DD62F5891DFBCBB8 (ModulusOperatorGrammar_tE69C120FC4E41E4DCCBFE22917F109A355EA7537 * __this, const RuntimeMethod* method)
{
	{
		// protected override char OperatorToken => '%';
		return ((int32_t)37);
	}
}
// System.String QFSW.QC.Grammar.ModulusOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModulusOperatorGrammar_get_OperatorMethodName_m25C5F53D6D9A20C6F9145FD34B5A83C8E912AE95 (ModulusOperatorGrammar_tE69C120FC4E41E4DCCBFE22917F109A355EA7537 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * ModulusOperatorGrammar_get_PrimitiveExpressionGenerator_m818519DE5120C9AE66BD1AA4057BD8A52AB18F61 (ModulusOperatorGrammar_tE69C120FC4E41E4DCCBFE22917F109A355EA7537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Modulo_m7D9A44AD71C5253090C91CD9BB70C9649A7EB07D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Modulo;
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_0 = (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *)il2cpp_codegen_object_new(Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC(L_0, NULL, (intptr_t)((intptr_t)Expression_Modulo_m7D9A44AD71C5253090C91CD9BB70C9649A7EB07D_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.ModulusOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusOperatorGrammar__ctor_m06ACE8975BFB02AF077B6E9C41769E97FFE55DA9 (ModulusOperatorGrammar_tE69C120FC4E41E4DCCBFE22917F109A355EA7537 * __this, const RuntimeMethod* method)
{
	{
		BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultiplyOperatorGrammar_get_Precedence_m85094975A192A489A2A22457804AE21E5EA826BD (MultiplyOperatorGrammar_t116E2715D8DF252BD3A1E473E5FB1280C5F84E67 * __this, const RuntimeMethod* method)
{
	{
		// public override int Precedence => 2;
		return 2;
	}
}
// System.Char QFSW.QC.Grammar.MultiplyOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MultiplyOperatorGrammar_get_OperatorToken_m515B89378D887581CF6E109745D6EB760E203C43 (MultiplyOperatorGrammar_t116E2715D8DF252BD3A1E473E5FB1280C5F84E67 * __this, const RuntimeMethod* method)
{
	{
		// protected override char OperatorToken => '*';
		return ((int32_t)42);
	}
}
// System.String QFSW.QC.Grammar.MultiplyOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultiplyOperatorGrammar_get_OperatorMethodName_m269515A319E73E50F276C290EAF5A4AC53FED733 (MultiplyOperatorGrammar_t116E2715D8DF252BD3A1E473E5FB1280C5F84E67 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * MultiplyOperatorGrammar_get_PrimitiveExpressionGenerator_m0E7AA9FA3CBA71A5AA598DEF294FE0C605DD94B1 (MultiplyOperatorGrammar_t116E2715D8DF252BD3A1E473E5FB1280C5F84E67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Multiply_m3A2CBEE34AE8ABD7CE12A92C8737F1B155E6E52C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Multiply;
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_0 = (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *)il2cpp_codegen_object_new(Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC(L_0, NULL, (intptr_t)((intptr_t)Expression_Multiply_m3A2CBEE34AE8ABD7CE12A92C8737F1B155E6E52C_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.MultiplyOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplyOperatorGrammar__ctor_m387D26344CB3B641D3934A24F36D30B7F50107CA (MultiplyOperatorGrammar_t116E2715D8DF252BD3A1E473E5FB1280C5F84E67 * __this, const RuntimeMethod* method)
{
	{
		BinaryOperatorGrammar__ctor_m7DD4E821BC4EE45862E5D5F43A199378D8D913A4(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubtractionOperatorGrammar_get_Precedence_m2D9D297E4E62D562308C624A50CDAAC19C47C045 (SubtractionOperatorGrammar_tD4C2AA53FD7444B8358F07854BFFC1412059C5F8 * __this, const RuntimeMethod* method)
{
	{
		// public override int Precedence => 1;
		return 1;
	}
}
// System.Char QFSW.QC.Grammar.SubtractionOperatorGrammar::get_OperatorToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar SubtractionOperatorGrammar_get_OperatorToken_m89EBBBE36104E976D790D09FDBF59C6BC5FF34B8 (SubtractionOperatorGrammar_tD4C2AA53FD7444B8358F07854BFFC1412059C5F8 * __this, const RuntimeMethod* method)
{
	{
		// protected override char OperatorToken => '-';
		return ((int32_t)45);
	}
}
// System.String QFSW.QC.Grammar.SubtractionOperatorGrammar::get_OperatorMethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubtractionOperatorGrammar_get_OperatorMethodName_mF943F01C94CC14928C6D4DF8909DD7019D75D2EF (SubtractionOperatorGrammar_tD4C2AA53FD7444B8358F07854BFFC1412059C5F8 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * SubtractionOperatorGrammar_get_PrimitiveExpressionGenerator_m9A228B0DB7DEDEB634280614389B3CA15D1524FD (SubtractionOperatorGrammar_tD4C2AA53FD7444B8358F07854BFFC1412059C5F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Subtract_m0BFA48F4180B86A89C118E872395324E6E84145B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Func<Expression, Expression, BinaryExpression> PrimitiveExpressionGenerator => Expression.Subtract;
		Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 * L_0 = (Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5 *)il2cpp_codegen_object_new(Func_3_tD5207BBFDD9DE2CA087865520F15950EA20C98A5_il2cpp_TypeInfo_var);
		Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC(L_0, NULL, (intptr_t)((intptr_t)Expression_Subtract_m0BFA48F4180B86A89C118E872395324E6E84145B_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m90DF82C1ED3CEF28DB475FF0060D057479FD9BDC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFSW.QC.Grammar.SubtractionOperatorGrammar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubtractionOperatorGrammar__ctor_mE5F01ABF3C4E42F96B9953955CCB0FA139011BDF (SubtractionOperatorGrammar_tD4C2AA53FD7444B8358F07854BFFC1412059C5F8 * __this, const RuntimeMethod* method)
{
	{
		BinaryAndUnaryOperatorGrammar__ctor_m4CF96587D87AADEEBEA09A2A6F484BD68B0AE241(__this, /*hidden argument*/NULL);
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
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m776DC894F632B166BF67D6AF1AA40B039EE78190 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * L_0 = (U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E *)il2cpp_codegen_object_new(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m125874F16869E73F612369349C80AB7CAF3199C6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m125874F16869E73F612369349C80AB7CAF3199C6 (U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<GetOperatorData>b__13_2(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetOperatorDataU3Eb__13_2_m328EB3C2B66E7BB06489F33A1115210738CA7EDF (U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * __this, MethodInfo_t * ___x0, const RuntimeMethod* method)
{
	{
		// .Where(x => x.GetParameters().Length == 2)
		MethodInfo_t * L_0 = ___x0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		return (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)2))? 1 : 0);
	}
}
// QFSW.QC.Grammar.BinaryOperatorData QFSW.QC.Grammar.BinaryOperatorGrammar/<>c::<GetOperatorData>b__13_3(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * U3CU3Ec_U3CGetOperatorDataU3Eb__13_3_m7C0FFEA36F0ECAE741D46A7ADA396C30B80E948E (U3CU3Ec_t1CB77FB56DF46B5ECC94D765DC04D95211A35B0E * __this, MethodInfo_t * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(x => new BinaryOperatorData(x))
		MethodInfo_t * L_0 = ___x0;
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_1 = (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 *)il2cpp_codegen_object_new(BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3_il2cpp_TypeInfo_var);
		BinaryOperatorData__ctor_mE73650A755A9E13DF46741AF3AB596AB8053921D(L_1, L_0, /*hidden argument*/NULL);
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
// System.Void QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m9AE90DC1C9D423165EAFB13C539F338F141C1777 (U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__0_mEAFB88BFEAC1C198F2711058E3F1FFBC8D371E03 (U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * __this, MethodInfo_t * ___x0, const RuntimeMethod* method)
{
	{
		// BinaryOperatorData[] candidates = methods.Where(x => x.Name == OperatorMethodName)
		MethodInfo_t * L_0 = ___x0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		BinaryOperatorGrammar_t1F4FA76811F9F3F62F66680CB7F1D3DD453A5D0C * L_2 = __this->get_U3CU3E4__this_0();
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String QFSW.QC.Grammar.BinaryOperatorGrammar::get_OperatorMethodName() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__1_m42DDE4AFD4C1D2876910682A2B29A3DE5A35C314 (U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * __this, MethodInfo_t * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => x.ReturnType == type)
		MethodInfo_t * L_0 = ___x0;
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		Type_t * L_2 = __this->get_type_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__4(QFSW.QC.Grammar.BinaryOperatorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__4_m28BBC7E0B92D26A7CEBC03523E06B71B3FC25BB8 (U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * __this, BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BinaryOperatorData idealCandidate = candidates.FirstOrDefault(x => x.LArg == type && x.RArg == type)
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_0 = ___x0;
		Type_t * L_1;
		L_1 = BinaryOperatorData_get_LArg_m52C4EB1E357BDCE4F1B705C38593F94A65D6E542_inline(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = __this->get_type_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_4 = ___x0;
		Type_t * L_5;
		L_5 = BinaryOperatorData_get_RArg_mF4AFB8C724E1DAA8A75A4C1C7D1596CB63D039D1_inline(L_4, /*hidden argument*/NULL);
		Type_t * L_6 = __this->get_type_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__5(QFSW.QC.Grammar.BinaryOperatorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__5_m1956D3C6B999A1D2D6E2B1DB66EF032499591F3B (U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * __this, BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ?? candidates.FirstOrDefault(x => x.LArg == type)
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_0 = ___x0;
		Type_t * L_1;
		L_1 = BinaryOperatorData_get_LArg_m52C4EB1E357BDCE4F1B705C38593F94A65D6E542_inline(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = __this->get_type_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean QFSW.QC.Grammar.BinaryOperatorGrammar/<>c__DisplayClass13_0::<GetOperatorData>b__6(QFSW.QC.Grammar.BinaryOperatorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CGetOperatorDataU3Eb__6_m16F7392B9D8998184A117E37E1C25A35FDEF2860 (U3CU3Ec__DisplayClass13_0_tF9F634E217ECB55195090D60EFC44651EB6554B0 * __this, BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ?? candidates.FirstOrDefault(x => x.RArg == type)
		BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * L_0 = ___x0;
		Type_t * L_1;
		L_1 = BinaryOperatorData_get_RArg_mF4AFB8C724E1DAA8A75A4C1C7D1596CB63D039D1_inline(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = __this->get_type_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get__innerException_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * BinaryOperatorData_get_LArg_m52C4EB1E357BDCE4F1B705C38593F94A65D6E542_inline (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, const RuntimeMethod* method)
{
	{
		// public Type LArg { get; }
		Type_t * L_0 = __this->get_U3CLArgU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * BinaryOperatorData_get_RArg_mF4AFB8C724E1DAA8A75A4C1C7D1596CB63D039D1_inline (BinaryOperatorData_t470EC8054057745BC4F98772FFA56EC5DA2E12D3 * __this, const RuntimeMethod* method)
{
	{
		// public Type RArg { get; }
		Type_t * L_0 = __this->get_U3CRArgU3Ek__BackingField_1();
		return L_0;
	}
}
