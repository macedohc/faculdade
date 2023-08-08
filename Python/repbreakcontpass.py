def primos(num):
    i = 2
    while i < num:
        if num % i == 0:
            i = num  # faz i igual a num para sair do loop
            break
        i += 1
    return i == num




'''def primos(num):
    i = 2
    while i < num:
        if num % i == 0:
            break
        i += 1
    return i == num'''
