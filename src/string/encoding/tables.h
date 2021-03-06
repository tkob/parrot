/* ex: set ro ft=c: -*- buffer-read-only:t -*-
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *
 * This file is generated automatically from 'tools/dev/gen_charset_tables.pl'.
 *
 * Generate the 8-bit character set classification table for
 * en_US.iso88591. Unicode is managed by icu.
 *
 * Convenient definitions are: WHITESPACE, WORDCHAR, PUNCTUATION, DIGIT.
 * See F<include/parrot/cclass.h> for all.
 *
 * Copyright (C) 2005-2014, Parrot Foundation.
 */

/* HEADERIZER HFILE: none */


#ifndef PARROT_CHARSET_TABLES_H_GUARD
#define PARROT_CHARSET_TABLES_H_GUARD
#include "parrot/cclass.h"
#include "parrot/parrot.h"
#define WHITESPACE  enum_cclass_whitespace
#define WORDCHAR    enum_cclass_word
#define PUNCTUATION enum_cclass_punctuation
#define DIGIT       enum_cclass_numeric
extern const INTVAL Parrot_iso_8859_1_typetable[256];
#endif /* PARROT_CHARSET_TABLES_H_GUARD */
/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4 cinoptions='\:2=2' :
 */

