# http://www.pythonchallenge.com

- Level1
    - http://www.pythonchallenge.com/pc/def/0.html
    - 解决过程:
    刚开始看到图片下面的提示`Hint: try to change the URL address.`，我以为是要写个python脚本，然后在终端执行并修改url(即：全程脚本自动计算出结果并修改浏览器的url)。然后一脸懵逼，第一关就这么难。后来同事说不是一个`**`就解决了，我恍然大悟，是我想多了。于是认真看了下首页的说明和答案。原来是挑战是：根据线索使用python来计算出结果，并将结果用于修改网页的地址，就会得到下一关挑战的线索。
    - 解决方案:`pow(2,38)`得出`274877906944`，并修改`http://www.pythonchallenge.com/pc/def/0.html`为`http://www.pythonchallenge.com/pc/def/274877906944.html`
    
- Level2
        - http://www.pythonchallenge.com/pc/def/map.html
