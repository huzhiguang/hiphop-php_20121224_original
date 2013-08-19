// @generated by "php idl.php inc {input.idl.php} {output.inc}"

#if EXT_TYPE == 0
"icu_match", T(Variant), S(0), "pattern", T(String), NULL, S(0), NULL, S(0), "subject", T(String), NULL, S(0), NULL, S(0), "matches", T(Variant), "N;", S(2), "null", S(1), "flags", T(Int64), "i:0;", S(4), "0", S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.icu-match.php )\n *\n * Searches subject for a match to the regular expression given in\n * pattern. See http://userguide.icu-project.org/strings/regexp\n *\n * @pattern    string  The pattern to search for, as a string.\n * @subject    string  The input string.\n * @matches    mixed   If matches is provided, then it is filled with the\n *                     results of search. $matches[0] will contain the text\n *                     that matched the full pattern, $matches[1] will have\n *                     the text that matched the first captured\n *                     parenthesized subpattern, and so on.\n * @flags      int     OR together a combination of UREGEX_* constants.\n *\n * @return     mixed   icu_match() returns the number of times pattern\n *                     matches. That will be either 0 times (no match) or 1\n *                     time because icu_match() will stop searching after\n *                     the first match. icu_match() returns FALSE if an\n *                     error occurred.\n */",
"icu_transliterate", T(String), S(0), "str", T(String), NULL, S(0), NULL, S(0), "remove_accents", T(Boolean), NULL, S(0), NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.icu-transliterate.php )\n *\n *\n * @str        string\n * @remove_accents\n *             bool\n *\n * @return     string\n */",
"icu_tokenize", T(Array), S(0), "text", T(String), NULL, S(0), NULL, S(0), NULL, S(16384), "/**\n * ( excerpt from http://php.net/manual/en/function.icu-tokenize.php )\n *\n *\n * @text       string\n *\n * @return     vector\n */",

#elif EXT_TYPE == 1
"UREGEX_CASE_INSENSITIVE", T(Int64),
"UREGEX_COMMENTS", T(Int64),
"UREGEX_DOTALL", T(Int64),
"UREGEX_MULTILINE", T(Int64),
"UREGEX_UWORD", T(Int64),
"UREGEX_OFFSET_CAPTURE", T(Int64),

#elif EXT_TYPE == 2

#elif EXT_TYPE == 3

#endif