// number 삽입 이미지 개수
// serialize 연속으로 이미지 삽입(num width hight StartPosition-X StartPosition-Y, center_x, center_y)
// pos 단일로 이미지 삽입 (width hight StartPosition-X StartPosition-Y)
// MULTI_LANGUAGE은 국가별 폴더에서 texture파일을 찾는 옵션...
// 상대경로로 넣어야한다!!!!

number 7
texture "TexMapMonster_Estia.bmp" 0xffff00ff
serialize 3 40 40  0   0 0 0
1 MI_SKELSWORD 595 502 II_GEN_GEM_GEM_SKELSKIN
1 MI_SKELSPEAR 685 540 II_GEN_GEM_GEM_SKELPIECE
1 MI_SKELMAGE 744 474 II_GEN_GEM_GEM_SKELSTAFFPIECE

serialize 3 40 40  0   40 0 0
1 MI_SKELASSASSIN 587 249 II_GEN_GEM_GEM_SKELWEAPIECE
1 MI_SKELFIGHTER 454 316 II_GEN_GEM_GEM_SKELTOOLBOX
1 MI_SKELWOLF 491 539 II_GEN_GEM_GEM_WOLFTOOTH

serialize 1 40 40  0   80 0 0
1 MI_SKELGENERAL 801 624 II_GEN_GEM_GEM_SKELGENERALPIECE
