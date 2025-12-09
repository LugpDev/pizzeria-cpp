#include "Menu.h"

Menu::Menu() {};

vector<Pizza> Menu::getPizzas()
{
  return pizzas;
};

vector<Bebida> Menu::getBebidas()
{
  return bebidas;
};

void Menu::agregarPizza(Pizza pizza)
{
  pizzas.push_back(pizza);
};

void Menu::agregarBebida(Bebida bebida)
{
  bebidas.push_back(bebida);
};

void Menu::actualizarPizza(string nombre, Pizza pizza)
{
  for (size_t i = 0; i < pizzas.size(); i++)
  {
    if (pizzas[i].getNombre() == nombre)
    {
      pizzas[i] = pizza;
      break;
    }
  }
};

void Menu::actualizarBebida(string nombre, Bebida bebida)
{
  for (size_t i = 0; i < bebidas.size(); i++)
  {
    if (bebidas[i].getNombre() == nombre)
    {
      bebidas[i] = bebida;
      break;
    }
  }
};

void Menu::eliminarPizza(string nombre)
{
  for (size_t i = 0; i < pizzas.size(); i++)
  {
    if (pizzas[i].getNombre() == nombre)
    {
      pizzas.erase(pizzas.begin() + i);
      break;
    }
  }
};

void Menu::eliminarBebida(string nombre)
{
  for (size_t i = 0; i < bebidas.size(); i++)
  {
    if (bebidas[i].getNombre() == nombre)
    {
      bebidas.erase(bebidas.begin() + i);
      break;
    }
  }
};