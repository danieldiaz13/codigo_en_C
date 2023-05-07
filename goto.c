//al usar esto podemos caer en mala pratica a la hora de hacer codigo este es el unico caso recomendado 
for (size_t i = 0; i < count; i++)
{
      for (size_t i = 0; i < count; i++)
        {
          for (size_t i = 0; i < count; i++)
            {
                if (panic)
                    goto errorHandler;
             }
        }
}
errorHandler: //todo el codigo para componer tu desastre
