class settings():
    '''存储《外星人射击》的所有设置的类'''
    def __init__(self):
        '''初始化游戏的设置'''
        #屏幕设置
        self.screen_width=600
        self.screen_height=800
        self.bg_color=(230,230,230)
        self.ship_speed=1
        self.bill_speed=0.7
        self.bill_width=3
        self.bill_height=15
        self.bill_color=(60,60,60)
        self.bill_number=200
        self.alien_speed=0.2
        self.alien_number=5
        self.ship_number=3
        self.winer=200
        self.alien_score=2
