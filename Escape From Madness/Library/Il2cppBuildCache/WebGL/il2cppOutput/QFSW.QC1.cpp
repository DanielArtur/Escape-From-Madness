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

// System.Action`1<System.Collections.Generic.List`1<QFSW.QC.CommandData>>
struct Action_1_t9B0F04BB031D31003153D6DDA285422CBE843483;
// System.Action`1<QFSW.QC.ILog>
struct Action_1_tF3859A0A7F70410D19A5EE3F2D8092FD05D1F4BD;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_t089158EC5B60BA9524898F4AC52FEBB3F3F48198;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,QFSW.QC.CommandData>
struct ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Char,System.Object>
struct Func_2_t225B855E9BC31283EA4F08379810F7AF97E56D2E;
// System.Func`2<System.Char,System.String>
struct Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B;
// System.Func`2<QFSW.QC.CommandData,System.Boolean>
struct Func_2_t8091AA592ED00AB14FE758BBCA0CD4DAAC9704AD;
// System.Func`2<QFSW.QC.CommandData,System.Int32>
struct Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123;
// System.Func`2<QFSW.QC.CommandData,System.String>
struct Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7;
// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118;
// System.Func`2<QFSW.QC.IQcGrammarConstruct,System.Int32>
struct Func_2_tD9062FA76199CF3623D95F624CA5EE4E9C7E0852;
// System.Func`2<QFSW.QC.IQcParser,System.Int32>
struct Func_2_tF34BD8365EF4F3EE0B32759466C6B571133E9889;
// System.Func`2<QFSW.QC.IQcPreprocessor,System.Int32>
struct Func_2_tE96A0ADFD7C8E65B983977E62CA07F5702F6AC54;
// System.Func`2<QFSW.QC.IQcSerializer,System.Int32>
struct Func_2_tEE305B422E73D9803F7C4A194C51947A5B253F83;
// System.Func`2<System.Reflection.MethodInfo,System.Type>
struct Func_2_t1D543CC12735B4D12BE733C038703707C39D2883;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<UnityEngine.Object,System.Boolean>
struct Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800;
// System.Func`2<UnityEngine.Object,System.String>
struct Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C;
// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Func`2<System.Type,System.Object>
struct Func_2_t0EE3DF8BFA394616A71C7D53A54FE8184A9F6CCB;
// System.Func`2<System.Type,System.String>
struct Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_tA116A870C8332D2D64FD13D5449B11BC676AC3D3;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Object>
struct IEnumerable_1_tE06D8FC7400A44A0C92248F3553317760FCABF28;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.MethodInfo,System.Reflection.MemberInfo>>
struct IEnumerator_1_tC80C02F5860F51A91D56F921E215441961E16387;
// System.Collections.Generic.IEnumerator`1<QFSW.QC.CommandData>
struct IEnumerator_1_t028782BD14A5648171F8258086A1F44E2A813F50;
// System.Collections.Generic.IEnumerator`1<QFSW.QC.ICommandAction>
struct IEnumerator_1_tA9E5FBE6453564FE843884C608F65C1FAEB3547D;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.List`1<System.Collections.Generic.IEnumerator`1<QFSW.QC.ICommandAction>>
struct List_1_t228D84E45D03552E714C09BD59C6B789048CDAE9;
// System.Collections.Generic.List`1<QFSW.QC.CollectionFormatter>
struct List_1_t261BFD240858FE2575671837FC1901D96C95CB70;
// System.Collections.Generic.List`1<QFSW.QC.CommandData>
struct List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB;
// System.Collections.Generic.List`1<QFSW.QC.TypeColorFormatter>
struct List_1_t6199F3A9C60F03935155B05D6D6D48D38528BD72;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,QFSW.QC.CommandData>
struct Tables_t375B3B1E8C12A12BBBCEE63BD5F45A2C75629914;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// QFSW.QC.CommandData[]
struct CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// QFSW.QC.CommandAttribute
struct CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD;
// QFSW.QC.CommandData
struct CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA;
// QFSW.QC.CommandDescriptionAttribute
struct CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// QFSW.QC.Internal.FieldAutoMethod
struct FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5;
// QFSW.QC.Internal.FieldDelegateMethod
struct FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// QFSW.QC.ICommandAction
struct ICommandAction_t20BB100EC1DCD16A08B47FE432C2C5F9368284B6;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_tC8BCE1D3E22F82F78095824C7EB2F62A6DAD2492;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// QFSW.QC.ILogQueue
struct ILogQueue_t5A74E1D51CCC4EDBC068DBF28FC985E34B6A290E;
// QFSW.QC.ILogStorage
struct ILogStorage_t55522441AACB2D25A6669335D8C2338B023A840D;
// QFSW.QC.IQcGrammarConstruct
struct IQcGrammarConstruct_t8562EC0D399EB3882BE1582F1B3E3A1E76A2E57D;
// QFSW.QC.IQcParser
struct IQcParser_t7830B195B9C10F33AECA5B7636B3DBA6B4C15966;
// QFSW.QC.IQcPreprocessor
struct IQcPreprocessor_t0024055B8FCBF40FEF04A5390A512C0A04C0E73F;
// QFSW.QC.IQcSerializer
struct IQcSerializer_t9CEEAA20DAB33C244027FAD88BBE23D7D047B24A;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// QFSW.QC.QuantumConsole
struct QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE;
// QFSW.QC.QuantumKeyConfig
struct QuantumKeyConfig_t2FB38479B8D655251876262DC30E6660E8A92E1B;
// QFSW.QC.QuantumParser
struct QuantumParser_t806513409CC77ECF389E82233FEB3CFDE627E13E;
// QFSW.QC.QuantumPreprocessor
struct QuantumPreprocessor_t930CD55EACA9F6E46C729CF198DFB2BAB2393842;
// QFSW.QC.QuantumSerializer
struct QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2;
// QFSW.QC.QuantumTheme
struct QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.String
struct String_t;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_InputField
struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1;
// System.Type
struct Type_t;
// QFSW.QC.Actions.Value
struct Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// QFSW.QC.Actions.WaitRealtime
struct WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0;
// QFSW.QC.Actions.WaitUntil
struct WaitUntil_t292EB83F32C88059D1FD61F1D00C4E8F1266380B;
// QFSW.QC.Actions.WaitWhile
struct WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// QFSW.QC.CommandData/<>c
struct U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3;
// QFSW.QC.CommandData/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43;
// QFSW.QC.CommandData/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_t5BF1027F746D463B47A666006ADCD042883E032C;
// QFSW.QC.Utilities.GameObjectExtensions/<>c
struct U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950;
// QFSW.QC.Utilities.GameObjectExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAE8E22D9D369EDEEA1D66366399CB5735EF05512;
// QFSW.QC.Actions.GetKey/<>c
struct U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813;
// QFSW.QC.InvocationTargetFactory/<>c
struct U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B;
// QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103
struct U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65;
// QFSW.QC.QuantumConsoleProcessor/<>c
struct U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51;
// QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_t0F8E223542E814B0B04FBAF6C87E4186BE2F997F;
// QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF;
// QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE24452145EC086D0B32FD1228AC9F8408E5D9369;
// QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31
struct U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5;
// QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25
struct U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC;
// QFSW.QC.QuantumMacros/<>c
struct U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B;
// QFSW.QC.QuantumMacros/MacroPreprocessor
struct MacroPreprocessor_t051ED110E50A6D956EE15B6187903A2D95FBA209;
// QFSW.QC.QuantumParser/<>c
struct U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB;
// QFSW.QC.QuantumPreprocessor/<>c
struct U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0;
// QFSW.QC.QuantumRegistry/<>c
struct U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310;
// QFSW.QC.QuantumSerializer/<>c
struct U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72;
// QFSW.QC.Utilities.ReflectionExtensions/<>c
struct U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048;
// QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72;
// QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tC4872F1DF618642D9C65BC17058FEAF7197346F6;
// QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t86E4169355065921939A5911DB0E3AA4FA079363;
// QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t7679C6B1D7AA6706929DFC28DF4D3BBC1BEE01DA;
// QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6
struct U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81;
// QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7
struct U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// QFSW.QC.Actions.Typewriter/<>c
struct U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD;
// QFSW.QC.Actions.Typewriter/<Generate>d__5
struct U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126;
// QFSW.QC.Actions.WaitKey/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t82A4924E28FF459D6523825CD8F05F8D1766AF2E;
// QFSW.QC.Actions.WaitUntil/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChunkType_tE9CFDC0C356B99C9C31A78DAE39A4441E329456B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorExtensions_tD3154824681000B1AF8069386265CF78F5B524FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQcGrammarConstruct_t8562EC0D399EB3882BE1582F1B3E3A1E76A2E57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQcParser_t7830B195B9C10F33AECA5B7636B3DBA6B4C15966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQcPreprocessor_t0024055B8FCBF40FEF04A5390A512C0A04C0E73F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IQcSerializer_t9CEEAA20DAB33C244027FAD88BBE23D7D047B24A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuantumMacros_t834D8F9F1C304813BFE0DDA2116A371AEFB28048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral040C4A69C69CDD982826E7D708B5E3CF5BC0D10C;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1CF762408303A9665AAAB8A1B776190FA10075;
IL2CPP_EXTERN_C String_t* _stringLiteral2F7884CF8E0F9D08916DA9F7A140F4B71E1EC1F4;
IL2CPP_EXTERN_C String_t* _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59;
IL2CPP_EXTERN_C String_t* _stringLiteral7454756893BEDA0A23EAF360A00EACE4B2906D7A;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral8B53D498E625F84E2F4906D295E6EFE068481F41;
IL2CPP_EXTERN_C String_t* _stringLiteralA327CFEAD8A28A1F2BD203C234CBA04D69209194;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m3AE07161FA6AFF5CB71D58DE260289DCEF0D2E4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A_mE36A3DC8ED36314C0336D6DDF6B366487ECF6FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m7CDE0512D8F88B207A7B16B6DDF52E02DE3E1BB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Item_mD54906C3F76B3E01DE8A2BE93F1E791B12586DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m54EBD6BB6243BC3296666DC1468DA63B3E454277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_mBBCF9125E7B1D36ECE2D6F5186C4D918AEEC45B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_TisString_t_m1A9B81888535C501740FD2655C52963B108E4708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mBCEB06F7582B460804F50C6580EF9EB4CA956B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m661F316CCEDBF8C6EC183BD380B643CE2AD9D14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC8E4179AABBC00114DCD90AD69D6AA670DC49537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEE22C643473CDF7EC9FD8D800145ADD3DE84A40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_HasAttribute_TisCommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD_mA0BC1A08C75ACD9E1C317711699E78848F976D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateCommandOverloadsU3Ed__31_System_Collections_IEnumerator_Reset_m381F9B04C4BE945380A4EFD3B8F0F857006F09D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExtractCommandMethodsU3Ed__25_System_Collections_IEnumerator_Reset_mD8FF49B2E403CEB7887C25EBF4B39A88BB4208EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenerateU3Ed__5_MoveNext_m82AA50B9DBB3EFEB08C28024E967C8430C9640B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenerateU3Ed__5_System_Collections_IEnumerator_Reset_mB69E115C87B48158AA20DBCF9F650E3B17C28DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__6_System_Collections_IEnumerator_Reset_mDD05017218289306255040861FB2E7615C8C8138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_IEnumerator_Reset_m58758A0561E87F9FCFD1BA38175353E65A879AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_m874EB91C05E1377F91B5A2AE22807B32F80DD094_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateCommandOverloadsU3Eb__31_0_m4FB3C5EA8DC57FDC34883AF559ECAFEFDB4D0541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindTargetsU3Eb__2_4_m1925678E150EA8DF8D063A817B790789776BE4A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGenerateU3Eb__5_0_m2F6CE06BEDE1F951468AFEA69398129097702055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mCF26D9B75F1CCBEC4858F292A799BF50A8ED23AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,QFSW.QC.CommandData>
struct ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t375B3B1E8C12A12BBBCEE63BD5F45A2C75629914 * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496, ____tables_0)); }
	inline Tables_t375B3B1E8C12A12BBBCEE63BD5F45A2C75629914 * get__tables_0() const { return ____tables_0; }
	inline Tables_t375B3B1E8C12A12BBBCEE63BD5F45A2C75629914 ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_t375B3B1E8C12A12BBBCEE63BD5F45A2C75629914 * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_4;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_4() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496_StaticFields, ___s_isValueWriteAtomic_4)); }
	inline bool get_s_isValueWriteAtomic_4() const { return ___s_isValueWriteAtomic_4; }
	inline bool* get_address_of_s_isValueWriteAtomic_4() { return &___s_isValueWriteAtomic_4; }
	inline void set_s_isValueWriteAtomic_4(bool value)
	{
		___s_isValueWriteAtomic_4 = value;
	}
};


// System.Collections.Generic.List`1<QFSW.QC.CommandData>
struct List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321, ____items_1)); }
	inline CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B* get__items_1() const { return ____items_1; }
	inline CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321_StaticFields, ____emptyArray_5)); }
	inline CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CommandDataU5BU5D_tA8E522891A11B248092D8837DDF080EE64B1123B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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


// QFSW.QC.Actions.Value
struct Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B  : public RuntimeObject
{
public:
	// System.Object QFSW.QC.Actions.Value::_value
	RuntimeObject * ____value_0;
	// System.Boolean QFSW.QC.Actions.Value::_newline
	bool ____newline_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}

	inline static int32_t get_offset_of__newline_1() { return static_cast<int32_t>(offsetof(Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B, ____newline_1)); }
	inline bool get__newline_1() const { return ____newline_1; }
	inline bool* get_address_of__newline_1() { return &____newline_1; }
	inline void set__newline_1(bool value)
	{
		____newline_1 = value;
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

// QFSW.QC.Actions.WaitRealtime
struct WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0  : public RuntimeObject
{
public:
	// System.Single QFSW.QC.Actions.WaitRealtime::_startTime
	float ____startTime_0;
	// System.Single QFSW.QC.Actions.WaitRealtime::_duration
	float ____duration_1;

public:
	inline static int32_t get_offset_of__startTime_0() { return static_cast<int32_t>(offsetof(WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0, ____startTime_0)); }
	inline float get__startTime_0() const { return ____startTime_0; }
	inline float* get_address_of__startTime_0() { return &____startTime_0; }
	inline void set__startTime_0(float value)
	{
		____startTime_0 = value;
	}

	inline static int32_t get_offset_of__duration_1() { return static_cast<int32_t>(offsetof(WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0, ____duration_1)); }
	inline float get__duration_1() const { return ____duration_1; }
	inline float* get_address_of__duration_1() { return &____duration_1; }
	inline void set__duration_1(float value)
	{
		____duration_1 = value;
	}
};


// QFSW.QC.Actions.WaitWhile
struct WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9  : public RuntimeObject
{
public:
	// System.Func`1<System.Boolean> QFSW.QC.Actions.WaitWhile::_condition
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ____condition_0;

public:
	inline static int32_t get_offset_of__condition_0() { return static_cast<int32_t>(offsetof(WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9, ____condition_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get__condition_0() const { return ____condition_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of__condition_0() { return &____condition_0; }
	inline void set__condition_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		____condition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____condition_0), (void*)value);
	}
};


// QFSW.QC.CommandData/<>c
struct U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_StaticFields
{
public:
	// QFSW.QC.CommandData/<>c QFSW.QC.CommandData/<>c::<>9
	U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.String> QFSW.QC.CommandData/<>c::<>9__24_0
	Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * ___U3CU3E9__24_0_1;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> QFSW.QC.CommandData/<>c::<>9__28_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__28_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_StaticFields, ___U3CU3E9__24_0_1)); }
	inline Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_StaticFields, ___U3CU3E9__28_0_2)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__28_0_2() const { return ___U3CU3E9__28_0_2; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__28_0_2() { return &___U3CU3E9__28_0_2; }
	inline void set_U3CU3E9__28_0_2(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__28_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_0_2), (void*)value);
	}
};


// QFSW.QC.CommandData/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43  : public RuntimeObject
{
public:
	// QFSW.QC.CommandData QFSW.QC.CommandData/<>c__DisplayClass22_0::<>4__this
	CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___U3CU3E4__this_0;
	// System.Type QFSW.QC.CommandData/<>c__DisplayClass22_0::declaringType
	Type_t * ___declaringType_1;
	// System.Reflection.MethodInfo QFSW.QC.CommandData/<>c__DisplayClass22_0::method
	MethodInfo_t * ___method_2;
	// System.Type[] QFSW.QC.CommandData/<>c__DisplayClass22_0::genericTypeArguments
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___genericTypeArguments_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43, ___U3CU3E4__this_0)); }
	inline CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_declaringType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43, ___declaringType_1)); }
	inline Type_t * get_declaringType_1() const { return ___declaringType_1; }
	inline Type_t ** get_address_of_declaringType_1() { return &___declaringType_1; }
	inline void set_declaringType_1(Type_t * value)
	{
		___declaringType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declaringType_1), (void*)value);
	}

	inline static int32_t get_offset_of_method_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43, ___method_2)); }
	inline MethodInfo_t * get_method_2() const { return ___method_2; }
	inline MethodInfo_t ** get_address_of_method_2() { return &___method_2; }
	inline void set_method_2(MethodInfo_t * value)
	{
		___method_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_2), (void*)value);
	}

	inline static int32_t get_offset_of_genericTypeArguments_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43, ___genericTypeArguments_3)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_genericTypeArguments_3() const { return ___genericTypeArguments_3; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_genericTypeArguments_3() { return &___genericTypeArguments_3; }
	inline void set_genericTypeArguments_3(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___genericTypeArguments_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genericTypeArguments_3), (void*)value);
	}
};


// QFSW.QC.CommandData/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_t5BF1027F746D463B47A666006ADCD042883E032C  : public RuntimeObject
{
public:
	// System.Type[] QFSW.QC.CommandData/<>c__DisplayClass22_1::genericTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___genericTypes_0;
	// QFSW.QC.CommandData/<>c__DisplayClass22_0 QFSW.QC.CommandData/<>c__DisplayClass22_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_genericTypes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_t5BF1027F746D463B47A666006ADCD042883E032C, ___genericTypes_0)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_genericTypes_0() const { return ___genericTypes_0; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_genericTypes_0() { return &___genericTypes_0; }
	inline void set_genericTypes_0(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___genericTypes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genericTypes_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_t5BF1027F746D463B47A666006ADCD042883E032C, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// QFSW.QC.Utilities.GameObjectExtensions/<>c
struct U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950_StaticFields
{
public:
	// QFSW.QC.Utilities.GameObjectExtensions/<>c QFSW.QC.Utilities.GameObjectExtensions/<>c::<>9
	U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Boolean> QFSW.QC.Utilities.GameObjectExtensions/<>c::<>9__2_0
	Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t74D96FD01772F3E8773895FC5FAA971DFBA81118 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// QFSW.QC.Utilities.GameObjectExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAE8E22D9D369EDEEA1D66366399CB5735EF05512  : public RuntimeObject
{
public:
	// System.String QFSW.QC.Utilities.GameObjectExtensions/<>c__DisplayClass2_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tAE8E22D9D369EDEEA1D66366399CB5735EF05512, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// QFSW.QC.Actions.GetKey/<>c
struct U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813_StaticFields
{
public:
	// QFSW.QC.Actions.GetKey/<>c QFSW.QC.Actions.GetKey/<>c::<>9
	U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// QFSW.QC.InvocationTargetFactory/<>c
struct U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields
{
public:
	// QFSW.QC.InvocationTargetFactory/<>c QFSW.QC.InvocationTargetFactory/<>c::<>9
	U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Object,System.Boolean> QFSW.QC.InvocationTargetFactory/<>c::<>9__2_4
	Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * ___U3CU3E9__2_4_1;
	// System.Func`2<System.Type,System.Object> QFSW.QC.InvocationTargetFactory/<>c::<>9__2_0
	Func_2_t0EE3DF8BFA394616A71C7D53A54FE8184A9F6CCB * ___U3CU3E9__2_0_2;
	// System.Func`2<UnityEngine.Object,System.String> QFSW.QC.InvocationTargetFactory/<>c::<>9__2_1
	Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C * ___U3CU3E9__2_1_3;
	// System.Func`2<UnityEngine.Object,System.Boolean> QFSW.QC.InvocationTargetFactory/<>c::<>9__2_2
	Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * ___U3CU3E9__2_2_4;
	// System.Func`2<UnityEngine.Object,System.String> QFSW.QC.InvocationTargetFactory/<>c::<>9__2_3
	Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C * ___U3CU3E9__2_3_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_4_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields, ___U3CU3E9__2_4_1)); }
	inline Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * get_U3CU3E9__2_4_1() const { return ___U3CU3E9__2_4_1; }
	inline Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 ** get_address_of_U3CU3E9__2_4_1() { return &___U3CU3E9__2_4_1; }
	inline void set_U3CU3E9__2_4_1(Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * value)
	{
		___U3CU3E9__2_4_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_4_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields, ___U3CU3E9__2_0_2)); }
	inline Func_2_t0EE3DF8BFA394616A71C7D53A54FE8184A9F6CCB * get_U3CU3E9__2_0_2() const { return ___U3CU3E9__2_0_2; }
	inline Func_2_t0EE3DF8BFA394616A71C7D53A54FE8184A9F6CCB ** get_address_of_U3CU3E9__2_0_2() { return &___U3CU3E9__2_0_2; }
	inline void set_U3CU3E9__2_0_2(Func_2_t0EE3DF8BFA394616A71C7D53A54FE8184A9F6CCB * value)
	{
		___U3CU3E9__2_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields, ___U3CU3E9__2_1_3)); }
	inline Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C * get_U3CU3E9__2_1_3() const { return ___U3CU3E9__2_1_3; }
	inline Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C ** get_address_of_U3CU3E9__2_1_3() { return &___U3CU3E9__2_1_3; }
	inline void set_U3CU3E9__2_1_3(Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C * value)
	{
		___U3CU3E9__2_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_2_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields, ___U3CU3E9__2_2_4)); }
	inline Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * get_U3CU3E9__2_2_4() const { return ___U3CU3E9__2_2_4; }
	inline Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 ** get_address_of_U3CU3E9__2_2_4() { return &___U3CU3E9__2_2_4; }
	inline void set_U3CU3E9__2_2_4(Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * value)
	{
		___U3CU3E9__2_2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields, ___U3CU3E9__2_3_5)); }
	inline Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C * get_U3CU3E9__2_3_5() const { return ___U3CU3E9__2_3_5; }
	inline Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C ** get_address_of_U3CU3E9__2_3_5() { return &___U3CU3E9__2_3_5; }
	inline void set_U3CU3E9__2_3_5(Func_2_tBA723B277D4D744486A3B4C496DD65CBDB1CE26C * value)
	{
		___U3CU3E9__2_3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3_5), (void*)value);
	}
};


// QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103
struct U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65  : public RuntimeObject
{
public:
	// System.Int32 QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// QFSW.QC.QuantumConsole QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::<>4__this
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * ___U3CU3E4__this_3;
	// System.Int32 QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::displaySize
	int32_t ___displaySize_4;
	// System.Int32 QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::<>3__displaySize
	int32_t ___U3CU3E3__displaySize_5;
	// System.Int32 QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::<i>5__2
	int32_t ___U3CiU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65, ___U3CU3E4__this_3)); }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_displaySize_4() { return static_cast<int32_t>(offsetof(U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65, ___displaySize_4)); }
	inline int32_t get_displaySize_4() const { return ___displaySize_4; }
	inline int32_t* get_address_of_displaySize_4() { return &___displaySize_4; }
	inline void set_displaySize_4(int32_t value)
	{
		___displaySize_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__displaySize_5() { return static_cast<int32_t>(offsetof(U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65, ___U3CU3E3__displaySize_5)); }
	inline int32_t get_U3CU3E3__displaySize_5() const { return ___U3CU3E3__displaySize_5; }
	inline int32_t* get_address_of_U3CU3E3__displaySize_5() { return &___U3CU3E3__displaySize_5; }
	inline void set_U3CU3E3__displaySize_5(int32_t value)
	{
		___U3CU3E3__displaySize_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65, ___U3CiU3E5__2_6)); }
	inline int32_t get_U3CiU3E5__2_6() const { return ___U3CiU3E5__2_6; }
	inline int32_t* get_address_of_U3CiU3E5__2_6() { return &___U3CiU3E5__2_6; }
	inline void set_U3CiU3E5__2_6(int32_t value)
	{
		___U3CiU3E5__2_6 = value;
	}
};


// QFSW.QC.QuantumConsoleProcessor/<>c
struct U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields
{
public:
	// QFSW.QC.QuantumConsoleProcessor/<>c QFSW.QC.QuantumConsoleProcessor/<>c::<>9
	U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__3_1
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__3_1_1;
	// System.Func`2<QFSW.QC.CommandData,System.String> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__4_0
	Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * ___U3CU3E9__4_0_2;
	// System.Func`2<QFSW.QC.CommandData,System.String> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__4_1
	Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * ___U3CU3E9__4_1_3;
	// System.Func`2<QFSW.QC.CommandData,System.Boolean> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__6_0
	Func_2_t8091AA592ED00AB14FE758BBCA0CD4DAAC9704AD * ___U3CU3E9__6_0_4;
	// System.Func`2<QFSW.QC.CommandData,System.String> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__6_1
	Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * ___U3CU3E9__6_1_5;
	// System.Func`2<System.Reflection.ParameterInfo,System.Boolean> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__31_0
	Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * ___U3CU3E9__31_0_6;
	// System.Func`2<System.String,System.Boolean> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__35_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__35_0_7;
	// System.Func`2<System.Type,System.Boolean> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__35_1
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__35_1_8;
	// System.Func`2<QFSW.QC.CommandData,System.Int32> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__37_1
	Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * ___U3CU3E9__37_1_9;
	// System.Func`2<QFSW.QC.CommandData,System.String> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__37_2
	Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * ___U3CU3E9__37_2_10;
	// System.Func`2<QFSW.QC.CommandData,System.Int32> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__37_3
	Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * ___U3CU3E9__37_3_11;
	// System.Func`2<QFSW.QC.CommandData,System.String> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__37_4
	Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * ___U3CU3E9__37_4_12;
	// System.Func`2<QFSW.QC.CommandData,System.Int32> QFSW.QC.QuantumConsoleProcessor/<>c::<>9__37_5
	Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * ___U3CU3E9__37_5_13;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__3_1_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__3_1_1() const { return ___U3CU3E9__3_1_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__3_1_1() { return &___U3CU3E9__3_1_1; }
	inline void set_U3CU3E9__3_1_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__3_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__4_0_2)); }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * get_U3CU3E9__4_0_2() const { return ___U3CU3E9__4_0_2; }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 ** get_address_of_U3CU3E9__4_0_2() { return &___U3CU3E9__4_0_2; }
	inline void set_U3CU3E9__4_0_2(Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * value)
	{
		___U3CU3E9__4_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__4_1_3)); }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * get_U3CU3E9__4_1_3() const { return ___U3CU3E9__4_1_3; }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 ** get_address_of_U3CU3E9__4_1_3() { return &___U3CU3E9__4_1_3; }
	inline void set_U3CU3E9__4_1_3(Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * value)
	{
		___U3CU3E9__4_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__6_0_4)); }
	inline Func_2_t8091AA592ED00AB14FE758BBCA0CD4DAAC9704AD * get_U3CU3E9__6_0_4() const { return ___U3CU3E9__6_0_4; }
	inline Func_2_t8091AA592ED00AB14FE758BBCA0CD4DAAC9704AD ** get_address_of_U3CU3E9__6_0_4() { return &___U3CU3E9__6_0_4; }
	inline void set_U3CU3E9__6_0_4(Func_2_t8091AA592ED00AB14FE758BBCA0CD4DAAC9704AD * value)
	{
		___U3CU3E9__6_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__6_1_5)); }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * get_U3CU3E9__6_1_5() const { return ___U3CU3E9__6_1_5; }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 ** get_address_of_U3CU3E9__6_1_5() { return &___U3CU3E9__6_1_5; }
	inline void set_U3CU3E9__6_1_5(Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * value)
	{
		___U3CU3E9__6_1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__31_0_6)); }
	inline Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * get_U3CU3E9__31_0_6() const { return ___U3CU3E9__31_0_6; }
	inline Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F ** get_address_of_U3CU3E9__31_0_6() { return &___U3CU3E9__31_0_6; }
	inline void set_U3CU3E9__31_0_6(Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * value)
	{
		___U3CU3E9__31_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__35_0_7)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__35_0_7() const { return ___U3CU3E9__35_0_7; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__35_0_7() { return &___U3CU3E9__35_0_7; }
	inline void set_U3CU3E9__35_0_7(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__35_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_0_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_1_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__35_1_8)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__35_1_8() const { return ___U3CU3E9__35_1_8; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__35_1_8() { return &___U3CU3E9__35_1_8; }
	inline void set_U3CU3E9__35_1_8(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__35_1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_1_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__37_1_9)); }
	inline Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * get_U3CU3E9__37_1_9() const { return ___U3CU3E9__37_1_9; }
	inline Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 ** get_address_of_U3CU3E9__37_1_9() { return &___U3CU3E9__37_1_9; }
	inline void set_U3CU3E9__37_1_9(Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * value)
	{
		___U3CU3E9__37_1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_1_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_2_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__37_2_10)); }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * get_U3CU3E9__37_2_10() const { return ___U3CU3E9__37_2_10; }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 ** get_address_of_U3CU3E9__37_2_10() { return &___U3CU3E9__37_2_10; }
	inline void set_U3CU3E9__37_2_10(Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * value)
	{
		___U3CU3E9__37_2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_2_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_3_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__37_3_11)); }
	inline Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * get_U3CU3E9__37_3_11() const { return ___U3CU3E9__37_3_11; }
	inline Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 ** get_address_of_U3CU3E9__37_3_11() { return &___U3CU3E9__37_3_11; }
	inline void set_U3CU3E9__37_3_11(Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * value)
	{
		___U3CU3E9__37_3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_3_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_4_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__37_4_12)); }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * get_U3CU3E9__37_4_12() const { return ___U3CU3E9__37_4_12; }
	inline Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 ** get_address_of_U3CU3E9__37_4_12() { return &___U3CU3E9__37_4_12; }
	inline void set_U3CU3E9__37_4_12(Func_2_tA99A33C214DD8B4C5933969FD19ED385083427A7 * value)
	{
		___U3CU3E9__37_4_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_4_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_5_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields, ___U3CU3E9__37_5_13)); }
	inline Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * get_U3CU3E9__37_5_13() const { return ___U3CU3E9__37_5_13; }
	inline Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 ** get_address_of_U3CU3E9__37_5_13() { return &___U3CU3E9__37_5_13; }
	inline void set_U3CU3E9__37_5_13(Func_2_t7152DF8F9380EC626573A9BA6DF7D4AD7EDB9123 * value)
	{
		___U3CU3E9__37_5_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_5_13), (void*)value);
	}
};


// QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_t0F8E223542E814B0B04FBAF6C87E4186BE2F997F  : public RuntimeObject
{
public:
	// System.String QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass35_0::commandName
	String_t* ___commandName_0;

public:
	inline static int32_t get_offset_of_commandName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t0F8E223542E814B0B04FBAF6C87E4186BE2F997F, ___commandName_0)); }
	inline String_t* get_commandName_0() const { return ___commandName_0; }
	inline String_t** get_address_of_commandName_0() { return &___commandName_0; }
	inline void set_commandName_0(String_t* value)
	{
		___commandName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandName_0), (void*)value);
	}
};


// QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF  : public RuntimeObject
{
public:
	// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0::fuzzy
	bool ___fuzzy_0;
	// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0::caseSensitive
	bool ___caseSensitive_1;
	// System.String QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0::incompleteCommandName
	String_t* ___incompleteCommandName_2;

public:
	inline static int32_t get_offset_of_fuzzy_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF, ___fuzzy_0)); }
	inline bool get_fuzzy_0() const { return ___fuzzy_0; }
	inline bool* get_address_of_fuzzy_0() { return &___fuzzy_0; }
	inline void set_fuzzy_0(bool value)
	{
		___fuzzy_0 = value;
	}

	inline static int32_t get_offset_of_caseSensitive_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF, ___caseSensitive_1)); }
	inline bool get_caseSensitive_1() const { return ___caseSensitive_1; }
	inline bool* get_address_of_caseSensitive_1() { return &___caseSensitive_1; }
	inline void set_caseSensitive_1(bool value)
	{
		___caseSensitive_1 = value;
	}

	inline static int32_t get_offset_of_incompleteCommandName_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF, ___incompleteCommandName_2)); }
	inline String_t* get_incompleteCommandName_2() const { return ___incompleteCommandName_2; }
	inline String_t** get_address_of_incompleteCommandName_2() { return &___incompleteCommandName_2; }
	inline void set_incompleteCommandName_2(String_t* value)
	{
		___incompleteCommandName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___incompleteCommandName_2), (void*)value);
	}
};


// QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE24452145EC086D0B32FD1228AC9F8408E5D9369  : public RuntimeObject
{
public:
	// System.String QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass3_0::commandName
	String_t* ___commandName_0;

public:
	inline static int32_t get_offset_of_commandName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tE24452145EC086D0B32FD1228AC9F8408E5D9369, ___commandName_0)); }
	inline String_t* get_commandName_0() const { return ___commandName_0; }
	inline String_t** get_address_of_commandName_0() { return &___commandName_0; }
	inline void set_commandName_0(String_t* value)
	{
		___commandName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandName_0), (void*)value);
	}
};


// QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31
struct U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5  : public RuntimeObject
{
public:
	// System.Int32 QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// QFSW.QC.CommandData QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::<>2__current
	CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___U3CU3E2__current_1;
	// System.Int32 QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Reflection.MethodInfo QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::method
	MethodInfo_t * ___method_3;
	// System.Reflection.MethodInfo QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::<>3__method
	MethodInfo_t * ___U3CU3E3__method_4;
	// QFSW.QC.CommandAttribute QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::commandAttribute
	CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * ___commandAttribute_5;
	// QFSW.QC.CommandAttribute QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::<>3__commandAttribute
	CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * ___U3CU3E3__commandAttribute_6;
	// QFSW.QC.CommandDescriptionAttribute QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::descriptionAttribute
	CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * ___descriptionAttribute_7;
	// QFSW.QC.CommandDescriptionAttribute QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::<>3__descriptionAttribute
	CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * ___U3CU3E3__descriptionAttribute_8;
	// System.Int32 QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::<defaultParameters>5__2
	int32_t ___U3CdefaultParametersU3E5__2_9;
	// System.Int32 QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::<i>5__3
	int32_t ___U3CiU3E5__3_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___U3CU3E2__current_1)); }
	inline CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__method_4() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___U3CU3E3__method_4)); }
	inline MethodInfo_t * get_U3CU3E3__method_4() const { return ___U3CU3E3__method_4; }
	inline MethodInfo_t ** get_address_of_U3CU3E3__method_4() { return &___U3CU3E3__method_4; }
	inline void set_U3CU3E3__method_4(MethodInfo_t * value)
	{
		___U3CU3E3__method_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__method_4), (void*)value);
	}

	inline static int32_t get_offset_of_commandAttribute_5() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___commandAttribute_5)); }
	inline CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * get_commandAttribute_5() const { return ___commandAttribute_5; }
	inline CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD ** get_address_of_commandAttribute_5() { return &___commandAttribute_5; }
	inline void set_commandAttribute_5(CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * value)
	{
		___commandAttribute_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandAttribute_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__commandAttribute_6() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___U3CU3E3__commandAttribute_6)); }
	inline CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * get_U3CU3E3__commandAttribute_6() const { return ___U3CU3E3__commandAttribute_6; }
	inline CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD ** get_address_of_U3CU3E3__commandAttribute_6() { return &___U3CU3E3__commandAttribute_6; }
	inline void set_U3CU3E3__commandAttribute_6(CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * value)
	{
		___U3CU3E3__commandAttribute_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__commandAttribute_6), (void*)value);
	}

	inline static int32_t get_offset_of_descriptionAttribute_7() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___descriptionAttribute_7)); }
	inline CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * get_descriptionAttribute_7() const { return ___descriptionAttribute_7; }
	inline CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 ** get_address_of_descriptionAttribute_7() { return &___descriptionAttribute_7; }
	inline void set_descriptionAttribute_7(CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * value)
	{
		___descriptionAttribute_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionAttribute_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__descriptionAttribute_8() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___U3CU3E3__descriptionAttribute_8)); }
	inline CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * get_U3CU3E3__descriptionAttribute_8() const { return ___U3CU3E3__descriptionAttribute_8; }
	inline CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 ** get_address_of_U3CU3E3__descriptionAttribute_8() { return &___U3CU3E3__descriptionAttribute_8; }
	inline void set_U3CU3E3__descriptionAttribute_8(CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * value)
	{
		___U3CU3E3__descriptionAttribute_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__descriptionAttribute_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefaultParametersU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___U3CdefaultParametersU3E5__2_9)); }
	inline int32_t get_U3CdefaultParametersU3E5__2_9() const { return ___U3CdefaultParametersU3E5__2_9; }
	inline int32_t* get_address_of_U3CdefaultParametersU3E5__2_9() { return &___U3CdefaultParametersU3E5__2_9; }
	inline void set_U3CdefaultParametersU3E5__2_9(int32_t value)
	{
		___U3CdefaultParametersU3E5__2_9 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5, ___U3CiU3E5__3_10)); }
	inline int32_t get_U3CiU3E5__3_10() const { return ___U3CiU3E5__3_10; }
	inline int32_t* get_address_of_U3CiU3E5__3_10() { return &___U3CiU3E5__3_10; }
	inline void set_U3CiU3E5__3_10(int32_t value)
	{
		___U3CiU3E5__3_10 = value;
	}
};


// QFSW.QC.QuantumMacros/<>c
struct U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B_StaticFields
{
public:
	// QFSW.QC.QuantumMacros/<>c QFSW.QC.QuantumMacros/<>c::<>9
	U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> QFSW.QC.QuantumMacros/<>c::<>9__6_0
	Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_t3FFD2A062C881BA94689CF1CA146C49E3109D7A5 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// QFSW.QC.QuantumMacros/MacroPreprocessor
struct MacroPreprocessor_t051ED110E50A6D956EE15B6187903A2D95FBA209  : public RuntimeObject
{
public:

public:
};


// QFSW.QC.QuantumParser/<>c
struct U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_StaticFields
{
public:
	// QFSW.QC.QuantumParser/<>c QFSW.QC.QuantumParser/<>c::<>9
	U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB * ___U3CU3E9_0;
	// System.Func`2<QFSW.QC.IQcParser,System.Int32> QFSW.QC.QuantumParser/<>c::<>9__5_0
	Func_2_tF34BD8365EF4F3EE0B32759466C6B571133E9889 * ___U3CU3E9__5_0_1;
	// System.Func`2<QFSW.QC.IQcGrammarConstruct,System.Int32> QFSW.QC.QuantumParser/<>c::<>9__5_1
	Func_2_tD9062FA76199CF3623D95F624CA5EE4E9C7E0852 * ___U3CU3E9__5_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_tF34BD8365EF4F3EE0B32759466C6B571133E9889 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_tF34BD8365EF4F3EE0B32759466C6B571133E9889 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_tF34BD8365EF4F3EE0B32759466C6B571133E9889 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_StaticFields, ___U3CU3E9__5_1_2)); }
	inline Func_2_tD9062FA76199CF3623D95F624CA5EE4E9C7E0852 * get_U3CU3E9__5_1_2() const { return ___U3CU3E9__5_1_2; }
	inline Func_2_tD9062FA76199CF3623D95F624CA5EE4E9C7E0852 ** get_address_of_U3CU3E9__5_1_2() { return &___U3CU3E9__5_1_2; }
	inline void set_U3CU3E9__5_1_2(Func_2_tD9062FA76199CF3623D95F624CA5EE4E9C7E0852 * value)
	{
		___U3CU3E9__5_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_1_2), (void*)value);
	}
};


// QFSW.QC.QuantumPreprocessor/<>c
struct U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0_StaticFields
{
public:
	// QFSW.QC.QuantumPreprocessor/<>c QFSW.QC.QuantumPreprocessor/<>c::<>9
	U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 * ___U3CU3E9_0;
	// System.Func`2<QFSW.QC.IQcPreprocessor,System.Int32> QFSW.QC.QuantumPreprocessor/<>c::<>9__1_0
	Func_2_tE96A0ADFD7C8E65B983977E62CA07F5702F6AC54 * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_tE96A0ADFD7C8E65B983977E62CA07F5702F6AC54 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_tE96A0ADFD7C8E65B983977E62CA07F5702F6AC54 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_tE96A0ADFD7C8E65B983977E62CA07F5702F6AC54 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// QFSW.QC.QuantumRegistry/<>c
struct U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310_StaticFields
{
public:
	// QFSW.QC.QuantumRegistry/<>c QFSW.QC.QuantumRegistry/<>c::<>9
	U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.String> QFSW.QC.QuantumRegistry/<>c::<>9__12_0
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// QFSW.QC.QuantumSerializer/<>c
struct U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72_StaticFields
{
public:
	// QFSW.QC.QuantumSerializer/<>c QFSW.QC.QuantumSerializer/<>c::<>9
	U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 * ___U3CU3E9_0;
	// System.Func`2<QFSW.QC.IQcSerializer,System.Int32> QFSW.QC.QuantumSerializer/<>c::<>9__4_0
	Func_2_tEE305B422E73D9803F7C4A194C51947A5B253F83 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_tEE305B422E73D9803F7C4A194C51947A5B253F83 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_tEE305B422E73D9803F7C4A194C51947A5B253F83 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_tEE305B422E73D9803F7C4A194C51947A5B253F83 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// QFSW.QC.Utilities.ReflectionExtensions/<>c
struct U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_StaticFields
{
public:
	// QFSW.QC.Utilities.ReflectionExtensions/<>c QFSW.QC.Utilities.ReflectionExtensions/<>c::<>9
	U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MethodInfo,System.Type> QFSW.QC.Utilities.ReflectionExtensions/<>c::<>9__10_0
	Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * ___U3CU3E9__10_0_1;
	// System.Func`2<System.Reflection.MethodInfo,System.Type> QFSW.QC.Utilities.ReflectionExtensions/<>c::<>9__10_3
	Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * ___U3CU3E9__10_3_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_3_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_StaticFields, ___U3CU3E9__10_3_2)); }
	inline Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * get_U3CU3E9__10_3_2() const { return ___U3CU3E9__10_3_2; }
	inline Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 ** get_address_of_U3CU3E9__10_3_2() { return &___U3CU3E9__10_3_2; }
	inline void set_U3CU3E9__10_3_2(Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * value)
	{
		___U3CU3E9__10_3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_3_2), (void*)value);
	}
};


// QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72  : public RuntimeObject
{
public:
	// System.Type QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::to
	Type_t * ___to_0;
	// System.Type QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::from
	Type_t * ___from_1;
	// System.Func`2<System.Type,System.Boolean> QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::<>9__4
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__4_2;
	// System.Func`2<System.Type,System.Boolean> QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::<>9__5
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__5_3;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72, ___to_0)); }
	inline Type_t * get_to_0() const { return ___to_0; }
	inline Type_t ** get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Type_t * value)
	{
		___to_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___to_0), (void*)value);
	}

	inline static int32_t get_offset_of_from_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72, ___from_1)); }
	inline Type_t * get_from_1() const { return ___from_1; }
	inline Type_t ** get_address_of_from_1() { return &___from_1; }
	inline void set_from_1(Type_t * value)
	{
		___from_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___from_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72, ___U3CU3E9__4_2)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__4_2() const { return ___U3CU3E9__4_2; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__4_2() { return &___U3CU3E9__4_2; }
	inline void set_U3CU3E9__4_2(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__4_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72, ___U3CU3E9__5_3)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__5_3() const { return ___U3CU3E9__5_3; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__5_3() { return &___U3CU3E9__5_3; }
	inline void set_U3CU3E9__5_3(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__5_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_3), (void*)value);
	}
};


// QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tC4872F1DF618642D9C65BC17058FEAF7197346F6  : public RuntimeObject
{
public:
	// System.Boolean QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass11_0::implicitly
	bool ___implicitly_0;
	// System.Func`2<System.Reflection.MethodInfo,System.Type> QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass11_0::baseType
	Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * ___baseType_1;
	// System.Func`2<System.Reflection.MethodInfo,System.Type> QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass11_0::derivedType
	Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * ___derivedType_2;

public:
	inline static int32_t get_offset_of_implicitly_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tC4872F1DF618642D9C65BC17058FEAF7197346F6, ___implicitly_0)); }
	inline bool get_implicitly_0() const { return ___implicitly_0; }
	inline bool* get_address_of_implicitly_0() { return &___implicitly_0; }
	inline void set_implicitly_0(bool value)
	{
		___implicitly_0 = value;
	}

	inline static int32_t get_offset_of_baseType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tC4872F1DF618642D9C65BC17058FEAF7197346F6, ___baseType_1)); }
	inline Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * get_baseType_1() const { return ___baseType_1; }
	inline Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 ** get_address_of_baseType_1() { return &___baseType_1; }
	inline void set_baseType_1(Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * value)
	{
		___baseType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseType_1), (void*)value);
	}

	inline static int32_t get_offset_of_derivedType_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tC4872F1DF618642D9C65BC17058FEAF7197346F6, ___derivedType_2)); }
	inline Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * get_derivedType_2() const { return ___derivedType_2; }
	inline Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 ** get_address_of_derivedType_2() { return &___derivedType_2; }
	inline void set_derivedType_2(Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * value)
	{
		___derivedType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___derivedType_2), (void*)value);
	}
};


// QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t86E4169355065921939A5911DB0E3AA4FA079363  : public RuntimeObject
{
public:
	// System.Boolean QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass16_0::includeNamespace
	bool ___includeNamespace_0;

public:
	inline static int32_t get_offset_of_includeNamespace_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t86E4169355065921939A5911DB0E3AA4FA079363, ___includeNamespace_0)); }
	inline bool get_includeNamespace_0() const { return ___includeNamespace_0; }
	inline bool* get_address_of_includeNamespace_0() { return &___includeNamespace_0; }
	inline void set_includeNamespace_0(bool value)
	{
		___includeNamespace_0 = value;
	}
};


// QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t7679C6B1D7AA6706929DFC28DF4D3BBC1BEE01DA  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass18_0::method
	MethodInfo_t * ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t7679C6B1D7AA6706929DFC28DF4D3BBC1BEE01DA, ___method_0)); }
	inline MethodInfo_t * get_method_0() const { return ___method_0; }
	inline MethodInfo_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MethodInfo_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}
};


// QFSW.QC.Actions.Typewriter/<>c
struct U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_StaticFields
{
public:
	// QFSW.QC.Actions.Typewriter/<>c QFSW.QC.Actions.Typewriter/<>c::<>9
	U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD * ___U3CU3E9_0;
	// System.Func`2<System.Char,System.String> QFSW.QC.Actions.Typewriter/<>c::<>9__5_0
	Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// QFSW.QC.Actions.WaitUntil/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4  : public RuntimeObject
{
public:
	// System.Func`1<System.Boolean> QFSW.QC.Actions.WaitUntil/<>c__DisplayClass0_0::condition
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___condition_0;

public:
	inline static int32_t get_offset_of_condition_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4, ___condition_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_condition_0() const { return ___condition_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_condition_0() { return &___condition_0; }
	inline void set_condition_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___condition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___condition_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.ValueTuple`2<System.Reflection.MethodInfo,System.Reflection.MemberInfo>
struct ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8 
{
public:
	// T1 System.ValueTuple`2::Item1
	MethodInfo_t * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	MemberInfo_t * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8, ___Item1_0)); }
	inline MethodInfo_t * get_Item1_0() const { return ___Item1_0; }
	inline MethodInfo_t ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(MethodInfo_t * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8, ___Item2_1)); }
	inline MemberInfo_t * get_Item2_1() const { return ___Item2_1; }
	inline MemberInfo_t ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(MemberInfo_t * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// QFSW.QC.ActionContext
struct ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E 
{
public:
	// QFSW.QC.QuantumConsole QFSW.QC.ActionContext::Console
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * ___Console_0;

public:
	inline static int32_t get_offset_of_Console_0() { return static_cast<int32_t>(offsetof(ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E, ___Console_0)); }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * get_Console_0() const { return ___Console_0; }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE ** get_address_of_Console_0() { return &___Console_0; }
	inline void set_Console_0(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * value)
	{
		___Console_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Console_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of QFSW.QC.ActionContext
struct ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E_marshaled_pinvoke
{
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * ___Console_0;
};
// Native definition for COM marshalling of QFSW.QC.ActionContext
struct ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E_marshaled_com
{
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * ___Console_0;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// QFSW.QC.CommandDescriptionAttribute
struct CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String QFSW.QC.CommandDescriptionAttribute::Description
	String_t* ___Description_0;
	// System.Boolean QFSW.QC.CommandDescriptionAttribute::Valid
	bool ___Valid_1;

public:
	inline static int32_t get_offset_of_Description_0() { return static_cast<int32_t>(offsetof(CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70, ___Description_0)); }
	inline String_t* get_Description_0() const { return ___Description_0; }
	inline String_t** get_address_of_Description_0() { return &___Description_0; }
	inline void set_Description_0(String_t* value)
	{
		___Description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_0), (void*)value);
	}

	inline static int32_t get_offset_of_Valid_1() { return static_cast<int32_t>(offsetof(CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70, ___Valid_1)); }
	inline bool get_Valid_1() const { return ___Valid_1; }
	inline bool* get_address_of_Valid_1() { return &___Valid_1; }
	inline void set_Valid_1(bool value)
	{
		___Valid_1 = value;
	}
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
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


// QFSW.QC.Containers.StringContainer
struct StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45 
{
public:
	// System.String QFSW.QC.Containers.StringContainer::_str
	String_t* ____str_0;

public:
	inline static int32_t get_offset_of__str_0() { return static_cast<int32_t>(offsetof(StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45, ____str_0)); }
	inline String_t* get__str_0() const { return ____str_0; }
	inline String_t** get_address_of__str_0() { return &____str_0; }
	inline void set__str_0(String_t* value)
	{
		____str_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____str_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of QFSW.QC.Containers.StringContainer
struct StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45_marshaled_pinvoke
{
	char* ____str_0;
};
// Native definition for COM marshalling of QFSW.QC.Containers.StringContainer
struct StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45_marshaled_com
{
	Il2CppChar* ____str_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
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


// QFSW.QC.Actions.WaitUntil
struct WaitUntil_t292EB83F32C88059D1FD61F1D00C4E8F1266380B  : public WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9
{
public:

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_tD389C7B5B7E90CE31D6688BBD3B019BCA9A9D197 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_tD389C7B5B7E90CE31D6688BBD3B019BCA9A9D197__padding[10];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=18
struct __StaticArrayInitTypeSizeU3D18_t05014A34BCF6881EBED415B99551AD3F79A6FA9D 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_t05014A34BCF6881EBED415B99551AD3F79A6FA9D__padding[18];
	};

public:
};


// QFSW.QC.CommandData/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t496653167F6E8BABE75261031CA25C2B15BADDB6 
{
public:
	// System.Collections.Generic.List`1<System.String> QFSW.QC.CommandData/<>c__DisplayClass23_0::prefixes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___prefixes_0;

public:
	inline static int32_t get_offset_of_prefixes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t496653167F6E8BABE75261031CA25C2B15BADDB6, ___prefixes_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_prefixes_0() const { return ___prefixes_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_prefixes_0() { return &___prefixes_0; }
	inline void set_prefixes_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___prefixes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefixes_0), (void*)value);
	}
};


// QFSW.QC.QuantumSerializer/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tB45ABA1C2ED0D49728008A8F13B5B843BB53F28A 
{
public:
	// System.Object QFSW.QC.QuantumSerializer/<>c__DisplayClass6_0::value
	RuntimeObject * ___value_0;
	// QFSW.QC.QuantumTheme QFSW.QC.QuantumSerializer/<>c__DisplayClass6_0::theme
	QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ___theme_1;
	// QFSW.QC.QuantumSerializer QFSW.QC.QuantumSerializer/<>c__DisplayClass6_0::<>4__this
	QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2 * ___U3CU3E4__this_2;
	// System.Type QFSW.QC.QuantumSerializer/<>c__DisplayClass6_0::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tB45ABA1C2ED0D49728008A8F13B5B843BB53F28A, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}

	inline static int32_t get_offset_of_theme_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tB45ABA1C2ED0D49728008A8F13B5B843BB53F28A, ___theme_1)); }
	inline QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * get_theme_1() const { return ___theme_1; }
	inline QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A ** get_address_of_theme_1() { return &___theme_1; }
	inline void set_theme_1(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * value)
	{
		___theme_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theme_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tB45ABA1C2ED0D49728008A8F13B5B843BB53F28A, ___U3CU3E4__this_2)); }
	inline QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tB45ABA1C2ED0D49728008A8F13B5B843BB53F28A, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// QFSW.QC.ActionState
