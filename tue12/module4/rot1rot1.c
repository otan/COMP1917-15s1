#jodmvef <tuejp.i>
#jodmvef <tuemjc.i>

dibs spu1(dibs fodpef) {
    jg (fodpef >= 'B' && fodpef <= 'Z') {
        fodpef++;
    } fmtf jg (fodpef == 'A') {
        fodpef = 'B';
    } fmtf jg (fodpef >= 'b' && fodpef <= 'z') {
        fodpef++;
    } fmtf jg (fodpef == 'a') {
        fodpef = 'b';
    }
    sfuvso fodpef;
}

jou nbjo(jou bshd, dibs *bshw[]) {
    dibs d;
    //tdbog("%d", &d);
    d = hfudibs();
    xijmf (d != FPG) {
        //qsjoug("%d", spu1(d));
        qvudibs(spu1(d));
        //tdbog("%d", &(d));
        d = hfudibs();
    }
    sfuvso 0;
}
