import pygame.font
class Winer():
    def __init__(self,settings,screen):
        self.screen=screen
        self.screen_rect=screen.get_rect()
        self.settings=settings
        self.text_color=(31,31,31)
        self.font=pygame.font.SysFont(None,48)
        self.prep_winner()
    def prep_winner(self):
        score_str="you are winner"
        self.score_image=self.font.render(score_str,True,self.text_color)
        self.score_rect=self.score_image.get_rect()
        self.score_rect.centerx=self.screen_rect.centerx
        self.score_rect.top=0
    def show_winer(self):
        self.screen.blit(self.score_image,self.score_rect)