struct ActionState_tB68F3DA2FD77B7EFF6D3D9765EC3FE71946F4574 
{
public:
	// System.Int32 QFSW.QC.ActionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionState_tB68F3DA2FD77B7EFF6D3D9765EC3FE71946F4574, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// QFSW.QC.AutoScrollOptions
struct AutoScrollOptions_tC4A0DFAA5844BCF85A5C960B4500BD42159B4EBF 
{
public:
	// System.Int32 QFSW.QC.AutoScrollOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoScrollOptions_tC4A0DFAA5844BCF85A5C960B4500BD42159B4EBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// QFSW.QC.Actions.Composite
struct Composite_tBCE713FD4AA603CC8493C5F2EC6908F789A70BEA  : public RuntimeObject
{
public:
	// QFSW.QC.ActionContext QFSW.QC.Actions.Composite::_context
	ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E  ____context_0;
	// System.Collections.Generic.IEnumerator`1<QFSW.QC.ICommandAction> QFSW.QC.Actions.Composite::_actions
	RuntimeObject* ____actions_1;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(Composite_tBCE713FD4AA603CC8493C5F2EC6908F789A70BEA, ____context_0)); }
	inline ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E  get__context_0() const { return ____context_0; }
	inline ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E * get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E  value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____context_0))->___Console_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__actions_1() { return static_cast<int32_t>(offsetof(Composite_tBCE713FD4AA603CC8493C5F2EC6908F789A70BEA, ____actions_1)); }
	inline RuntimeObject* get__actions_1() const { return ____actions_1; }
	inline RuntimeObject** get_address_of__actions_1() { return &____actions_1; }
	inline void set__actions_1(RuntimeObject* value)
	{
		____actions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actions_1), (void*)value);
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

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QFSW.QC.LoggingLevel
struct LoggingLevel_t6AC2719F166CC65451FC0B96C3621B6B259A3DA2 
{
public:
	// System.Int32 QFSW.QC.LoggingLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoggingLevel_t6AC2719F166CC65451FC0B96C3621B6B259A3DA2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QFSW.QC.LoggingThreshold
struct LoggingThreshold_t9AD13FCD0EFDE69786AE17ADE3EAD9BDC87F3BE2 
{
public:
	// System.Int32 QFSW.QC.LoggingThreshold::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoggingThreshold_t9AD13FCD0EFDE69786AE17ADE3EAD9BDC87F3BE2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// QFSW.QC.MonoTargetType
struct MonoTargetType_t8211F3BC8047FE32B644A3057C14F6CFA59C5DD1 
{
public:
	// System.Int32 QFSW.QC.MonoTargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonoTargetType_t8211F3BC8047FE32B644A3057C14F6CFA59C5DD1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// QFSW.QC.Platform
struct Platform_t6CE2DD246D6E870CD7CAB994CEA24E220161B297 
{
public:
	// System.Int64 QFSW.QC.Platform::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Platform_t6CE2DD246D6E870CD7CAB994CEA24E220161B297, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
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


// QFSW.QC.SortOrder
struct SortOrder_tCAA2198DD4DF4371A335413DCAE92693EA815EDC 
{
public:
	// System.Int32 QFSW.QC.SortOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SortOrder_tCAA2198DD4DF4371A335413DCAE92693EA815EDC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QFSW.QC.SupportedState
struct SupportedState_t9ECBDBDDD69DF618501071E136912FB189ADFEB8 
{
public:
	// System.Int32 QFSW.QC.SupportedState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedState_t9ECBDBDDD69DF618501071E136912FB189ADFEB8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
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


// QFSW.QC.Internal.FieldAutoMethod/AccessType
struct AccessType_t9BE19BD12AE6940D9CE80A50EAF5CD1D2A5BFA22 
{
public:
	// System.Int32 QFSW.QC.Internal.FieldAutoMethod/AccessType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AccessType_t9BE19BD12AE6940D9CE80A50EAF5CD1D2A5BFA22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25
struct U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC  : public RuntimeObject
{
public:
	// System.Int32 QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.ValueTuple`2<System.Reflection.MethodInfo,System.Reflection.MemberInfo> QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<>2__current
	ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  ___U3CU3E2__current_1;
	// System.Int32 QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::type
	Type_t * ___type_3;
	// System.Type QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<>3__type
	Type_t * ___U3CU3E3__type_4;
	// System.Reflection.PropertyInfo[] QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<properties>5__2
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* ___U3CpropertiesU3E5__2_5;
	// System.Reflection.FieldInfo[] QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<fields>5__3
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* ___U3CfieldsU3E5__3_6;
	// System.Reflection.MethodInfo[] QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<>7__wrap3
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* ___U3CU3E7__wrap3_7;
	// System.Int32 QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_8;
	// System.Reflection.PropertyInfo[] QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<>7__wrap5
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* ___U3CU3E7__wrap5_9;
	// System.Reflection.PropertyInfo QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<property>5__7
	PropertyInfo_t * ___U3CpropertyU3E5__7_10;
	// System.Reflection.FieldInfo[] QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<>7__wrap7
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* ___U3CU3E7__wrap7_11;
	// System.Reflection.FieldInfo QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::<field>5__9
	FieldInfo_t * ___U3CfieldU3E5__9_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CU3E2__current_1)); }
	inline ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item2_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertiesU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CpropertiesU3E5__2_5)); }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* get_U3CpropertiesU3E5__2_5() const { return ___U3CpropertiesU3E5__2_5; }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A** get_address_of_U3CpropertiesU3E5__2_5() { return &___U3CpropertiesU3E5__2_5; }
	inline void set_U3CpropertiesU3E5__2_5(PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* value)
	{
		___U3CpropertiesU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertiesU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfieldsU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CfieldsU3E5__3_6)); }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* get_U3CfieldsU3E5__3_6() const { return ___U3CfieldsU3E5__3_6; }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E** get_address_of_U3CfieldsU3E5__3_6() { return &___U3CfieldsU3E5__3_6; }
	inline void set_U3CfieldsU3E5__3_6(FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* value)
	{
		___U3CfieldsU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfieldsU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_7() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CU3E7__wrap3_7)); }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* get_U3CU3E7__wrap3_7() const { return ___U3CU3E7__wrap3_7; }
	inline MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E** get_address_of_U3CU3E7__wrap3_7() { return &___U3CU3E7__wrap3_7; }
	inline void set_U3CU3E7__wrap3_7(MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* value)
	{
		___U3CU3E7__wrap3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_8() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CU3E7__wrap4_8)); }
	inline int32_t get_U3CU3E7__wrap4_8() const { return ___U3CU3E7__wrap4_8; }
	inline int32_t* get_address_of_U3CU3E7__wrap4_8() { return &___U3CU3E7__wrap4_8; }
	inline void set_U3CU3E7__wrap4_8(int32_t value)
	{
		___U3CU3E7__wrap4_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap5_9() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CU3E7__wrap5_9)); }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* get_U3CU3E7__wrap5_9() const { return ___U3CU3E7__wrap5_9; }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A** get_address_of_U3CU3E7__wrap5_9() { return &___U3CU3E7__wrap5_9; }
	inline void set_U3CU3E7__wrap5_9(PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* value)
	{
		___U3CU3E7__wrap5_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap5_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyU3E5__7_10() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CpropertyU3E5__7_10)); }
	inline PropertyInfo_t * get_U3CpropertyU3E5__7_10() const { return ___U3CpropertyU3E5__7_10; }
	inline PropertyInfo_t ** get_address_of_U3CpropertyU3E5__7_10() { return &___U3CpropertyU3E5__7_10; }
	inline void set_U3CpropertyU3E5__7_10(PropertyInfo_t * value)
	{
		___U3CpropertyU3E5__7_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyU3E5__7_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap7_11() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CU3E7__wrap7_11)); }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* get_U3CU3E7__wrap7_11() const { return ___U3CU3E7__wrap7_11; }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E** get_address_of_U3CU3E7__wrap7_11() { return &___U3CU3E7__wrap7_11; }
	inline void set_U3CU3E7__wrap7_11(FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* value)
	{
		___U3CU3E7__wrap7_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap7_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfieldU3E5__9_12() { return static_cast<int32_t>(offsetof(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC, ___U3CfieldU3E5__9_12)); }
	inline FieldInfo_t * get_U3CfieldU3E5__9_12() const { return ___U3CfieldU3E5__9_12; }
	inline FieldInfo_t ** get_address_of_U3CfieldU3E5__9_12() { return &___U3CfieldU3E5__9_12; }
	inline void set_U3CfieldU3E5__9_12(FieldInfo_t * value)
	{
		___U3CfieldU3E5__9_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfieldU3E5__9_12), (void*)value);
	}
};


// QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6
struct U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81  : public RuntimeObject
{
public:
	// System.Int32 QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Char QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::<>2__current
	Il2CppChar ___U3CU3E2__current_1;
	// QFSW.QC.Containers.StringContainer QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::<>4__this
	StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45  ___U3CU3E4__this_2;
	// System.Int32 QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81, ___U3CU3E2__current_1)); }
	inline Il2CppChar get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Il2CppChar* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Il2CppChar value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81, ___U3CU3E4__this_2)); }
	inline StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45  get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45 * get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45  value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_2))->____str_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7
struct U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E  : public RuntimeObject
{
public:
	// System.Int32 QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// QFSW.QC.Containers.StringContainer QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::<>4__this
	StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45  ___U3CU3E4__this_2;
	// System.Int32 QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E, ___U3CU3E4__this_2)); }
	inline StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45  get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45 * get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45  value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_2))->____str_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// QFSW.QC.Actions.Typewriter/Config/ChunkType
struct ChunkType_tE9CFDC0C356B99C9C31A78DAE39A4441E329456B 
{
public:
	// System.Int32 QFSW.QC.Actions.Typewriter/Config/ChunkType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChunkType_tE9CFDC0C356B99C9C31A78DAE39A4441E329456B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// QFSW.QC.CommandAttribute
struct CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String QFSW.QC.CommandAttribute::Alias
	String_t* ___Alias_0;
	// System.String QFSW.QC.CommandAttribute::Description
	String_t* ___Description_1;
	// QFSW.QC.Platform QFSW.QC.CommandAttribute::SupportedPlatforms
	int64_t ___SupportedPlatforms_2;
	// QFSW.QC.MonoTargetType QFSW.QC.CommandAttribute::MonoTarget
	int32_t ___MonoTarget_3;
	// System.Boolean QFSW.QC.CommandAttribute::Valid
	bool ___Valid_4;

public:
	inline static int32_t get_offset_of_Alias_0() { return static_cast<int32_t>(offsetof(CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD, ___Alias_0)); }
	inline String_t* get_Alias_0() const { return ___Alias_0; }
	inline String_t** get_address_of_Alias_0() { return &___Alias_0; }
	inline void set_Alias_0(String_t* value)
	{
		___Alias_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Alias_0), (void*)value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_1), (void*)value);
	}

	inline static int32_t get_offset_of_SupportedPlatforms_2() { return static_cast<int32_t>(offsetof(CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD, ___SupportedPlatforms_2)); }
	inline int64_t get_SupportedPlatforms_2() const { return ___SupportedPlatforms_2; }
	inline int64_t* get_address_of_SupportedPlatforms_2() { return &___SupportedPlatforms_2; }
	inline void set_SupportedPlatforms_2(int64_t value)
	{
		___SupportedPlatforms_2 = value;
	}

	inline static int32_t get_offset_of_MonoTarget_3() { return static_cast<int32_t>(offsetof(CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD, ___MonoTarget_3)); }
	inline int32_t get_MonoTarget_3() const { return ___MonoTarget_3; }
	inline int32_t* get_address_of_MonoTarget_3() { return &___MonoTarget_3; }
	inline void set_MonoTarget_3(int32_t value)
	{
		___MonoTarget_3 = value;
	}

	inline static int32_t get_offset_of_Valid_4() { return static_cast<int32_t>(offsetof(CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD, ___Valid_4)); }
	inline bool get_Valid_4() const { return ___Valid_4; }
	inline bool* get_address_of_Valid_4() { return &___Valid_4; }
	inline void set_Valid_4(bool value)
	{
		___Valid_4 = value;
	}
};

struct CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD_StaticFields
{
public:
	// System.Char[] QFSW.QC.CommandAttribute::_bannedAliasChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____bannedAliasChars_5;

public:
	inline static int32_t get_offset_of__bannedAliasChars_5() { return static_cast<int32_t>(offsetof(CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD_StaticFields, ____bannedAliasChars_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__bannedAliasChars_5() const { return ____bannedAliasChars_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__bannedAliasChars_5() { return &____bannedAliasChars_5; }
	inline void set__bannedAliasChars_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____bannedAliasChars_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bannedAliasChars_5), (void*)value);
	}
};


// QFSW.QC.CommandData
struct CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA  : public RuntimeObject
{
public:
	// System.String QFSW.QC.CommandData::CommandName
	String_t* ___CommandName_0;
	// System.String QFSW.QC.CommandData::CommandDescription
	String_t* ___CommandDescription_1;
	// System.String QFSW.QC.CommandData::CommandSignature
	String_t* ___CommandSignature_2;
	// System.String QFSW.QC.CommandData::ParameterSignature
	String_t* ___ParameterSignature_3;
	// System.String QFSW.QC.CommandData::GenericSignature
	String_t* ___GenericSignature_4;
	// System.Reflection.ParameterInfo[] QFSW.QC.CommandData::MethodParamData
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ___MethodParamData_5;
	// System.Type[] QFSW.QC.CommandData::ParamTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___ParamTypes_6;
	// System.Type[] QFSW.QC.CommandData::GenericParamTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___GenericParamTypes_7;
	// System.Reflection.MethodInfo QFSW.QC.CommandData::MethodData
	MethodInfo_t * ___MethodData_8;
	// QFSW.QC.MonoTargetType QFSW.QC.CommandData::MonoTarget
	int32_t ___MonoTarget_9;
	// System.Object[] QFSW.QC.CommandData::_defaultParameters
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____defaultParameters_10;

public:
	inline static int32_t get_offset_of_CommandName_0() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___CommandName_0)); }
	inline String_t* get_CommandName_0() const { return ___CommandName_0; }
	inline String_t** get_address_of_CommandName_0() { return &___CommandName_0; }
	inline void set_CommandName_0(String_t* value)
	{
		___CommandName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandName_0), (void*)value);
	}

	inline static int32_t get_offset_of_CommandDescription_1() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___CommandDescription_1)); }
	inline String_t* get_CommandDescription_1() const { return ___CommandDescription_1; }
	inline String_t** get_address_of_CommandDescription_1() { return &___CommandDescription_1; }
	inline void set_CommandDescription_1(String_t* value)
	{
		___CommandDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of_CommandSignature_2() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___CommandSignature_2)); }
	inline String_t* get_CommandSignature_2() const { return ___CommandSignature_2; }
	inline String_t** get_address_of_CommandSignature_2() { return &___CommandSignature_2; }
	inline void set_CommandSignature_2(String_t* value)
	{
		___CommandSignature_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandSignature_2), (void*)value);
	}

	inline static int32_t get_offset_of_ParameterSignature_3() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___ParameterSignature_3)); }
	inline String_t* get_ParameterSignature_3() const { return ___ParameterSignature_3; }
	inline String_t** get_address_of_ParameterSignature_3() { return &___ParameterSignature_3; }
	inline void set_ParameterSignature_3(String_t* value)
	{
		___ParameterSignature_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParameterSignature_3), (void*)value);
	}

	inline static int32_t get_offset_of_GenericSignature_4() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___GenericSignature_4)); }
	inline String_t* get_GenericSignature_4() const { return ___GenericSignature_4; }
	inline String_t** get_address_of_GenericSignature_4() { return &___GenericSignature_4; }
	inline void set_GenericSignature_4(String_t* value)
	{
		___GenericSignature_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericSignature_4), (void*)value);
	}

	inline static int32_t get_offset_of_MethodParamData_5() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___MethodParamData_5)); }
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* get_MethodParamData_5() const { return ___MethodParamData_5; }
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B** get_address_of_MethodParamData_5() { return &___MethodParamData_5; }
	inline void set_MethodParamData_5(ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* value)
	{
		___MethodParamData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MethodParamData_5), (void*)value);
	}

	inline static int32_t get_offset_of_ParamTypes_6() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___ParamTypes_6)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_ParamTypes_6() const { return ___ParamTypes_6; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_ParamTypes_6() { return &___ParamTypes_6; }
	inline void set_ParamTypes_6(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___ParamTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParamTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_GenericParamTypes_7() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___GenericParamTypes_7)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_GenericParamTypes_7() const { return ___GenericParamTypes_7; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_GenericParamTypes_7() { return &___GenericParamTypes_7; }
	inline void set_GenericParamTypes_7(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___GenericParamTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericParamTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_MethodData_8() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___MethodData_8)); }
	inline MethodInfo_t * get_MethodData_8() const { return ___MethodData_8; }
	inline MethodInfo_t ** get_address_of_MethodData_8() { return &___MethodData_8; }
	inline void set_MethodData_8(MethodInfo_t * value)
	{
		___MethodData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MethodData_8), (void*)value);
	}

	inline static int32_t get_offset_of_MonoTarget_9() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ___MonoTarget_9)); }
	inline int32_t get_MonoTarget_9() const { return ___MonoTarget_9; }
	inline int32_t* get_address_of_MonoTarget_9() { return &___MonoTarget_9; }
	inline void set_MonoTarget_9(int32_t value)
	{
		___MonoTarget_9 = value;
	}

	inline static int32_t get_offset_of__defaultParameters_10() { return static_cast<int32_t>(offsetof(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA, ____defaultParameters_10)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__defaultParameters_10() const { return ____defaultParameters_10; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__defaultParameters_10() { return &____defaultParameters_10; }
	inline void set__defaultParameters_10(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____defaultParameters_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultParameters_10), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// QFSW.QC.Internal.FieldMethod
struct FieldMethod_t089851952667115167438FD851CC28AFBC11E910  : public MethodInfo_t
{
public:
	// System.Reflection.FieldInfo QFSW.QC.Internal.FieldMethod::_fieldInfo
	FieldInfo_t * ____fieldInfo_0;
	// System.Delegate QFSW.QC.Internal.FieldMethod::_internalDelegate
	Delegate_t * ____internalDelegate_1;
	// System.Reflection.ParameterInfo[] QFSW.QC.Internal.FieldMethod::_parameters
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* ____parameters_2;

public:
	inline static int32_t get_offset_of__fieldInfo_0() { return static_cast<int32_t>(offsetof(FieldMethod_t089851952667115167438FD851CC28AFBC11E910, ____fieldInfo_0)); }
	inline FieldInfo_t * get__fieldInfo_0() const { return ____fieldInfo_0; }
	inline FieldInfo_t ** get_address_of__fieldInfo_0() { return &____fieldInfo_0; }
	inline void set__fieldInfo_0(FieldInfo_t * value)
	{
		____fieldInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fieldInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of__internalDelegate_1() { return static_cast<int32_t>(offsetof(FieldMethod_t089851952667115167438FD851CC28AFBC11E910, ____internalDelegate_1)); }
	inline Delegate_t * get__internalDelegate_1() const { return ____internalDelegate_1; }
	inline Delegate_t ** get_address_of__internalDelegate_1() { return &____internalDelegate_1; }
	inline void set__internalDelegate_1(Delegate_t * value)
	{
		____internalDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__parameters_2() { return static_cast<int32_t>(offsetof(FieldMethod_t089851952667115167438FD851CC28AFBC11E910, ____parameters_2)); }
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* get__parameters_2() const { return ____parameters_2; }
	inline ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B** get_address_of__parameters_2() { return &____parameters_2; }
	inline void set__parameters_2(ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* value)
	{
		____parameters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameters_2), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// QFSW.QC.QuantumConsoleProcessor
struct QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2  : public RuntimeObject
{
public:

public:
};

struct QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields
{
public:
	// QFSW.QC.LoggingLevel QFSW.QC.QuantumConsoleProcessor::loggingLevel
	int32_t ___loggingLevel_1;
	// QFSW.QC.QuantumParser QFSW.QC.QuantumConsoleProcessor::_parser
	QuantumParser_t806513409CC77ECF389E82233FEB3CFDE627E13E * ____parser_2;
	// QFSW.QC.QuantumPreprocessor QFSW.QC.QuantumConsoleProcessor::_preprocessor
	QuantumPreprocessor_t930CD55EACA9F6E46C729CF198DFB2BAB2393842 * ____preprocessor_3;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,QFSW.QC.CommandData> QFSW.QC.QuantumConsoleProcessor::_commandTable
	ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496 * ____commandTable_4;
	// System.Boolean QFSW.QC.QuantumConsoleProcessor::<TableGenerated>k__BackingField
	bool ___U3CTableGeneratedU3Ek__BackingField_5;
	// System.Boolean QFSW.QC.QuantumConsoleProcessor::<TableIsGenerating>k__BackingField
	bool ___U3CTableIsGeneratingU3Ek__BackingField_6;
	// System.Int32 QFSW.QC.QuantumConsoleProcessor::_loadedCommandCount
	int32_t ____loadedCommandCount_7;
	// System.Reflection.Assembly[] QFSW.QC.QuantumConsoleProcessor::_loadedAssemblies
	AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* ____loadedAssemblies_8;

public:
	inline static int32_t get_offset_of_loggingLevel_1() { return static_cast<int32_t>(offsetof(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields, ___loggingLevel_1)); }
	inline int32_t get_loggingLevel_1() const { return ___loggingLevel_1; }
	inline int32_t* get_address_of_loggingLevel_1() { return &___loggingLevel_1; }
	inline void set_loggingLevel_1(int32_t value)
	{
		___loggingLevel_1 = value;
	}

	inline static int32_t get_offset_of__parser_2() { return static_cast<int32_t>(offsetof(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields, ____parser_2)); }
	inline QuantumParser_t806513409CC77ECF389E82233FEB3CFDE627E13E * get__parser_2() const { return ____parser_2; }
	inline QuantumParser_t806513409CC77ECF389E82233FEB3CFDE627E13E ** get_address_of__parser_2() { return &____parser_2; }
	inline void set__parser_2(QuantumParser_t806513409CC77ECF389E82233FEB3CFDE627E13E * value)
	{
		____parser_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_2), (void*)value);
	}

	inline static int32_t get_offset_of__preprocessor_3() { return static_cast<int32_t>(offsetof(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields, ____preprocessor_3)); }
	inline QuantumPreprocessor_t930CD55EACA9F6E46C729CF198DFB2BAB2393842 * get__preprocessor_3() const { return ____preprocessor_3; }
	inline QuantumPreprocessor_t930CD55EACA9F6E46C729CF198DFB2BAB2393842 ** get_address_of__preprocessor_3() { return &____preprocessor_3; }
	inline void set__preprocessor_3(QuantumPreprocessor_t930CD55EACA9F6E46C729CF198DFB2BAB2393842 * value)
	{
		____preprocessor_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preprocessor_3), (void*)value);
	}

	inline static int32_t get_offset_of__commandTable_4() { return static_cast<int32_t>(offsetof(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields, ____commandTable_4)); }
	inline ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496 * get__commandTable_4() const { return ____commandTable_4; }
	inline ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496 ** get_address_of__commandTable_4() { return &____commandTable_4; }
	inline void set__commandTable_4(ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496 * value)
	{
		____commandTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____commandTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTableGeneratedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields, ___U3CTableGeneratedU3Ek__BackingField_5)); }
	inline bool get_U3CTableGeneratedU3Ek__BackingField_5() const { return ___U3CTableGeneratedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CTableGeneratedU3Ek__BackingField_5() { return &___U3CTableGeneratedU3Ek__BackingField_5; }
	inline void set_U3CTableGeneratedU3Ek__BackingField_5(bool value)
	{
		___U3CTableGeneratedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTableIsGeneratingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields, ___U3CTableIsGeneratingU3Ek__BackingField_6)); }
	inline bool get_U3CTableIsGeneratingU3Ek__BackingField_6() const { return ___U3CTableIsGeneratingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CTableIsGeneratingU3Ek__BackingField_6() { return &___U3CTableIsGeneratingU3Ek__BackingField_6; }
	inline void set_U3CTableIsGeneratingU3Ek__BackingField_6(bool value)
	{
		___U3CTableIsGeneratingU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__loadedCommandCount_7() { return static_cast<int32_t>(offsetof(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields, ____loadedCommandCount_7)); }
	inline int32_t get__loadedCommandCount_7() const { return ____loadedCommandCount_7; }
	inline int32_t* get_address_of__loadedCommandCount_7() { return &____loadedCommandCount_7; }
	inline void set__loadedCommandCount_7(int32_t value)
	{
		____loadedCommandCount_7 = value;
	}

	inline static int32_t get_offset_of__loadedAssemblies_8() { return static_cast<int32_t>(offsetof(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields, ____loadedAssemblies_8)); }
	inline AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* get__loadedAssemblies_8() const { return ____loadedAssemblies_8; }
	inline AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0** get_address_of__loadedAssemblies_8() { return &____loadedAssemblies_8; }
	inline void set__loadedAssemblies_8(AssemblyU5BU5D_t42061B4CA43487DD8ECD8C3AACCEF783FA081FF0* value)
	{
		____loadedAssemblies_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadedAssemblies_8), (void*)value);
	}
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


// QFSW.QC.Actions.Typewriter
struct Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852  : public Composite_tBCE713FD4AA603CC8493C5F2EC6908F789A70BEA
{
public:

public:
};

struct Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex QFSW.QC.Actions.Typewriter::WhiteRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___WhiteRegex_2;
	// System.Text.RegularExpressions.Regex QFSW.QC.Actions.Typewriter::LineRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___LineRegex_3;

public:
	inline static int32_t get_offset_of_WhiteRegex_2() { return static_cast<int32_t>(offsetof(Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_StaticFields, ___WhiteRegex_2)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_WhiteRegex_2() const { return ___WhiteRegex_2; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_WhiteRegex_2() { return &___WhiteRegex_2; }
	inline void set_WhiteRegex_2(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___WhiteRegex_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WhiteRegex_2), (void*)value);
	}

	inline static int32_t get_offset_of_LineRegex_3() { return static_cast<int32_t>(offsetof(Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_StaticFields, ___LineRegex_3)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_LineRegex_3() const { return ___LineRegex_3; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_LineRegex_3() { return &___LineRegex_3; }
	inline void set_LineRegex_3(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___LineRegex_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineRegex_3), (void*)value);
	}
};


// QFSW.QC.ActionExecuter/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t98C5205A8DCCBF387F536FEE2B086D156380B969 
{
public:
	// System.Collections.Generic.IEnumerator`1<QFSW.QC.ICommandAction> QFSW.QC.ActionExecuter/<>c__DisplayClass0_0::action
	RuntimeObject* ___action_0;
	// QFSW.QC.ActionContext QFSW.QC.ActionExecuter/<>c__DisplayClass0_0::context
	ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E  ___context_1;
	// System.Boolean QFSW.QC.ActionExecuter/<>c__DisplayClass0_0::idle
	bool ___idle_2;
	// QFSW.QC.ActionState QFSW.QC.ActionExecuter/<>c__DisplayClass0_0::state
	int32_t ___state_3;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t98C5205A8DCCBF387F536FEE2B086D156380B969, ___action_0)); }
	inline RuntimeObject* get_action_0() const { return ___action_0; }
	inline RuntimeObject** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(RuntimeObject* value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t98C5205A8DCCBF387F536FEE2B086D156380B969, ___context_1)); }
	inline ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E  get_context_1() const { return ___context_1; }
	inline ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E * get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E  value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___context_1))->___Console_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_idle_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t98C5205A8DCCBF387F536FEE2B086D156380B969, ___idle_2)); }
	inline bool get_idle_2() const { return ___idle_2; }
	inline bool* get_address_of_idle_2() { return &___idle_2; }
	inline void set_idle_2(bool value)
	{
		___idle_2 = value;
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t98C5205A8DCCBF387F536FEE2B086D156380B969, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}
};


// QFSW.QC.Actions.Typewriter/Config
struct Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51 
{
public:
	// System.Single QFSW.QC.Actions.Typewriter/Config::PrintInterval
	float ___PrintInterval_0;
	// QFSW.QC.Actions.Typewriter/Config/ChunkType QFSW.QC.Actions.Typewriter/Config::Chunks
	int32_t ___Chunks_1;

public:
	inline static int32_t get_offset_of_PrintInterval_0() { return static_cast<int32_t>(offsetof(Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51, ___PrintInterval_0)); }
	inline float get_PrintInterval_0() const { return ___PrintInterval_0; }
	inline float* get_address_of_PrintInterval_0() { return &___PrintInterval_0; }
	inline void set_PrintInterval_0(float value)
	{
		___PrintInterval_0 = value;
	}

	inline static int32_t get_offset_of_Chunks_1() { return static_cast<int32_t>(offsetof(Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51, ___Chunks_1)); }
	inline int32_t get_Chunks_1() const { return ___Chunks_1; }
	inline int32_t* get_address_of_Chunks_1() { return &___Chunks_1; }
	inline void set_Chunks_1(int32_t value)
	{
		___Chunks_1 = value;
	}
};

struct Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51_StaticFields
{
public:
	// QFSW.QC.Actions.Typewriter/Config QFSW.QC.Actions.Typewriter/Config::Default
	Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51  ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51_StaticFields, ___Default_2)); }
	inline Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51  get_Default_2() const { return ___Default_2; }
	inline Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51 * get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51  value)
	{
		___Default_2 = value;
	}
};


