/*
 * psql - the PostgreSQL interactive terminal
 *
 * Copyright (c) 2000-2010, PostgreSQL Global Development Group
 *
<<<<<<< HEAD
 * src/bin/psql/describe.h
=======
 * $PostgreSQL: pgsql/src/bin/psql/describe.h,v 1.40 2009/04/21 15:49:06 momjian Exp $
>>>>>>> 4d53a2f9699547bdc12831d2860c9d44c465e805
 */
#ifndef DESCRIBE_H
#define DESCRIBE_H


/* \da */
extern bool describeAggregates(const char *pattern, bool verbose, bool showSystem);

/* \db */
extern bool describeTablespaces(const char *pattern, bool verbose);

/* \df, \dfa, \dfn, \dft, \dfw, etc. */
extern bool describeFunctions(const char *functypes, const char *pattern, bool verbose, bool showSystem);

/* \dT */
extern bool describeTypes(const char *pattern, bool verbose, bool showSystem);

/* \do */
extern bool describeOperators(const char *pattern, bool showSystem);

/* \du, \dg */
extern bool describeRoles(const char *pattern, bool verbose);

/* \drds */
extern bool listDbRoleSettings(const char *pattern1, const char *pattern2);

/* \z (or \dp) */
extern bool permissionsList(const char *pattern);

/* \ddp */
extern bool listDefaultACLs(const char *pattern);

/* \dd */
extern bool objectDescription(const char *pattern, bool showSystem);

/* \d foo */
extern bool describeTableDetails(const char *pattern, bool verbose, bool showSystem);
<<<<<<< HEAD

/* \dF */
extern bool listTSConfigs(const char *pattern, bool verbose);

/* \dFp */
extern bool listTSParsers(const char *pattern, bool verbose);

/* \dFd */
extern bool listTSDictionaries(const char *pattern, bool verbose);

/* \dFt */
extern bool listTSTemplates(const char *pattern, bool verbose);
=======
>>>>>>> 4d53a2f9699547bdc12831d2860c9d44c465e805

/* \dF */
extern bool listTSConfigs(const char *pattern, bool verbose);

/* \dFp */
extern bool listTSParsers(const char *pattern, bool verbose);

/* \dFd */
extern bool listTSDictionaries(const char *pattern, bool verbose);

/* \dFt */
extern bool listTSTemplates(const char *pattern, bool verbose);

/* \l */
extern bool listAllDbs(bool verbose);

/* \dt, \di, \ds, \dS, etc. */
extern bool listTables(const char *tabtypes, const char *pattern, bool verbose, bool showSystem);

/* \dD */
extern bool listDomains(const char *pattern, bool showSystem);

/* \dc */
extern bool listConversions(const char *pattern, bool showSystem);

/* \dC */
extern bool listCasts(const char *pattern);

/* \dn */
extern bool listSchemas(const char *pattern, bool verbose);

/* \dew */
extern bool listForeignDataWrappers(const char *pattern, bool verbose);

/* \des */
extern bool listForeignServers(const char *pattern, bool verbose);

/* \deu */
extern bool listUserMappings(const char *pattern, bool verbose);

/* \dx */
extern bool listExtensions(const char *pattern);

/* \dx+ */
extern bool listExtensionContents(const char *pattern);

#endif   /* DESCRIBE_H */
