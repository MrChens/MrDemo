# 使用指南

1. 先从数据库查询所需的设备信息
2. 将查询后的结果导出为csv
3. 执行`python iot_gen_client.py  <you csv file>`

# 数据库导出所需设备信息指南
1. 使用下列sql查询语句将所需数据按照:device_name, product_Key, device_secret的先后顺序排列查询结果，查询数量可以根据需求自定义，下面是查询拿取5000条记录的sql语句
`select d.name as device_name, p.product_Key, d.device_secret from device as d left join product as p on d.product_id = p.id limit 5000`

2. 使用navicat premium自带的查询结果导出功能，导出数据
  1. 导出为csv file
  2. Record Delimiter(记录分隔符)选CRLF
  3. Text Qualifier(文本识别富豪)选None
  4. 其他保持默认，也可根据需要自行更改

3. 运行`iot_gen_client.py`
4. 会得到一个`output.txt`的文件，用来在jmeter中做压力测试的数据
