table=[]
for i in range(10):
    input_user=int(input(f"table[{i}]="))
    table.append(input_user)
max_table=table.index(max(table))
min_table=table.index(min(table))
print('table:', table)
table[max_table], table[min_table]= table[min_table], table[max_table]
print('table', table)