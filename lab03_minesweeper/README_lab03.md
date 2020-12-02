# Lab 03: Minesweeper Development
1. `screen_default`
    * `Screen_defaultView.cpp`
    
        * `btn_0_clicked()` ~ `btn_9_clicked()`:
            
            1. Add char to the string by calling `string_handler()` and passing 
            
            2. Display the String on TextArea 
        
        * `string_handler()`

            1. Get length of the string


    * `Screen_defaultView.hpp`
2. `screen_gameplay`
    * `Screen_gameplayView.cpp`
        1. 初始化：設定初始值、隨機放炸彈、炸彈旁邊的數字

    * `Screen_gameplayView.hpp`

    注意邊緣問題，設座標可以多加頭尾
    如果點下去是數字，就顯是那一格就好，如果點下去是空格，則周圍8顆全亮，亮起來的若是空格則它再亮一次