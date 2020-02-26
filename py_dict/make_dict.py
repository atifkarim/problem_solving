import json

with open('product.json', 'r') as f:
    config = json.load(f)

# polar_angle_start= config['DEFAULT']['polar_angle_start']
# polar_angle_end = config['DEFAULT']['polar_angle_end']
# polar_angle_step = config['DEFAULT']['polar_angle_step']
# azimuthal_angle_start= config['DEFAULT']['azimuthal_angle_start']
# azimuthal_angle_end= config['DEFAULT']['azimuthal_angle_end']
# azimuthal_angle_step= config['DEFAULT']['azimuthal_angle_step']
# #print('pola_step: ',polar_angle_step,'\t azi step: ',azimuthal_angle_step)
# viewmode_1= config['DEFAULT']['viewmode_1']
#
# print(type(viewmode_1))
# viewmode_2= config['DEFAULT']['viewmode_2']
# viewmode_3= config['DEFAULT']['viewmode_3']
# viewmode_crop= config['DEFAULT']['viewmode_crop']
# address= config['DEFAULT']['address']
# image_type= config['DEFAULT']['image_type']

#actor_list= config['DEFAULT']['actor_list']
#actor_list=client.request(actor_list)
#print("type is:",type(address))
#print('actor: ',config['actor'])
actor_dict={}
for i in config['product']:
    # print 'product name: ',i
    actor_dict[i]=[]
    # actor_dict[i].append(polar_angle_start)
    # actor_dict[i].append(polar_angle_end)
    # actor_dict[i].append(azimuthal_angle_start)
    # actor_dict[i].append(azimuthal_angle_end)
    actor_dict[i].append(config['product'][i]['weight'])
    actor_dict[i].append(config['product'][i]['price'])
print 'actor_dict: ',actor_dict

ind= {k_1:i_1 for i_1,k_1 in enumerate(actor_dict.keys())}

for u_1 in actor_dict:
    print 'index of ',u_1,' is: ',ind[u_1]

actor_dict[ind]

data = eval(raw_input("Enter a number: "))

# for key,val in actor_dict:
#     print key,'  ',val
for n in actor_dict.keys():
    print "keys: ",n, "price ",actor_dict[n][0]

# print 'here: ',actor_dict[0]