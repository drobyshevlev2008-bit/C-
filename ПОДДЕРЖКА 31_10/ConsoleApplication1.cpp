import timeit #Импорт библиотеки

def factorial(n) : #Функция вычисления факториала
if n == 0 or n == 1:
return 1
else:
return n * factorial(n - 1)

n_values = [10, 20, 30] #Заданные n
number_of_runs = 10000 #Кол - во повторений

for n in n_values : #Цикл с замерами значений и времени
time_taken = timeit.timeit(lambda: factorial(n), number = number_of_runs)  #Выполняет функцию и замеряет время
print(f"{n} - {time_taken:.6f} сек") #Выводит время при определенном значении n




import timeit  # Импорт библиотеки


def factorial_recurce(n) : # Функция вычисления факториала(Рекурсивная)
if n == 0 or n == 1:
return 1
else:
return n * factorial_recurce(n - 1)


def factorial_iterat(n) : # Функция вычисления факториала(Итерация)
result = 1
for i in range(1, n + 1) :
    result *= i
    return result


    n_values = [10, 20, 30]  # Заданные n
    number_of_runs = 10000  # Кол - во повторений

    for n in n_values : # Функция рекурсивности и итерации
        time_taken = timeit.timeit(lambda: factorial_recurce(n),
            number = number_of_runs)  # Выполняет функцию и замеряет время
        print(f"Рекурсия {n}: {time_taken:.6f} сек")  # Выводит время при определенном значении n

        time_iterative = timeit.timeit(lambda: factorial_iterat(n),
            number = number_of_runs)  # Выполняет функцию и замеряет время
        print(f"Итерация {n}: {time_iterative:.6f} сек")  # Выводит время при определенном значении n

import timeit  # Импорт библиотеки
import cProfile  # Импорт библиотеки


        def factorial_recurce(n) : # Функция вычисления факториала(Рекурсивная)
        if n == 0 or n == 1:
return 1
        else:
return n * factorial_recurce(n - 1)


def factorial_iterat(n) : # Функция вычисления факториала(Итерация)
result = 1
for i in range(1, n + 1) :
    result *= i
    return result


    n_values = [10, 20, 30]  # Заданные n
    number_of_runs = 10000  # Кол - во повторений

    for n in n_values : # Функция рекурсивности и итерации
        time_taken = timeit.timeit(lambda: factorial_recurce(n),
            number = number_of_runs)  # Выполняет функцию и замеряет время
        print(f"Рекурсия {n}: {time_taken:.6f} сек")  # Выводит время при определенном значении n

        time_iterative = timeit.timeit(lambda: factorial_iterat(n),
            number = number_of_runs)  # Выполняет функцию и замеряет время
        print(f"Итерация {n}: {time_iterative:.6f} сек")  # Выводит время при определенном значении n

        print("Рекурсия:")
        cProfile.run('factorial_recurce(20)')  # Выводит профилирование(рекурсированная)

        print("Итерация:")
        cProfile.run('factorial_iterat(20)')  # Выводит профилирование(итерация)