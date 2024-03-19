import pygame
import sys

# Инициализация Pygame
pygame.init()

# Установка размеров окна
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption('Примeр Pygame')

# Установка цветов
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

# Создание шрифта
font = pygame.font.Font(None, 36)

# Основной цикл игры
running = True
while running:
    # Обработка событий
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Очистка экрана
    screen.fill(BLACK)

    # Отображение текста на экране
    text = font.render('Привет, Pygame!', True, WHITE)
    text_rect = text.get_rect(center=(WIDTH // 2, HEIGHT // 2))
    screen.blit(text, text_rect)

    # Обновление экрана
    pygame.display.flip()

# Выход из Pygame
pygame.quit()
sys.exit()
