#include "Functions.h"
#include <cmath>
namespace Functions 
{
	int String::StringLength(char* Str)
	{
		int Len;
		for (Len = 0; Str[Len] != '\0'; Len++) {}
		return Len;
	}
	char* String::StringConcatenation(char* Str1, char* Str2, char* StrRes)
	{
		int i, j;
		for (i = 0; Str1[i] != '\0'; i++) {
			StrRes[i] = Str1[i];
		}
		for (j = 0; Str2[j] != '\0'; j++, i++) {
			StrRes[i] = Str2[j];
		}
		StrRes[i] = '\0';
		return StrRes;
	}
	char* String::CopyingAString(char* Str, int Start, int Len, char* SubStr)
	{
		int LenStr = 0, i = 0;
		for (LenStr; Str[LenStr] != '\0'; LenStr++) {}
		if (Start < 0)
			Start = 0;
		else if (Len + Start > LenStr)
			Len = LenStr - Start;
		for (i; i < Len || Str[i] == '\0' || Len == 0; i++, Start++)
		{
			if (Len <= 0)
			{
				break;
			}
			SubStr[i] = Str[Start];
		}
		SubStr[i] = '\0';
		return  SubStr;
	}
	char* String::DeletingASubstring(char* Str, int Start, int Len, char* StrRes)
	{
		int LenStr = 0, i = 0, j = 0;
		for (Len; Str[Len] != '\0'; LenStr++) {}
		if (Start < 0)
			Start = 0;
		else if (Len + Start > LenStr)
			Len = Len - Start;
		for (int i = 0; i < Len || (Start < 0 && Len > Len); i++)
			if (!(i >= Start && i < Len + Start))
				StrRes[j++] = Str[i];
		StrRes[j] = '\0';
		return StrRes;
	}
	char* String::InsertingASubstring(char* Str1, int Start, char* Str2, char* StrRes)
	{
		int i = 0, j = 0, l = 0, Len = 0;
		for (Len; Str1[Len] != '\0'; Len++) {}
		if (Start < 0)
			Start = 0;
		else if (Start > Len)
			Start = Len;
		for (i = 0; i < Start; i++)
			StrRes[i] = Str1[i];
		l = i;
		for (i, j; Str2[j] != '\0'; i++, j++)
			StrRes[i] = Str2[j];
		for (i, l; i > Start && Str1[l] != '\0'; i++, l++)
			StrRes[i] = Str1[l];
		StrRes[i] = '\0';
		return StrRes;
	}
	int String::SearchForTheFirstCccurrence(char* Str1, char* Str2)
	{
		int OccPos = -1, i = 0, j = 0, Len = 0;
		for (Len; Str2[Len] != '\0'; Len++) {}
		for (i; Str1[i] != '\0'; i++)
			if (Str1[i] == Str2[j] && Str2[j++] != '\0')
				OccPos = i;
		if (OccPos != -1)
			OccPos = OccPos - Len + 1;
		return OccPos;
	}
	int String::SearchForTheLastCccurrence(char* Str1, char* Str2)
	{
		int OccPos = -1, Len1 = 0, Len2 = 0, Len1Rem;
		for (Len1; Str1[Len1] != '\0'; Len1++) {};
		for (Len2; Str2[Len2] != '\0'; Len2++) {};
		Len1Rem = Len1;
		for (Len1; Len1 > -1; Len1--, Len2--)
			if (Str1[Len1] == Str2[Len2])
				OccPos = Len1;
		if (OccPos == Len1Rem)
			OccPos = -1;
		return OccPos;
	}
	char* String::RepacingTheFirstCccurrence(char* Str1, char* Str2, char* Str3, char* StrRes)
	{
		int Len1 = 0, Len2 = 0, Len3 = 0, Check = 0, OccNum = -1, i, j, l = 0, Len2_Len3;
		for (Len1; Str1[Len1] != '\0'; Len1++) {};
		for (Len2; Str2[Len2] != '\0'; Len2++) {};
		for (Len3; Str3[Len3] != '\0'; Len3++) {};
		for (i = 0, j = 0; Check != Len2 && i < Len1; i++) {
			if (Str1[i] == Str2[j++]) {
				if (Check == 0)
					OccNum = i;
				Check++;
			}
			else {
				if (Check != 0)
					i--;
				j = 0;
				Check = 0;
				OccNum = -1;
			}
		}
		i = 0, j = 0;
		if (OccNum != -1) {
			for (i; i < OccNum; i++)
				StrRes[i] = Str1[i];
			for (i; i < OccNum + Len3; i++, j++)
				StrRes[i] = Str3[j];
			if (Len2 > Len3)
			{
				Len2_Len3 = Len2 - Len3;
				l = i + Len2_Len3;
			}
			else if (Len2 < Len3)
			{
				Len2_Len3 = Len3 - Len2;
				l = i - Len2_Len3;
			}
			else {
				Len2_Len3 = Len2 - Len3;
				l = i;
			}
			for (i; i < Len1 + Len2_Len3 || l < Len1; i++, l++)
				StrRes[i] = Str1[l];
			StrRes[i++] = '\0';
		}
		return StrRes;
	}
	char* String::RepacingAllCccurrences(char* Str1, char* Str2, char* Str3, char* StrRes)
	{
		int Len1 = 0, Len2 = 0, Len3 = 0, Check = 0, OccPos = 0, i = 0, j, Len2_Len3 = 0, LenRes, Mem = 0, Check2 = 0;
		for (Len1; Str1[Len1] != '\0'; Len1++) {};
		for (Len2; Str2[Len2] != '\0'; Len2++) {};
		for (Len3; Str3[Len3] != '\0'; Len3++) {};
		Len2_Len3 = abs(Len2 - Len3);
		for (int write = 0; write < Len1 + 1; write++)
			StrRes[write] = Str1[write];
		while (OccPos != -1) {
			OccPos = -1, Check = 0;
			for (LenRes = 0; StrRes[LenRes] != '\0'; LenRes++) {};
			for (j = 0; Check != Len2 && Mem < LenRes; Mem++) {
				if (StrRes[Mem] == Str2[j++]) {
					if (Check == 0)
						OccPos = Mem;
					Check++;
				}
				else {
					if (Check != 0)
						Mem--;
					j = 0, Check = 0, OccPos = -1;
				}
			}
			Mem = OccPos + Len3, j = 0;
			if (OccPos != -1) {
				if (Len3 > Len2) {
					for (i = LenRes - 1; i > OccPos + Len2 - 1; i--)
						StrRes[i + Len2_Len3] = StrRes[i];
				}
				else if (Len2 > Len3) {
					for (i = OccPos + Len2 - 1; i < LenRes; i++)
						StrRes[i - Len2 + 1] = StrRes[i];
					Check2++;
				}
				for (i = OccPos; i < OccPos + Len3; i++, j++)
					StrRes[i] = Str3[j];

			}
			if (Len2 > Len3)
				StrRes[(LenRes + Len2) - 1 - Check2] = '\0';
			else
				StrRes[LenRes + Len2_Len3] = '\0';
		}
		return StrRes;
	}
}