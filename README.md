# system calls studio

Con `parent.c` y `son.c` ilustramos la dinamica de programacion de procesos

Otra demo interesante en <https://www.softprayog.in/programming/creating-processes-with-fork-and-exec-in-linux>

## ilustramos:

`fork()`: crear un proceso hijo que es un clon.
`exit()`: finalizar
`exec()`: cambiar el codigo del proceso actual.

- [ ] sincronizar padres con el término de la vida de sus hijos. (**to do**)
  (que un padre espere a que un hijo haga algo o le envie una señal para seguir adelante) : `waitpid()`


