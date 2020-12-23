import pygame
from pygame.sprite import Sprite
class Shipnumber(Sprite):
    def __init__(self,settings,screen,centerx):
        super().__init__()
        self.screen=screen
        self.image=pygame.image.load(r'图像\飞机.bmp')
        self.rect=self.image.get_rect()
        self.screen_rect=screen.get_rect()
        self.rect.top=self.screen_rect.top
        self.rect.centerx=centerx
    def blitme(self):
        self.screen.blit(self.image,self.rect)
    
