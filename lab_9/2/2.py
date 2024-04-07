import pygame 
import random
import button
import sys
pygame.init()

W, H = 1200, 800
FPS = 60

screen = pygame.display.set_mode((W, H), pygame.RESIZABLE)
mbg = pygame.image.load("menu.jpg")

game_paused = False
menu_state = "main"

start_img = pygame.image.load("start.jpg").convert_alpha()
set_img = pygame.image.load("Settings.jpg").convert_alpha()
quit_img = pygame.image.load("Quit.jpg").convert_alpha()

start_but = button.Button(500, 200, start_img, 1)
set_but = button.Button(500, 400, set_img, 1)
quit_but = button.Button(500, 600, quit_img, 1)

def draw_text(text, font, text_col, x, y):
  img = font.render(text, True, text_col)
  screen.blit(img, (x, y))

clock = pygame.time.Clock()
done = False
bg = (0, 0, 0)

#paddle
paddleW = 150
paddleH = 25
paddleSpeed = 20
paddle = pygame.Rect(W // 2 - paddleW // 2, H - paddleH - 30, paddleW, paddleH)


#Ball
ballRadius = 20
ballSpeed = 6
ball_rect = int(ballRadius * 2 ** 0.5)
ball = pygame.Rect(random.randrange(ball_rect, W - ball_rect), H // 2, ball_rect, ball_rect)
dx, dy = 1, -1

#Game score
game_score = 0
game_score_fonts = pygame.font.SysFont('comicsansms', 40)
game_score_text = game_score_fonts.render(f'Your game score is: {game_score}', True, (0, 0, 0))
game_score_rect = game_score_text.get_rect()
game_score_rect.center = (210, 20)

#Catching sound
collision_sound = pygame.mixer.Sound('catch.mp3')

SHRINK_RATE = 0.02  # Rate at which paddle shrinks per frame
current_paddle_width = paddleW
bonus_text = "bonus"

# Bonus brick settings
bonus = pygame.Rect(random.randrange(0, W - 100), 200, 100, 50)
bonus_color = (0, 255, 0)

def detect_collision(dx, dy, ball, rect):
    if dx > 0:
        delta_x = ball.right - rect.left
    else:
        delta_x = rect.right - ball.left
    if dy > 0:
        delta_y = ball.bottom - rect.top
    else:
        delta_y = rect.bottom - ball.top

    if abs(delta_x - delta_y) < 10:
        dx, dy = -dx, -dy
    if delta_x > delta_y:
        dy = -dy
    elif delta_y > delta_x:
        dx = -dx
    return dx, dy


#block settings
block_list = [pygame.Rect(10 + 120 * i, 50 + 70 * j,
        100, 50) for i in range(10) for j in range (4)]
unbreakable = [pygame.Rect(10 + 120 * i, 50 + 70 * 4, 100, 50) for i in range(4, 8)]
block_list.extend(unbreakable)

color_list = [(random.randrange(0, 255), 
    random.randrange(0, 255),  random.randrange(0, 255))
              for i in range(len(block_list))] 

for i in range(len(block_list)-len(unbreakable), len(block_list)):
    color_list[i] = (255, 255, 255)


print(block_list)
#Game over Screen
losefont = pygame.font.SysFont('comicsansms', 40)
losetext = losefont.render('Game Over', True, (255, 255, 255))
losetextRect = losetext.get_rect()
losetextRect.center = (W // 2, H // 2)

#Win Screen
winfont = pygame.font.SysFont('comicsansms', 40)
wintext = losefont.render('You win yay', True, (0, 0, 0))
wintextRect = wintext.get_rect()
wintextRect.center = (W // 2, H // 2)

class Button():
	def __init__(self, x, y, image, scale):
		width = image.get_width()
		height = image.get_height()
		self.image = pygame.transform.scale(image, (int(width * scale), int(height * scale)))
		self.rect = self.image.get_rect()
		self.rect.topleft = (x, y)
		self.clicked = False

	def draw(self, surface):
		action = False
		#get mouse position
		pos = pygame.mouse.get_pos()

		#check mouseover and clicked conditions
		if self.rect.collidepoint(pos):
			if pygame.mouse.get_pressed()[0] == 1 and self.clicked == False:
				self.clicked = True
				action = True

		if pygame.mouse.get_pressed()[0] == 0:
			self.clicked = False

		#draw button on screen
		surface.blit(self.image, (self.rect.x, self.rect.y))

		return action


while not done:
    if game_paused == True:
        if menu_state == "main":
        #draw pause screen buttons
            if start_but.draw(screen):
                game_paused = False
            if set_but.draw(screen):
                menu_state = "options"
            if quit_but.draw(screen):
                exit()


  #event handler
    for event in pygame.event.get():
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                game_paused = True
        if event.type == pygame.QUIT:
            exit()
        screen.fill(mbg)

    current_paddle_width -= SHRINK_RATE
    paddle.width = int(max(current_paddle_width, 50))
    
    # print(next(enumerate(block_list)))
    
    [pygame.draw.rect(screen, color_list[color], block)
     for color, block in enumerate (block_list)] #drawing blocks
    pygame.draw.rect(screen, pygame.Color(255, 255, 255), paddle)
    pygame.draw.circle(screen, pygame.Color(255, 0, 0), ball.center, ballRadius)
    
     # Check collision with bonus brick
    if ball.colliderect(bonus):
        dx, dy = detect_collision(dx, dy, ball, bonus)
        game_score += 5
        ballSpeed += 1  # Increase ball speed
        bonus = pygame.Rect(random.randrange(0, W - 100), 200, 100, 50)
        bonus_color = (0, 255, 0)
        collision_sound.play()

    # Draw bonus brick
    pygame.draw.rect(screen, bonus_color, bonus)
    font_bonus = pygame.font.SysFont('comicsansms', 20)
    text_bonus = font_bonus.render(bonus_text, True, (255, 255, 255))
    screen.blit(text_bonus, (bonus.x + 5, bonus.y + 10))

    #Ball movement
    ball.x += ballSpeed * dx
    ball.y += ballSpeed * dy

    #Collision left 
    if ball.centerx < ballRadius or ball.centerx > W - ballRadius:
        dx = -dx
    #Collision top
    if ball.centery < ballRadius + 50: 
        dy = -dy
    #Collision with paddle
    if ball.colliderect(paddle) and dy > 0:
        dx, dy = detect_collision(dx, dy, ball, paddle)

    #Collision blocks
    hitIndex = ball.collidelist(block_list)

    if hitIndex != -1:
        if block_list[hitIndex] in unbreakable:
            dx, dy = detect_collision(dx, dy, ball, block_list[hitIndex])
        else:
            hitRect = block_list.pop(hitIndex)
            hitColor = color_list.pop(hitIndex)
            dx, dy = detect_collision(dx, dy, ball, hitRect)
            game_score += 1
            collision_sound.play()
        
    #Game score
    game_score_text = game_score_fonts.render(f'Your game score is: {game_score}', True, (255, 255, 255))
    screen.blit(game_score_text, game_score_rect)
    
    #Win/lose screens
    if ball.bottom > H:
        screen.fill((0, 0, 0))
        screen.blit(losetext, losetextRect)
    elif not len(block_list):
        screen.fill((255,255, 255))
        screen.blit(wintext, wintextRect)
    # print(pygame.K_LEFT)
    #Paddle Control
    key = pygame.key.get_pressed()
    if key[pygame.K_LEFT] and paddle.left > 0:
        paddle.left -= paddleSpeed
    if key[pygame.K_RIGHT] and paddle.right < W:
        paddle.right += paddleSpeed


    pygame.display.flip()
    clock.tick(FPS)
