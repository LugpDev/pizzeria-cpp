# Pizzería

Proyecto para la materia Pensamiento computacional orientado a objetos: Sistema de gestión de pizzería desarrollado en C++.

Equipo:

- Luis Alberto Cervantes García
  - Pizzería
  - Gestor Pedidos
  - Menu

- Carlos Alberto Galán Gomez
  - Empleado
  - GestorClientes
  - Pedidos

- Diana Cristina Barreto López
  - Cliente
  - Persona
  - GestorEmpleados

- Sofía Jatzyri Ocampo Moreno
  - Ingrediente
  - Producto
  - Pizza
  
- Wendy Molina Rojo
  - Bebidaa
  - Cocinero
  - Mesero

## Diagrama de clases

[Ver diagrama en Lucidchart](https://lucid.app/lucidchart/3501ec50-d2d0-419e-a757-0edd50e97695/edit?viewport_loc=-1146%2C290%2C2418%2C1399%2C0_0&invitationId=inv_27ce7945-38d0-40e1-8cba-5ca67a80b029)

## Estructura del proyecto

``` bash
.
├── bin/                # Archivos ejecutables compilados
│   └── main           # Ejecutable principal (generado)
├── include/           # Archivos de encabezado (.h)
├── src/               # Archivos fuente (.cpp)
│   └── main.cpp      # Punto de entrada del programa
├── tests/             # Archivos de pruebas unitarias
├── Makefile          # Script de compilación
├── README.md         # Este archivo
└── .gitignore        # Archivos ignorados por Git
```

## Reglas

### Nombre de los archivos

- **Archivos fuente**: Usar `PascalCase`
  - Ejemplo: `Pizza.cpp`, `Pedido.cpp`, `Cliente.cpp`
- **Archivos de encabezado**: Mismo nombre que el archivo fuente con extensión `.h`
  - Ejemplo: `Pizza.h`, `Pedido.h`, `Cliente.h`
- **Archivos de prueba**: Prefijo `test_` seguido del nombre del componente
  - Ejemplo: `test_pizza.cpp`, `test_pedido.cpp`

### Validación del código

### Creación de métodos

- **Métodos**: Usar `camelCase`
  - Ejemplo: `calcularTotal()`, `ponerIngredientes()`, `estaDisponible()`
- **Getters**: Prefijo `get` seguido del nombre del atributo
  - Ejemplo: `getNombre()`, `getPrecio()`, `getCantidad()`
- **Setters**: Prefijo `set` seguido del nombre del atributo
  - Ejemplo: `setNombre()`, `setPrecio()`, `setCantidad()`

### Conventional Commits

Seguimos la especificación de [Conventional Commits](https://www.conventionalcommits.org/) para los mensajes de commit.

#### Estructura

```
<tipo>[ámbito opcional]: <descripción>
```

#### Tipos

- **feat**: Nueva funcionalidad
  - Ejemplo: `feat(Pizza): agregar método calcularPrecioTotal`
- **fix**: Corrección de errores
  - Ejemplo: `fix(Pedido): corregir cálculo de subtotal`
- **docs**: Cambios en documentación
  - Ejemplo: `docs(README): actualizar instrucciones de compilación`
- **style**: Cambios de formato (espacios, punto y coma, etc.)
  - Ejemplo: `style(Cliente): formatear código según estándares`
- **refactor**: Refactorización de código
  - Ejemplo: `refactor(GestorPedidos): simplificar lógica de búsqueda`
- **test**: Agregar o modificar pruebas
  - Ejemplo: `test(Pizza): agregar pruebas unitarias`
- **chore**: Cambios en herramientas, configuración, etc.
  - Ejemplo: `chore(Makefile): actualizar flags de compilación`

## Compilación

Para compilar el proyecto, ejecuta:

MacOs

```sh
make
```

Windows

```sh
mingw32-make
```

El ejecutable se generará en `bin/main`.

## Ejecución

MacOs

```sh
./bin/main
```

Windows

```sh
.\bin\main
```
