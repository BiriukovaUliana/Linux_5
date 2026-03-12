# Лабораторна №5

#Завдання
Реалізувати сценарій use-after-free, який проявляється лише після кількох успішних повторних алокацій того ж розміру.
##Створення папки проекту: 
mkdir lab5
cd lab5
##Створення файлу програми:
nano uaf.c
##Компіляція програми:
gcc uaf.c -o uaf
##Запуск програми:
./uaf
##Результат роботи програми:
<img width="717" height="333" alt="image" src="https://github.com/user-attachments/assets/037b6bdc-bce7-4677-923a-e4eb4ac0339b" />
##Перевірка через AddressSanitizer:
gcc -fsanitize=address uaf.c -o uaf
<img width="820" height="467" alt="image" src="https://github.com/user-attachments/assets/c696132e-a82f-45a1-be9d-f0fd67d9afb3" />
<img width="818" height="512" alt="image" src="https://github.com/user-attachments/assets/4f6713c2-2b62-46aa-961c-dec68f491356" />
<img width="809" height="503" alt="image" src="https://github.com/user-attachments/assets/30ceb626-c18e-4f04-9d0b-ee69188f43fa" />
<img width="812" height="511" alt="image" src="https://github.com/user-attachments/assets/500054d7-13ce-477e-a360-f0a9e1c8fdc8" />
