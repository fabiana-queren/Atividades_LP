from ctypes import windll, Structure, c_long, byref
import time
import msvcrt

class Point(Structure):
    _fields_ = [("x", c_long), ("y", c_long)]

def query_mouse_position():
    pt = Point() 
    windll.user32.GetCursorPos(byref(pt))  
    return {"x": pt.x, "y": pt.y}  

def determine_quadrant(x, y):
    if 0 <= x < 800 and 0 <= y < 450:
        return "Quadrante A", 1
    elif 800 <= x < 1600 and 0 <= y < 450:
        return "Quadrante B", 2
    elif 0 <= x < 800 and 450 <= y < 900:
        return "Quadrante C", 3
    elif 800 <= x < 1600 and 450 <= y < 900:
        return "Quadrante D", 4
    else:
        return "Fora da área da tela", 0

if __name__ == "__main__":
    while True:
        pos = query_mouse_position()
        x, y = pos["x"], pos["y"]

       
        quadrant_name, quadrant_number = determine_quadrant(x, y)
        print(f"{quadrant_name}")
        
       
        print(f"Posição do Mouse: x={x}, y={y}")

       
        if quadrant_number == 1:
            print("Quadrante A")
        elif quadrant_number == 2:
            print("Quadrante B")
        elif quadrant_number == 3:
            print("Quadrante C")
        elif quadrant_number == 4:
            print("Quadrante D")
        elif quadrant_number == 0:
            print("Fora da área da tela")

        time.sleep(1.0) 

        # Verificar se a tecla ESC foi pressionada para sair
        if msvcrt.kbhit():
            ch = msvcrt.getch()
            if ch == b'\x1b':  # ESC em Python é b'\x1b'
                break