// QFSW.QC.Actions.WaitKey/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t82A4924E28FF459D6523825CD8F05F8D1766AF2E  : public RuntimeObject
{
public:
	// UnityEngine.KeyCode QFSW.QC.Actions.WaitKey/<>c__DisplayClass0_0::key
	int32_t ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t82A4924E28FF459D6523825CD8F05F8D1766AF2E, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Char,System.String>
struct Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.MethodInfo,System.Type>
struct Func_2_t1D543CC12735B4D12BE733C038703707C39D2883  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Object,System.Boolean>
struct Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.ParameterInfo,System.Boolean>
struct Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// QFSW.QC.Internal.FieldAutoMethod
struct FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5  : public FieldMethod_t089851952667115167438FD851CC28AFBC11E910
{
public:
	// QFSW.QC.Internal.FieldAutoMethod/AccessType QFSW.QC.Internal.FieldAutoMethod::_accessType
	int32_t ____accessType_3;

public:
	inline static int32_t get_offset_of__accessType_3() { return static_cast<int32_t>(offsetof(FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5, ____accessType_3)); }
	inline int32_t get__accessType_3() const { return ____accessType_3; }
	inline int32_t* get_address_of__accessType_3() { return &____accessType_3; }
	inline void set__accessType_3(int32_t value)
	{
		____accessType_3 = value;
	}
};


// QFSW.QC.Internal.FieldDelegateMethod
struct FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65  : public FieldMethod_t089851952667115167438FD851CC28AFBC11E910
{
public:

public:
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


// QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115
struct U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A 
{
public:
	// System.Int32 QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Collections.Generic.IEnumerable`1<System.String> QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::commands
	RuntimeObject* ___commands_2;
	// QFSW.QC.QuantumConsole QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::<>4__this
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<System.String> QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Runtime.CompilerServices.TaskAwaiter QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_commands_2() { return static_cast<int32_t>(offsetof(U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A, ___commands_2)); }
	inline RuntimeObject* get_commands_2() const { return ___commands_2; }
	inline RuntimeObject** get_address_of_commands_2() { return &___commands_2; }
	inline void set_commands_2(RuntimeObject* value)
	{
		___commands_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commands_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A, ___U3CU3E4__this_3)); }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114
struct U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 
{
public:
	// System.Int32 QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::filePath
	String_t* ___filePath_2;
	// QFSW.QC.QuantumConsole QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::<>4__this
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * ___U3CU3E4__this_3;
	// System.IO.StreamReader QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::<reader>5__2
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___U3CreaderU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_filePath_2() { return static_cast<int32_t>(offsetof(U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807, ___filePath_2)); }
	inline String_t* get_filePath_2() const { return ___filePath_2; }
	inline String_t** get_address_of_filePath_2() { return &___filePath_2; }
	inline void set_filePath_2(String_t* value)
	{
		___filePath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filePath_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807, ___U3CU3E4__this_3)); }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreaderU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807, ___U3CreaderU3E5__2_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_U3CreaderU3E5__2_4() const { return ___U3CreaderU3E5__2_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_U3CreaderU3E5__2_4() { return &___U3CreaderU3E5__2_4; }
	inline void set_U3CreaderU3E5__2_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___U3CreaderU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CreaderU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// QFSW.QC.Actions.Typewriter/<Generate>d__5
struct U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126  : public RuntimeObject
{
public:
	// System.Int32 QFSW.QC.Actions.Typewriter/<Generate>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// QFSW.QC.ICommandAction QFSW.QC.Actions.Typewriter/<Generate>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QFSW.QC.Actions.Typewriter/Config QFSW.QC.Actions.Typewriter/<Generate>d__5::config
	Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51  ___config_2;
	// System.String QFSW.QC.Actions.Typewriter/<Generate>d__5::message
	String_t* ___message_3;
	// System.String[] QFSW.QC.Actions.Typewriter/<Generate>d__5::<chunks>5__2
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CchunksU3E5__2_4;
	// System.Int32 QFSW.QC.Actions.Typewriter/<Generate>d__5::<i>5__3
	int32_t ___U3CiU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126, ___config_2)); }
	inline Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51  get_config_2() const { return ___config_2; }
	inline Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51 * get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51  value)
	{
		___config_2 = value;
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CchunksU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126, ___U3CchunksU3E5__2_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CchunksU3E5__2_4() const { return ___U3CchunksU3E5__2_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CchunksU3E5__2_4() { return &___U3CchunksU3E5__2_4; }
	inline void set_U3CchunksU3E5__2_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CchunksU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CchunksU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// QFSW.QC.QuantumConsole
struct QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform QFSW.QC.QuantumConsole::_containerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____containerRect_5;
	// UnityEngine.UI.ScrollRect QFSW.QC.QuantumConsole::_scrollRect
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ____scrollRect_6;
	// UnityEngine.RectTransform QFSW.QC.QuantumConsole::_suggestionPopupRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____suggestionPopupRect_7;
	// UnityEngine.RectTransform QFSW.QC.QuantumConsole::_jobCounterRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ____jobCounterRect_8;
	// UnityEngine.UI.Image[] QFSW.QC.QuantumConsole::_panels
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ____panels_9;
	// QFSW.QC.QuantumTheme QFSW.QC.QuantumConsole::_theme
	QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * ____theme_10;
	// QFSW.QC.QuantumKeyConfig QFSW.QC.QuantumConsole::_keyConfig
	QuantumKeyConfig_t2FB38479B8D655251876262DC30E6660E8A92E1B * ____keyConfig_11;
	// System.Boolean QFSW.QC.QuantumConsole::_verboseErrors
	bool ____verboseErrors_12;
	// QFSW.QC.LoggingThreshold QFSW.QC.QuantumConsole::_verboseLogging
	int32_t ____verboseLogging_13;
	// QFSW.QC.LoggingThreshold QFSW.QC.QuantumConsole::_loggingLevel
	int32_t ____loggingLevel_14;
	// QFSW.QC.LoggingThreshold QFSW.QC.QuantumConsole::_openOnLogLevel
	int32_t ____openOnLogLevel_15;
	// System.Boolean QFSW.QC.QuantumConsole::_interceptDebugLogger
	bool ____interceptDebugLogger_16;
	// System.Boolean QFSW.QC.QuantumConsole::_interceptWhilstInactive
	bool ____interceptWhilstInactive_17;
	// System.Boolean QFSW.QC.QuantumConsole::_prependTimestamps
	bool ____prependTimestamps_18;
	// QFSW.QC.SupportedState QFSW.QC.QuantumConsole::_supportedState
	int32_t ____supportedState_19;
	// System.Boolean QFSW.QC.QuantumConsole::_activateOnStartup
	bool ____activateOnStartup_20;
	// System.Boolean QFSW.QC.QuantumConsole::_initialiseOnStartup
	bool ____initialiseOnStartup_21;
	// System.Boolean QFSW.QC.QuantumConsole::_closeOnSubmit
	bool ____closeOnSubmit_22;
	// System.Boolean QFSW.QC.QuantumConsole::_singletonMode
	bool ____singletonMode_23;
	// QFSW.QC.AutoScrollOptions QFSW.QC.QuantumConsole::_autoScroll
	int32_t ____autoScroll_24;
	// System.Boolean QFSW.QC.QuantumConsole::_showPopupDisplay
	bool ____showPopupDisplay_25;
	// QFSW.QC.SortOrder QFSW.QC.QuantumConsole::_suggestionDisplayOrder
	int32_t ____suggestionDisplayOrder_26;
	// System.Int32 QFSW.QC.QuantumConsole::_maxSuggestionDisplaySize
	int32_t ____maxSuggestionDisplaySize_27;
	// System.Boolean QFSW.QC.QuantumConsole::_useFuzzySearch
	bool ____useFuzzySearch_28;
	// System.Boolean QFSW.QC.QuantumConsole::_caseSensitiveSearch
	bool ____caseSensitiveSearch_29;
	// System.Boolean QFSW.QC.QuantumConsole::_showCurrentJobs
	bool ____showCurrentJobs_30;
	// System.Boolean QFSW.QC.QuantumConsole::_blockOnAsync
	bool ____blockOnAsync_31;
	// System.Boolean QFSW.QC.QuantumConsole::_storeCommandHistory
	bool ____storeCommandHistory_32;
	// System.Boolean QFSW.QC.QuantumConsole::_storeDuplicateCommands
	bool ____storeDuplicateCommands_33;
	// System.Boolean QFSW.QC.QuantumConsole::_storeAdjacentDuplicateCommands
	bool ____storeAdjacentDuplicateCommands_34;
	// System.Int32 QFSW.QC.QuantumConsole::_commandHistorySize
	int32_t ____commandHistorySize_35;
	// System.Int32 QFSW.QC.QuantumConsole::_maxStoredLogs
	int32_t ____maxStoredLogs_36;
	// System.Int32 QFSW.QC.QuantumConsole::_maxLogSize
	int32_t ____maxLogSize_37;
	// System.Boolean QFSW.QC.QuantumConsole::_showInitLogs
	bool ____showInitLogs_38;
	// TMPro.TMP_InputField QFSW.QC.QuantumConsole::_consoleInput
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ____consoleInput_39;
	// TMPro.TextMeshProUGUI QFSW.QC.QuantumConsole::_inputPlaceholderText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ____inputPlaceholderText_40;
	// TMPro.TextMeshProUGUI QFSW.QC.QuantumConsole::_consoleLogText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ____consoleLogText_41;
	// TMPro.TextMeshProUGUI QFSW.QC.QuantumConsole::_consoleSuggestionText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ____consoleSuggestionText_42;
	// TMPro.TextMeshProUGUI QFSW.QC.QuantumConsole::_suggestionPopupText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ____suggestionPopupText_43;
	// TMPro.TextMeshProUGUI QFSW.QC.QuantumConsole::_jobCounterText
	TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * ____jobCounterText_44;
	// System.Action QFSW.QC.QuantumConsole::OnStateChange
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnStateChange_45;
	// System.Action`1<System.String> QFSW.QC.QuantumConsole::OnInvoke
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnInvoke_46;
	// System.Action QFSW.QC.QuantumConsole::OnClear
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnClear_47;
	// System.Action`1<QFSW.QC.ILog> QFSW.QC.QuantumConsole::OnLog
	Action_1_tF3859A0A7F70410D19A5EE3F2D8092FD05D1F4BD * ___OnLog_48;
	// System.Action QFSW.QC.QuantumConsole::OnActivate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnActivate_49;
	// System.Action QFSW.QC.QuantumConsole::OnDeactivate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDeactivate_50;
	// System.Action`1<System.Collections.Generic.List`1<QFSW.QC.CommandData>> QFSW.QC.QuantumConsole::OnSuggestionsGenerated
	Action_1_t9B0F04BB031D31003153D6DDA285422CBE843483 * ___OnSuggestionsGenerated_51;
	// QFSW.QC.QuantumSerializer QFSW.QC.QuantumConsole::_serializer
	QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2 * ____serializer_52;
	// QFSW.QC.ILogStorage QFSW.QC.QuantumConsole::_logStorage
	RuntimeObject* ____logStorage_53;
	// QFSW.QC.ILogQueue QFSW.QC.QuantumConsole::_logQueue
	RuntimeObject* ____logQueue_54;
	// System.Boolean QFSW.QC.QuantumConsole::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_55;
	// System.Collections.Generic.List`1<System.String> QFSW.QC.QuantumConsole::_previousCommands
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____previousCommands_56;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> QFSW.QC.QuantumConsole::_currentTasks
	List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * ____currentTasks_57;
	// System.Collections.Generic.List`1<System.Collections.Generic.IEnumerator`1<QFSW.QC.ICommandAction>> QFSW.QC.QuantumConsole::_currentActions
	List_1_t228D84E45D03552E714C09BD59C6B789048CDAE9 * ____currentActions_58;
	// System.Collections.Generic.List`1<QFSW.QC.CommandData> QFSW.QC.QuantumConsole::_suggestedCommands
	List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321 * ____suggestedCommands_59;
	// System.Int32 QFSW.QC.QuantumConsole::_selectedPreviousCommandIndex
	int32_t ____selectedPreviousCommandIndex_60;
	// System.Int32 QFSW.QC.QuantumConsole::_selectedSuggestionCommandIndex
	int32_t ____selectedSuggestionCommandIndex_61;
	// System.String QFSW.QC.QuantumConsole::_currentText
	String_t* ____currentText_62;
	// System.String QFSW.QC.QuantumConsole::_previousText
	String_t* ____previousText_63;
	// System.Boolean QFSW.QC.QuantumConsole::_isGeneratingTable
	bool ____isGeneratingTable_64;
	// System.Boolean QFSW.QC.QuantumConsole::_consoleRequiresFlush
	bool ____consoleRequiresFlush_65;
	// TMPro.TextMeshProUGUI[] QFSW.QC.QuantumConsole::_textComponents
	TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC* ____textComponents_66;
	// System.Type QFSW.QC.QuantumConsole::_voidTaskType
	Type_t * ____voidTaskType_67;

public:
	inline static int32_t get_offset_of__containerRect_5() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____containerRect_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__containerRect_5() const { return ____containerRect_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__containerRect_5() { return &____containerRect_5; }
	inline void set__containerRect_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____containerRect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____containerRect_5), (void*)value);
	}

	inline static int32_t get_offset_of__scrollRect_6() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____scrollRect_6)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get__scrollRect_6() const { return ____scrollRect_6; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of__scrollRect_6() { return &____scrollRect_6; }
	inline void set__scrollRect_6(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		____scrollRect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____scrollRect_6), (void*)value);
	}

	inline static int32_t get_offset_of__suggestionPopupRect_7() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____suggestionPopupRect_7)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__suggestionPopupRect_7() const { return ____suggestionPopupRect_7; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__suggestionPopupRect_7() { return &____suggestionPopupRect_7; }
	inline void set__suggestionPopupRect_7(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____suggestionPopupRect_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____suggestionPopupRect_7), (void*)value);
	}

	inline static int32_t get_offset_of__jobCounterRect_8() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____jobCounterRect_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get__jobCounterRect_8() const { return ____jobCounterRect_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of__jobCounterRect_8() { return &____jobCounterRect_8; }
	inline void set__jobCounterRect_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		____jobCounterRect_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jobCounterRect_8), (void*)value);
	}

	inline static int32_t get_offset_of__panels_9() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____panels_9)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get__panels_9() const { return ____panels_9; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of__panels_9() { return &____panels_9; }
	inline void set__panels_9(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		____panels_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____panels_9), (void*)value);
	}

	inline static int32_t get_offset_of__theme_10() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____theme_10)); }
	inline QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * get__theme_10() const { return ____theme_10; }
	inline QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A ** get_address_of__theme_10() { return &____theme_10; }
	inline void set__theme_10(QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * value)
	{
		____theme_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____theme_10), (void*)value);
	}

	inline static int32_t get_offset_of__keyConfig_11() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____keyConfig_11)); }
	inline QuantumKeyConfig_t2FB38479B8D655251876262DC30E6660E8A92E1B * get__keyConfig_11() const { return ____keyConfig_11; }
	inline QuantumKeyConfig_t2FB38479B8D655251876262DC30E6660E8A92E1B ** get_address_of__keyConfig_11() { return &____keyConfig_11; }
	inline void set__keyConfig_11(QuantumKeyConfig_t2FB38479B8D655251876262DC30E6660E8A92E1B * value)
	{
		____keyConfig_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyConfig_11), (void*)value);
	}

	inline static int32_t get_offset_of__verboseErrors_12() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____verboseErrors_12)); }
	inline bool get__verboseErrors_12() const { return ____verboseErrors_12; }
	inline bool* get_address_of__verboseErrors_12() { return &____verboseErrors_12; }
	inline void set__verboseErrors_12(bool value)
	{
		____verboseErrors_12 = value;
	}

	inline static int32_t get_offset_of__verboseLogging_13() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____verboseLogging_13)); }
	inline int32_t get__verboseLogging_13() const { return ____verboseLogging_13; }
	inline int32_t* get_address_of__verboseLogging_13() { return &____verboseLogging_13; }
	inline void set__verboseLogging_13(int32_t value)
	{
		____verboseLogging_13 = value;
	}

	inline static int32_t get_offset_of__loggingLevel_14() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____loggingLevel_14)); }
	inline int32_t get__loggingLevel_14() const { return ____loggingLevel_14; }
	inline int32_t* get_address_of__loggingLevel_14() { return &____loggingLevel_14; }
	inline void set__loggingLevel_14(int32_t value)
	{
		____loggingLevel_14 = value;
	}

	inline static int32_t get_offset_of__openOnLogLevel_15() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____openOnLogLevel_15)); }
	inline int32_t get__openOnLogLevel_15() const { return ____openOnLogLevel_15; }
	inline int32_t* get_address_of__openOnLogLevel_15() { return &____openOnLogLevel_15; }
	inline void set__openOnLogLevel_15(int32_t value)
	{
		____openOnLogLevel_15 = value;
	}

	inline static int32_t get_offset_of__interceptDebugLogger_16() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____interceptDebugLogger_16)); }
	inline bool get__interceptDebugLogger_16() const { return ____interceptDebugLogger_16; }
	inline bool* get_address_of__interceptDebugLogger_16() { return &____interceptDebugLogger_16; }
	inline void set__interceptDebugLogger_16(bool value)
	{
		____interceptDebugLogger_16 = value;
	}

	inline static int32_t get_offset_of__interceptWhilstInactive_17() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____interceptWhilstInactive_17)); }
	inline bool get__interceptWhilstInactive_17() const { return ____interceptWhilstInactive_17; }
	inline bool* get_address_of__interceptWhilstInactive_17() { return &____interceptWhilstInactive_17; }
	inline void set__interceptWhilstInactive_17(bool value)
	{
		____interceptWhilstInactive_17 = value;
	}

	inline static int32_t get_offset_of__prependTimestamps_18() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____prependTimestamps_18)); }
	inline bool get__prependTimestamps_18() const { return ____prependTimestamps_18; }
	inline bool* get_address_of__prependTimestamps_18() { return &____prependTimestamps_18; }
	inline void set__prependTimestamps_18(bool value)
	{
		____prependTimestamps_18 = value;
	}

	inline static int32_t get_offset_of__supportedState_19() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____supportedState_19)); }
	inline int32_t get__supportedState_19() const { return ____supportedState_19; }
	inline int32_t* get_address_of__supportedState_19() { return &____supportedState_19; }
	inline void set__supportedState_19(int32_t value)
	{
		____supportedState_19 = value;
	}

	inline static int32_t get_offset_of__activateOnStartup_20() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____activateOnStartup_20)); }
	inline bool get__activateOnStartup_20() const { return ____activateOnStartup_20; }
	inline bool* get_address_of__activateOnStartup_20() { return &____activateOnStartup_20; }
	inline void set__activateOnStartup_20(bool value)
	{
		____activateOnStartup_20 = value;
	}

	inline static int32_t get_offset_of__initialiseOnStartup_21() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____initialiseOnStartup_21)); }
	inline bool get__initialiseOnStartup_21() const { return ____initialiseOnStartup_21; }
	inline bool* get_address_of__initialiseOnStartup_21() { return &____initialiseOnStartup_21; }
	inline void set__initialiseOnStartup_21(bool value)
	{
		____initialiseOnStartup_21 = value;
	}

	inline static int32_t get_offset_of__closeOnSubmit_22() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____closeOnSubmit_22)); }
	inline bool get__closeOnSubmit_22() const { return ____closeOnSubmit_22; }
	inline bool* get_address_of__closeOnSubmit_22() { return &____closeOnSubmit_22; }
	inline void set__closeOnSubmit_22(bool value)
	{
		____closeOnSubmit_22 = value;
	}

	inline static int32_t get_offset_of__singletonMode_23() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____singletonMode_23)); }
	inline bool get__singletonMode_23() const { return ____singletonMode_23; }
	inline bool* get_address_of__singletonMode_23() { return &____singletonMode_23; }
	inline void set__singletonMode_23(bool value)
	{
		____singletonMode_23 = value;
	}

	inline static int32_t get_offset_of__autoScroll_24() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____autoScroll_24)); }
	inline int32_t get__autoScroll_24() const { return ____autoScroll_24; }
	inline int32_t* get_address_of__autoScroll_24() { return &____autoScroll_24; }
	inline void set__autoScroll_24(int32_t value)
	{
		____autoScroll_24 = value;
	}

	inline static int32_t get_offset_of__showPopupDisplay_25() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____showPopupDisplay_25)); }
	inline bool get__showPopupDisplay_25() const { return ____showPopupDisplay_25; }
	inline bool* get_address_of__showPopupDisplay_25() { return &____showPopupDisplay_25; }
	inline void set__showPopupDisplay_25(bool value)
	{
		____showPopupDisplay_25 = value;
	}

	inline static int32_t get_offset_of__suggestionDisplayOrder_26() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____suggestionDisplayOrder_26)); }
	inline int32_t get__suggestionDisplayOrder_26() const { return ____suggestionDisplayOrder_26; }
	inline int32_t* get_address_of__suggestionDisplayOrder_26() { return &____suggestionDisplayOrder_26; }
	inline void set__suggestionDisplayOrder_26(int32_t value)
	{
		____suggestionDisplayOrder_26 = value;
	}

	inline static int32_t get_offset_of__maxSuggestionDisplaySize_27() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____maxSuggestionDisplaySize_27)); }
	inline int32_t get__maxSuggestionDisplaySize_27() const { return ____maxSuggestionDisplaySize_27; }
	inline int32_t* get_address_of__maxSuggestionDisplaySize_27() { return &____maxSuggestionDisplaySize_27; }
	inline void set__maxSuggestionDisplaySize_27(int32_t value)
	{
		____maxSuggestionDisplaySize_27 = value;
	}

	inline static int32_t get_offset_of__useFuzzySearch_28() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____useFuzzySearch_28)); }
	inline bool get__useFuzzySearch_28() const { return ____useFuzzySearch_28; }
	inline bool* get_address_of__useFuzzySearch_28() { return &____useFuzzySearch_28; }
	inline void set__useFuzzySearch_28(bool value)
	{
		____useFuzzySearch_28 = value;
	}

	inline static int32_t get_offset_of__caseSensitiveSearch_29() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____caseSensitiveSearch_29)); }
	inline bool get__caseSensitiveSearch_29() const { return ____caseSensitiveSearch_29; }
	inline bool* get_address_of__caseSensitiveSearch_29() { return &____caseSensitiveSearch_29; }
	inline void set__caseSensitiveSearch_29(bool value)
	{
		____caseSensitiveSearch_29 = value;
	}

	inline static int32_t get_offset_of__showCurrentJobs_30() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____showCurrentJobs_30)); }
	inline bool get__showCurrentJobs_30() const { return ____showCurrentJobs_30; }
	inline bool* get_address_of__showCurrentJobs_30() { return &____showCurrentJobs_30; }
	inline void set__showCurrentJobs_30(bool value)
	{
		____showCurrentJobs_30 = value;
	}

	inline static int32_t get_offset_of__blockOnAsync_31() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____blockOnAsync_31)); }
	inline bool get__blockOnAsync_31() const { return ____blockOnAsync_31; }
	inline bool* get_address_of__blockOnAsync_31() { return &____blockOnAsync_31; }
	inline void set__blockOnAsync_31(bool value)
	{
		____blockOnAsync_31 = value;
	}

	inline static int32_t get_offset_of__storeCommandHistory_32() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____storeCommandHistory_32)); }
	inline bool get__storeCommandHistory_32() const { return ____storeCommandHistory_32; }
	inline bool* get_address_of__storeCommandHistory_32() { return &____storeCommandHistory_32; }
	inline void set__storeCommandHistory_32(bool value)
	{
		____storeCommandHistory_32 = value;
	}

	inline static int32_t get_offset_of__storeDuplicateCommands_33() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____storeDuplicateCommands_33)); }
	inline bool get__storeDuplicateCommands_33() const { return ____storeDuplicateCommands_33; }
	inline bool* get_address_of__storeDuplicateCommands_33() { return &____storeDuplicateCommands_33; }
	inline void set__storeDuplicateCommands_33(bool value)
	{
		____storeDuplicateCommands_33 = value;
	}

	inline static int32_t get_offset_of__storeAdjacentDuplicateCommands_34() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____storeAdjacentDuplicateCommands_34)); }
	inline bool get__storeAdjacentDuplicateCommands_34() const { return ____storeAdjacentDuplicateCommands_34; }
	inline bool* get_address_of__storeAdjacentDuplicateCommands_34() { return &____storeAdjacentDuplicateCommands_34; }
	inline void set__storeAdjacentDuplicateCommands_34(bool value)
	{
		____storeAdjacentDuplicateCommands_34 = value;
	}

	inline static int32_t get_offset_of__commandHistorySize_35() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____commandHistorySize_35)); }
	inline int32_t get__commandHistorySize_35() const { return ____commandHistorySize_35; }
	inline int32_t* get_address_of__commandHistorySize_35() { return &____commandHistorySize_35; }
	inline void set__commandHistorySize_35(int32_t value)
	{
		____commandHistorySize_35 = value;
	}

	inline static int32_t get_offset_of__maxStoredLogs_36() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____maxStoredLogs_36)); }
	inline int32_t get__maxStoredLogs_36() const { return ____maxStoredLogs_36; }
	inline int32_t* get_address_of__maxStoredLogs_36() { return &____maxStoredLogs_36; }
	inline void set__maxStoredLogs_36(int32_t value)
	{
		____maxStoredLogs_36 = value;
	}

	inline static int32_t get_offset_of__maxLogSize_37() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____maxLogSize_37)); }
	inline int32_t get__maxLogSize_37() const { return ____maxLogSize_37; }
	inline int32_t* get_address_of__maxLogSize_37() { return &____maxLogSize_37; }
	inline void set__maxLogSize_37(int32_t value)
	{
		____maxLogSize_37 = value;
	}

	inline static int32_t get_offset_of__showInitLogs_38() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____showInitLogs_38)); }
	inline bool get__showInitLogs_38() const { return ____showInitLogs_38; }
	inline bool* get_address_of__showInitLogs_38() { return &____showInitLogs_38; }
	inline void set__showInitLogs_38(bool value)
	{
		____showInitLogs_38 = value;
	}

	inline static int32_t get_offset_of__consoleInput_39() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____consoleInput_39)); }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * get__consoleInput_39() const { return ____consoleInput_39; }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 ** get_address_of__consoleInput_39() { return &____consoleInput_39; }
	inline void set__consoleInput_39(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * value)
	{
		____consoleInput_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____consoleInput_39), (void*)value);
	}

	inline static int32_t get_offset_of__inputPlaceholderText_40() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____inputPlaceholderText_40)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get__inputPlaceholderText_40() const { return ____inputPlaceholderText_40; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of__inputPlaceholderText_40() { return &____inputPlaceholderText_40; }
	inline void set__inputPlaceholderText_40(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		____inputPlaceholderText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputPlaceholderText_40), (void*)value);
	}

	inline static int32_t get_offset_of__consoleLogText_41() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____consoleLogText_41)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get__consoleLogText_41() const { return ____consoleLogText_41; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of__consoleLogText_41() { return &____consoleLogText_41; }
	inline void set__consoleLogText_41(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		____consoleLogText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____consoleLogText_41), (void*)value);
	}

	inline static int32_t get_offset_of__consoleSuggestionText_42() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____consoleSuggestionText_42)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get__consoleSuggestionText_42() const { return ____consoleSuggestionText_42; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of__consoleSuggestionText_42() { return &____consoleSuggestionText_42; }
	inline void set__consoleSuggestionText_42(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		____consoleSuggestionText_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____consoleSuggestionText_42), (void*)value);
	}

	inline static int32_t get_offset_of__suggestionPopupText_43() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____suggestionPopupText_43)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get__suggestionPopupText_43() const { return ____suggestionPopupText_43; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of__suggestionPopupText_43() { return &____suggestionPopupText_43; }
	inline void set__suggestionPopupText_43(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		____suggestionPopupText_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____suggestionPopupText_43), (void*)value);
	}

	inline static int32_t get_offset_of__jobCounterText_44() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____jobCounterText_44)); }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * get__jobCounterText_44() const { return ____jobCounterText_44; }
	inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 ** get_address_of__jobCounterText_44() { return &____jobCounterText_44; }
	inline void set__jobCounterText_44(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * value)
	{
		____jobCounterText_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jobCounterText_44), (void*)value);
	}

	inline static int32_t get_offset_of_OnStateChange_45() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ___OnStateChange_45)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnStateChange_45() const { return ___OnStateChange_45; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnStateChange_45() { return &___OnStateChange_45; }
	inline void set_OnStateChange_45(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnStateChange_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStateChange_45), (void*)value);
	}

	inline static int32_t get_offset_of_OnInvoke_46() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ___OnInvoke_46)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnInvoke_46() const { return ___OnInvoke_46; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnInvoke_46() { return &___OnInvoke_46; }
	inline void set_OnInvoke_46(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnInvoke_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInvoke_46), (void*)value);
	}

	inline static int32_t get_offset_of_OnClear_47() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ___OnClear_47)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnClear_47() const { return ___OnClear_47; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnClear_47() { return &___OnClear_47; }
	inline void set_OnClear_47(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnClear_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClear_47), (void*)value);
	}

	inline static int32_t get_offset_of_OnLog_48() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ___OnLog_48)); }
	inline Action_1_tF3859A0A7F70410D19A5EE3F2D8092FD05D1F4BD * get_OnLog_48() const { return ___OnLog_48; }
	inline Action_1_tF3859A0A7F70410D19A5EE3F2D8092FD05D1F4BD ** get_address_of_OnLog_48() { return &___OnLog_48; }
	inline void set_OnLog_48(Action_1_tF3859A0A7F70410D19A5EE3F2D8092FD05D1F4BD * value)
	{
		___OnLog_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLog_48), (void*)value);
	}

	inline static int32_t get_offset_of_OnActivate_49() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ___OnActivate_49)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnActivate_49() const { return ___OnActivate_49; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnActivate_49() { return &___OnActivate_49; }
	inline void set_OnActivate_49(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnActivate_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnActivate_49), (void*)value);
	}

	inline static int32_t get_offset_of_OnDeactivate_50() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ___OnDeactivate_50)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDeactivate_50() const { return ___OnDeactivate_50; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDeactivate_50() { return &___OnDeactivate_50; }
	inline void set_OnDeactivate_50(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDeactivate_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDeactivate_50), (void*)value);
	}

	inline static int32_t get_offset_of_OnSuggestionsGenerated_51() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ___OnSuggestionsGenerated_51)); }
	inline Action_1_t9B0F04BB031D31003153D6DDA285422CBE843483 * get_OnSuggestionsGenerated_51() const { return ___OnSuggestionsGenerated_51; }
	inline Action_1_t9B0F04BB031D31003153D6DDA285422CBE843483 ** get_address_of_OnSuggestionsGenerated_51() { return &___OnSuggestionsGenerated_51; }
	inline void set_OnSuggestionsGenerated_51(Action_1_t9B0F04BB031D31003153D6DDA285422CBE843483 * value)
	{
		___OnSuggestionsGenerated_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSuggestionsGenerated_51), (void*)value);
	}

	inline static int32_t get_offset_of__serializer_52() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____serializer_52)); }
	inline QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2 * get__serializer_52() const { return ____serializer_52; }
	inline QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2 ** get_address_of__serializer_52() { return &____serializer_52; }
	inline void set__serializer_52(QuantumSerializer_t68D8F43147341056BE09728C3AC8875543B286A2 * value)
	{
		____serializer_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializer_52), (void*)value);
	}

	inline static int32_t get_offset_of__logStorage_53() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____logStorage_53)); }
	inline RuntimeObject* get__logStorage_53() const { return ____logStorage_53; }
	inline RuntimeObject** get_address_of__logStorage_53() { return &____logStorage_53; }
	inline void set__logStorage_53(RuntimeObject* value)
	{
		____logStorage_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logStorage_53), (void*)value);
	}

	inline static int32_t get_offset_of__logQueue_54() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____logQueue_54)); }
	inline RuntimeObject* get__logQueue_54() const { return ____logQueue_54; }
	inline RuntimeObject** get_address_of__logQueue_54() { return &____logQueue_54; }
	inline void set__logQueue_54(RuntimeObject* value)
	{
		____logQueue_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logQueue_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ___U3CIsActiveU3Ek__BackingField_55)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_55() const { return ___U3CIsActiveU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_55() { return &___U3CIsActiveU3Ek__BackingField_55; }
	inline void set_U3CIsActiveU3Ek__BackingField_55(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of__previousCommands_56() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____previousCommands_56)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__previousCommands_56() const { return ____previousCommands_56; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__previousCommands_56() { return &____previousCommands_56; }
	inline void set__previousCommands_56(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____previousCommands_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previousCommands_56), (void*)value);
	}

	inline static int32_t get_offset_of__currentTasks_57() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____currentTasks_57)); }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * get__currentTasks_57() const { return ____currentTasks_57; }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB ** get_address_of__currentTasks_57() { return &____currentTasks_57; }
	inline void set__currentTasks_57(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * value)
	{
		____currentTasks_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentTasks_57), (void*)value);
	}

	inline static int32_t get_offset_of__currentActions_58() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____currentActions_58)); }
	inline List_1_t228D84E45D03552E714C09BD59C6B789048CDAE9 * get__currentActions_58() const { return ____currentActions_58; }
	inline List_1_t228D84E45D03552E714C09BD59C6B789048CDAE9 ** get_address_of__currentActions_58() { return &____currentActions_58; }
	inline void set__currentActions_58(List_1_t228D84E45D03552E714C09BD59C6B789048CDAE9 * value)
	{
		____currentActions_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentActions_58), (void*)value);
	}

	inline static int32_t get_offset_of__suggestedCommands_59() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____suggestedCommands_59)); }
	inline List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321 * get__suggestedCommands_59() const { return ____suggestedCommands_59; }
	inline List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321 ** get_address_of__suggestedCommands_59() { return &____suggestedCommands_59; }
	inline void set__suggestedCommands_59(List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321 * value)
	{
		____suggestedCommands_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____suggestedCommands_59), (void*)value);
	}

	inline static int32_t get_offset_of__selectedPreviousCommandIndex_60() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____selectedPreviousCommandIndex_60)); }
	inline int32_t get__selectedPreviousCommandIndex_60() const { return ____selectedPreviousCommandIndex_60; }
	inline int32_t* get_address_of__selectedPreviousCommandIndex_60() { return &____selectedPreviousCommandIndex_60; }
	inline void set__selectedPreviousCommandIndex_60(int32_t value)
	{
		____selectedPreviousCommandIndex_60 = value;
	}

	inline static int32_t get_offset_of__selectedSuggestionCommandIndex_61() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____selectedSuggestionCommandIndex_61)); }
	inline int32_t get__selectedSuggestionCommandIndex_61() const { return ____selectedSuggestionCommandIndex_61; }
	inline int32_t* get_address_of__selectedSuggestionCommandIndex_61() { return &____selectedSuggestionCommandIndex_61; }
	inline void set__selectedSuggestionCommandIndex_61(int32_t value)
	{
		____selectedSuggestionCommandIndex_61 = value;
	}

	inline static int32_t get_offset_of__currentText_62() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____currentText_62)); }
	inline String_t* get__currentText_62() const { return ____currentText_62; }
	inline String_t** get_address_of__currentText_62() { return &____currentText_62; }
	inline void set__currentText_62(String_t* value)
	{
		____currentText_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentText_62), (void*)value);
	}

	inline static int32_t get_offset_of__previousText_63() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____previousText_63)); }
	inline String_t* get__previousText_63() const { return ____previousText_63; }
	inline String_t** get_address_of__previousText_63() { return &____previousText_63; }
	inline void set__previousText_63(String_t* value)
	{
		____previousText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previousText_63), (void*)value);
	}

	inline static int32_t get_offset_of__isGeneratingTable_64() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____isGeneratingTable_64)); }
	inline bool get__isGeneratingTable_64() const { return ____isGeneratingTable_64; }
	inline bool* get_address_of__isGeneratingTable_64() { return &____isGeneratingTable_64; }
	inline void set__isGeneratingTable_64(bool value)
	{
		____isGeneratingTable_64 = value;
	}

	inline static int32_t get_offset_of__consoleRequiresFlush_65() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____consoleRequiresFlush_65)); }
	inline bool get__consoleRequiresFlush_65() const { return ____consoleRequiresFlush_65; }
	inline bool* get_address_of__consoleRequiresFlush_65() { return &____consoleRequiresFlush_65; }
	inline void set__consoleRequiresFlush_65(bool value)
	{
		____consoleRequiresFlush_65 = value;
	}

	inline static int32_t get_offset_of__textComponents_66() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____textComponents_66)); }
	inline TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC* get__textComponents_66() const { return ____textComponents_66; }
	inline TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC** get_address_of__textComponents_66() { return &____textComponents_66; }
	inline void set__textComponents_66(TextMeshProUGUIU5BU5D_t7AA8E45FFAE748E415BA0EFD82A5A44749B578EC* value)
	{
		____textComponents_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textComponents_66), (void*)value);
	}

	inline static int32_t get_offset_of__voidTaskType_67() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE, ____voidTaskType_67)); }
	inline Type_t * get__voidTaskType_67() const { return ____voidTaskType_67; }
	inline Type_t ** get_address_of__voidTaskType_67() { return &____voidTaskType_67; }
	inline void set__voidTaskType_67(Type_t * value)
	{
		____voidTaskType_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____voidTaskType_67), (void*)value);
	}
};

