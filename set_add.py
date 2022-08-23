#birsuyilmaz
num = int(input())
countries = []
for i in range(num):
    country = input()
    countries.append(country)
countries_set = set(countries)
print(len(countries_set))
#birsuyilmaz