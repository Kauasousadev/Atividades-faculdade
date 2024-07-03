import pyautogui, time
import pandas

#Abrindo o navegador e entrando no site com o sistema
pyautogui.hotkey('win','1')
pyautogui.PAUSE = 0.5

pyautogui.hotkey('ctrl','n')
pyautogui.write("https://dlp.hashtagtreinamentos.com/python/intensivao/login")
time.sleep(0.7)
pyautogui.press('enter')
pyautogui.press('tab')
pyautogui.write("pythonimpressionador@gmail.com")
pyautogui.press('tab')
pyautogui.write("sua senha")
pyautogui.press('tab')
pyautogui.press('enter')
#logado
#cadastro de produtos
tabela = pandas.read_csv("produtos.csv")

for linha in tabela.index:
    pyautogui.click(x=912, y=411)
    codigo = tabela.loc[linha,"codigo"]
    marca = tabela.loc[linha,"marca"]
    tipo = tabela.loc[linha,"tipo"]
    categoria = tabela.loc[linha,"categoria"]
    preco = tabela.loc[linha,"preco_unitario"]
    custo = tabela.loc[linha,"custo"]
    obs = tabela.loc[linha,"obs"]

    pyautogui.write(str(codigo))
    pyautogui.press('tab')
    pyautogui.write(marca)
    pyautogui.press('tab')
    pyautogui.write(tipo)
    pyautogui.press('tab')
    pyautogui.write(str(categoria))
    pyautogui.press('tab')
    pyautogui.write(str(preco))
    pyautogui.press('tab')
    pyautogui.write(str(custo))
    pyautogui.press('tab')
    if not pandas.isna(obs):
            pyautogui.write((str(obs)))
            pyautogui.press('tab')
    else:
            pyautogui.press('tab')
    pyautogui.press('enter')
    pyautogui.scroll(50000)