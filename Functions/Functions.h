#pragma once
namespace Functions {
	class String
	{
	public:
		static int StringLength(char* Str);
		static char* StringConcatenation(char* Str1, char* Str2, char* StrRes);
		static char* CopyingAString(char* Str, int Start, int Len, char* SubStr);
		static char* DeletingASubstring(char* Str, int Start, int Len, char* StrRes);
		static char* InsertingASubstring(char* Str1, int Start, char* Str2, char* StrRes);
		static int SearchForTheFirstCccurrence(char* Str1, char* Str2);
		static int SearchForTheLastCccurrence(char* Str1, char* Str2);
		static char* RepacingTheFirstCccurrence(char* Str1, char* Str2, char* Str3, char* StrRes);
		static char* RepacingAllCccurrences(char* Str1, char* Str2, char* Str3, char* StrRes);
	};
}