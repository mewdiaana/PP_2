import pygame
pygame.init()

w, h = 300, 600
screen = pygame.display.set_mode((w,h))

songs = ['Abyss.mp3', 'OverThink.mp3', 'S-Class.mp3', 'SNAP.mp3', 'Take_Two.mp3', 'Tattoo.mp3', 'Te_Felicito.mp3']
song = 0
pygame.mixer.music.load(songs[song])
pygame.mixer.music.play()

paused = False
resongs =[]
o = 1
for i in songs:
    resongs.append(songs[len(songs)-o])
    o += 1 

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()
        elif event.type == pygame.KEYDOWN:

            if event.key == pygame.K_SPACE:
                paused = not paused
                if paused:
                    pygame.mixer.music.pause()
                else:
                    pygame.mixer.music.unpause()

            elif event.key == pygame.K_RIGHT:
                song = (song + 1) % len(songs)
                pygame.mixer.music.load(songs[song])
                pygame.mixer.music.play()

            elif event.key == pygame.K_LEFT:
                song = (song - 1) % len(songs)
                pygame.mixer.music.load(songs[song])
                pygame.mixer.music.play()
                