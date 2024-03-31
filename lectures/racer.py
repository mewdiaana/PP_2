import pygame
import random
from pygame.locals import *
pygame.init()

scr = pygame.display.set_mode((400,600))
clock = pygame.time.Clock()

class BadCar(pygame.sprite.Sprite):
    def __ihit__(self):
        super().__init__()
        self.image = pygame.image.load("badcar.png")
        self.rect = self.image.get_rect()
        self.rect.center=(random.randint(40,400-40),0) 

    def movements(self):
        self.rect.move_ip(0,10)
        if (self.rect.bottom > 600):
            self.rect.top = 0
            self.rect.center = (random.randint(30,370), 0)

    def draw(self, surface):
        surface.blit(self.image, self.rect)
BC = BadCar()

class GoodCar(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__() 
        self.image = pygame.image.load("goodcar.png")
        self.rect = self.image.get_rect()
        self.rect.center = (160, 520)
 
    def update(self):
        pressed_keys = pygame.key.get_pressed()
        
        if pressed_keys[K_UP]:
            self.rect.move_ip(0, -5)
        if pressed_keys[K_DOWN]:
            self.rect.move_ip(0,5)

        if self.rect.left > 0:
              if pressed_keys[K_LEFT]:
                  self.rect.move_ip(-5, 0)
        if self.rect.right < 400:        
              if pressed_keys[K_RIGHT]:
                  self.rect.move_ip(5, 0)
 
    def draw(self, surface):
        surface.blit(self.image, self.rect)
GC = GoodCar()

class Coin(pygame.sprite.Sprite):
    def __ihit__(self):
        super().__init__()
        self.image = pygame.image.load("coin1.png")
        self.rect = self.image.get_rect()
        self.rect.center=(random.randint(40,60),0) 

    def movements(self):
        self.rect.move_ip(0,10)
        if (self.rect.bottom > 600):
            self.rect.top = 0
            self.rect.center = (random.randint(30,370), 0)

    def draw(self, surface):
        surface.blit(self.image, self.rect)
C = Coin()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()
    
    GC.update()
    BC.movements()

    scr.fill("white")
    GC.draw(scr)
    BC.draw(scr)
         
    pygame.display.update()
    clock.tick(60)
    