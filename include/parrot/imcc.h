/*
 * Copyright (C) 2007-2010, Parrot Foundation.
 */

#ifndef PARROT_IMCC_H_GUARD
#define PARROT_IMCC_H_GUARD

PARROT_EXPORT int imcc_run(PARROT_INTERP, const char *sourcefile, int argc, const char **argv, ARGOUT(PMC **pbcpmc));

#endif /* PARROT_IMCC_H_GUARD */

/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4 cinoptions='\:2=2' :
 */
