#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Film {
    std::string title;
    std::string director;
    std::string genre;
    int popularityRating;
    double diskPrice;
};

// Функция для поиска фильма по названию
Film* findByTitle(const std::vector<Film>& films, const std::string& title) {
    for (const auto& film : films) {
        if (film.title == title) {
            return const_cast<Film*>(&film);
        }
    }
    return nullptr;
}

// Функция для поиска фильмов по жанру
std::vector<Film*> findByGenre(const std::vector<Film>& films, const std::string& genre) {
    std::vector<Film*> result;
    for (const auto& film : films) {
        if (film.genre == genre) {
            result.push_back(const_cast<Film*>(&film));
        }
    }
    return result;
}

// Функция для поиска фильмов по режиссеру
std::vector<Film*> findByDirector(const std::vector<Film>& films, const std::string& director) {
    std::vector<Film*> result;
    for (const auto& film : films) {
        if (film.director == director) {
            result.push_back(const_cast<Film*>(&film));
        }
    }
    return result;
}

// Функция для поиска самого популярного фильма в жанре
Film* findMostPopularInGenre(const std::vector<Film>& films, const std::string& genre) {
    Film* mostPopular = nullptr;
    int maxRating = -1;
    for (const auto& film : films) {
        if (film.genre == genre && film.popularityRating > maxRating) {
            mostPopular = const_cast<Film*>(&film);
            maxRating = film.popularityRating;
        }
    }
    return mostPopular;
}

// Функция для показа всех записей и добавления новой
void showAndAdd(std::vector<Film>& films) {
    std::cout << "Текущие записи:" << std::endl;
    for (const auto& film : films) {
        std::cout << "Название: " << film.title << ", Режиссер: " << film.director
                 << ", Жанр: " << film.genre << ", Рейтинг: " << film.popularityRating
                 << ", Цена диска: " << film.diskPrice << std::endl;
    }

    // Добавление новой записи
    Film newFilm;
    std::cout << "Введите название нового фильма: ";
    std::cin >> newFilm.title;
    std::cout << "Введите режиссера: ";
    std::cin >> newFilm.director;
    std::cout << "Введите жанр: ";
    std::cin >> newFilm.genre;
    std::cout << "Введите рейтинг популярности: ";
    std::cin >> newFilm.popularityRating;
    std::cout << "Введите цену диска: ";
    std::cin >> newFilm.diskPrice;

    films.push_back(newFilm);
    std::cout << "Новая запись добавлена." << std::endl;
}

int main() {
    std::vector<Film> films = {
        {"Фильм 1", "Режиссер 1", "Жанр 1", 8, 10.99},
        {"Фильм 2", "Режиссер 2", "Жанр 2", 7, 12.99},
        {"Фильм 3", "Режиссер 3", "Жанр 1", 9, 15.99}
    };

    // Пример использования функций
    Film* foundFilm = findByTitle(films, "Фильм 1");
    if (foundFilm) {
        std::cout << "Фильм найден: " << foundFilm->title << std::endl;
    } else {
        std::cout << "Фильм не найден." << std::endl;
    }

    std::vector<Film*> foundByGenre = findByGenre(films, "Жанр 1");
    std::cout << "Фильмы жанра 'Жанр 1':" << std::endl;
    for (const auto& film : foundByGenre) {
        std::cout << film->title << std::endl;
    }

    Film* mostPopular = findMostPopularInGenre(films, "Жанр 1");
    if (mostPopular) {
        std::cout << "Самый популярный фильм в жанре 'Жанр 1': " << mostPopular->title << std::endl;
    } else {
        std::cout << "Фильмы в жанре 'Жанр 1' не найдены." << std::endl;
    }

    showAndAdd(films);

    return 0;
}