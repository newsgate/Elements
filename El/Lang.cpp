/*
 * product   : Elements - useful abstractions library.
 * copyright : Copyright (c) 2005-2016 Karen Arutyunov
 * licenses  : GNU GPL v2; see accompanying LICENSE file
 *             Commercial; contact karen.arutyunov@gmail.com
 */

#include "Lang.hpp"

namespace El
{
  const Lang Lang::null;
  const Lang Lang::nonexistent(EC_NONEXISTENT);
  const Lang Lang::nonexistent2(EC_NONEXISTENT2);
  
  const Lang::Record Lang::languages_[] =
  {
// 001    
    { EC_AAR, "aar", "aa", "Afar" },
    { EC_ABK, "abk", "ab", "Abkhazian" },
    { EC_ACE, "ace", "",   "Achinese" },
    { EC_ACH, "ach", "",   "Acoli" },
    { EC_ADA, "ada", "",   "Adangme" },
    { EC_ADY, "ady", "",   "Adyghe" },
    { EC_AFA, "afa", "",   "Afro-Asiatic" },
    { EC_AFH, "afh", "",   "Afrihili" },
    { EC_AFR, "afr", "af", "Afrikaans" },
// 010
    { EC_AIN, "ain", "",   "Ainu" },
    { EC_AKA, "aka", "ak", "Akan" },
    { EC_AKK, "akk", "",   "Akkadian" },
    { EC_ALB, "alb", "sq", "Albanian" },
    { EC_ALE, "ale", "",   "Aleut" },
    { EC_ALG, "alg", "",   "Algonquian" },
    { EC_ALT, "alt", "",   "Southern Altai" },
    { EC_AMH, "amh", "am", "Amharic" },
    { EC_ANG, "ang", "",   "English, Old" },
    { EC_ANP, "anp", "",   "Angika" },
// 020
    { EC_APA, "apa", "",   "Apache" },
    { EC_ARA, "ara", "ar", "Arabic" },
    { EC_ARC, "arc", "",   "Aramaic" },
    { EC_ARG, "arg", "an", "Aragonese" },
    { EC_ARM, "arm", "hy", "Armenian" },
    { EC_ARN, "arn", "",   "Araucanian" },
    { EC_ARP, "arp", "",   "Arapaho" },
    { EC_ART, "art", "",   "Artificial" },
    { EC_ARW, "arw", "",   "Arawak" },
    { EC_ASM, "asm", "as", "Assamese" },
// 030
    { EC_AST, "ast", "",   "Asturian" },
    { EC_ATH, "ath", "",   "Athapascan" },
    { EC_AUS, "aus", "",   "Australian" },
    { EC_AVA, "ava", "av", "Avaric" },
    { EC_AVE, "ave", "ae", "Avestan" },
    { EC_AWA, "awa", "",   "Awadhi" },
    { EC_AYM, "aym", "ay", "Aymara" },
    { EC_AZE, "aze", "az", "Azerbaijani" },
    { EC_BAD, "bad", "",   "Banda" },
    { EC_BAI, "bai", "",   "Bamileke" },
// 040
    { EC_BAK, "bak", "ba", "Bashkir" },
    { EC_BAL, "bal", "",   "Baluchi" },
    { EC_BAM, "bam", "bm", "Bambara" },
    { EC_BAN, "ban", "",   "Balinese" },
    { EC_BAQ, "baq", "eu", "Basque" },
    { EC_BAS, "bas", "",   "Basa" },
    { EC_BAT, "bat", "",   "Baltic" },
    { EC_BEJ, "bej", "",   "Beja" },
    { EC_BEL, "bel", "be", "Belarusian" },
    { EC_BEM, "bem", "",   "Bemba" },
// 050
    { EC_BEN, "ben", "bn", "Bengali" },
    { EC_BER, "ber", "",   "Berber" },
    { EC_BHO, "bho", "",   "Bhojpuri" },
    { EC_BIH, "bih", "bh", "Bihari" },
    { EC_BIK, "bik", "",   "Bikol" },
    { EC_BIN, "bin", "",   "Bini" },
    { EC_BIS, "bis", "bi", "Bislama" },
    { EC_BLA, "bla", "",   "Siksika" },
    { EC_BNT, "bnt", "",   "Bantu" },
    { EC_BOS, "bos", "bs", "Bosnian" },
// 060
    { EC_BRA, "bra", "",   "Braj" },
    { EC_BRE, "bre", "br", "Breton" },
    { EC_BTK, "btk", "",   "Batak" },
    { EC_BUA, "bua", "",   "Buriat" },
    { EC_BUG, "bug", "",   "Buginese" },
    { EC_BUL, "bul", "bg", "Bulgarian" },
    { EC_BUR, "bur", "my", "Burmese" },
    { EC_BYN, "byn", "",   "Blin" },
    { EC_CAD, "cad", "",   "Caddo" },
    { EC_CAI, "cai", "",   "Central American Indian" },
// 070
    { EC_CAR, "car", "",   "Carib" },
    { EC_CAT, "cat", "ca", "Catalan" },
    { EC_CAU, "cau", "",   "Caucasian" },
    { EC_CEB, "ceb", "",   "Cebuano" },
    { EC_CEL, "cel", "",   "Celtic" },
    { EC_CHA, "cha", "ch", "Chamorro" },
    { EC_CHB, "chb", "",   "Chibcha" },
    { EC_CHE, "che", "ce", "Chechen" },
    { EC_CHG, "chg", "",   "Chagatai" },
    { EC_CHI, "chi", "zh", "Chinese" },
// 080
    { EC_CHK, "chk", "",   "Chuukese" },
    { EC_CHM, "chm", "",   "Mari" },
    { EC_CHN, "chn", "",   "Chinook" },
    { EC_CHO, "cho", "",   "Choctaw" },
    { EC_CHP, "chp", "",   "Chipewyan" },
    { EC_CHR, "chr", "",   "Cherokee" },
    { EC_CHU, "chu", "cu", "Church Slavic" },
    { EC_CHV, "chv", "cv", "Chuvash" },
    { EC_CHY, "chy", "",   "Cheyenne" },
    { EC_CMC, "cmc", "",   "Chamic" },
// 090
    { EC_COP, "cop", "",   "Coptic" },
    { EC_COR, "cor", "kw", "Cornish" },
    { EC_COS, "cos", "co", "Corsican" },
    { EC_CPE, "cpe", "",   "Creoles, English" },
    { EC_CPF, "cpf", "",   "Creoles, French" },
    { EC_CPP, "cpp", "",   "Creoles, Portuguees" },
    { EC_CRE, "cre", "cr", "Cree" },
    { EC_CRH, "crh", "",   "Crimean Tatar" },
    { EC_CRP, "crp", "",   "Creoles, Other" },
    { EC_CSB, "csb", "",   "Kashubian" },
// 100
    { EC_CUS, "cus", "",   "Cushitic" },
    { EC_CZE, "cze", "cs", "Czech" },
    { EC_DAK, "dak", "",   "Dakota" },
    { EC_DAN, "dan", "da", "Danish" },
    { EC_DAR, "dar", "",   "Dargwa" },
    { EC_DAY, "day", "",   "Dayak" },
    { EC_DEL, "del", "",   "Delaware" },
    { EC_DEN, "den", "",   "Slave" },
    { EC_DGR, "dgr", "",   "Dogrib" },
    { EC_DIN, "din", "",   "Dinka" },
// 110
    { EC_DIV, "div", "dv", "Divehi" },
    { EC_DOI, "doi", "",   "Dogri" },
    { EC_DRA, "dra", "",   "Dravidian" },
    { EC_DSB, "dsb", "",   "Lower Sorbian" },
    { EC_DUA, "dua", "",   "Duala" },
    { EC_DUM, "dum", "",   "Dutch, Middle" },
    { EC_DUT, "dut", "nl", "Dutch" },
    { EC_DYU, "dyu", "",   "Dyula" },
    { EC_DZO, "dzo", "dz", "Dzongkha" },
    { EC_EFI, "efi", "",   "Efik" },
// 120
    { EC_EGY, "egy", "",   "Egyptian, Ancient" },
    { EC_EKA, "eka", "",   "Ekajuk" },
    { EC_ELX, "elx", "",   "Elamite" },
    { EC_ENG, "eng", "en", "English" },
    { EC_ENM, "enm", "",   "English, Middle" },
    { EC_EPO, "epo", "eo", "Esperanto" },
    { EC_EST, "est", "et", "Estonian" },
    { EC_EWE, "ewe", "ee", "Ewe" },
    { EC_EWO, "ewo", "",   "Ewondo" },
    { EC_FAN, "fan", "",   "Fang" },
// 130
    { EC_FAO, "fao", "fo", "Faroese" },
    { EC_FAT, "fat", "",   "Fanti" },
    { EC_FIJ, "fij", "fj", "Fijian" },
    { EC_FIL, "fil", "",   "Filipino" },
    { EC_FIN, "fin", "fi", "Finnish" },
    { EC_FIU, "fiu", "",   "Finno-Ugrian" },
    { EC_FON, "fon", "",   "Fon" },
    { EC_FRE, "fre", "fr", "French" },
    { EC_FRM, "frm", "",   "French, Middle" },
    { EC_FRO, "fro", "",   "French, Old" },
// 140
    { EC_FRR, "frr", "",   "Northern Frisian" },
    { EC_FRS, "frs", "",   "Eastern Frisian" },
    { EC_FRY, "fry", "fy", "Western Frisian" },
    { EC_FUL, "ful", "ff", "Fulah" },
    { EC_FUR, "fur", "",   "Friulian" },
    { EC_GAA, "gaa", "",   "Ga" },
    { EC_GAY, "gay", "",   "Gayo" },
    { EC_GBA, "gba", "",   "Gbaya" },
    { EC_GEM, "gem", "",   "Germanic" },
    { EC_GEO, "geo", "ka", "Georgian" },
// 150
    { EC_GER, "ger", "de", "German" },
    { EC_GEZ, "gez", "",   "Geez" },
    { EC_GIL, "gil", "",   "Gilbertese" },
    { EC_GLA, "gla", "gd", "Gaelic" },
    { EC_GLE, "gle", "ga", "Irish" },
    { EC_GLG, "glg", "gl", "Galician" },
    { EC_GLV, "glv", "gv", "Manx" },
    { EC_GMH, "gmh", "",   "German, Middle" },
    { EC_GOH, "goh", "",   "German, Old" },
    { EC_GON, "gon", "",   "Gondi" },
// 160
    { EC_GOR, "gor", "",   "Gorontalo" },
    { EC_GOT, "got", "",   "Gothic" },
    { EC_GRB, "grb", "",   "Grebo" },
    { EC_GRC, "grc", "",   "Greek, Ancient" },
    { EC_GRE, "gre", "el", "Greek" },
    { EC_GRN, "grn", "gn", "Guarani" },
    { EC_GSW, "gsw", "",   "Alemanic" },
    { EC_GUJ, "guj", "gu", "Gujarati" },
    { EC_GWI, "gwi", "",   "Gwicha'in" },
    { EC_HAI, "hai", "",   "Haida" },
// 170
    { EC_HAT, "hat", "ht", "Haitian" },
    { EC_HAU, "hau", "ha", "Hausa" },
    { EC_HAW, "haw", "",   "Hawaiian" },
    { EC_HEB, "heb", "he", "Hebrew" },
    { EC_HER, "her", "hz", "Herero" },
    { EC_HIL, "hil", "",   "Hiligaynon" },
    { EC_HIM, "him", "",   "Himachali" },
    { EC_HIN, "hin", "hi", "Hindi" },
    { EC_HIT, "hit", "",   "Hittite" },
    { EC_HMN, "hmn", "",   "Hmong" },
// 180
    { EC_HMO, "hmo", "ho", "Hiri Motu" },
    { EC_HSB, "hsb", "",   "Upper Sorbian" },
    { EC_HUN, "hun", "hu", "Hungarian" },
    { EC_HUP, "hup", "",   "Hupa" },
    { EC_IBA, "iba", "",   "Iban" },
    { EC_IBO, "ibo", "ig", "Igbo" },
    { EC_ICE, "ice", "is", "Icelandic" },
    { EC_IDO, "ido", "io", "Ido" },
    { EC_III, "iii", "ii", "Sichuan Yi" },
    { EC_IJO, "ijo", "",   "Ijo" },
// 190
    { EC_IKU, "iku", "iu", "Inuktitut" },
    { EC_ILE, "ile", "ie", "Interlingue" },
    { EC_ILO, "ilo", "",   "Iloko" },
    { EC_INA, "ina", "ia", "Interlingua" },
    { EC_INC, "inc", "",   "Indic" },
    { EC_IND, "ind", "id", "Indonesian" },
    { EC_INE, "ine", "",   "Indo-European" },
    { EC_INH, "inh", "",   "Ingush" },
    { EC_IPK, "ipk", "ik", "Inupiaq" },
    { EC_IRA, "ira", "",   "Iranian" },
// 200
    { EC_IRO, "iro", "",   "Iroquoian" },
    { EC_ITA, "ita", "it", "Italian" },
    { EC_JAV, "jav", "jv", "Javanese" },
    { EC_JBO, "jbo", "",   "Lojban" },
    { EC_JPN, "jpn", "ja", "Japanese" },
    { EC_JPR, "jpr", "",   "Judeo-Persian" },
    { EC_JRB, "jrb", "",   "Judeo-Arabic" },
    { EC_KAA, "kaa", "",   "Kara-Kalpak" },
    { EC_KAB, "kab", "",   "Kabyle" },
    { EC_KAC, "kac", "",   "Kachin" },
// 210
    { EC_KAL, "kal", "kl", "Kalaallisut" },
    { EC_KAM, "kam", "",   "Kamba" },
    { EC_KAN, "kan", "kn", "Kannada" },
    { EC_KAR, "kar", "",   "Karen" },
    { EC_KAS, "kas", "ks", "Kashmiri" },
    { EC_KAU, "kau", "kr", "Kanuri" },
    { EC_KAW, "kaw", "",   "Kawi" },
    { EC_KAZ, "kaz", "kk", "Kazakh" },
    { EC_KBD, "kbd", "",   "Kabardian" },
    { EC_KHA, "kha", "",   "Khasi" },
// 220
    { EC_KHI, "khi", "",   "Khoisan" },
    { EC_KHM, "khm", "km", "Khmer" },
    { EC_KHO, "kho", "",   "Khotanese" },
    { EC_KIK, "kik", "ki", "Kikuyu" },
    { EC_KIN, "kin", "rw", "Kinyarwanda" },
    { EC_KIR, "kir", "ky", "Kirghiz" },
    { EC_KMB, "kmb", "",   "Kimbundu" },
    { EC_KOK, "kok", "",   "Konkani" },
    { EC_KOM, "kom", "kv", "Komi" },
    { EC_KON, "kon", "kg", "Kongo" },
// 230
    { EC_KOR, "kor", "ko", "Korean" },
    { EC_KOS, "kos", "",   "Kosraean" },
    { EC_KPE, "kpe", "",   "Kpelle" },
    { EC_KRC, "krc", "",   "Karachay-Balkar" },
    { EC_KRL, "krl", "",   "Karelian" },
    { EC_KRO, "kro", "",   "Kru" },
    { EC_KRU, "kru", "",   "Kurukh" },
    { EC_KUA, "kua", "kj", "Kuanyama" },
    { EC_KUM, "kum", "",   "Kumyk" },
    { EC_KUR, "kur", "ku", "Kurdish" },
// 240
    { EC_KUT, "kut", "",   "Kutenai" },
    { EC_LAD, "lad", "",   "Ladino" },
    { EC_LAH, "lah", "",   "Lahnda" },
    { EC_LAM, "lam", "",   "Lamba" },
    { EC_LAO, "lao", "lo", "Lao" },
    { EC_LAT, "lat", "la", "Latin" },
    { EC_LAV, "lav", "lv", "Latvian" },
    { EC_LEZ, "lez", "",   "Lezghian" },
    { EC_LIM, "lim", "li", "Limburgan" },
    { EC_LIN, "lin", "ln", "Lingala" },
// 250
    { EC_LIT, "lit", "lt", "Lithuanian" },
    { EC_LOL, "lol", "",   "Mongo" },
    { EC_LOZ, "loz", "",   "Lozi" },
    { EC_LTZ, "ltz", "lb", "Luxembourgish" },
    { EC_LUA, "lua", "",   "Luba-Lulua" },
    { EC_LUB, "lub", "lu", "Luba-Katanga" },
    { EC_LUG, "lug", "lg", "Ganda" },
    { EC_LUI, "lui", "",   "Luiseno" },
    { EC_LUN, "lun", "",   "Lunda" },
    { EC_LUO, "luo", "",   "Luo" },
// 260
    { EC_LUS, "lus", "",   "Lushai" },
    { EC_MAC, "mac", "mk", "Macedonian" },
    { EC_MAD, "mad", "",   "Madurese" },
    { EC_MAG, "mag", "",   "Magahi" },
    { EC_MAH, "mah", "mh", "Marshallese" },
    { EC_MAI, "mai", "",   "Maithili" },
    { EC_MAK, "mak", "",   "Makasar" },
    { EC_MAL, "mal", "ml", "Malayalam" },
    { EC_MAN, "man", "",   "Mandingo" },
    { EC_MAO, "mao", "mi", "Maori" },
// 270
    { EC_MAP, "map", "",   "Austronesian" },
    { EC_MAR, "mar", "mr", "Marathi" },
    { EC_MAS, "mas", "",   "Masai" },
    { EC_MAY, "may", "ms", "Malay" },
    { EC_MDF, "mdf", "",   "Moksha" },
    { EC_MDR, "mdr", "",   "Mandar" },
    { EC_MEN, "men", "",   "Mende" },
    { EC_MGA, "mga", "",   "Irish, Middle" },
    { EC_MIC, "mic", "",   "Mi'kmaq" },
    { EC_MIN, "min", "",   "Minangkabau" },//    { EC_MIS, "mis", "",   "Miscellaneous" },
// 280
    { EC_MKH, "mkh", "",   "Mon-Khmer" },
    { EC_MLG, "mlg", "mg", "Malagasy" },
    { EC_MLT, "mlt", "mt", "Maltese" },
    { EC_MNC, "mnc", "",   "Manchu" },
    { EC_MNI, "mni", "",   "Manipuri" },
    { EC_MNO, "mno", "",   "Manobo" },
    { EC_MOH, "moh", "",   "Mohawk" },
    { EC_MOL, "mol", "mo", "Moldavian" },
    { EC_MON, "mon", "mn", "Mongolian" },
    { EC_MOS, "mos", "",   "Mossi" },
// 290
    { EC_MUL, "mul", "",   "Multiple" },
    { EC_MUN, "mun", "",   "Munda" },
    { EC_MUS, "mus", "",   "Creek" },
    { EC_MWL, "mwl", "",   "Mirandese" },
    { EC_MWR, "mwr", "",   "Marwari" },
    { EC_MYN, "myn", "",   "Mayan" },
    { EC_MYV, "myv", "",   "Erzya" },
    { EC_NAH, "nah", "",   "Nahuatl" },
    { EC_NAI, "nai", "",   "North American Indian" },
    { EC_NAP, "nap", "",   "Neapolitan" },
// 300
    { EC_NAU, "nau", "na", "Nauru" },
    { EC_NAV, "nav", "nv", "Navajo" },
    { EC_NBL, "nbl", "nr", "Ndebele, South" },
    { EC_NDE, "nde", "nd", "Ndebele, North" },
    { EC_NDO, "ndo", "ng", "Ndonga" },
    { EC_NDS, "nds", "",   "Low German" },
    { EC_NEP, "nep", "ne", "Nepali" },
    { EC_NEW, "new", "",   "Newari" },
    { EC_NIA, "nia", "",   "Nias" },
    { EC_NIC, "nic", "",   "Niger-Kordofanian" },
// 310
    { EC_NIU, "niu", "",   "Niuean" },
    { EC_NNO, "nno", "nn", "Norwegian Nynorsk" },
    { EC_NOB, "nob", "nb", "Norwegian Bokmal" },
    { EC_NOG, "nog", "",   "Nogai" },
    { EC_NON, "non", "",   "Norse" },
    { EC_NOR, "nor", "no", "Norwegian" },
    { EC_NSO, "nso", "",   "Northern Sotho" },
    { EC_NUB, "nub", "",   "Nubian" },
    { EC_NWC, "nwc", "",   "Classical Newari" },
    { EC_NYA, "nya", "ny", "Chichewa" },
// 320
    { EC_NYM, "nym", "",   "Nyamwezi" },
    { EC_NYN, "nyn", "",   "Nyankole" },
    { EC_NYO, "nyo", "",   "Nyoro" },
    { EC_NZI, "nzi", "",   "Nzima" },
    { EC_OCI, "oci", "oc", "Occitan" },
    { EC_OJI, "oji", "oj", "Ojibwa" },
    { EC_ORI, "ori", "or", "Oriya" },
    { EC_ORM, "orm", "om", "Oromo" },
    { EC_OSA, "osa", "",   "Osage" },
    { EC_OSS, "oss", "os", "Ossetian" },
// 330
    { EC_OTA, "ota", "",   "Turkish, Ottoman" },
    { EC_OTO, "oto", "",   "Otomian" },
    { EC_PAA, "paa", "",   "Papuan" },
    { EC_PAG, "pag", "",   "Pangasinan" },
    { EC_PAL, "pal", "",   "Pahlavi" },
    { EC_PAM, "pam", "",   "Pampanga" },
    { EC_PAN, "pan", "pa", "Panjabi" },
    { EC_PAP, "pap", "",   "Papiamento" },
    { EC_PAU, "pau", "",   "Palauan" },
    { EC_PEO, "peo", "",   "Persian, Old" },
// 340
    { EC_PER, "per", "fa", "Persian" },
    { EC_PHI, "phi", "",   "Philippine" },
    { EC_PHN, "phn", "",   "Phoenician" },
    { EC_PLI, "pli", "pi", "Pali" },
    { EC_POL, "pol", "pl", "Polish" },
    { EC_PON, "pon", "",   "Pohnpeian" },
    { EC_POR, "por", "pt", "Portuguese" },
    { EC_PRA, "pra", "",   "Prakrit" },
    { EC_PRO, "pro", "",   "Provencal, Old" },
    { EC_PUS, "pus", "ps", "Pushto" },
// 350
    { EC_QUE, "que", "qu", "Quechua" },
    { EC_RAJ, "raj", "",   "Rajasthani" },
    { EC_RAP, "rap", "",   "Rapanui" },
    { EC_RAR, "rar", "",   "Rarotongan" },
    { EC_ROA, "roa", "",   "Romance" },
    { EC_ROH, "roh", "rm", "Raeto-Romance" },
    { EC_ROM, "rom", "",   "Romany" },
    { EC_RUM, "rum", "ro", "Romanian" },
    { EC_RUN, "run", "rn", "Rundi" },
    { EC_RUP, "rup", "",   "Aromanian" },
// 360
    { EC_RUS, "rus", "ru", "Russian" },
    { EC_SAD, "sad", "",   "Sandawe" },
    { EC_SAG, "sag", "sg", "Sango" },
    { EC_SAH, "sah", "",   "Yakut" },
    { EC_SAI, "sai", "",   "South American Indian" },
    { EC_SAL, "sal", "",   "Salishan" },
    { EC_SAM, "sam", "",   "Samaritan Aramaic" },
    { EC_SAN, "san", "sa", "Sanskrit" },
    { EC_SAS, "sas", "",   "Sasak" },
    { EC_SAT, "sat", "",   "Santali" },
// 370
    { EC_SCC, "scc", "sr", "Serbian" },
    { EC_SCN, "scn", "",   "Sicilian" },
    { EC_SCO, "sco", "",   "Scots" },
    { EC_SCR, "scr", "hr", "Croatian" },
    { EC_SEL, "sel", "",   "Selkup" },
    { EC_SEM, "sem", "",   "Semitic" },
    { EC_SGA, "sga", "",   "Irish, Old" }, //    { EC_SGN, "sgn", "",   "Sign Languages" },
    { EC_SHN, "shn", "",   "Shan" },
    { EC_SID, "sid", "",   "Sidamo" },
    { EC_SIN, "sin", "si", "Sinhala" },
// 380
    { EC_SIO, "sio", "",   "Siouan" },
    { EC_SIT, "sit", "",   "Sino-Tibetan" },
    { EC_SLA, "sla", "",   "Slavic" },
    { EC_SLO, "slo", "sk", "Slovak" },
    { EC_SLV, "slv", "sl", "Slovenian" },
    { EC_SMA, "sma", "",   "Southern Sami" },
    { EC_SME, "sme", "se", "Northern Sami" },
    { EC_SMI, "smi", "",   "Sami" },
    { EC_SMJ, "smj", "",   "Lule Sami" },
    { EC_SMN, "smn", "",   "Inari Sami" },
// 390
    { EC_SMO, "smo", "sm", "Samoan" },
    { EC_SMS, "sms", "",   "Skolt Sami" },
    { EC_SNA, "sna", "sn", "Shona" },
    { EC_SND, "snd", "sd", "Sindhi" },
    { EC_SNK, "snk", "",   "Soninke" },
    { EC_SOG, "sog", "",   "Sogdian" },
    { EC_SOM, "som", "so", "Somali" },
    { EC_SON, "son", "",   "Songhai" },
    { EC_SOT, "sot", "st", "Sotho, Southern" },
    { EC_SPA, "spa", "es", "Spanish" },
// 400
    { EC_SRD, "srd", "sc", "Sardinian" },
    { EC_SRN, "srn", "",   "Sranan Togo" },
    { EC_SRR, "srr", "",   "Serer" },
    { EC_SSA, "ssa", "",   "Nilo-Saharan" },
    { EC_SSW, "ssw", "ss", "Swati" },
    { EC_SUK, "suk", "",   "Sukuma" },
    { EC_SUN, "sun", "su", "Sundanese" },
    { EC_SUS, "sus", "",   "Susu" },
    { EC_SUX, "sux", "",   "Sumerian" },
    { EC_SWA, "swa", "sw", "Swahili" },
// 410
    { EC_SWE, "swe", "sv", "Swedish" },
    { EC_SYR, "syr", "",   "Syriac" },
    { EC_TAH, "tah", "ty", "Tahitian" },
    { EC_TAI, "tai", "",   "Tai" },
    { EC_TAM, "tam", "ta", "Tamil" },
    { EC_TAT, "tat", "tt", "Tatar" },
    { EC_TEL, "tel", "te", "Telugu" },
    { EC_TEM, "tem", "",   "Timne" },
    { EC_TER, "ter", "",   "Tereno" },
    { EC_TET, "tet", "",   "Tetum" },
// 420
    { EC_TGK, "tgk", "tg", "Tajik" },
    { EC_TGL, "tgl", "tl", "Tagalog" },
    { EC_THA, "tha", "th", "Thai" },
    { EC_TIB, "tib", "bo", "Tibetan" },
    { EC_TIG, "tig", "",   "Tigre" },
    { EC_TIR, "tir", "ti", "Tigrinya" },
    { EC_TIV, "tiv", "",   "Tiv" },
    { EC_TKL, "tkl", "",   "Tokelau" },
    { EC_TLH, "tlh", "",   "Klingon" },
    { EC_TLI, "tli", "",   "Tlingit" },
// 430
    { EC_TMH, "tmh", "",   "Tamashek" },
    { EC_TOG, "tog", "",   "Tonga, Nyasa" },
    { EC_TON, "ton", "to", "Tonga, Tonga Islands" },
    { EC_TPI, "tpi", "",   "Tok Pisin" },
    { EC_TSI, "tsi", "",   "Tsimshian" },
    { EC_TSN, "tsn", "tn", "Tswana" },
    { EC_TSO, "tso", "ts", "Tsonga" },
    { EC_TUK, "tuk", "tk", "Turkmen" },
    { EC_TUM, "tum", "",   "Tumbuka" },
    { EC_TUP, "tup", "",   "Tupi" },
// 440
    { EC_TUR, "tur", "tr", "Turkish" },
    { EC_TUT, "tut", "",   "Altaic" },
    { EC_TVL, "tvl", "",   "Tuvalu" },
    { EC_TWI, "twi", "tw", "Twi" },
    { EC_TYV, "tyv", "",   "Tuvinian" },
    { EC_UDM, "udm", "",   "Udmurt" },
    { EC_UGA, "uga", "",   "Ugaritic" },
    { EC_UIG, "uig", "ug", "Uighur" },
    { EC_UKR, "ukr", "uk", "Ukrainian" },
    { EC_UMB, "umb", "",   "Umbundu" },
// 450
    { EC_UND, "und", "",   "Undetermined" },
    { EC_URD, "urd", "ur", "Urdu" },
    { EC_UZB, "uzb", "uz", "Uzbek" },
    { EC_VAI, "vai", "",   "Vai" },
    { EC_VEN, "ven", "ve", "Venda" },
    { EC_VIE, "vie", "vi", "Vietnamese" },
    { EC_VOL, "vol", "vo", "Volapuk" },
    { EC_VOT, "vot", "",   "Votic" },
    { EC_WAK, "wak", "",   "Wakashan" },
    { EC_WAL, "wal", "",   "Walamo" },
// 460
    { EC_WAR, "war", "",   "Waray" },
    { EC_WAS, "was", "",   "Washo" },
    { EC_WEL, "wel", "cy", "Welsh" },
    { EC_WEN, "wen", "",   "Sorbian" },
    { EC_WLN, "wln", "wa", "Walloon" },
    { EC_WOL, "wol", "wo", "Wolof" },
    { EC_XAL, "xal", "",   "Kalmyk" },
    { EC_XHO, "xho", "xh", "Xhosa" },
    { EC_YAO, "yao", "",   "Yao" },
    { EC_YAP, "yap", "",   "Yapese" },
// 470
    { EC_YID, "yid", "yi", "Yiddish" },
    { EC_YOR, "yor", "yo", "Yoruba" },
    { EC_YPK, "ypk", "",   "Yupik" },
    { EC_ZAP, "zap", "",   "Zapotec" },
    { EC_ZEN, "zen", "",   "Zenaga" },
    { EC_ZHA, "zha", "za", "Zhuang" },
    { EC_ZND, "znd", "",   "Zande" },
    { EC_ZUL, "zul", "zu", "Zulu" },
    { EC_ZUN, "zun", "",   "Zuni" },
    { EC_NUL, "zzz", "zz", "null" }
  };

  const unsigned long Lang::languages_count_ =
    sizeof(Lang::languages_) / sizeof(Lang::languages_[0]) - 1;
  
}
