<<<<<<< HEAD
# $PostgreSQL: pgsql/src/pl/plpgsql/src/nls.mk,v 1.9.2.1 2009/09/03 21:01:23 petere Exp $
CATALOG_NAME	:= plpgsql
AVAIL_LANGUAGES	:= de es fr it ja ro
=======
# $PostgreSQL: pgsql/src/pl/plpgsql/src/nls.mk,v 1.9 2009/06/26 19:33:52 petere Exp $
CATALOG_NAME	:= plpgsql
AVAIL_LANGUAGES	:= de es fr ja ro
>>>>>>> 4d53a2f9699547bdc12831d2860c9d44c465e805
GETTEXT_FILES	:= pl_comp.c pl_exec.c pl_gram.c pl_funcs.c pl_handler.c pl_scan.c
GETTEXT_TRIGGERS:= _ errmsg errmsg_plural:1,2 errdetail errdetail_log errdetail_plural:1,2 errhint errcontext validate_tupdesc_compat:3 yyerror plpgsql_yyerror

.PHONY: gettext-files
gettext-files: distprep
