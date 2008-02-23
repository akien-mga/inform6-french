#!/bin/bash
cat fichier.txt | sed -e "s/S'/S[\']/g" | sed -e "s/N'/N[\']/g" | sed -e "s/L'/L[\']/g" | sed -e "s/C'/C[\']/g" | sed -e "s/D'/D[\']/g" | sed -e "s/J'/J[\']/g" | sed -e "s/M'/M[\']/g"  | sed -e "s/U'/U[\']/g" > fichier.tmp
cat fichier.tmp | sed -e "s/s'/s[\']/g" | sed -e "s/ n'/ n[\']/g" | sed -e "s/l'/l[\']/g" | sed -e "s/ c'/ c[\']/g" | sed -e "s/d'/d[\']/g" | sed -e "s/j'/j[\']/g" | sed -e "s/m'/m[\']/g" | sed -e "s/u'/u[\']/g"  > fichier2.txt
rm fichier.tmp
