import pygame.font
class Score():
    def __init__(self,settings,screen,stats):
        self.screen=screen
        self.screen_rect=screen.get_rect()
        self.settings=settings
        self.stats=stats
        self.text_color=(30,30,30)
        self.font=pygame.font.SysFont(None,48)
        self.prep_score()
    def prep_score(self):
        score_str=str(self.stats.score)+'/'+str(self.settings.winer)
        self.score_image=self.font.render(score_str,True,self.text_color)
        self.score_rect=self.score_image.get_rect()
        self.score_rect.right=self.screen_rect.right-20
        self.score_rect.top=0
    def show_score(self):
        self.screen.blit(self.score_image,self.score_rect)
