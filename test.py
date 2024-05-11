import tkinter as tk
import math

class Calculator:
    def __init__(self, master):
        self.master = master
        master.title("Scientific Calculator")

        self.entry = tk.Entry(master, width=30, borderwidth=5)
        self.entry.grid(row=0, column=0, columnspan=6)

        buttons = [
            ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),
            ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),
            ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),
            ('0', 4, 0), ('.', 4, 1), ('=', 4, 2), ('+', 4, 3),
            ('sin', 1, 4), ('cos', 2, 4), ('tan', 3, 4), ('sqrt', 4, 4),
            ('log', 1, 5), ('ln', 2, 5), ('^', 3, 5), ('(', 4, 5),
            (')', 4, 6), ('C', 1, 6), ('DEL', 2, 6)
        ]

        for (text, row, col) in buttons:
            self.create_button(text, row, col)

    def create_button(self, text, row, col):
        button = tk.Button(self.master, text=text, padx=15, pady=10, command=lambda: self.click(text))
        button.grid(row=row, column=col)

    def click(self, text):
        if text == '=':
            try:
                result = eval(self.entry.get())
                self.entry.delete(0, tk.END)
                self.entry.insert(tk.END, str(result))
            except:
                self.entry.delete(0, tk.END)
                self.entry.insert(tk.END, "Error")
        elif text == 'C':
            self.entry.delete(0, tk.END)
        elif text == 'DEL':
            current = self.entry.get()[:-1]
            self.entry.delete(0, tk.END)
            self.entry.insert(tk.END, current)
        elif text in ('sin', 'cos', 'tan', 'sqrt', 'log', 'ln'):
            try:
                if text == 'sqrt':
                    result = math.sqrt(float(self.entry.get()))
                elif text == 'sin':
                    result = math.sin(math.radians(float(self.entry.get())))
                elif text == 'cos':
                    result = math.cos(math.radians(float(self.entry.get())))
                elif text == 'tan':
                    result = math.tan(math.radians(float(self.entry.get())))
                elif text == 'log':
                    result = math.log10(float(self.entry.get()))
                elif text == 'ln':
                    result = math.log(float(self.entry.get()))
                self.entry.delete(0, tk.END)
                self.entry.insert(tk.END, str(result))
            except:
                self.entry.delete(0, tk.END)
                self.entry.insert(tk.END, "Error")
        else:
            self.entry.insert(tk.END, text)

def main():
    root = tk.Tk()
    calc = Calculator(root)
    root.mainloop()

if __name__ == "__main__":
    main()
