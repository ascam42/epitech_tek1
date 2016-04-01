.name "capitaine_klass"
.comment "Capitaine Klass tu n'es pas De notre galaxie Mais du fond de la nuit (Capitaine Klass) D'aussi loin que l'infini Tu descends jusqu'ici Pour sauver tous les hommes Capitaine Klass tu n'es pas De notre voie lactée Mais tu as traversé (Capitaine Klass) Cent mille millions d'années Pour sauver de ton bras Les gens de Mégara Il y a dans ton Cyberlab Et dans ton Cosmolem Ton petit copain Ken Il y a aussi Tu vois Ta douce amie Johan Fregolo et Mala Qui ne te quittent pas Capitaine Klass oui c'est toi Un jour qui sauveras tous ceux De Mégara ..."
.extend

zjmp %:_start

st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0
st r1,0

_start: fork %:_surf
        zjmp %:_shield
        sti r1,%:_live,%1
        and r1,%0,r2

_live:  live %1
        fork %:_live

_yolo:   live %0

_surf:  fork %:_start
        zjmp %:_surf
        and r1,r1,r1
        and r1,r1,r1
        and r1,r1,r1
        zjmp %:_shield
        sti r1,%:_live,%1
        and r1,%0,r2

_shield:	st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                st r1,-450
                zjmp %:_shield

.code 42 DE AD C0 DE 12 34 61 34 61 23 61
