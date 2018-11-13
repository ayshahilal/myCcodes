{\rtf1\ansi\ansicpg1254\cocoartf1504\cocoasubrtf830
{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;\f1\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red100\green56\blue32;\red255\green255\blue255;\red196\green26\blue22;
\red170\green13\blue145;\red0\green0\blue0;\red28\green0\blue207;\red46\green13\blue110;\red38\green71\blue75;
}
{\*\expandedcolortbl;;\csgenericrgb\c39100\c22000\c12500;\csgenericrgb\c100000\c100000\c100000;\csgenericrgb\c77000\c10200\c8600;
\csgenericrgb\c66500\c5200\c56900;\csgenericrgb\c0\c0\c0;\csgenericrgb\c11000\c0\c81000;\csgenericrgb\c18100\c5200\c43100;\csgenericrgb\c14900\c27800\c29400;
}
\paperw11900\paperh16840\margl1440\margr1440\vieww28600\viewh15460\viewkind0
\deftab989
\pard\tx989\pardeftab989\pardirnatural\partightenfactor0

\f0\fs40 \cf2 \cb3 #include \cf4 <stdlib.h>
\f1\fs24 \cf0 \

\f0\fs40 \cf2 #include \cf4 <stdio.h>
\f1\fs24 \cf0 \

\f0\fs40 \cf2 #include \cf4 <string.h>
\f1\fs24 \cf0 \
\

\f0\fs40 \cf5 int\cf6  *generic( \cf5 unsigned\cf6  \cf5 int\cf6  *a,\cf5 int\cf6  n,\cf5 int\cf6  m,\cf5 void\cf6  (*fp)\ulth ()\ulnone  )\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 for\cf6 (\cf5 int\cf6  i=\cf7 0\cf6 ;i<n;i++)\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6         \cf5 for\cf6 (\cf5 int\cf6  j=\cf7 0\cf6 ;j<m;j++)\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6             (*fp)(&a[i]);
\f1\fs24 \cf0 \

\f0\fs40 \cf6         \}
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \}
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 return\cf6  \ulth a\ulnone ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6 \}
\f1\fs24 \cf0 \
\
\

\f0\fs40 \cf5 void\cf6  sagakaydir(\cf5 unsigned\cf6  \cf5 int\cf6  *a)\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \ulth (*a\ulnone )\ulth >\ulnone >\cf7 \ulth \ulc7 1\cf6 \ulnone ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6 \}
\f1\fs24 \cf0 \
\

\f0\fs40 \cf5 void\cf6  solakaydir(\cf5 unsigned\cf6  \cf5 int\cf6  *a)\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \ulth (*a\ulnone )\ulth <\ulnone <\cf7 \ulth 1\cf6 \ulnone ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6 \}
\f1\fs24 \cf0 \
\

\f0\fs40 \cf5 int\cf6  main() \{
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 unsigned\cf6  \cf5 int\cf6  *a;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 void\cf6  (*fp)\ulth ()\ulnone ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 int\cf6  i,n=\cf7 5\cf6 ,m=\cf7 3\cf6 ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     a=(\cf5 unsigned\cf6  \cf5 int\cf6  *)\cf8 malloc\cf6 (n*\cf5 sizeof\cf6 (\cf5 unsigned\cf6  \cf5 int\cf6 ));
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 int\cf6  secim;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 for\cf6 (i=\cf7 0\cf6 ;i<n;i++)\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6         \cf8 printf\cf6 (\cf4 "dizi elemanlari ?"\cf6 );
\f1\fs24 \cf0 \

\f0\fs40 \cf6         \cf8 scanf\cf6 (\cf4 "%d"\cf6 , &a[i]);
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \}
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf8 printf\cf6 (\cf4 "sag shift icin 0, sol shift icin 1"\cf6 );
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf8 scanf\cf6 (\cf4 "%d"\cf6 , &secim);
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 if\cf6 (secim==\cf7 0\cf6 )\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6         fp= \cf9 sagakaydir\cf6 ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \}
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 else\cf6  \cf5 if\cf6 (secim==\cf7 1\cf6 )\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6         fp= \cf9 solakaydir\cf6 ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \}
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 else\cf6  \{
\f1\fs24 \cf0 \

\f0\fs40 \cf6         \cf8 printf\cf6 (\cf4 "hatali"\cf6 );
\f1\fs24 \cf0 \

\f0\fs40 \cf6         \cf5 return\cf6  \cf7 1\cf6 ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \}
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 unsigned\cf6  \cf5 int\cf6  *yenidizi;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 unsigned\cf6  \cf5 int\cf6  *p;
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     yenidizi=(\cf5 unsigned\cf6  \cf5 int\cf6  *)\cf8 malloc\cf6 (n*\cf5 sizeof\cf6 (\cf5 unsigned\cf6  \cf5 int\cf6 ));
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     p\ulth =\ulnone  \cf9 \ulth \ulc9 generic\cf6 \ulc6 ( a, n, m, fp\ulnone );
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 for\cf6 (i=\cf7 0\cf6 ;i<n;i++)\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6         yenidizi[i]=p[i];
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \}
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 for\cf6 (\cf5 int\cf6  j=\cf7 0\cf6 ;j<n;j++)\{
\f1\fs24 \cf0 \

\f0\fs40 \cf6         \cf8 printf\cf6 (\cf4 "%d  "\cf6 , yenidizi[j] );
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \}
\f1\fs24 \cf0 \

\f0\fs40 \cf6     
\f1\fs24 \cf0 \

\f0\fs40 \cf6     \cf5 return\cf6  \cf7 0\cf6 ;
\f1\fs24 \cf0 \

\f0\fs40 \cf6 \}
\f1\fs24 \cf0 \
}