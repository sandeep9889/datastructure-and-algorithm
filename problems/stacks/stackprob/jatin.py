def result(elements):
    List = []

    for element in elements:
        try: 
            int(element) 
            List.append(str(element))

        except:
            element_1 = List.pop()
            element_2 = List.pop()

            List.append(str(eval(element_2+element+element_1)))    

    return List.pop()        


print(result('12+34*-2'))