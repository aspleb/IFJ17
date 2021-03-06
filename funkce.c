#include "funkce.h"
#include "lexikalni_analyzator.h"
//#include "garbage_collector.h"

/* globalni promenna */
tStav stav = EOK;
int radek = 1;
int sloupec = 1;

/**
 * Nazvy jednotlivych chyb
 */
const char *tError_mena[] =
{
    "",
    "Chyba v ramci lexikalne analyzy\0",
    "Chyba v ramci syntakticke analyzy\0",
    "Chyba v ramci semanticke analyzy\0",
    "Chyba interpretace\0",
    "Interna chyba prekladace\0"
};

/**
 * Vypise chybu
 */
void perr(void)
{
    fprintf(stderr, "%s radek:%d sloupec %d\n", tError_mena[error], token.riadok,token.stlpec);
}

void perrdet()
{
    fprintf(stderr, "%s na riadku %3d stlpci %3d\n", tError_mena[error], riadok, stlpec);
}

