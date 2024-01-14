class Cassa:
    cash = 0

    def top_up(self, summ):
        self.cash += summ

    def count_1000(self):
        print(self.cash // 1000)

    def take_away(self, summ):
        if self.cash >= summ:
            self.cash -= summ
        else:
            print("Не достаточно денег!!!")



cassa = Cassa()
cassa.top_up(2555)
cassa.count_1000()
cassa.take_away(2000)
cassa.take_away(1000)
