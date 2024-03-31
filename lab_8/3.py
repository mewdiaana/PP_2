import pygame

def main():
    pygame.init()
    screen = pygame.display.set_mode((640, 480))
    clock = pygame.time.Clock()
    
    radius = 15
    x = 0
    y = 0
    mode = 'blue'
    points = []
    
    while True:
        
        pressed = pygame.key.get_pressed()
        
        alt_held = pressed[pygame.K_LALT] or pressed[pygame.K_RALT]
        ctrl_held = pressed[pygame.K_LCTRL] or pressed[pygame.K_RCTRL]
        
        for event in pygame.event.get():
            
            # determin if X was clicked, or Ctrl+W or Alt+F4 was used
            if event.type == pygame.QUIT:
                return
            if event.type == pygame.KEYDOWN:
            
                # determine if a letter key was pressed
                if event.key == pygame.K_r:
                    mode = 'red'
                elif event.key == pygame.K_g:
                    mode = 'green'
                elif event.key == pygame.K_b:
                    mode = 'blue'
                elif event.key == pygame.K_p:
                    mode = 'briz'
                elif event.key == pygame.K_e:
                    mode = 'erase'
                elif event.key == pygame.K_c:
                    mode = 'circle'
                elif event.key == pygame.K_:
                    mode = 'rectangle'
            
            if event.type == pygame.MOUSEBUTTONDOWN:
                if event.button == 1: # left click grows radius
                    radius = min(200, radius + 1)
                    if event.key == pygame.K_1:
                        pygame.draw.rect()
                elif event.button == 3: # right click shrinks radius
                    radius = max(1, radius - 1)

            
            if event.type == pygame.MOUSEMOTION:
                # if mouse moved, add point to list
                position = event.pos
                points = points + [position]
                points = points[-256:]
                
        screen.fill((0, 0, 0))
        
        # draw all points
        if len(points) > 1:
            functions(screen, points, mode, radius)
        
        pygame.display.flip()
        
        clock.tick(60)

def functions(screen, points, mode, radius):
    color = getColor(mode)
    
    if mode == 'blue' or mode == 'red' or mode == 'green' or mode == 'briz':
        for i in range(len(points) - 1):
            pygame.draw.line(screen, color, points[i], points[i + 1], radius)

def getColor(mode):
    if mode == 'blue':
        return (0, 0, 255)
    elif mode == 'red':
        return (255, 0, 0)
    elif mode == 'green':
        return (0, 255, 0)
    elif mode == 'briz':
        return (100, 255, 255)
    elif mode == 'erase':
        return (0, 0, 0)

main()