struct QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE_StaticFields
{
public:
	// QFSW.QC.QuantumConsole QFSW.QC.QuantumConsole::<Instance>k__BackingField
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
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


// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A_mE36A3DC8ED36314C0336D6DDF6B366487ECF6FA2_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_mB85F4F1967F9BAAEAFE52ACBC3734CCAEF4D73E8_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m7CDE0512D8F88B207A7B16B6DDF52E02DE3E1BB4_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * ___stateMachine1, const RuntimeMethod* method);
// !1 System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConcurrentDictionary_2_get_Item_m59F8F360E1831F72953AFFFA11CB69909D846D00_gshared (ConcurrentDictionary_2_t089158EC5B60BA9524898F4AC52FEBB3F3F48198 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_m41EE394B6AFF9F9442116EBC66C4DFD93D69409F_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions::HasAttribute<System.Object>(System.Reflection.ICustomAttributeProvider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_HasAttribute_TisRuntimeObject_m3B31B5044F21F5843883D501B428E24B5E2295D1_gshared (RuntimeObject* ___provider0, bool ___searchInherited1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Char,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m6957D4F08B4AC5BF28A2080A49FBFE8AF9134D8F_gshared (Func_2_t225B855E9BC31283EA4F08379810F7AF97E56D2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Char,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_TisRuntimeObject_mD93CA137BF076B998353DA62124CB313158D5038_gshared (RuntimeObject* ___source0, Func_2_t225B855E9BC31283EA4F08379810F7AF97E56D2E * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void QFSW.QC.Actions.WaitUntil/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m6197F59F7C44A9B289668E18519D2D74F5E29D5C (U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QFSW.QC.Actions.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_mF947DF6B280F882C5E4EA20CC59F6F7B8CBB9777 (WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___condition0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.CommandData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA009E878103AB40869479DA185FA637B7513D56A (U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.Utilities.GameObjectExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE9B8B26486373DFF65B4D392EBC1E838A6AED2D (U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 * __this, const RuntimeMethod* method);
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_m0F6495E1FB440A08314B7D74CCA99C897FAC05D1 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E (RuntimeObject * __this, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___flag0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void QFSW.QC.Actions.GetKey/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m228DC5BB17454C5F0B07A4E44BA2A7155DD53A6E (U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.InvocationTargetFactory/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF3C32C2E99CB6F4D2D6FB472F6FC8424F54D4559 (U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * __this, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Resources_FindObjectsOfTypeAll_mAC4233995ECE942E2C0250607C5CFD9E805F2215 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC8E4179AABBC00114DCD90AD69D6AA670DC49537 (Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<UnityEngine.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Enumerable_FirstOrDefault_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_mBBCF9125E7B1D36ECE2D6F5186C4D918AEEC45B5 (RuntimeObject* ___source0, Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * ___predicate1, const RuntimeMethod* method)
{
	return ((  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * (*) (RuntimeObject*, Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared)(___source0, ___predicate1, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.String QFSW.QC.Utilities.ColorExtensions::ColorText(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorExtensions_ColorText_mE419C93A9ACF0C101C8F9B828A08AD78F6DEF7A8 (String_t* ___text0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<QFSW.QC.CommandData>::get_Item(System.Int32)
inline CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * List_1_get_Item_mEE22C643473CDF7EC9FD8D800145ADD3DE84A40C_inline (List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * (*) (List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String QFSW.QC.QuantumConsole::FormatSuggestion(QFSW.QC.CommandData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuantumConsole_FormatSuggestion_mDCAB972A14DE623D7761CDE228DF637054843C14 (QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___command0, bool ___selected1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFormattedCommandSuggestionsU3Ed__103__ctor_m5D1C1C4E9EBF592FB59C60208D22EC3C58769360 (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m64D609581D77DC173B8658EEC33806F442A495CA (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, const RuntimeMethod* method);
// System.Object QFSW.QC.QuantumConsole::InvokeCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * QuantumConsole_InvokeCommand_m987D98472EC4D75EE0766F136CD7D29A2F0921A6 (QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * __this, String_t* ___command0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A_mE36A3DC8ED36314C0336D6DDF6B366487ECF6FA2 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A_mE36A3DC8ED36314C0336D6DDF6B366487ECF6FA2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsole::ProcessAsyncTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuantumConsole_ProcessAsyncTasks_m2489300931F9208C8DCE88F68B0FE8C714B869CE (QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeCommandsAsyncU3Ed__115_MoveNext_m6D51EE37C705F46707FF2B0B0DC144340A7CD59A (U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeCommandsAsyncU3Ed__115_SetStateMachine_m868F60CBDA66405E3DBAB2DB20E40CD09545CCB4 (U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m3AE07161FA6AFF5CB71D58DE260289DCEF0D2E4A (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_mB85F4F1967F9BAAEAFE52ACBC3734CCAEF4D73E8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m7CDE0512D8F88B207A7B16B6DDF52E02DE3E1BB4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m7CDE0512D8F88B207A7B16B6DDF52E02DE3E1BB4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean System.IO.StreamReader::get_EndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamReader_get_EndOfStream_m577D5B15A1100691A7AC9B4F6D6D0574EBADC5BA (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeExternalCommandsAsyncU3Ed__114_MoveNext_mCC67EFA474212D797FDEDF3EAC72B79181C6C20C (U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeExternalCommandsAsyncU3Ed__114_SetStateMachine_m55AFA30EAC82016F4432F3F0427C97B98FB6135D (U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsoleProcessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9B57FE0156FBE54C66094252C5C64D18A5F4DA83 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Int32 QFSW.QC.CommandData::get_ParamCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommandData_get_ParamCount_mB7D6D73E9F848A2673F622580E9A8DC09DF7F094 (CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// !1 System.Collections.Concurrent.ConcurrentDictionary`2<System.String,QFSW.QC.CommandData>::get_Item(!0)
inline CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ConcurrentDictionary_2_get_Item_mD54906C3F76B3E01DE8A2BE93F1E791B12586DD4 (ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * (*) (ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496 *, String_t*, const RuntimeMethod*))ConcurrentDictionary_2_get_Item_m59F8F360E1831F72953AFFFA11CB69909D846D00_gshared)(__this, ___key0, method);
}
// System.Boolean QFSW.QC.Utilities.StringExtensions::ContainsCaseInsensitive(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExtensions_ContainsCaseInsensitive_mAED4591F11735118CDEC41EE3AB4E182475239EF (String_t* ___source0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m03526E87F83EA0CE5C37B6F5FF0B980FFE2B4363 (String_t* __this, String_t* ___value0, bool ___ignoreCase1, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture2, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97 (Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Count<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline int32_t Enumerable_Count_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m54EBD6BB6243BC3296666DC1468DA63B3E454277 (RuntimeObject* ___source0, Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * ___predicate1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F *, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_m41EE394B6AFF9F9442116EBC66C4DFD93D69409F_gshared)(___source0, ___predicate1, method);
}
// System.Void QFSW.QC.CommandData::.ctor(System.Reflection.MethodInfo,QFSW.QC.CommandAttribute,QFSW.QC.CommandDescriptionAttribute,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandData__ctor_mE90A8BAE2279E258A7DFB75108671EB214201A51 (CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * __this, MethodInfo_t * ___methodData0, CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * ___commandAttribute1, CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * ___descriptionAttribute2, int32_t ___defaultParameterCount3, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateCommandOverloadsU3Ed__31__ctor_m06D44DADE63CC8BA69C54709C037A855C94CB1FC (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<QFSW.QC.CommandData> QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::System.Collections.Generic.IEnumerable<QFSW.QC.CommandData>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateCommandOverloadsU3Ed__31_System_Collections_Generic_IEnumerableU3CQFSW_QC_CommandDataU3E_GetEnumerator_m2A7F95564DE5C3F4E9FFF9625E8679CE58989D50 (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Reflection.MethodInfo,System.Reflection.MemberInfo>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA (ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8 * __this, MethodInfo_t * ___item10, MemberInfo_t * ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8 *, MethodInfo_t *, MemberInfo_t *, const RuntimeMethod*))ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared)(__this, ___item10, ___item21, method);
}
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions::HasAttribute<QFSW.QC.CommandAttribute>(System.Reflection.ICustomAttributeProvider,System.Boolean)
inline bool ReflectionExtensions_HasAttribute_TisCommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD_mA0BC1A08C75ACD9E1C317711699E78848F976D42 (RuntimeObject* ___provider0, bool ___searchInherited1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, bool, const RuntimeMethod*))ReflectionExtensions_HasAttribute_TisRuntimeObject_m3B31B5044F21F5843883D501B428E24B5E2295D1_gshared)(___provider0, ___searchInherited1, method);
}
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions::IsDelegate(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsDelegate_m31FE8EA9004CDB56FD2A8966B2D2F08420023CCD (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions::IsStrongDelegate(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_IsStrongDelegate_mBDA0E9E4E66E07A73E0FA5173362C5D4C51A130B (FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void QFSW.QC.Internal.FieldDelegateMethod::.ctor(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldDelegateMethod__ctor_m70962B9BD0F04980FE1FD72F5AF070BA234ADF59 (FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65 * __this, FieldInfo_t * ___fieldInfo0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void QFSW.QC.Internal.FieldAutoMethod::.ctor(System.Reflection.FieldInfo,QFSW.QC.Internal.FieldAutoMethod/AccessType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldAutoMethod__ctor_m8F7A6A86BB332B0DC8F0567DF4C10173B388D413 (FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 * __this, FieldInfo_t * ___fieldInfo0, int32_t ___accessType1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsLiteral_mF2657F6BAB384894EB2C861D51093179E3EE77D9 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_mA279E731A1097E83BACAF9F53612CFA9428E806B (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtractCommandMethodsU3Ed__25__ctor_m93485C29E22BF9A8C267F30CA44A85DAA86DAD34 (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.MethodInfo,System.Reflection.MemberInfo>> QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::System.Collections.Generic.IEnumerable<(System.Reflection.MethodInfomethod,System.Reflection.MemberInfomember)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExtractCommandMethodsU3Ed__25_System_Collections_Generic_IEnumerableU3CU28System_Reflection_MethodInfomethodU2CSystem_Reflection_MemberInfomemberU29U3E_GetEnumerator_mD9A19553C3946EB5BD1874CB6D98D6D801AA3A9F (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumMacros/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD00F44251BABC0657C71FA7B241D7449F1933A14 (U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.String QFSW.QC.QuantumMacros::ExpandMacros(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuantumMacros_ExpandMacros_mBF1B4421CBEB91ACD9ACE73A577CE520421E331C (String_t* ___text0, int32_t ___maximumExpansions1, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumParser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m64F68E80C42178F0C4DBE32B4F2EE19E2DF8666E (U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumPreprocessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0D41B7225A6A6E76900F9C1F3096FD880273C3B3 (U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBA5DA8D52427E156E9064803322E7E4D33DF4A13 (U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.QuantumSerializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82AA3FB8BD8579064CB1D6788B5B22094AFA3E07 (U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 * __this, const RuntimeMethod* method);
// System.Void QFSW.QC.Utilities.ReflectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC1D8139A6CD725CDB5439CE67BE8E9C3DD2CF071 (U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !1 System.Func`2<System.Reflection.MethodInfo,System.Type>::Invoke(!0)
inline Type_t * Func_2_Invoke_mBCEB06F7582B460804F50C6580EF9EB4CA956B84 (Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * __this, MethodInfo_t * ___arg0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 *, MethodInfo_t *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.String QFSW.QC.Utilities.ReflectionExtensions::GetDisplayName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1 (Type_t * ___type0, bool ___includeNamespace1, const RuntimeMethod* method);
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions::AreMethodsEqual(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionExtensions_AreMethodsEqual_mBD4984AD37DE55302DD14563DAC1785C745E9D53 (MethodInfo_t * ___a0, MethodInfo_t * ___b1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void QFSW.QC.Actions.Typewriter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1DB5FB9D46E9BE3D108D314E111AABC859C26729 (U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD * __this, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Char,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m661F316CCEDBF8C6EC183BD380B643CE2AD9D14C (Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m6957D4F08B4AC5BF28A2080A49FBFE8AF9134D8F_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Char,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_TisString_t_m1A9B81888535C501740FD2655C52963B108E4708 (RuntimeObject* ___source0, Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B *, const RuntimeMethod*))Enumerable_Select_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_TisRuntimeObject_mD93CA137BF076B998353DA62124CB313158D5038_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Regex_Split_m5BF32FE8CCFDE21F7EA24946D35A2E74CAA91805 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void QFSW.QC.Actions.WaitRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitRealtime__ctor_m13F2AE4440BC6D2322F21962DE0EF77F0A9735F9 (WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void QFSW.QC.Actions.Value::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value__ctor_mD4654A2A4930511C22F739630FC984886760C5A1 (Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B * __this, RuntimeObject * ___value0, bool ___newline1, const RuntimeMethod* method);
// System.Boolean QFSW.QC.InputHelper::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputHelper_GetKeyDown_m6EA585E8270689D7FF08BCFF11E90FE4CF5FE8AF (int32_t ___key0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFSW.QC.Actions.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m9F66BEAFED07517783A7F1B1321FFF369B8D86A5 (WaitUntil_t292EB83F32C88059D1FD61F1D00C4E8F1266380B * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___condition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mCF26D9B75F1CCBEC4858F292A799BF50A8ED23AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4 * L_0 = (U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_m6197F59F7C44A9B289668E18519D2D74F5E29D5C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4 * L_1 = V_0;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_2 = ___condition0;
		L_1->set_condition_0(L_2);
		// public WaitUntil(Func<bool> condition) : base(() => !condition())
		U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4 * L_3 = V_0;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mCF26D9B75F1CCBEC4858F292A799BF50A8ED23AE_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitWhile__ctor_mF947DF6B280F882C5E4EA20CC59F6F7B8CBB9777(__this, L_4, /*hidden argument*/NULL);
		// }
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
// System.Boolean QFSW.QC.Actions.WaitWhile::get_IsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitWhile_get_IsFinished_m71EB793A1BC022826746787E8159914A482B5BDC (WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsFinished => _condition();
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = __this->get__condition_0();
		bool L_1;
		L_1 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_0, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean QFSW.QC.Actions.WaitWhile::get_StartsIdle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitWhile_get_StartsIdle_m6DF7206A8C4D1B48603FC1FF700BA357EFFC6B78 (WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9 * __this, const RuntimeMethod* method)
{
	{
		// public bool StartsIdle => true;
		return (bool)1;
	}
}
// System.Void QFSW.QC.Actions.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_mF947DF6B280F882C5E4EA20CC59F6F7B8CBB9777 (WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___condition0, const RuntimeMethod* method)
{
	{
		// public WaitWhile(Func<bool> condition)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _condition = condition;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = ___condition0;
		__this->set__condition_0(L_0);
		// }
		return;
	}
}
// System.Void QFSW.QC.Actions.WaitWhile::Start(QFSW.QC.ActionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile_Start_m1C6C54D0CD73115DC670A3DCADF83E2BFC2DE9CF (WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9 * __this, ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E  ___context0, const RuntimeMethod* method)
{
	{
		// public void Start(ActionContext context) { }
		return;
	}
}
// System.Void QFSW.QC.Actions.WaitWhile::Finalize(QFSW.QC.ActionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile_Finalize_mB6F9660108E7B21FB2B9925FA5548C82FF0AB0AD (WaitWhile_tA933E43A2838132B73E392680031DD374C5FC3B9 * __this, ActionContext_tD3D78DB755C6C905056DD7B5BA738567816CD80E  ___context0, const RuntimeMethod* method)
{
	{
		// public void Finalize(ActionContext context) { }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFSW.QC.CommandData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8070CA46A982B4ED1E1FFC3F6AB017BB65241960 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 * L_0 = (U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 *)il2cpp_codegen_object_new(U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA009E878103AB40869479DA185FA637B7513D56A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.CommandData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA009E878103AB40869479DA185FA637B7513D56A (U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String QFSW.QC.CommandData/<>c::<BuildGenericSignature>b__24_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CBuildGenericSignatureU3Eb__24_0_m5B0329901632F430A6E5B179931F1FECCADB24EE (U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 * __this, Type_t * ___x0, const RuntimeMethod* method)
{
	{
		// IEnumerable<string> names = genericParamTypes.Select(x => x.Name);
		Type_t * L_0 = ___x0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type QFSW.QC.CommandData/<>c::<.ctor>b__28_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3C_ctorU3Eb__28_0_mBCE58EA7103FA371B5AE23ED3F4C7E26C7312E0E (U3CU3Ec_t7E10F8448F2CDD01CE4AA2550E61DA9277E2F7D3 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___x0, const RuntimeMethod* method)
{
	{
		// .Select(x => x.ParameterType)
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___x0;
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
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
// System.Void QFSW.QC.CommandData/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mA7FB33883B631EC4711DB6302F30020BCA503C1D (U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo QFSW.QC.CommandData/<>c__DisplayClass22_0::<GetInvokingMethod>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * U3CU3Ec__DisplayClass22_0_U3CGetInvokingMethodU3Eb__1_m167AE2822C2C605A7A2F66ACFE543199BE1A21A4 (U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43 * __this, const RuntimeMethod* method)
{
	{
		// : WrapConstruction(() => method.MakeGenericMethod(genericTypeArguments));
		MethodInfo_t * L_0 = __this->get_method_2();
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1 = __this->get_genericTypeArguments_3();
		MethodInfo_t * L_2;
		L_2 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(43 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_0, L_1);
		return L_2;
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
// System.Void QFSW.QC.CommandData/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_m4CC42564CFD8CB4E16B60FEDE9E626E0ACE8C8A4 (U3CU3Ec__DisplayClass22_1_t5BF1027F746D463B47A666006ADCD042883E032C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type QFSW.QC.CommandData/<>c__DisplayClass22_1::<GetInvokingMethod>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec__DisplayClass22_1_U3CGetInvokingMethodU3Eb__2_m646182B34C5524587B9A70BAA2CFCD7202BAC6F1 (U3CU3Ec__DisplayClass22_1_t5BF1027F746D463B47A666006ADCD042883E032C * __this, const RuntimeMethod* method)
{
	{
		// declaringType = WrapConstruction(() => declaringType.MakeGenericType(genericTypes));
		U3CU3Ec__DisplayClass22_0_t3EA04D7707E370C69D5E5F0D1FB455827689FF43 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		Type_t * L_1 = L_0->get_declaringType_1();
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = __this->get_genericTypes_0();
		Type_t * L_3;
		L_3 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(93 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void QFSW.QC.Utilities.GameObjectExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD1322ACDFC08BAEEA579633CE6B576DDC9FECD80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 * L_0 = (U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 *)il2cpp_codegen_object_new(U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBE9B8B26486373DFF65B4D392EBC1E838A6AED2D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.Utilities.GameObjectExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBE9B8B26486373DFF65B4D392EBC1E838A6AED2D (U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Utilities.GameObjectExtensions/<>c::<Find>b__2_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindU3Eb__2_0_mBD363ECBA6EF56995B44219A0A2285EB8E828794 (U3CU3Ec_t9AA00A8FDCB4DD6F2EC890B01B7147FB8799D950 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => !x.hideFlags.HasFlag(HideFlags.HideInHierarchy))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___x0;
		int32_t L_1;
		L_1 = Object_get_hideFlags_m0F6495E1FB440A08314B7D74CCA99C897FAC05D1(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = 1;
		RuntimeObject * L_5 = Box(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var, &L_4);
		bool L_6;
		L_6 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_3, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
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
// System.Void QFSW.QC.Utilities.GameObjectExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mD692310B53AFD5AD3138599B39C0E34C8063C123 (U3CU3Ec__DisplayClass2_0_tAE8E22D9D369EDEEA1D66366399CB5735EF05512 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Utilities.GameObjectExtensions/<>c__DisplayClass2_0::<Find>b__1(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CFindU3Eb__1_m9C6445DDE409C84BAB20405843012106D42186FB (U3CU3Ec__DisplayClass2_0_tAE8E22D9D369EDEEA1D66366399CB5735EF05512 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___x0, const RuntimeMethod* method)
{
	{
		// .FirstOrDefault(x => x.name == name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___x0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void QFSW.QC.Actions.GetKey/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE6DE008F7C0F28DB8C88FA1443920DA8E4BC32BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 * L_0 = (U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 *)il2cpp_codegen_object_new(U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m228DC5BB17454C5F0B07A4E44BA2A7155DD53A6E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.Actions.GetKey/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m228DC5BB17454C5F0B07A4E44BA2A7155DD53A6E (U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Actions.GetKey/<>c::<.cctor>b__11_0(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__11_0_mCF1528EE0BD752EC786C1362AD1278F308B2FEC1 (U3CU3Ec_t4A134F5C2061E247EB818B9EE55CE91D1764E813 * __this, int32_t ___k0, const RuntimeMethod* method)
{
	{
		// .Where(k => (int)k < (int)KeyCode.Mouse0)
		int32_t L_0 = ___k0;
		return (bool)((((int32_t)L_0) < ((int32_t)((int32_t)323)))? 1 : 0);
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
// System.Void QFSW.QC.InvocationTargetFactory/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCB5EB42BEDFEE4CB76F056267688FE99CC7F7F8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * L_0 = (U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B *)il2cpp_codegen_object_new(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF3C32C2E99CB6F4D2D6FB472F6FC8424F54D4559(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.InvocationTargetFactory/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF3C32C2E99CB6F4D2D6FB472F6FC8424F54D4559 (U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object QFSW.QC.InvocationTargetFactory/<>c::<FindTargets>b__2_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CFindTargetsU3Eb__2_0_m70EA99574B355AAEE18C07F86D2D234BE864716C (U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_mBBCF9125E7B1D36ECE2D6F5186C4D918AEEC45B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mC8E4179AABBC00114DCD90AD69D6AA670DC49537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindTargetsU3Eb__2_4_m1925678E150EA8DF8D063A817B790789776BE4A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * G_B2_0 = NULL;
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* G_B2_1 = NULL;
	Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * G_B1_0 = NULL;
	ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* G_B1_1 = NULL;
	{
		// return Resources.FindObjectsOfTypeAll(type)
		//     .FirstOrDefault(x => !x.hideFlags.HasFlag(HideFlags.HideInHierarchy));
		Type_t * L_0 = ___type0;
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_1;
		L_1 = Resources_FindObjectsOfTypeAll_mAC4233995ECE942E2C0250607C5CFD9E805F2215(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var);
		Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * L_2 = ((U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var))->get_U3CU3E9__2_4_1();
		Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var);
		U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * L_4 = ((U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * L_5 = (Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 *)il2cpp_codegen_object_new(Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800_il2cpp_TypeInfo_var);
		Func_2__ctor_mC8E4179AABBC00114DCD90AD69D6AA670DC49537(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CFindTargetsU3Eb__2_4_m1925678E150EA8DF8D063A817B790789776BE4A0_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC8E4179AABBC00114DCD90AD69D6AA670DC49537_RuntimeMethod_var);
		Func_2_t4490DFDA400FA49E72C851B7CFFE5584EE480800 * L_6 = L_5;
		((U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B_il2cpp_TypeInfo_var))->set_U3CU3E9__2_4_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7;
		L_7 = Enumerable_FirstOrDefault_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_mBBCF9125E7B1D36ECE2D6F5186C4D918AEEC45B5((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_FirstOrDefault_TisObject_tF2F3778131EFF286AF62B7B013A170F95A91571A_mBBCF9125E7B1D36ECE2D6F5186C4D918AEEC45B5_RuntimeMethod_var);
		return L_7;
	}
}
// System.Boolean QFSW.QC.InvocationTargetFactory/<>c::<FindTargets>b__2_4(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindTargetsU3Eb__2_4_m1925678E150EA8DF8D063A817B790789776BE4A0 (U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .FirstOrDefault(x => !x.hideFlags.HasFlag(HideFlags.HideInHierarchy));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___x0;
		int32_t L_1;
		L_1 = Object_get_hideFlags_m0F6495E1FB440A08314B7D74CCA99C897FAC05D1(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = 1;
		RuntimeObject * L_5 = Box(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var, &L_4);
		bool L_6;
		L_6 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_3, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// System.String QFSW.QC.InvocationTargetFactory/<>c::<FindTargets>b__2_1(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindTargetsU3Eb__2_1_m30A1CC9C18E4302FE520659D62505E10D75CC29B (U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, const RuntimeMethod* method)
{
	{
		// .OrderBy(x => x.name, new AlphanumComparator());
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___x0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean QFSW.QC.InvocationTargetFactory/<>c::<FindTargets>b__2_2(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindTargetsU3Eb__2_2_mE69CE9A38E5223C0B67E71DD5E1E5FCE95FEDC8F (U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => !x.hideFlags.HasFlag(HideFlags.HideInHierarchy))
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___x0;
		int32_t L_1;
		L_1 = Object_get_hideFlags_m0F6495E1FB440A08314B7D74CCA99C897FAC05D1(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = 1;
		RuntimeObject * L_5 = Box(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12_il2cpp_TypeInfo_var, &L_4);
		bool L_6;
		L_6 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_3, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// System.String QFSW.QC.InvocationTargetFactory/<>c::<FindTargets>b__2_3(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindTargetsU3Eb__2_3_mCC0610CB70BFCF1A83A74DDB86CC40076EED2D1F (U3CU3Ec_tCB1647632D16886B8BF71E19138E47185539A09B * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, const RuntimeMethod* method)
{
	{
		// .OrderBy(x => x.name, new AlphanumComparator());
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___x0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
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
// System.Void QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFormattedCommandSuggestionsU3Ed__103__ctor_m5D1C1C4E9EBF592FB59C60208D22EC3C58769360 (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
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
// System.Void QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFormattedCommandSuggestionsU3Ed__103_System_IDisposable_Dispose_m0232C4BC86488E5328A88D1023CB1F4799490F9A (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetFormattedCommandSuggestionsU3Ed__103_MoveNext_m5944566B0D1F53296DE6F29607DDB03733980421 (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorExtensions_tD3154824681000B1AF8069386265CF78F5B524FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEE22C643473CDF7EC9FD8D800145ADD3DE84A40C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454756893BEDA0A23EAF360A00EACE4B2906D7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_00ac;
			}
			case 3:
			{
				goto IL_0102;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < displaySize; i++)
		__this->set_U3CiU3E5__2_6(0);
		goto IL_011b;
	}

IL_0039:
	{
		// if (_maxSuggestionDisplaySize > 0 && i >= _maxSuggestionDisplaySize)
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_3 = V_1;
		int32_t L_4 = L_3->get__maxSuggestionDisplaySize_27();
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_5 = __this->get_U3CiU3E5__2_6();
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_6 = V_1;
		int32_t L_7 = L_6->get__maxSuggestionDisplaySize_27();
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00b5;
		}
	}
	{
		// if (_theme && _selectedSuggestionCommandIndex >= _maxSuggestionDisplaySize)
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_8 = V_1;
		QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * L_9 = L_8->get__theme_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0098;
		}
	}
	{
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_11 = V_1;
		int32_t L_12 = L_11->get__selectedSuggestionCommandIndex_61();
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_13 = V_1;
		int32_t L_14 = L_13->get__maxSuggestionDisplaySize_27();
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0098;
		}
	}
	{
		// yield return remainingSuggestion.ColorText(_theme.SelectedSuggestionColor);
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_15 = V_1;
		QuantumTheme_t991FF2D50042612F84B60D1D02972C3700ACE24A * L_16 = L_15->get__theme_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17 = L_16->get_SelectedSuggestionColor_8();
		IL2CPP_RUNTIME_CLASS_INIT(ColorExtensions_tD3154824681000B1AF8069386265CF78F5B524FE_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = ColorExtensions_ColorText_mE419C93A9ACF0C101C8F9B828A08AD78F6DEF7A8(_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, L_17, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_0109;
	}

IL_0098:
	{
		// yield return remainingSuggestion;
		__this->set_U3CU3E2__current_1(_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ac:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_0109;
	}

IL_00b5:
	{
		// bool selected = i == _selectedSuggestionCommandIndex;
		int32_t L_19 = __this->get_U3CiU3E5__2_6();
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_20 = V_1;
		int32_t L_21 = L_20->get__selectedSuggestionCommandIndex_61();
		V_2 = (bool)((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		// string suggestion = FormatSuggestion(_suggestedCommands[i], selected);
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_22 = V_1;
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_23 = V_1;
		List_1_tBB5A894E8C3135AC267D94B3BCE94756E3617321 * L_24 = L_23->get__suggestedCommands_59();
		int32_t L_25 = __this->get_U3CiU3E5__2_6();
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_26;
		L_26 = List_1_get_Item_mEE22C643473CDF7EC9FD8D800145ADD3DE84A40C_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_mEE22C643473CDF7EC9FD8D800145ADD3DE84A40C_RuntimeMethod_var);
		bool L_27 = V_2;
		String_t* L_28;
		L_28 = QuantumConsole_FormatSuggestion_mDCAB972A14DE623D7761CDE228DF637054843C14(L_22, L_26, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		// yield return $"<link={i}>{suggestion}</link>";
		int32_t L_29 = __this->get_U3CiU3E5__2_6();
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32 = V_3;
		String_t* L_33;
		L_33 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7454756893BEDA0A23EAF360A00EACE4B2906D7A, L_31, L_32, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0102:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0109:
	{
		// for (int i = 0; i < displaySize; i++)
		int32_t L_34 = __this->get_U3CiU3E5__2_6();
		V_4 = L_34;
		int32_t L_35 = V_4;
		__this->set_U3CiU3E5__2_6(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
	}

IL_011b:
	{
		// for (int i = 0; i < displaySize; i++)
		int32_t L_36 = __this->get_U3CiU3E5__2_6();
		int32_t L_37 = __this->get_displaySize_4();
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0039;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.String QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m2A1D79A6D0044B1B2D87C6EEB5F7CBA2AE483238 (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_IEnumerator_Reset_m58758A0561E87F9FCFD1BA38175353E65A879AAA (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_IEnumerator_Reset_m58758A0561E87F9FCFD1BA38175353E65A879AAA_RuntimeMethod_var)));
	}
}
// System.Object QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_IEnumerator_get_Current_m4506B59404D571BCF52FDBCB1484C17CCF992756 (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m64D609581D77DC173B8658EEC33806F442A495CA (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * V_0 = NULL;
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
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * L_3 = (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 *)il2cpp_codegen_object_new(U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65_il2cpp_TypeInfo_var);
		U3CGetFormattedCommandSuggestionsU3Ed__103__ctor_m5D1C1C4E9EBF592FB59C60208D22EC3C58769360(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * L_4 = V_0;
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_5 = __this->get_U3CU3E4__this_3();
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * L_6 = V_0;
		int32_t L_7 = __this->get_U3CU3E3__displaySize_5();
		L_6->set_displaySize_4(L_7);
		U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator QFSW.QC.QuantumConsole/<GetFormattedCommandSuggestions>d__103::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_IEnumerable_GetEnumerator_m760DDE0BB5770A5ADC63B28998F8563623FE1EB7 (U3CGetFormattedCommandSuggestionsU3Ed__103_tE3ED5BD6350E2A42911BE5FDF414920E9D89BB65 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetFormattedCommandSuggestionsU3Ed__103_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m64D609581D77DC173B8658EEC33806F442A495CA(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeCommandsAsyncU3Ed__115_MoveNext_m6D51EE37C705F46707FF2B0B0DC144340A7CD59A (U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A_mE36A3DC8ED36314C0336D6DDF6B366487ECF6FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * V_1 = NULL;
	String_t* V_2 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_3 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0022;
			}
		}

IL_0011:
		{
			// foreach (string command in commands)
			RuntimeObject* L_3 = __this->get_commands_2();
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_4(L_4);
		}

IL_0022:
		{
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0079;
				}
			}

IL_0026:
			{
				goto IL_00a3;
			}

IL_0028:
			{
				// foreach (string command in commands)
				RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_4();
				String_t* L_7;
				L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// if (InvokeCommand(command) is Task ret)
				QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_8 = V_1;
				String_t* L_9 = V_2;
				RuntimeObject * L_10;
				L_10 = QuantumConsole_InvokeCommand_m987D98472EC4D75EE0766F136CD7D29A2F0921A6(L_8, L_9, /*hidden argument*/NULL);
				V_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_10, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11 = V_3;
				if (!L_11)
				{
					goto IL_00a3;
				}
			}

IL_0044:
			{
				// await ret;
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_12 = V_3;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13;
				L_13 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_12, /*hidden argument*/NULL);
				V_4 = L_13;
				bool L_14;
				L_14 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				if (L_14)
				{
					goto IL_0096;
				}
			}

IL_0055:
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->set_U3CU3E1__state_0(L_15);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = V_4;
				__this->set_U3CU3Eu__1_5(L_16);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A_mE36A3DC8ED36314C0336D6DDF6B366487ECF6FA2((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), (U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A_mE36A3DC8ED36314C0336D6DDF6B366487ECF6FA2_RuntimeMethod_var);
				IL2CPP_LEAVE(0x102, FINALLY_00b5);
			}

IL_0079:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_18 = __this->get_U3CU3Eu__1_5();
				V_4 = L_18;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_19 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->set_U3CU3E1__state_0(L_20);
			}

IL_0096:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
				// ProcessAsyncTasks();
				QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_21 = V_1;
				QuantumConsole_ProcessAsyncTasks_m2489300931F9208C8DCE88F68B0FE8C714B869CE(L_21, /*hidden argument*/NULL);
			}

IL_00a3:
			{
				// foreach (string command in commands)
				RuntimeObject* L_22 = __this->get_U3CU3E7__wrap1_4();
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0028;
				}
			}

IL_00b3:
			{
				IL2CPP_LEAVE(0xCD, FINALLY_00b5);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00b5;
		}

FINALLY_00b5:
		{ // begin finally (depth: 2)
			{
				int32_t L_24 = V_0;
				if ((((int32_t)L_24) >= ((int32_t)0)))
				{
					goto IL_00cc;
				}
			}

IL_00b9:
			{
				RuntimeObject* L_25 = __this->get_U3CU3E7__wrap1_4();
				if (!L_25)
				{
					goto IL_00cc;
				}
			}

IL_00c1:
			{
				RuntimeObject* L_26 = __this->get_U3CU3E7__wrap1_4();
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_26);
			}

IL_00cc:
			{
				IL2CPP_END_FINALLY(181)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(181)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x102, IL_0102)
			IL2CPP_JUMP_TBL(0xCD, IL_00cd)
		}

IL_00cd:
		{
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			goto IL_00ef;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d6;
		}
		throw e;
	}

CATCH_00d6:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_28 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_27, L_28, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0102;
	} // end catch (depth: 1)

IL_00ef:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_29, /*hidden argument*/NULL);
	}

IL_0102:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInvokeCommandsAsyncU3Ed__115_MoveNext_m6D51EE37C705F46707FF2B0B0DC144340A7CD59A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A * _thisAdjusted = reinterpret_cast<U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A *>(__this + _offset);
	U3CInvokeCommandsAsyncU3Ed__115_MoveNext_m6D51EE37C705F46707FF2B0B0DC144340A7CD59A(_thisAdjusted, method);
}
// System.Void QFSW.QC.QuantumConsole/<InvokeCommandsAsync>d__115::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeCommandsAsyncU3Ed__115_SetStateMachine_m868F60CBDA66405E3DBAB2DB20E40CD09545CCB4 (U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInvokeCommandsAsyncU3Ed__115_SetStateMachine_m868F60CBDA66405E3DBAB2DB20E40CD09545CCB4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A * _thisAdjusted = reinterpret_cast<U3CInvokeCommandsAsyncU3Ed__115_t187FD669F28F7A5ED70827309002D4A03A8C287A *>(__this + _offset);
	U3CInvokeCommandsAsyncU3Ed__115_SetStateMachine_m868F60CBDA66405E3DBAB2DB20E40CD09545CCB4(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeExternalCommandsAsyncU3Ed__114_MoveNext_mCC67EFA474212D797FDEDF3EAC72B79181C6C20C (U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m3AE07161FA6AFF5CB71D58DE260289DCEF0D2E4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m7CDE0512D8F88B207A7B16B6DDF52E02DE3E1BB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * V_1 = NULL;
	String_t* V_2 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_3 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0023;
			}
		}

IL_0012:
		{
			// using (StreamReader reader = new StreamReader(filePath))
			String_t* L_3 = __this->get_filePath_2();
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_4 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
			StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B(L_4, L_3, /*hidden argument*/NULL);
			__this->set_U3CreaderU3E5__2_4(L_4);
		}

IL_0023:
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0072;
				}
			}

IL_0027:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_00dc;
				}
			}

IL_002e:
			{
				goto IL_0106;
			}

IL_0033:
			{
				// string command = await reader.ReadLineAsync();
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_7 = __this->get_U3CreaderU3E5__2_4();
				Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_8;
				L_8 = VirtFuncInvoker0< Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * >::Invoke(14 /* System.Threading.Tasks.Task`1<System.String> System.IO.TextReader::ReadLineAsync() */, L_7);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_9;
				L_9 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_8, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
				V_4 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_008f;
				}
			}

IL_004e:
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_12 = V_4;
				__this->set_U3CU3Eu__1_5(L_12);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_13 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m3AE07161FA6AFF5CB71D58DE260289DCEF0D2E4A((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_13, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), (U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m3AE07161FA6AFF5CB71D58DE260289DCEF0D2E4A_RuntimeMethod_var);
				IL2CPP_LEAVE(0x165, FINALLY_0118);
			}

IL_0072:
			{
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_14 = __this->get_U3CU3Eu__1_5();
				V_4 = L_14;
				TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_15 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
			}

IL_008f:
			{
				String_t* L_17;
				L_17 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
				V_2 = L_17;
				// if (InvokeCommand(command) is Task ret)
				QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_18 = V_1;
				String_t* L_19 = V_2;
				RuntimeObject * L_20;
				L_20 = QuantumConsole_InvokeCommand_m987D98472EC4D75EE0766F136CD7D29A2F0921A6(L_18, L_19, /*hidden argument*/NULL);
				V_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_20, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var));
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_21 = V_3;
				if (!L_21)
				{
					goto IL_0106;
				}
			}

IL_00a7:
			{
				// await ret;
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_22 = V_3;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_23;
				L_23 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_22, /*hidden argument*/NULL);
				V_5 = L_23;
				bool L_24;
				L_24 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
				if (L_24)
				{
					goto IL_00f9;
				}
			}

IL_00b8:
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->set_U3CU3E1__state_0(L_25);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_26 = V_5;
				__this->set_U3CU3Eu__2_6(L_26);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_27 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m7CDE0512D8F88B207A7B16B6DDF52E02DE3E1BB4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_27, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807_m7CDE0512D8F88B207A7B16B6DDF52E02DE3E1BB4_RuntimeMethod_var);
				IL2CPP_LEAVE(0x165, FINALLY_0118);
			}

IL_00dc:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_28 = __this->get_U3CU3Eu__2_6();
				V_5 = L_28;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_29 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
			}

IL_00f9:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
				// ProcessAsyncTasks();
				QuantumConsole_tA6D7C8AED9FBB6A9C62782624490BDE19E8B6ACE * L_31 = V_1;
				QuantumConsole_ProcessAsyncTasks_m2489300931F9208C8DCE88F68B0FE8C714B869CE(L_31, /*hidden argument*/NULL);
			}

IL_0106:
			{
				// while (!reader.EndOfStream)
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_32 = __this->get_U3CreaderU3E5__2_4();
				bool L_33;
				L_33 = StreamReader_get_EndOfStream_m577D5B15A1100691A7AC9B4F6D6D0574EBADC5BA(L_32, /*hidden argument*/NULL);
				if (!L_33)
				{
					goto IL_0033;
				}
			}

IL_0116:
			{
				// }
				IL2CPP_LEAVE(0x130, FINALLY_0118);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0118;
		}

FINALLY_0118:
		{ // begin finally (depth: 2)
			{
				int32_t L_34 = V_0;
				if ((((int32_t)L_34) >= ((int32_t)0)))
				{
					goto IL_012f;
				}
			}

IL_011c:
			{
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_35 = __this->get_U3CreaderU3E5__2_4();
				if (!L_35)
				{
					goto IL_012f;
				}
			}

IL_0124:
			{
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_36 = __this->get_U3CreaderU3E5__2_4();
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
			}

IL_012f:
			{
				IL2CPP_END_FINALLY(280)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(280)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x165, IL_0165)
			IL2CPP_JUMP_TBL(0x130, IL_0130)
		}

IL_0130:
		{
			__this->set_U3CreaderU3E5__2_4((StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)NULL);
			goto IL_0152;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0139;
		}
		throw e;
	}

CATCH_0139:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_37 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_38 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_37, L_38, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0165;
	} // end catch (depth: 1)

IL_0152:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_39 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_39, /*hidden argument*/NULL);
	}

IL_0165:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInvokeExternalCommandsAsyncU3Ed__114_MoveNext_mCC67EFA474212D797FDEDF3EAC72B79181C6C20C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * _thisAdjusted = reinterpret_cast<U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 *>(__this + _offset);
	U3CInvokeExternalCommandsAsyncU3Ed__114_MoveNext_mCC67EFA474212D797FDEDF3EAC72B79181C6C20C(_thisAdjusted, method);
}
// System.Void QFSW.QC.QuantumConsole/<InvokeExternalCommandsAsync>d__114::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeExternalCommandsAsyncU3Ed__114_SetStateMachine_m55AFA30EAC82016F4432F3F0427C97B98FB6135D (U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInvokeExternalCommandsAsyncU3Ed__114_SetStateMachine_m55AFA30EAC82016F4432F3F0427C97B98FB6135D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 * _thisAdjusted = reinterpret_cast<U3CInvokeExternalCommandsAsyncU3Ed__114_t084F19FAA0A59F7183B6493863D1432803816807 *>(__this + _offset);
	U3CInvokeExternalCommandsAsyncU3Ed__114_SetStateMachine_m55AFA30EAC82016F4432F3F0427C97B98FB6135D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFSW.QC.QuantumConsoleProcessor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCCBE47F23F53A56622BD4083367884B148F8E9BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * L_0 = (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 *)il2cpp_codegen_object_new(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9B57FE0156FBE54C66094252C5C64D18A5F4DA83(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.QuantumConsoleProcessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9B57FE0156FBE54C66094252C5C64D18A5F4DA83 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String QFSW.QC.QuantumConsoleProcessor/<>c::<GenerateCommandManual>b__3_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGenerateCommandManualU3Eb__3_1_mA2F11504E1F2435DAED8A662A7CF89C92B52BA92 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// string[] matchingCommands = _commandTable.Keys.Where((string key) => key.Split('(')[0] == commandName).OrderBy((string key) => key).ToArray();
		String_t* L_0 = ___key0;
		return L_0;
	}
}
// System.String QFSW.QC.QuantumConsoleProcessor/<>c::<GetUniqueCommands>b__4_0(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetUniqueCommandsU3Eb__4_0_m5CEF8433B108A18D8ED2214E2345130226034C0D (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// .DistinctBy(x => x.CommandName)
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		return L_1;
	}
}
// System.String QFSW.QC.QuantumConsoleProcessor/<>c::<GetUniqueCommands>b__4_1(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetUniqueCommandsU3Eb__4_1_m26787C8CA3E51969079FF5DAFE74644EC703B440 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// .OrderBy(x => x.CommandName);
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		return L_1;
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c::<GenerateUserCommandList>b__6_0(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGenerateUserCommandListU3Eb__6_0_m9203FC74A86250D4A7C4800E56ECD6FA4977A195 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F7884CF8E0F9D08916DA9F7A140F4B71E1EC1F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => !x.MethodData.DeclaringType.Assembly.FullName.StartsWith("QFSW.QC"))
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		MethodInfo_t * L_1 = L_0->get_MethodData_8();
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		Assembly_t * L_3;
		L_3 = VirtFuncInvoker0< Assembly_t * >::Invoke(23 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_2);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_3);
		bool L_5;
		L_5 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_4, _stringLiteral2F7884CF8E0F9D08916DA9F7A140F4B71E1EC1F4, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}
}
// System.String QFSW.QC.QuantumConsoleProcessor/<>c::<GenerateUserCommandList>b__6_1(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGenerateUserCommandListU3Eb__6_1_m7EEAC7715C815F6F30DDC333784D4CCA9E830C50 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral040C4A69C69CDD982826E7D708B5E3CF5BC0D10C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(x => $"   - {x.CommandName}");
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral040C4A69C69CDD982826E7D708B5E3CF5BC0D10C, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c::<CreateCommandOverloads>b__31_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCreateCommandOverloadsU3Eb__31_0_m4FB3C5EA8DC57FDC34883AF559ECAFEFDB4D0541 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___x0, const RuntimeMethod* method)
{
	{
		// int defaultParameters = method.GetParameters().Count(x => x.HasDefaultValue);
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___x0;
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Reflection.ParameterInfo::get_HasDefaultValue() */, L_0);
		return L_1;
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c::<InvokeCommand>b__35_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInvokeCommandU3Eb__35_0_mC1B891284DC9F2237A9EF464E8E69CCE16972A52 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// commandParts = commandParts.Where(x => !string.IsNullOrWhiteSpace(x)).ToArray();
		String_t* L_0 = ___x0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c::<InvokeCommand>b__35_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInvokeCommandU3Eb__35_1_m81AB5126FE4809BF6DE8BC06E6D02A407C9E814B (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, Type_t * ___x0, const RuntimeMethod* method)
{
	{
		// if (genericTypes.Any((Type x) => x.IsValueType))
		Type_t * L_0 = ___x0;
		bool L_1;
		L_1 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 QFSW.QC.QuantumConsoleProcessor/<>c::<GetCommandSuggestions>b__37_1(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetCommandSuggestionsU3Eb__37_1_m76C035F5B776FA43CAA30C90BA1FFAB9D1F79FDC (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// sortedSuggestions = foundCommands.OrderBy(x => x.ParamCount)
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		int32_t L_1;
		L_1 = CommandData_get_ParamCount_mB7D6D73E9F848A2673F622580E9A8DC09DF7F094(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String QFSW.QC.QuantumConsoleProcessor/<>c::<GetCommandSuggestions>b__37_2(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetCommandSuggestionsU3Eb__37_2_mEAAF64E24D1DA0A1ABA4D69004D210130B6EEFF3 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// .OrderBy(x => x.CommandName)
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		return L_1;
	}
}
// System.Int32 QFSW.QC.QuantumConsoleProcessor/<>c::<GetCommandSuggestions>b__37_3(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetCommandSuggestionsU3Eb__37_3_mCEFC1291251D0842D08DA41D91910F0C6946625D (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// .OrderBy(x => x.CommandName.Length);
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String QFSW.QC.QuantumConsoleProcessor/<>c::<GetCommandSuggestions>b__37_4(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetCommandSuggestionsU3Eb__37_4_m856CEBFB837E746B9157C34E1EE6745E93BA18A1 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// sortedSuggestions = foundCommands.OrderBy(x => x.CommandName)
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		return L_1;
	}
}
// System.Int32 QFSW.QC.QuantumConsoleProcessor/<>c::<GetCommandSuggestions>b__37_5(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetCommandSuggestionsU3Eb__37_5_m72224EB5EDAD57A55BE1C92811971E76DF288224 (U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// .OrderBy(x => x.CommandName.Length);
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_mBE99CED8D743F7C76C30DAA932BEA7E0ADFA037B (U3CU3Ec__DisplayClass35_0_t0F8E223542E814B0B04FBAF6C87E4186BE2F997F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass35_0::<InvokeCommand>b__2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass35_0_U3CInvokeCommandU3Eb__2_m43EB5F755079789A3E179F3B26F16D4CD740A7F8 (U3CU3Ec__DisplayClass35_0_t0F8E223542E814B0B04FBAF6C87E4186BE2F997F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Item_mD54906C3F76B3E01DE8A2BE93F1E791B12586DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool overloadExists = _commandTable.Keys.Any(key => key.Contains($"{commandName}(") && _commandTable[key].CommandName == commandName);
		String_t* L_0 = ___key0;
		String_t* L_1 = __this->get_commandName_0();
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tA44EB13498A80A550EF8BF94254A0D51D24E9496 * L_4 = ((QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields*)il2cpp_codegen_static_fields_for(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var))->get__commandTable_4();
		String_t* L_5 = ___key0;
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_6;
		L_6 = ConcurrentDictionary_2_get_Item_mD54906C3F76B3E01DE8A2BE93F1E791B12586DD4(L_4, L_5, /*hidden argument*/ConcurrentDictionary_2_get_Item_mD54906C3F76B3E01DE8A2BE93F1E791B12586DD4_RuntimeMethod_var);
		String_t* L_7 = L_6->get_CommandName_0();
		String_t* L_8 = __this->get_commandName_0();
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0034:
	{
		return (bool)0;
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
// System.Void QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m627BC2926657D7B4F3C5F90BA30BF8F839BAAF86 (U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0::<GetCommandSuggestions>g__MatchFound|0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass37_0_U3CGetCommandSuggestionsU3Eg__MatchFoundU7C0_mD2D647356AA413D7C8EDA29511AE45FC99D57030 (U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF * __this, String_t* ___incompleteCommand0, String_t* ___commandSuggestion1, const RuntimeMethod* method)
{
	{
		// if (commandSuggestion.Length < incompleteCommand.Length) { return false; }
		String_t* L_0 = ___commandSuggestion1;
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___incompleteCommand0;
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0010;
		}
	}
	{
		// if (commandSuggestion.Length < incompleteCommand.Length) { return false; }
		return (bool)0;
	}

IL_0010:
	{
		// if (fuzzy)
		bool L_4 = __this->get_fuzzy_0();
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// if (caseSensitive) { return commandSuggestion.Contains(incompleteCommand); }
		bool L_5 = __this->get_caseSensitive_1();
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// if (caseSensitive) { return commandSuggestion.Contains(incompleteCommand); }
		String_t* L_6 = ___commandSuggestion1;
		String_t* L_7 = ___incompleteCommand0;
		bool L_8;
		L_8 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0028:
	{
		// else { return commandSuggestion.ContainsCaseInsensitive(incompleteCommand); }
		String_t* L_9 = ___commandSuggestion1;
		String_t* L_10 = ___incompleteCommand0;
		bool L_11;
		L_11 = StringExtensions_ContainsCaseInsensitive_mAED4591F11735118CDEC41EE3AB4E182475239EF(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0030:
	{
		// return commandSuggestion.StartsWith(incompleteCommand, !caseSensitive, null);
		String_t* L_12 = ___commandSuggestion1;
		String_t* L_13 = ___incompleteCommand0;
		bool L_14 = __this->get_caseSensitive_1();
		bool L_15;
		L_15 = String_StartsWith_m03526E87F83EA0CE5C37B6F5FF0B980FFE2B4363(L_12, L_13, (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0), (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 *)NULL, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Int32 QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0::<GetCommandSuggestions>b__6(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass37_0_U3CGetCommandSuggestionsU3Eb__6_m5B5BB22BC8E88C48F327292BBF2DD80469A7D706 (U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// sortedSuggestions = sortedSuggestions.OrderBy(x => x.CommandName.IndexOf(incompleteCommandName, StringComparison.CurrentCulture));
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		String_t* L_2 = __this->get_incompleteCommandName_2();
		int32_t L_3;
		L_3 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_1, L_2, 0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass37_0::<GetCommandSuggestions>b__7(QFSW.QC.CommandData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass37_0_U3CGetCommandSuggestionsU3Eb__7_mA13F24766D64DA90A5A683E1F3BCF06DE80D375E (U3CU3Ec__DisplayClass37_0_t4A4FDC61B0D4ADDB28931A98819D20E41F616EBF * __this, CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * ___x0, const RuntimeMethod* method)
{
	{
		// sortedSuggestions = sortedSuggestions.OrderBy(x => x.CommandName.IndexOf(incompleteCommandName, StringComparison.CurrentCultureIgnoreCase));
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = ___x0;
		String_t* L_1 = L_0->get_CommandName_0();
		String_t* L_2 = __this->get_incompleteCommandName_2();
		int32_t L_3;
		L_3 = String_IndexOf_mD99F5378A4220A0DA0D5097007417E777722ABDA(L_1, L_2, 1, /*hidden argument*/NULL);
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
// System.Void QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m01E2C86B6838DDDE8A5BDD175F3D1F1715E07501 (U3CU3Ec__DisplayClass3_0_tE24452145EC086D0B32FD1228AC9F8408E5D9369 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<>c__DisplayClass3_0::<GenerateCommandManual>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CGenerateCommandManualU3Eb__0_m6073570387FEEC4B230D597120F69B7336FE1C63 (U3CU3Ec__DisplayClass3_0_tE24452145EC086D0B32FD1228AC9F8408E5D9369 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] matchingCommands = _commandTable.Keys.Where((string key) => key.Split('(')[0] == commandName).OrderBy((string key) => key).ToArray();
		String_t* L_0 = ___key0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)40));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		String_t* L_6 = __this->get_commandName_0();
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
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
// System.Void QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateCommandOverloadsU3Ed__31__ctor_m06D44DADE63CC8BA69C54709C037A855C94CB1FC (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
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
// System.Void QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateCommandOverloadsU3Ed__31_System_IDisposable_Dispose_mAFA0777B1B28E9EBD1D81BAE46AA2C4888D03318 (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCreateCommandOverloadsU3Ed__31_MoveNext_mD1D517DB0605EBCFDC161CA9771104A7927EC456 (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m54EBD6BB6243BC3296666DC1468DA63B3E454277_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateCommandOverloadsU3Eb__31_0_m4FB3C5EA8DC57FDC34883AF559ECAFEFDB4D0541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * V_1 = NULL;
	int32_t V_2 = 0;
	Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * G_B5_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B5_1 = NULL;
	U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * G_B5_2 = NULL;
	Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * G_B4_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B4_1 = NULL;
	U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * G_B4_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0083;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int defaultParameters = method.GetParameters().Count(x => x.HasDefaultValue);
		MethodInfo_t * L_3 = __this->get_method_3();
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4;
		L_4 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var);
		Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * L_5 = ((U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var))->get_U3CU3E9__31_0_6();
		Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * L_6 = L_5;
		G_B4_0 = L_6;
		G_B4_1 = L_4;
		G_B4_2 = __this;
		if (L_6)
		{
			G_B5_0 = L_6;
			G_B5_1 = L_4;
			G_B5_2 = __this;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var);
		U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51 * L_7 = ((U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * L_8 = (Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F *)il2cpp_codegen_object_new(Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F_il2cpp_TypeInfo_var);
		Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateCommandOverloadsU3Eb__31_0_m4FB3C5EA8DC57FDC34883AF559ECAFEFDB4D0541_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6C72DF6B683CC9C228806D1BE22D6B84608F8E97_RuntimeMethod_var);
		Func_2_t3B7D4CDC5BE60E4AE791826009DB3965E5A40C4F * L_9 = L_8;
		((U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD655822AB5EEDB3D65CD15E51521D49F245E8B51_il2cpp_TypeInfo_var))->set_U3CU3E9__31_0_6(L_9);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_0042:
	{
		int32_t L_10;
		L_10 = Enumerable_Count_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m54EBD6BB6243BC3296666DC1468DA63B3E454277((RuntimeObject*)(RuntimeObject*)G_B5_1, G_B5_0, /*hidden argument*/Enumerable_Count_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m54EBD6BB6243BC3296666DC1468DA63B3E454277_RuntimeMethod_var);
		G_B5_2->set_U3CdefaultParametersU3E5__2_9(L_10);
		// for (int i = 0; i < defaultParameters + 1; i++)
		__this->set_U3CiU3E5__3_10(0);
		goto IL_009a;
	}

IL_0055:
	{
		// CommandData command = new CommandData(method, commandAttribute, descriptionAttribute, i);
		MethodInfo_t * L_11 = __this->get_method_3();
		CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * L_12 = __this->get_commandAttribute_5();
		CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * L_13 = __this->get_descriptionAttribute_7();
		int32_t L_14 = __this->get_U3CiU3E5__3_10();
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_15 = (CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA *)il2cpp_codegen_object_new(CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA_il2cpp_TypeInfo_var);
		CommandData__ctor_mE90A8BAE2279E258A7DFB75108671EB214201A51(L_15, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// yield return command;
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_16 = V_1;
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0083:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < defaultParameters + 1; i++)
		int32_t L_17 = __this->get_U3CiU3E5__3_10();
		V_2 = L_17;
		int32_t L_18 = V_2;
		__this->set_U3CiU3E5__3_10(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
	}

IL_009a:
	{
		// for (int i = 0; i < defaultParameters + 1; i++)
		int32_t L_19 = __this->get_U3CiU3E5__3_10();
		int32_t L_20 = __this->get_U3CdefaultParametersU3E5__2_9();
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)))))
		{
			goto IL_0055;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// QFSW.QC.CommandData QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::System.Collections.Generic.IEnumerator<QFSW.QC.CommandData>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * U3CCreateCommandOverloadsU3Ed__31_System_Collections_Generic_IEnumeratorU3CQFSW_QC_CommandDataU3E_get_Current_m5224ADF05CDA0B4FAC530F7DE416550FFE93F8A4 (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, const RuntimeMethod* method)
{
	{
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateCommandOverloadsU3Ed__31_System_Collections_IEnumerator_Reset_m381F9B04C4BE945380A4EFD3B8F0F857006F09D4 (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateCommandOverloadsU3Ed__31_System_Collections_IEnumerator_Reset_m381F9B04C4BE945380A4EFD3B8F0F857006F09D4_RuntimeMethod_var)));
	}
}
// System.Object QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCreateCommandOverloadsU3Ed__31_System_Collections_IEnumerator_get_Current_m98622F4AFF7BD902D3716B64792B2A7D51E6270B (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, const RuntimeMethod* method)
{
	{
		CommandData_tC6AFD60D7A1649EA2FAA200CBDFE1AFBAD4C34EA * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<QFSW.QC.CommandData> QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::System.Collections.Generic.IEnumerable<QFSW.QC.CommandData>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateCommandOverloadsU3Ed__31_System_Collections_Generic_IEnumerableU3CQFSW_QC_CommandDataU3E_GetEnumerator_m2A7F95564DE5C3F4E9FFF9625E8679CE58989D50 (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * V_0 = NULL;
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
		U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * L_3 = (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 *)il2cpp_codegen_object_new(U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5_il2cpp_TypeInfo_var);
		U3CCreateCommandOverloadsU3Ed__31__ctor_m06D44DADE63CC8BA69C54709C037A855C94CB1FC(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * L_4 = V_0;
		MethodInfo_t * L_5 = __this->get_U3CU3E3__method_4();
		L_4->set_method_3(L_5);
		U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * L_6 = V_0;
		CommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD * L_7 = __this->get_U3CU3E3__commandAttribute_6();
		L_6->set_commandAttribute_5(L_7);
		U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * L_8 = V_0;
		CommandDescriptionAttribute_t7D97CD44C8448A0C8D4ABA187D92445560EDEC70 * L_9 = __this->get_U3CU3E3__descriptionAttribute_8();
		L_8->set_descriptionAttribute_7(L_9);
		U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator QFSW.QC.QuantumConsoleProcessor/<CreateCommandOverloads>d__31::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCreateCommandOverloadsU3Ed__31_System_Collections_IEnumerable_GetEnumerator_mBC9724DE82B2704A14519F2F55980899A03BBF09 (U3CCreateCommandOverloadsU3Ed__31_tDE05992CEE7842B979DEC0DB176DD17138AA39A5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CCreateCommandOverloadsU3Ed__31_System_Collections_Generic_IEnumerableU3CQFSW_QC_CommandDataU3E_GetEnumerator_m2A7F95564DE5C3F4E9FFF9625E8679CE58989D50(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtractCommandMethodsU3Ed__25__ctor_m93485C29E22BF9A8C267F30CA44A85DAA86DAD34 (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
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
// System.Void QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtractCommandMethodsU3Ed__25_System_IDisposable_Dispose_mBE26459804F39ED6CF72E726322B678C268A42A6 (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExtractCommandMethodsU3Ed__25_MoveNext_m5D2DAEBB2DA3BEBE72F222CE51F1DD2AFDE7A9A6 (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_HasAttribute_TisCommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD_mA0BC1A08C75ACD9E1C317711699E78848F976D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1CF762408303A9665AAAB8A1B776190FA10075);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_1 = NULL;
	MethodInfo_t * V_2 = NULL;
	FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65 * V_3 = NULL;
	FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 * V_4 = NULL;
	FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 * V_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_0123;
			}
			case 3:
			{
				goto IL_015c;
			}
			case 4:
			{
				goto IL_020f;
			}
			case 5:
			{
				goto IL_0277;
			}
			case 6:
			{
				goto IL_02c2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// MethodInfo[] methods = type.GetMethods(flags);
		Type_t * L_2 = __this->get_type_3();
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_3;
		L_3 = VirtFuncInvoker1< MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E*, int32_t >::Invoke(41 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_2, ((int32_t)62));
		V_1 = L_3;
		// PropertyInfo[] properties = type.GetProperties(flags);
		Type_t * L_4 = __this->get_type_3();
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_5;
		L_5 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(51 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_4, ((int32_t)62));
		__this->set_U3CpropertiesU3E5__2_5(L_5);
		// FieldInfo[] fields = type.GetFields(flags);
		Type_t * L_6 = __this->get_type_3();
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_7;
		L_7 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_6, ((int32_t)62));
		__this->set_U3CfieldsU3E5__3_6(L_7);
		// foreach (MethodInfo method in methods)
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_8 = V_1;
		__this->set_U3CU3E7__wrap3_7(L_8);
		__this->set_U3CU3E7__wrap4_8(0);
		goto IL_00af;
	}

IL_0076:
	{
		// foreach (MethodInfo method in methods)
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_9 = __this->get_U3CU3E7__wrap3_7();
		int32_t L_10 = __this->get_U3CU3E7__wrap4_8();
		int32_t L_11 = L_10;
		MethodInfo_t * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// yield return (method, method);
		MethodInfo_t * L_13 = V_2;
		MethodInfo_t * L_14 = V_2;
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_15;
		memset((&L_15), 0, sizeof(L_15));
		ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA((&L_15), L_13, L_14, /*hidden argument*/ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009a:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_16 = __this->get_U3CU3E7__wrap4_8();
		__this->set_U3CU3E7__wrap4_8(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
	}

IL_00af:
	{
		// foreach (MethodInfo method in methods)
		int32_t L_17 = __this->get_U3CU3E7__wrap4_8();
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_18 = __this->get_U3CU3E7__wrap3_7();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0076;
		}
	}
	{
		__this->set_U3CU3E7__wrap3_7((MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E*)NULL);
		// foreach (PropertyInfo property in properties)
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_19 = __this->get_U3CpropertiesU3E5__2_5();
		__this->set_U3CU3E7__wrap5_9(L_19);
		__this->set_U3CU3E7__wrap4_8(0);
		goto IL_0178;
	}

IL_00de:
	{
		// foreach (PropertyInfo property in properties)
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_20 = __this->get_U3CU3E7__wrap5_9();
		int32_t L_21 = __this->get_U3CU3E7__wrap4_8();
		int32_t L_22 = L_21;
		PropertyInfo_t * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		__this->set_U3CpropertyU3E5__7_10(L_23);
		// if (property.CanWrite)
		PropertyInfo_t * L_24 = __this->get_U3CpropertyU3E5__7_10();
		bool L_25;
		L_25 = VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_24);
		if (!L_25)
		{
			goto IL_012a;
		}
	}
	{
		// yield return (property.SetMethod, property);
		PropertyInfo_t * L_26 = __this->get_U3CpropertyU3E5__7_10();
		MethodInfo_t * L_27;
		L_27 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_26);
		PropertyInfo_t * L_28 = __this->get_U3CpropertyU3E5__7_10();
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_29;
		memset((&L_29), 0, sizeof(L_29));
		ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA((&L_29), L_27, L_28, /*hidden argument*/ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_29);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0123:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_012a:
	{
		// if (property.CanRead)
		PropertyInfo_t * L_30 = __this->get_U3CpropertyU3E5__7_10();
		bool L_31;
		L_31 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_30);
		if (!L_31)
		{
			goto IL_0163;
		}
	}
	{
		// yield return (property.GetMethod, property);
		PropertyInfo_t * L_32 = __this->get_U3CpropertyU3E5__7_10();
		MethodInfo_t * L_33;
		L_33 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_32);
		PropertyInfo_t * L_34 = __this->get_U3CpropertyU3E5__7_10();
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_35;
		memset((&L_35), 0, sizeof(L_35));
		ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA((&L_35), L_33, L_34, /*hidden argument*/ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_35);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_015c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0163:
	{
		// }
		__this->set_U3CpropertyU3E5__7_10((PropertyInfo_t *)NULL);
		int32_t L_36 = __this->get_U3CU3E7__wrap4_8();
		__this->set_U3CU3E7__wrap4_8(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
	}

IL_0178:
	{
		// foreach (PropertyInfo property in properties)
		int32_t L_37 = __this->get_U3CU3E7__wrap4_8();
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_38 = __this->get_U3CU3E7__wrap5_9();
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_00de;
		}
	}
	{
		__this->set_U3CU3E7__wrap5_9((PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*)NULL);
		// foreach (FieldInfo field in fields)
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_39 = __this->get_U3CfieldsU3E5__3_6();
		__this->set_U3CU3E7__wrap7_11(L_39);
		__this->set_U3CU3E7__wrap4_8(0);
		goto IL_02de;
	}

IL_01aa:
	{
		// foreach (FieldInfo field in fields)
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_40 = __this->get_U3CU3E7__wrap7_11();
		int32_t L_41 = __this->get_U3CU3E7__wrap4_8();
		int32_t L_42 = L_41;
		FieldInfo_t * L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		__this->set_U3CfieldU3E5__9_12(L_43);
		// if (field.HasAttribute<CommandAttribute>())
		FieldInfo_t * L_44 = __this->get_U3CfieldU3E5__9_12();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = ReflectionExtensions_HasAttribute_TisCommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD_mA0BC1A08C75ACD9E1C317711699E78848F976D42(L_44, (bool)1, /*hidden argument*/ReflectionExtensions_HasAttribute_TisCommandAttribute_t0153F84CA77631AD777E1737C29B0FF549A433DD_mA0BC1A08C75ACD9E1C317711699E78848F976D42_RuntimeMethod_var);
		if (!L_45)
		{
			goto IL_02c9;
		}
	}
	{
		// if (field.IsDelegate())
		FieldInfo_t * L_46 = __this->get_U3CfieldU3E5__9_12();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = ReflectionExtensions_IsDelegate_m31FE8EA9004CDB56FD2A8966B2D2F08420023CCD(L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_024d;
		}
	}
	{
		// if (field.IsStrongDelegate())
		FieldInfo_t * L_48 = __this->get_U3CfieldU3E5__9_12();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = ReflectionExtensions_IsStrongDelegate_mBDA0E9E4E66E07A73E0FA5173362C5D4C51A130B(L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_021b;
		}
	}
	{
		// FieldDelegateMethod executer = new FieldDelegateMethod(field);
		FieldInfo_t * L_50 = __this->get_U3CfieldU3E5__9_12();
		FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65 * L_51 = (FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65 *)il2cpp_codegen_object_new(FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65_il2cpp_TypeInfo_var);
		FieldDelegateMethod__ctor_m70962B9BD0F04980FE1FD72F5AF070BA234ADF59(L_51, L_50, /*hidden argument*/NULL);
		V_3 = L_51;
		// yield return (executer, field);
		FieldDelegateMethod_t10E9FF395B69957422A2EC307E382E17B62BED65 * L_52 = V_3;
		FieldInfo_t * L_53 = __this->get_U3CfieldU3E5__9_12();
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_54;
		memset((&L_54), 0, sizeof(L_54));
		ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA((&L_54), L_52, L_53, /*hidden argument*/ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_54);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_020f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_02c9;
	}

IL_021b:
	{
		// else if (loggingLevel >= LoggingLevel.Warnings)
		IL2CPP_RUNTIME_CLASS_INIT(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var);
		int32_t L_55 = ((QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_StaticFields*)il2cpp_codegen_static_fields_for(QuantumConsoleProcessor_tC16D47AF4B36412199A182F93AF53472790C42D2_il2cpp_TypeInfo_var))->get_loggingLevel_1();
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_02c9;
		}
	}
	{
		// Debug.LogWarning($"Quantum Processor Warning: Could not add '{field.Name}' from {field.DeclaringType} to the table as it is an invalid delegate type.");
		FieldInfo_t * L_56 = __this->get_U3CfieldU3E5__9_12();
		String_t* L_57;
		L_57 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_56);
		FieldInfo_t * L_58 = __this->get_U3CfieldU3E5__9_12();
		Type_t * L_59;
		L_59 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_58);
		String_t* L_60;
		L_60 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral2A1CF762408303A9665AAAB8A1B776190FA10075, L_57, L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_60, /*hidden argument*/NULL);
		// }
		goto IL_02c9;
	}

IL_024d:
	{
		// FieldAutoMethod reader = new FieldAutoMethod(field, FieldAutoMethod.AccessType.Read);
		FieldInfo_t * L_61 = __this->get_U3CfieldU3E5__9_12();
		FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 * L_62 = (FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 *)il2cpp_codegen_object_new(FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5_il2cpp_TypeInfo_var);
		FieldAutoMethod__ctor_m8F7A6A86BB332B0DC8F0567DF4C10173B388D413(L_62, L_61, 0, /*hidden argument*/NULL);
		V_4 = L_62;
		// yield return (reader, field);
		FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 * L_63 = V_4;
		FieldInfo_t * L_64 = __this->get_U3CfieldU3E5__9_12();
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_65;
		memset((&L_65), 0, sizeof(L_65));
		ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA((&L_65), L_63, L_64, /*hidden argument*/ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_65);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_0277:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!(field.IsLiteral || field.IsInitOnly))
		FieldInfo_t * L_66 = __this->get_U3CfieldU3E5__9_12();
		bool L_67;
		L_67 = FieldInfo_get_IsLiteral_mF2657F6BAB384894EB2C861D51093179E3EE77D9(L_66, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_02c9;
		}
	}
	{
		FieldInfo_t * L_68 = __this->get_U3CfieldU3E5__9_12();
		bool L_69;
		L_69 = FieldInfo_get_IsInitOnly_mA279E731A1097E83BACAF9F53612CFA9428E806B(L_68, /*hidden argument*/NULL);
		if (L_69)
		{
			goto IL_02c9;
		}
	}
	{
		// FieldAutoMethod writer = new FieldAutoMethod(field, FieldAutoMethod.AccessType.Write);
		FieldInfo_t * L_70 = __this->get_U3CfieldU3E5__9_12();
		FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 * L_71 = (FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 *)il2cpp_codegen_object_new(FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5_il2cpp_TypeInfo_var);
		FieldAutoMethod__ctor_m8F7A6A86BB332B0DC8F0567DF4C10173B388D413(L_71, L_70, 1, /*hidden argument*/NULL);
		V_5 = L_71;
		// yield return (writer, field);
		FieldAutoMethod_t7130207A0B26F382652E4D739C077C6F7A96D0B5 * L_72 = V_5;
		FieldInfo_t * L_73 = __this->get_U3CfieldU3E5__9_12();
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_74;
		memset((&L_74), 0, sizeof(L_74));
		ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA((&L_74), L_72, L_73, /*hidden argument*/ValueTuple_2__ctor_mF939AC0C7A658162512C81F039893A2A0DAFF5EA_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_74);
		__this->set_U3CU3E1__state_0(6);
		return (bool)1;
	}

IL_02c2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_02c9:
	{
		// }
		__this->set_U3CfieldU3E5__9_12((FieldInfo_t *)NULL);
		int32_t L_75 = __this->get_U3CU3E7__wrap4_8();
		__this->set_U3CU3E7__wrap4_8(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1)));
	}

IL_02de:
	{
		// foreach (FieldInfo field in fields)
		int32_t L_76 = __this->get_U3CU3E7__wrap4_8();
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_77 = __this->get_U3CU3E7__wrap7_11();
		if ((((int32_t)L_76) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))))))
		{
			goto IL_01aa;
		}
	}
	{
		__this->set_U3CU3E7__wrap7_11((FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*)NULL);
		// }
		return (bool)0;
	}
}
// System.ValueTuple`2<System.Reflection.MethodInfo,System.Reflection.MemberInfo> QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::System.Collections.Generic.IEnumerator<(System.Reflection.MethodInfomethod,System.Reflection.MemberInfomember)>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  U3CExtractCommandMethodsU3Ed__25_System_Collections_Generic_IEnumeratorU3CU28System_Reflection_MethodInfomethodU2CSystem_Reflection_MemberInfomemberU29U3E_get_Current_m0C31676134E82A826DAAA0B05351ECCB4A176A55 (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtractCommandMethodsU3Ed__25_System_Collections_IEnumerator_Reset_mD8FF49B2E403CEB7887C25EBF4B39A88BB4208EE (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExtractCommandMethodsU3Ed__25_System_Collections_IEnumerator_Reset_mD8FF49B2E403CEB7887C25EBF4B39A88BB4208EE_RuntimeMethod_var)));
	}
}
// System.Object QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExtractCommandMethodsU3Ed__25_System_Collections_IEnumerator_get_Current_mD74C1BB73AE6E43D72C55237FBB5701A1C96165D (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_0 = __this->get_U3CU3E2__current_1();
		ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8  L_1 = L_0;
		RuntimeObject * L_2 = Box(ValueTuple_2_tE443891FCE4047A8FD403899355C02B4E72975E8_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.MethodInfo,System.Reflection.MemberInfo>> QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::System.Collections.Generic.IEnumerable<(System.Reflection.MethodInfomethod,System.Reflection.MemberInfomember)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExtractCommandMethodsU3Ed__25_System_Collections_Generic_IEnumerableU3CU28System_Reflection_MethodInfomethodU2CSystem_Reflection_MemberInfomemberU29U3E_GetEnumerator_mD9A19553C3946EB5BD1874CB6D98D6D801AA3A9F (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * V_0 = NULL;
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
		U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * L_3 = (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC *)il2cpp_codegen_object_new(U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC_il2cpp_TypeInfo_var);
		U3CExtractCommandMethodsU3Ed__25__ctor_m93485C29E22BF9A8C267F30CA44A85DAA86DAD34(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * L_4 = V_0;
		Type_t * L_5 = __this->get_U3CU3E3__type_4();
		L_4->set_type_3(L_5);
		U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator QFSW.QC.QuantumConsoleProcessor/<ExtractCommandMethods>d__25::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExtractCommandMethodsU3Ed__25_System_Collections_IEnumerable_GetEnumerator_m4A529A07252141E4C83F7ADAFF0C800749205AAF (U3CExtractCommandMethodsU3Ed__25_tDE4A65BEC7BAFBB79F608763AD66630BBD68F7DC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExtractCommandMethodsU3Ed__25_System_Collections_Generic_IEnumerableU3CU28System_Reflection_MethodInfomethodU2CSystem_Reflection_MemberInfomemberU29U3E_GetEnumerator_mD9A19553C3946EB5BD1874CB6D98D6D801AA3A9F(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void QFSW.QC.QuantumMacros/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m888F6220EBA2DA898137660E7EA9342D067D8861 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B * L_0 = (U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B *)il2cpp_codegen_object_new(U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD00F44251BABC0657C71FA7B241D7449F1933A14(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.QuantumMacros/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD00F44251BABC0657C71FA7B241D7449F1933A14 (U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String QFSW.QC.QuantumMacros/<>c::<GetAllMacros>b__6_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetAllMacrosU3Eb__6_0_m5589CC2A59AE9C6BA5BAEDF485DCCD81B68B7846 (U3CU3Ec_t07819E5C362800B11A5B955EAD33C3AB06C4419B * __this, KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// else { return $"Macro table:\n{string.Join("\n", _macroTable.Select((x) => $"#{x.Key} = {x.Value}"))}"; }
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		String_t* L_1;
		L_1 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		String_t* L_2;
		L_2 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, L_0, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Int32 QFSW.QC.QuantumMacros/MacroPreprocessor::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MacroPreprocessor_get_Priority_m7137B1CF9E3C963009BBEA41FAA8870659268498 (MacroPreprocessor_t051ED110E50A6D956EE15B6187903A2D95FBA209 * __this, const RuntimeMethod* method)
{
	{
		// public int Priority => 1000;
		return ((int32_t)1000);
	}
}
// System.String QFSW.QC.QuantumMacros/MacroPreprocessor::Process(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacroPreprocessor_Process_m7F80F64C27D14C44082FB5000DF9EC0103A92FC2 (MacroPreprocessor_t051ED110E50A6D956EE15B6187903A2D95FBA209 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuantumMacros_t834D8F9F1C304813BFE0DDA2116A371AEFB28048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B53D498E625F84E2F4906D295E6EFE068481F41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!text.StartsWith("#define", StringComparison.CurrentCulture))
		String_t* L_0 = ___text0;
		bool L_1;
		L_1 = String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E(L_0, _stringLiteral8B53D498E625F84E2F4906D295E6EFE068481F41, 0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// text = ExpandMacros(text);
		String_t* L_2 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(QuantumMacros_t834D8F9F1C304813BFE0DDA2116A371AEFB28048_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = QuantumMacros_ExpandMacros_mBF1B4421CBEB91ACD9ACE73A577CE520421E331C(L_2, ((int32_t)1000), /*hidden argument*/NULL);
		___text0 = L_3;
	}

IL_001b:
	{
		// return text;
		String_t* L_4 = ___text0;
		return L_4;
	}
}
// System.Void QFSW.QC.QuantumMacros/MacroPreprocessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacroPreprocessor__ctor_mAAB275B60B2E37A0A0583244B46A433E6F4F0A1A (MacroPreprocessor_t051ED110E50A6D956EE15B6187903A2D95FBA209 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void QFSW.QC.QuantumParser/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m19CB614D8262DFCEA0C767B0E0979E69F5CD7A4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB * L_0 = (U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB *)il2cpp_codegen_object_new(U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m64F68E80C42178F0C4DBE32B4F2EE19E2DF8666E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.QuantumParser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m64F68E80C42178F0C4DBE32B4F2EE19E2DF8666E (U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 QFSW.QC.QuantumParser/<>c::<.ctor>b__5_0(QFSW.QC.IQcParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__5_0_m14F4AFE855508FAD83E298AB2892A5D9EA3E3A9A (U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB * __this, RuntimeObject* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQcParser_t7830B195B9C10F33AECA5B7636B3DBA6B4C15966_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _parsers = parsers.OrderByDescending(x => x.Priority)
		RuntimeObject* L_0 = ___x0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 QFSW.QC.IQcParser::get_Priority() */, IQcParser_t7830B195B9C10F33AECA5B7636B3DBA6B4C15966_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 QFSW.QC.QuantumParser/<>c::<.ctor>b__5_1(QFSW.QC.IQcGrammarConstruct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__5_1_m29EBE72C55850C1683E63A640EC22951F8D469FF (U3CU3Ec_t3843216B025698CFA20B49B3CF963DF50041E1FB * __this, RuntimeObject* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQcGrammarConstruct_t8562EC0D399EB3882BE1582F1B3E3A1E76A2E57D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _grammarConstructs = grammarConstructs.OrderBy(x => x.Precedence)
		RuntimeObject* L_0 = ___x0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 QFSW.QC.IQcGrammarConstruct::get_Precedence() */, IQcGrammarConstruct_t8562EC0D399EB3882BE1582F1B3E3A1E76A2E57D_il2cpp_TypeInfo_var, L_0);
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
// System.Void QFSW.QC.QuantumPreprocessor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8DAC994DAD67C5BFDA2F4760E1FB7551E13A12ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 * L_0 = (U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 *)il2cpp_codegen_object_new(U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0D41B7225A6A6E76900F9C1F3096FD880273C3B3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.QuantumPreprocessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0D41B7225A6A6E76900F9C1F3096FD880273C3B3 (U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 QFSW.QC.QuantumPreprocessor/<>c::<.ctor>b__1_0(QFSW.QC.IQcPreprocessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__1_0_mF9798D50E759AE6167AEA9859BB0DA02C799AAA2 (U3CU3Ec_t75BE926BC58FF294A3B23B2290A9F9CBCA7E7DD0 * __this, RuntimeObject* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQcPreprocessor_t0024055B8FCBF40FEF04A5390A512C0A04C0E73F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _preprocessors = preprocessors.OrderByDescending(x => x.Priority)
		RuntimeObject* L_0 = ___x0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 QFSW.QC.IQcPreprocessor::get_Priority() */, IQcPreprocessor_t0024055B8FCBF40FEF04A5390A512C0A04C0E73F_il2cpp_TypeInfo_var, L_0);
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
// System.Void QFSW.QC.QuantumRegistry/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m445BD954235268E786AF18F4530A37C43BC1944F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 * L_0 = (U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 *)il2cpp_codegen_object_new(U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mBA5DA8D52427E156E9064803322E7E4D33DF4A13(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.QuantumRegistry/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBA5DA8D52427E156E9064803322E7E4D33DF4A13 (U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String QFSW.QC.QuantumRegistry/<>c::<DisplayRegistry>b__12_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CDisplayRegistryU3Eb__12_0_m442EF5C829C7BDB335294212918A728A31388042 (U3CU3Ec_t2F5C177FCBC04E78593F71E662DB176B56DBB310 * __this, RuntimeObject * ___x0, const RuntimeMethod* method)
{
	{
		// else { return string.Join("\n", GetRegistryContents(type).Select(x => x.ToString())); }
		RuntimeObject * L_0 = ___x0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.Void QFSW.QC.QuantumSerializer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA59F1C2A246F743B6198539BC1A3DE10D9070BDC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 * L_0 = (U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 *)il2cpp_codegen_object_new(U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m82AA3FB8BD8579064CB1D6788B5B22094AFA3E07(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.QuantumSerializer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82AA3FB8BD8579064CB1D6788B5B22094AFA3E07 (U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 QFSW.QC.QuantumSerializer/<>c::<.ctor>b__4_0(QFSW.QC.IQcSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__4_0_mAF07164D9FD36EAA4F8A79F9F911C6503611437C (U3CU3Ec_tEBE379D0A4BD31D1E0EABBF7093972E92096EE72 * __this, RuntimeObject* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IQcSerializer_t9CEEAA20DAB33C244027FAD88BBE23D7D047B24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _serializers = serializers.OrderByDescending(x => x.Priority)
		RuntimeObject* L_0 = ___x0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 QFSW.QC.IQcSerializer::get_Priority() */, IQcSerializer_t9CEEAA20DAB33C244027FAD88BBE23D7D047B24A_il2cpp_TypeInfo_var, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFSW.QC.Utilities.ReflectionExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD12BBD84F14F2F206813E720FF691E286A4D92BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 * L_0 = (U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 *)il2cpp_codegen_object_new(U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC1D8139A6CD725CDB5439CE67BE8E9C3DD2CF071(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.Utilities.ReflectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC1D8139A6CD725CDB5439CE67BE8E9C3DD2CF071 (U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type QFSW.QC.Utilities.ReflectionExtensions/<>c::<HasCastDefined>b__10_0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CHasCastDefinedU3Eb__10_0_mDAC6D227484FBC00E20E2BD53BA1C4ED69F16C58 (U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		// return IsCastDefined(to, m => m.GetParameters()[0].ParameterType, _ => from, implicitly, false)
		MethodInfo_t * L_0 = ___m0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		int32_t L_2 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_3);
		return L_4;
	}
}
// System.Type QFSW.QC.Utilities.ReflectionExtensions/<>c::<HasCastDefined>b__10_3(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CHasCastDefinedU3Eb__10_3_m6114BA6DE3B0564546C8BB654EF28EDF214A4BDD (U3CU3Ec_tF5A3F98A8D912E762A619294E3D7BC565B533048 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		// || IsCastDefined(from, _ => to, m => m.ReturnType, implicitly, true);
		MethodInfo_t * L_0 = ___m0;
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
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
// System.Void QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m848A2222EDC92D53E8E20A09CA9B63B57CEC869B (U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::<HasCastDefined>b__4(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CHasCastDefinedU3Eb__4_m68CBFB9984FEB98A4E74A466A89AEBA17FDD5D72 (U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (types.Any(t => t == to))
		Type_t * L_0 = ___t0;
		Type_t * L_1 = __this->get_to_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::<HasCastDefined>b__5(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CHasCastDefinedU3Eb__5_mF7E27A4F8A532ADEEE98EB8420FC45D46D358F6C (U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return lowerTypes.Any(t => t == from);
		Type_t * L_0 = ___t0;
		Type_t * L_1 = __this->get_from_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Type QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::<HasCastDefined>b__1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec__DisplayClass10_0_U3CHasCastDefinedU3Eb__1_m88607B95C3CF159342FEFD1ED4CBB7C7534FBB70 (U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72 * __this, MethodInfo_t * ____0, const RuntimeMethod* method)
{
	{
		// return IsCastDefined(to, m => m.GetParameters()[0].ParameterType, _ => from, implicitly, false)
		Type_t * L_0 = __this->get_from_1();
		return L_0;
	}
}
// System.Type QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass10_0::<HasCastDefined>b__2(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec__DisplayClass10_0_U3CHasCastDefinedU3Eb__2_m0CC25F8FF11ABDBAEA091194A6940EE9765547FD (U3CU3Ec__DisplayClass10_0_tEC1D0FD27EDA08ED8E2E65B233E4A6A7EC88BB72 * __this, MethodInfo_t * ____0, const RuntimeMethod* method)
{
	{
		// || IsCastDefined(from, _ => to, m => m.ReturnType, implicitly, true);
		Type_t * L_0 = __this->get_to_0();
		return L_0;
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
// System.Void QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mBE28402FA6DE064D661E0AC855193930CD8E425F (U3CU3Ec__DisplayClass11_0_tC4872F1DF618642D9C65BC17058FEAF7197346F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass11_0::<IsCastDefined>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass11_0_U3CIsCastDefinedU3Eb__0_mFE53267A0F028F84EDEC742C499CD1B3D3A0BA77 (U3CU3Ec__DisplayClass11_0_tC4872F1DF618642D9C65BC17058FEAF7197346F6 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6E90C09E43FB002DA629508AC300A0750320118);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return methods.Where(m => m.Name == "op_Implicit" || (!implicitly && m.Name == "op_Explicit"))
		MethodInfo_t * L_0 = ___m0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral437906DA6527EA9BAA9A971EC5171183BEB85B59, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		bool L_3 = __this->get_implicitly_0();
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		MethodInfo_t * L_4 = ___m0;
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralB6E90C09E43FB002DA629508AC300A0750320118, /*hidden argument*/NULL);
		return L_6;
	}

IL_002b:
	{
		return (bool)0;
	}

IL_002d:
	{
		return (bool)1;
	}
}
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass11_0::<IsCastDefined>b__1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass11_0_U3CIsCastDefinedU3Eb__1_m0F99F952B04115E705DFF0F6A24704C59FC6EBC1 (U3CU3Ec__DisplayClass11_0_tC4872F1DF618642D9C65BC17058FEAF7197346F6 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mBCEB06F7582B460804F50C6580EF9EB4CA956B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Any(m => baseType(m).IsAssignableFrom(derivedType(m)));
		Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * L_0 = __this->get_baseType_1();
		MethodInfo_t * L_1 = ___m0;
		Type_t * L_2;
		L_2 = Func_2_Invoke_mBCEB06F7582B460804F50C6580EF9EB4CA956B84(L_0, L_1, /*hidden argument*/Func_2_Invoke_mBCEB06F7582B460804F50C6580EF9EB4CA956B84_RuntimeMethod_var);
		Func_2_t1D543CC12735B4D12BE733C038703707C39D2883 * L_3 = __this->get_derivedType_2();
		MethodInfo_t * L_4 = ___m0;
		Type_t * L_5;
		L_5 = Func_2_Invoke_mBCEB06F7582B460804F50C6580EF9EB4CA956B84(L_3, L_4, /*hidden argument*/Func_2_Invoke_mBCEB06F7582B460804F50C6580EF9EB4CA956B84_RuntimeMethod_var);
		bool L_6;
		L_6 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_2, L_5);
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
// System.Void QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m19D73EBB5327CEF7ABF35DA5E03098371055AECC (U3CU3Ec__DisplayClass16_0_t86E4169355065921939A5911DB0E3AA4FA079363 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass16_0::<GetTupleDisplayName>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass16_0_U3CGetTupleDisplayNameU3Eb__0_m39145CEE83F5B819BFF868EE23F9304511D5BBB1 (U3CU3Ec__DisplayClass16_0_t86E4169355065921939A5911DB0E3AA4FA079363 * __this, Type_t * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(x => x.GetDisplayName(includeNamespace));
		Type_t * L_0 = ___x0;
		bool L_1 = __this->get_includeNamespace_0();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = ReflectionExtensions_GetDisplayName_m29BE8687545C579A4CAE1AAC552A67150C4468F1(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m133ACA1303BD69DC1F8B57F70AFF0DF0F03C82D2 (U3CU3Ec__DisplayClass18_0_t7679C6B1D7AA6706929DFC28DF4D3BBC1BEE01DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Utilities.ReflectionExtensions/<>c__DisplayClass18_0::<RebaseMethod>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CRebaseMethodU3Eb__0_m1FA3AB109CC178A707D08A649F36F57D3F21D799 (U3CU3Ec__DisplayClass18_0_t7679C6B1D7AA6706929DFC28DF4D3BBC1BEE01DA * __this, MethodInfo_t * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(x => AreMethodsEqual(x, method))
		MethodInfo_t * L_0 = ___x0;
		MethodInfo_t * L_1 = __this->get_method_0();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionExtensions_t6F4D67FB9F4EBE745AD59B0101E1008E0D488D0B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ReflectionExtensions_AreMethodsEqual_mBD4984AD37DE55302DD14563DAC1785C745E9D53(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__6__ctor_m43544EE387F943D7899CF0E6BA6CC81459EE2019 (U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__6_System_IDisposable_Dispose_m062375737E6E6D986C74D0EE3830D91580D5CA4A (U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__6_MoveNext_m86D2899C6FD9FFD06A78AA9190ECE6CCA17E786F (U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < _str.Length; i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_005c;
	}

IL_0020:
	{
		// yield return _str[i];
		StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45 * L_3 = __this->get_address_of_U3CU3E4__this_2();
		String_t* L_4 = L_3->get__str_0();
		int32_t L_5 = __this->get_U3CiU3E5__2_3();
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < _str.Length; i++)
		int32_t L_7 = __this->get_U3CiU3E5__2_3();
		V_1 = L_7;
		int32_t L_8 = V_1;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_005c:
	{
		// for (int i = 0; i < _str.Length; i++)
		int32_t L_9 = __this->get_U3CiU3E5__2_3();
		StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45 * L_10 = __this->get_address_of_U3CU3E4__this_2();
		String_t* L_11 = L_10->get__str_0();
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_12)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Char QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::System.Collections.Generic.IEnumerator<System.Char>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar U3CGetEnumeratorU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_CharU3E_get_Current_m45077DA51BA85F5C42CAF1BAFEE97F7CF7EB0C05 (U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__6_System_Collections_IEnumerator_Reset_mDD05017218289306255040861FB2E7615C8C8138 (U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__6_System_Collections_IEnumerator_Reset_mDD05017218289306255040861FB2E7615C8C8138_RuntimeMethod_var)));
	}
}
// System.Object QFSW.QC.Containers.StringContainer/<GetEnumerator>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__6_System_Collections_IEnumerator_get_Current_m54914FC84BCB264A75D0B71CE92376BB6F3F6527 (U3CGetEnumeratorU3Ed__6_t1676DA6DD4B341EF72239711DD12DC1E5F122C81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = __this->get_U3CU3E2__current_1();
		Il2CppChar L_1 = L_0;
		RuntimeObject * L_2 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
// System.Void QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7__ctor_m70203E1C57AED789CD5FF4657735F87D28FB4924 (U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_System_IDisposable_Dispose_m4CBBF85EE49A0B1BCA589E5B7F8F071A92DBF5A7 (U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_MoveNext_m659A7688C0F907580052AA7F8BDBCD56D2BBC4E7 (U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < _str.Length; i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_0061;
	}

IL_0020:
	{
		// yield return _str[i];
		StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45 * L_3 = __this->get_address_of_U3CU3E4__this_2();
		String_t* L_4 = L_3->get__str_0();
		int32_t L_5 = __this->get_U3CiU3E5__2_3();
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = L_6;
		RuntimeObject * L_8 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_7);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < _str.Length; i++)
		int32_t L_9 = __this->get_U3CiU3E5__2_3();
		V_1 = L_9;
		int32_t L_10 = V_1;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_0061:
	{
		// for (int i = 0; i < _str.Length; i++)
		int32_t L_11 = __this->get_U3CiU3E5__2_3();
		StringContainer_tFC2641CB6D18DF9020CBF8392C935EC2BDD36F45 * L_12 = __this->get_address_of_U3CU3E4__this_2();
		String_t* L_13 = L_12->get__str_0();
		int32_t L_14;
		L_14 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_14)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE1CF769842B543AF37E781AB158A9B689D017A9D (U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_m874EB91C05E1377F91B5A2AE22807B32F80DD094 (U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_m874EB91C05E1377F91B5A2AE22807B32F80DD094_RuntimeMethod_var)));
	}
}
// System.Object QFSW.QC.Containers.StringContainer/<System-Collections-IEnumerable-GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_System_Collections_IEnumerator_get_Current_mA9BE6145ED3DAF0E171EF5AFF0FEC261E5C1D2CB (U3CSystemU2DCollectionsU2DIEnumerableU2DGetEnumeratorU3Ed__7_t34911CAE8727EF86D3D2F1CD060358C5F6FFE27E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void QFSW.QC.Actions.Typewriter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF9204E8D87D031E28D34C01A4BD30C36363D2AB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD * L_0 = (U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD *)il2cpp_codegen_object_new(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1DB5FB9D46E9BE3D108D314E111AABC859C26729(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.Actions.Typewriter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1DB5FB9D46E9BE3D108D314E111AABC859C26729 (U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String QFSW.QC.Actions.Typewriter/<>c::<Generate>b__5_0(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGenerateU3Eb__5_0_m2F6CE06BEDE1F951468AFEA69398129097702055 (U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD * __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	{
		// case Config.ChunkType.Character: chunks = message.Select(c => c.ToString()).ToArray(); break;
		String_t* L_0;
		L_0 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&___c0), /*hidden argument*/NULL);
		return L_0;
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
// System.Void QFSW.QC.Actions.Typewriter/<Generate>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateU3Ed__5__ctor_m06FF524506362BF2286E860EA35104DD70AB5C55 (U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void QFSW.QC.Actions.Typewriter/<Generate>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateU3Ed__5_System_IDisposable_Dispose_mBA1E66989C962FF80146E07909528527CE8A8786 (U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean QFSW.QC.Actions.Typewriter/<Generate>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGenerateU3Ed__5_MoveNext_m82AA50B9DBB3EFEB08C28024E967C8430C9640B9 (U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_TisString_t_m1A9B81888535C501740FD2655C52963B108E4708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m661F316CCEDBF8C6EC183BD380B643CE2AD9D14C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGenerateU3Eb__5_0_m2F6CE06BEDE1F951468AFEA69398129097702055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126 * G_B6_2 = NULL;
	Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126 * G_B5_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_0122;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// switch (config.Chunks)
		Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51 * L_2 = __this->get_address_of_config_2();
		int32_t L_3 = L_2->get_Chunks_1();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0091;
			}
		}
	}
	{
		goto IL_00a9;
	}

IL_0042:
	{
		// case Config.ChunkType.Character: chunks = message.Select(c => c.ToString()).ToArray(); break;
		String_t* L_5 = __this->get_message_3();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var);
		Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * L_6 = ((U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_1();
		Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * L_7 = L_6;
		G_B5_0 = L_7;
		G_B5_1 = L_5;
		G_B5_2 = __this;
		if (L_7)
		{
			G_B6_0 = L_7;
			G_B6_1 = L_5;
			G_B6_2 = __this;
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var);
		U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD * L_8 = ((U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * L_9 = (Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B *)il2cpp_codegen_object_new(Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B_il2cpp_TypeInfo_var);
		Func_2__ctor_m661F316CCEDBF8C6EC183BD380B643CE2AD9D14C(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CGenerateU3Eb__5_0_m2F6CE06BEDE1F951468AFEA69398129097702055_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m661F316CCEDBF8C6EC183BD380B643CE2AD9D14C_RuntimeMethod_var);
		Func_2_t75257DFA0507CABED8455D4164E162A29F87AF1B * L_10 = L_9;
		((U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2E674444BE393D72EF9514488A3E93F3B1724DD_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_1(L_10);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0068:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_Select_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_TisString_t_m1A9B81888535C501740FD2655C52963B108E4708(G_B6_1, G_B6_0, /*hidden argument*/Enumerable_Select_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_TisString_t_m1A9B81888535C501740FD2655C52963B108E4708_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12;
		L_12 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_11, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		G_B6_2->set_U3CchunksU3E5__2_4(L_12);
		// case Config.ChunkType.Character: chunks = message.Select(c => c.ToString()).ToArray(); break;
		goto IL_00c9;
	}

IL_0079:
	{
		// case Config.ChunkType.Word: chunks = WhiteRegex.Split(message); break;
		IL2CPP_RUNTIME_CLASS_INIT(Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_il2cpp_TypeInfo_var);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_13 = ((Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_StaticFields*)il2cpp_codegen_static_fields_for(Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_il2cpp_TypeInfo_var))->get_WhiteRegex_2();
		String_t* L_14 = __this->get_message_3();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15;
		L_15 = Regex_Split_m5BF32FE8CCFDE21F7EA24946D35A2E74CAA91805(L_13, L_14, /*hidden argument*/NULL);
		__this->set_U3CchunksU3E5__2_4(L_15);
		// case Config.ChunkType.Word: chunks = WhiteRegex.Split(message); break;
		goto IL_00c9;
	}

IL_0091:
	{
		// case Config.ChunkType.Line: chunks = LineRegex.Split(message); break;
		IL2CPP_RUNTIME_CLASS_INIT(Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_il2cpp_TypeInfo_var);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_16 = ((Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_StaticFields*)il2cpp_codegen_static_fields_for(Typewriter_t68027500347BD521B7CA4C7F18EF79D297B6C852_il2cpp_TypeInfo_var))->get_LineRegex_3();
		String_t* L_17 = __this->get_message_3();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18;
		L_18 = Regex_Split_m5BF32FE8CCFDE21F7EA24946D35A2E74CAA91805(L_16, L_17, /*hidden argument*/NULL);
		__this->set_U3CchunksU3E5__2_4(L_18);
		// case Config.ChunkType.Line: chunks = LineRegex.Split(message); break;
		goto IL_00c9;
	}

IL_00a9:
	{
		// default: throw new ArgumentException($"Chunk type {config.Chunks} is not supported.");
		Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51 * L_19 = __this->get_address_of_config_2();
		int32_t L_20 = L_19->get_Chunks_1();
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChunkType_tE9CFDC0C356B99C9C31A78DAE39A4441E329456B_il2cpp_TypeInfo_var)), &L_21);
		String_t* L_23;
		L_23 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA327CFEAD8A28A1F2BD203C234CBA04D69209194)), L_22, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_24 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenerateU3Ed__5_MoveNext_m82AA50B9DBB3EFEB08C28024E967C8430C9640B9_RuntimeMethod_var)));
	}

IL_00c9:
	{
		// for (int i = 0; i < chunks.Length; i++)
		__this->set_U3CiU3E5__3_5(0);
		goto IL_0139;
	}

IL_00d2:
	{
		// yield return new WaitRealtime(config.PrintInterval);
		Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51 * L_25 = __this->get_address_of_config_2();
		float L_26 = L_25->get_PrintInterval_0();
		WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0 * L_27 = (WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0 *)il2cpp_codegen_object_new(WaitRealtime_tD2016E2693850ADF37F1AD33AE08CB69B7DF4FE0_il2cpp_TypeInfo_var);
		WaitRealtime__ctor_m13F2AE4440BC6D2322F21962DE0EF77F0A9735F9(L_27, L_26, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f1:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new Value(chunks[i], i == 0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = __this->get_U3CchunksU3E5__2_4();
		int32_t L_29 = __this->get_U3CiU3E5__3_5();
		int32_t L_30 = L_29;
		String_t* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = __this->get_U3CiU3E5__3_5();
		Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B * L_33 = (Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B *)il2cpp_codegen_object_new(Value_tC60C114AB625FB4E7856F2DA62C254BE9D56594B_il2cpp_TypeInfo_var);
		Value__ctor_mD4654A2A4930511C22F739630FC984886760C5A1(L_33, L_31, (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0122:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < chunks.Length; i++)
		int32_t L_34 = __this->get_U3CiU3E5__3_5();
		V_2 = L_34;
		int32_t L_35 = V_2;
		__this->set_U3CiU3E5__3_5(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
	}

IL_0139:
	{
		// for (int i = 0; i < chunks.Length; i++)
		int32_t L_36 = __this->get_U3CiU3E5__3_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = __this->get_U3CchunksU3E5__2_4();
		if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// QFSW.QC.ICommandAction QFSW.QC.Actions.Typewriter/<Generate>d__5::System.Collections.Generic.IEnumerator<QFSW.QC.ICommandAction>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGenerateU3Ed__5_System_Collections_Generic_IEnumeratorU3CQFSW_QC_ICommandActionU3E_get_Current_m3F1CA02EE0BF3D8318D23AA26536F8EF7BC31BC0 (U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QFSW.QC.Actions.Typewriter/<Generate>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateU3Ed__5_System_Collections_IEnumerator_Reset_mB69E115C87B48158AA20DBCF9F650E3B17C28DA9 (U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenerateU3Ed__5_System_Collections_IEnumerator_Reset_mB69E115C87B48158AA20DBCF9F650E3B17C28DA9_RuntimeMethod_var)));
	}
}
// System.Object QFSW.QC.Actions.Typewriter/<Generate>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateU3Ed__5_System_Collections_IEnumerator_get_Current_m99E3E4A64887F282C1EFEF67A950F69E32355A48 (U3CGenerateU3Ed__5_tDB6AF662DA03050DFC686E7C35E638BC552CB126 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void QFSW.QC.Actions.Typewriter/Config::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__cctor_m398EDCC5ED5C49C7E930E4C6A4DEA2445F37EA85 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static readonly Config Default = new Config
		// {
		//     PrintInterval = 0f,
		//     Chunks = ChunkType.Character
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51 ));
		(&V_0)->set_PrintInterval_0((0.0f));
		(&V_0)->set_Chunks_1(0);
		Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51  L_0 = V_0;
		((Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51_StaticFields*)il2cpp_codegen_static_fields_for(Config_t02B22356F4D4A4FCC5098A7ECAEA757EDE3A0B51_il2cpp_TypeInfo_var))->set_Default_2(L_0);
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
// System.Void QFSW.QC.Actions.WaitKey/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m7E778A756344BB4038497F60EC2C1997535FAD45 (U3CU3Ec__DisplayClass0_0_t82A4924E28FF459D6523825CD8F05F8D1766AF2E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Actions.WaitKey/<>c__DisplayClass0_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_m71E252D8201BEC581C28ADD44E409C0242B5FEE5 (U3CU3Ec__DisplayClass0_0_t82A4924E28FF459D6523825CD8F05F8D1766AF2E * __this, const RuntimeMethod* method)
{
	{
		// public WaitKey(KeyCode key) : base(() => InputHelper.GetKeyDown(key))
		int32_t L_0 = __this->get_key_0();
		bool L_1;
		L_1 = InputHelper_GetKeyDown_m6EA585E8270689D7FF08BCFF11E90FE4CF5FE8AF(L_0, /*hidden argument*/NULL);
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
// System.Void QFSW.QC.Actions.WaitUntil/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m6197F59F7C44A9B289668E18519D2D74F5E29D5C (U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QFSW.QC.Actions.WaitUntil/<>c__DisplayClass0_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3C_ctorU3Eb__0_mCF26D9B75F1CCBEC4858F292A799BF50A8ED23AE (U3CU3Ec__DisplayClass0_0_t5FA4F118A3BC6E934886852501B7289D7F37FEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WaitUntil(Func<bool> condition) : base(() => !condition())
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_0 = __this->get_condition_0();
		bool L_1;
		L_1 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_0, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
