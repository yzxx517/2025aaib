//week08_4_bubble_balloon_part2
//方開 mouse 會往上飄
void setup(){
  size(400, 400); //大小
}
int x, y, s; // 氣球的座標 氣球的大小
void draw(){
  background(255); //白色的背景
  ellipse(x, y-s/2, s*0.7, s); //瘦瘦的氣球 接觸下方
  if(mousePressed) s++; //一直壓著才會打氣
  else{ //沒有壓 就會往上飄
    if(y>s+1) y-=2; //沒有撞到天花板 就往上移
  }
}
void mousePressed(){ //按下mouse改變氣球位置 大小
  x = mouseX;
  y = mouseY;
  s = 1; //大小設成數字1
}
