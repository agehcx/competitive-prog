def Chayen(Eve, Sun):
    chk = 0
    cg = 0
    ca = 0
    eg = Eve[0]
    ea = Eve[1]
    sg = Sun[0]
    sa = Sun[1]
    sEve = 0
    sSun = 0
    for i in range (len(ea) * len(eg)):
        if len(ea) == 0 or len(eg) == 0: break 
        # nl = [x[0] for x in eg]
        # chk = 0
        # for j in ea:
        #     if nl.count(j[0]) > 0: chk += 1
        # if(chk == 0): break
        elif eg[0][0] == ea[0][0]:
            sEve += 1
            eg.append(eg[0])
            eg = eg[1:]
            ea = ea[1:]            
        else:
            sEve += 1
            ea.append(ea[0])
            ea = ea[1:] 
    chk = 0
    for i in range (len(sa) * len(sg)):
        if len(sa) == 0 or len(sg) == 0: break  
        # snl = [x[0] for x in sg]
        # chk = 0
        # for j in sa:
        #     if snl.count(j[0]) > 0: chk += 1
        # if(chk == 0): break 
        elif sg[0][0] == sa[0][0]:
            sSun += 1
            sg.append(sg[0])
            sg = sg[1:]
            sa = sa[1:]            
        else:
            sSun += 1
            sa.append(sa[0])
            sa = sa[1:] 
    if sEve > sSun:
        # print("sa1")
        y = "Sun win with "
        y = y + str(sSun)
        y += " turn" 
        return y
    elif sSun > sEve:
        # print("sa2")
        y = "Eve win with "
        y = y + str(sEve)
        y += " turn" 
        return y
    else:
        return "Error"

    
    
if __name__ == "__main__":
    print(Chayen([['Travel','Food'],['Wemple']], [['Animal', 'Food'],['Ant']] ))
    # print(Chayen([['Travel','Food'],['Temple','French Fried','Theater']], [['Animal', 'Food'],['Ant' ,'French Fried' ,'Fudge' , 'Alpaca']] ))
    # print(Chayen([['Animal', 'Travel', 'Food'], ['Ant', 'Temple', 'French Fried' ,'Theater']], [['Animal', 'Food', 'Travel'] , ['Ant' ,'Temple', 'French Fried' ,'Theater']] ))