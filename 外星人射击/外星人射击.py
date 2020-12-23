import game
import pygame
from Setting import settings
from ship import Ship
from pygame.sprite import Group
from game import GameStats
from button import Button
from score import Score
from winer import Winer
from failer import Failer
from shipnumber import Shipnumber
def run_game():
    #初始化游戏并创建一个屏幕对象
    pygame.init()
    screen_setting=settings()
    screen=pygame.display.set_mode((screen_setting.screen_height,screen_setting.screen_width))
    pygame.display.set_caption("外星人射击")
    ship = Ship(screen_setting,screen)
    bills=Group()
    waixingrens=Group()
    stats=GameStats(screen_setting,waixingrens,bills,ship)
    play_button=Button(screen_setting,screen,"play")
    play_score=Score(screen_setting,screen,stats)
    play_win=Winer(screen_setting,screen)
    play_failer=Failer(screen_setting,screen)
    shipnumbers=Group()
    #开始游戏的主循环
    while True:
        game.check(ship,screen_setting,screen,bills,stats,play_button,waixingrens)
        play_score.prep_score()
        game.creat_ship(screen_setting,screen,shipnumbers,ship,stats)
        if stats.game_active:
            ship.move()
            game.creat_w(screen,screen_setting,waixingrens)
            game.bill_move(bills,waixingrens,stats,screen_setting,play_win)
            game.waixingren_move(waixingrens)
            game.fail(waixingrens,ship,stats,bills,screen_setting)
        game.rescreen(shipnumbers,play_failer,play_win,play_score,screen_setting,screen,ship,bills,waixingrens,play_button,stats)
run_game()
