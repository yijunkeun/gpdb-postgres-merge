<<<<<<< HEAD
# src/pl/plperl/nls.mk
CATALOG_NAME	:= plperl
AVAIL_LANGUAGES	:=
=======
# $PostgreSQL: pgsql/src/pl/plperl/nls.mk,v 1.7 2009/06/10 23:42:44 petere Exp $
CATALOG_NAME	:= plperl
AVAIL_LANGUAGES	:= de es fr ja pt_BR tr
>>>>>>> 4d53a2f9699547bdc12831d2860c9d44c465e805
GETTEXT_FILES	:= plperl.c SPI.c
GETTEXT_TRIGGERS:= errmsg errmsg_plural:1,2 errdetail errdetail_log errdetail_plural:1,2 errhint errcontext
