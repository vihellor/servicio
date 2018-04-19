#!/bin/bash

#Script que reciba un GID e indique que cuentas pertenecen a ese grupo



cat passwd | cut -d ":" -f1,4  | egrep $1 | cut -d ":" -f1


