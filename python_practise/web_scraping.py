import requests
import urllib.request
import time
from bs4 import BeautifulSoup
url = 'http://www.cleveland.com/metro/index.ssf/2017/12/case_western_reserve_university_president_barbara_snyders_base_salary_and_bonus_pay_tops_among_private_colleges_in_ohio.html'
response = requests.get(url)
response #200 means it went through
print(response)
soup = BeautifulSoup(response.text, "html.parser")
print('*'*50)
# print(soup)

print(type(soup))
# Find the element on the webpage
main_content = soup.find('div', attrs = {'class': 'entry-content'})

#print(main_content)
# Extract the relevant information as text
content = main_content.find('ul').text
print(content)