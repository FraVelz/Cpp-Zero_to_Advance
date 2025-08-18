Aquí tienes una lista de **comandos útiles en Vim** para moverte, editar, copiar y trabajar rápido sin salir al sistema:

---

## **🖱 Navegación**

| Comando | Acción                               |
| ------- | ------------------------------------ |
| `h`     | Mover a la izquierda                 |
| `l`     | Mover a la derecha                   |
| `0`     | Ir al inicio de la línea             |
| `^`     | Ir al primer carácter no vacío       |
| `$`     | Ir al final de la línea              |
| `w`     | Ir al inicio de la siguiente palabra |
| `e`     | Ir al final de la palabra            |
| `b`     | Ir al inicio de la palabra actual    |
| `gg`    | Ir al inicio del archivo             |
| `G`     | Ir al final del archivo              |
| `:{n}`  | Ir a la línea `{n}` (ej. `:15`)      |

---

## **✏ Edición**

| Comando    | Acción                                   |
| ---------- | ---------------------------------------- |
| `i`        | Insertar antes del cursor                |
| `a`        | Insertar después del cursor              |
| `o`        | Insertar nueva línea debajo              |
| `O`        | Insertar nueva línea arriba              |
| `x`        | Borrar carácter bajo el cursor           |
| `dd`       | Borrar línea actual                      |
| `D`        | Borrar desde cursor hasta final de línea |
| `u`        | Deshacer                                 |
| `Ctrl + r` | Rehacer                                  |
| `r{char}`  | Reemplazar carácter actual por `{char}`  |
| `R`        | Modo reemplazo continuo                  |

---

## **📋 Copiar y pegar**

| Comando | Acción                                  |
| ------- | --------------------------------------- |
| `yy`    | Copiar línea actual                     |
| `nyy`   | Copiar `n` líneas (ej. `3yy`)           |
| `p`     | Pegar debajo                            |
| `P`     | Pegar encima                            |
| `:%y`   | Copiar todo el archivo                  |
| `:%y+`  | Copiar todo al portapapeles del sistema |

---

## **🔍 Búsqueda y reemplazo**

| Comando              | Acción                                |
| -------------------- | ------------------------------------- |
| `/texto`             | Buscar hacia adelante                 |
| `?texto`             | Buscar hacia atrás                    |
| `n`                  | Repetir búsqueda en misma dirección   |
| `N`                  | Repetir búsqueda en dirección opuesta |
| `:%s/viejo/nuevo/g`  | Reemplazar todas las ocurrencias      |
| `:%s/viejo/nuevo/gc` | Reemplazar con confirmación           |

---

## **📦 Modo visual**

| Comando    | Acción                       |
| ---------- | ---------------------------- |
| `v`        | Visual normal (caracteres)   |
| `V`        | Visual lineal (líneas)       |
| `Ctrl + v` | Visual por bloque (columnas) |
| `y`        | Copiar selección             |
| `d`        | Borrar selección             |
| `>`        | Indentar selección           |
| `<`        | Desindentar selección        |

---

Si quieres, puedo hacerte **una hoja-resumen en español con todos estos comandos listos para imprimir**, para que lo tengas como chuleta al usar Vim.
¿Quieres que te la arme?
