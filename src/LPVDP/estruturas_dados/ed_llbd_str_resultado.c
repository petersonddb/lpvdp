/**
 *   LPVDP - Layered Parallel Virtual Distributed Platform
 *   Copyright (C) 2018 Peterson Daronch de Bem (petersondaronch@gmail.com)
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published by
 *   the Free Software Foundation, version 3 of the License.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <ed_lista_linear_bidirecional.h>

#include <stdlib.h>
#include <string.h>

/* constantes */
#define ED_LLBD_CRIADA_MSG \
    "list created"
#define ED_LLBD_VAZIA_MSG \
    "list are empty"
#define ED_LLBD_NAO_VAZIA_MSG \
    "list are not empty"
#define ED_LLBD_DESLOCAMENTOS_INVERTIDOS_MSG \
    "negative number of bytes"
#define ED_LLBD_NULA_MSG \
    "null list"
#define ED_LLBD_NO_NULO_MSG \
    "null node"
#define ED_LLBD_PADRAO_NULO_MSG \
    "null pattern"
#define ED_LLBD_NO_ENCONTRADO_MSG \
    "node found"
#define ED_LLBD_NO_NAO_ENCONTRADO_MSG \
    "node not found"
#define ED_LLBD_NO_ATUALIZADO_MSG \
    "node updated"
#define ED_LLBD_NO_REMOVIDO_MSG \
    "node removed from the list"
#define ED_LLBD_ATUALIZADA_MSG \
    "list updated"
#define ED_LLBD_NO_CRIADO_MSG \
    "node created"
#define ED_LLBD_RESULTADO_DESCONHECIDO_MSG \
    "unknown"

/**
 * retorna um texto explicando
 * um resultado
 * @param codigo o código do resultado
 * @return uma string explicando o resultado de código codigo
 */
char *ed_llbd_str_resultado(ed_llbd_resultado resultado) {
    char *msg;
    switch(resultado) {
        case ED_LLBD_CRIADA:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_CRIADA_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_CRIADA_MSG);
            break;
        case ED_LLBD_VAZIA:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_VAZIA_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_VAZIA_MSG);
            break;
        case ED_LLBD_NAO_VAZIA:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_NAO_VAZIA_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_NAO_VAZIA_MSG);
            break;
        case ED_LLBD_DESLOCAMENTOS_INVERTIDOS:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_DESLOCAMENTOS_INVERTIDOS_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_DESLOCAMENTOS_INVERTIDOS_MSG);
            break;
        case ED_LLBD_NULA:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_NULA_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_NULA_MSG);
            break;
        case ED_LLBD_NO_NULO:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_NO_NULO_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_NO_NULO_MSG);
            break;
        case ED_LLBD_PADRAO_NULO:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_PADRAO_NULO_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_PADRAO_NULO_MSG);
            break;
        case ED_LLBD_NO_ENCONTRADO:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_NO_ENCONTRADO_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_NO_ENCONTRADO_MSG);
            break;
        case ED_LLBD_NO_NAO_ENCONTRADO:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_NO_NAO_ENCONTRADO_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_NO_NAO_ENCONTRADO_MSG);
            break;
        case ED_LLBD_NO_ATUALIZADO:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_NO_ATUALIZADO_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_NO_ATUALIZADO_MSG);
            break;
        case ED_LLBD_NO_REMOVIDO:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_NO_REMOVIDO_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_NO_REMOVIDO_MSG);
            break;
        case ED_LLBD_ATUALIZADA:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_ATUALIZADA_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_ATUALIZADA_MSG);
            break;
        case ED_LLBD_NO_CRIADO:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_NO_CRIADO_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_NO_CRIADO_MSG);
            break;
        default:
            msg = (char *) malloc(sizeof(char) * strlen(ED_LLBD_RESULTADO_DESCONHECIDO_MSG) + sizeof(char));
            strcpy(msg, ED_LLBD_RESULTADO_DESCONHECIDO_MSG);
    }
    return msg;
}
