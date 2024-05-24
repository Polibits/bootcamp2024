import random
from typing import List

MIN = 0
MAX = 500000

def generate_list(n: int, inf: int, sup: int) -> List[int]:
    """Gera uma lista de n números aleatórios inteiros entre inf e sup

    Args:
        n (int): quantidade de elementos
        inf (int): limite inferior
        sup (int): limite superior da lista

    Returns:
        List[int]: _description_
    """
    list = []
    
    for i in range(n):
        new_element = random.randint(inf, sup)
        while new_element in list: new_element = random.randint(inf, sup)
        list.append(new_element)
        
    return list


def generate_sorted_list(n: int, inf: int, sup: int) -> List[int]:
    """Gera uma lista de n números aleatórios inteiros sortedados entre inf e sup

    Args:
        n (int): quantidade de elementos
        inf (int): limite inferior
        sup (int): limite superior da lista

    Returns:
        List[int]: _description_
    """
    list = generate_list(n, inf, sup)
    list.sort()
        
    return list 


def generate_input_file(n: int, inf: int, sup: int, binary_search: bool) -> None:
    data = []
    indexes = [
        20, 30, 40, 50, 60, 70, 80, 90, 100,
        200, 300, 400, 500, 600, 700, 800, 900, 1000,
        2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000]
    
    for i in indexes:
        lists = generate_sorted_list(i, inf, sup)
        lists = [str(list) for list in lists]
        lists = ' '.join(lists)
        
        random_element = random.randint(inf, sup)
        
        input_data = f'{i}\n{random_element}\n{lists}'
        data.append(input_data)
        
    data = '\n'.join(data)
    data = f'{n}\n'+ data + '\n'

    with open('gggg.txt', 'w') as file:
        file.write(data)

generate_input_file(1000, MIN, MAX, binary_search=True)