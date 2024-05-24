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


def generate_input_file(file_name: str, indexes: List[int], inf: int, sup: int, binary_search: bool) -> None:
    """Gera um arquivo de entrada txt com listas ordenadas ou não

    Args:
        file_name (str): nome do arquivo
        indexes (List[int]): lista de tamanhos das listas de entrada
        inf (int): menor valor possível para um elemento de uma lista
        sup (int): maior valor possível para um elemento de uma lista
        binary_search (bool): gerar listas ordenadas, para busca binária
    """
    
    data = []

    n = len(indexes)
    for i in indexes:
        lists = generate_list(i, inf, sup)
        
        # random element choosing
        random_element = random.randint(inf, sup)
        random_list_item = random.choice(lists)
        random_element = random.choice([random_element, random_list_item])
        
        # sorting
        if binary_search: lists.sort()
        
        # casting
        lists = [str(list) for list in lists]
        lists = ' '.join(lists)
        
        
        input_data = f'{i}\n{random_element}\n{lists}'
        data.append(input_data)
        
    data = '\n'.join(data)
    data = f'{n}\n'+ data + '\n'

    with open(f'{file_name}.txt', 'w') as file:
        file.write(data)


def generate_single_input_file(file_name: str, inf: int, sup: int, size: int, binary_search: bool = False):
    lists = generate_list(size, inf, sup)
    
    # random element choosing
    random_element = random.randint(inf, sup)
    random_list_item = random.choice(lists)
    random_element = random.choice([random_element, random_list_item])
    
    # sorting
    if binary_search: lists.sort()
    
    # casting
    lists = [str(list) for list in lists]
    lists = ' '.join(lists)
    
    input_data = f'{size}\n{random_element}\n{lists}'
    
    with open(f'{file_name}.txt', 'w') as file:
        file.write(input_data)


def main():
    file_name = 'sorted_list_with_the_element'
    indexes = [
        2, 3, 4, 5, 6, 7, 8, 9, 10,
        20, 30, 40, 50, 60, 70, 80, 90, 100,
        200, 300, 400, 500, 600, 700, 800, 900, 1000,
        2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000]
    
    # generate_input_file(file_name, indexes, MIN, MAX, binary_search=False)
    generate_single_input_file(file_name, MIN, MAX, 100000, binary_search=True)


if __name__ == '__main__':
    main()