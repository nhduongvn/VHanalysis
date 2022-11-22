void Z_dR_VbbHcc_16()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_16/Z_dR_VbbHcc_16
//=========  (Tue Nov 22 09:17:13 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_16 = new TCanvas("Z_dR_VbbHcc_16", "Z_dR_VbbHcc_16",0,0,600,600);
   Z_dR_VbbHcc_16->SetHighLightColor(2);
   Z_dR_VbbHcc_16->Range(0,0,1,1);
   Z_dR_VbbHcc_16->SetFillColor(0);
   Z_dR_VbbHcc_16->SetFillStyle(4000);
   Z_dR_VbbHcc_16->SetBorderMode(0);
   Z_dR_VbbHcc_16->SetBorderSize(2);
   Z_dR_VbbHcc_16->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-3357.692,10.52419,3354344);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2874832);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",50,0,10);
   st_stack_17->SetMinimum(0.01);
   st_stack_17->SetMaximum(3018574);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetRange(1,50);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetLabelSize(0.035);
   st_stack_17->GetXaxis()->SetTitleSize(0.035);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetLabelSize(0.05);
   st_stack_17->GetYaxis()->SetTitleSize(0.057);
   st_stack_17->GetYaxis()->SetTitleOffset(1.2);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetLabelSize(0.035);
   st_stack_17->GetZaxis()->SetTitleSize(0.035);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_duong_Z_dR_stack_1 = new TH1D("VbbHcc_duong_Z_dR_stack_1","",50,0,10);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(3,844175.2);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(4,1216021);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(5,891399.3);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(6,825753.1);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(7,716814.8);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(8,660623.1);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(9,679602.3);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(10,687793.3);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(11,653798.4);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(12,719096.9);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(13,820173.3);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(14,861231.7);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(15,990162.8);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(16,1007756);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(17,626117.1);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(18,378129.3);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(19,293298.6);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(20,181246.3);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(21,147887.8);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(22,83445.53);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(23,64459.2);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(24,50051.47);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(25,26797.13);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(26,17667.16);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(27,2790.216);
   VbbHcc_duong_Z_dR_stack_1->SetBinContent(28,1822.723);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(3,34178.96);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(4,40891.07);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(5,34985.69);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(6,33661.86);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(7,31335.96);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(8,30169.7);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(9,30567.48);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(10,30772.43);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(11,29881.32);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(12,31405.53);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(13,33519.61);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(14,34382.27);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(15,36817.33);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(16,37126.68);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(17,29199.62);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(18,22858.07);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(19,20054.66);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(20,15657.67);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(21,14181.2);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(22,10601.05);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(23,9258.338);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(24,8247.997);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(25,6042.7);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(26,4925.582);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(27,1983.173);
   VbbHcc_duong_Z_dR_stack_1->SetBinError(28,1409.397);
   VbbHcc_duong_Z_dR_stack_1->SetEntries(9997);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_2 = new TH1D("VbbHcc_duong_Z_dR_stack_2","",50,0,10);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(2,1.682096);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(3,2390.329);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(4,4435.359);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(5,5241.983);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(6,6337.974);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(7,7478.292);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(8,8487.498);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(9,9446.818);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(10,10337.28);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(11,11328.91);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(12,12361.81);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(13,13190.34);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(14,14075.47);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(15,14753.04);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(16,14341.63);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(17,7874.77);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(18,4806.029);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(19,3080.935);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(20,2023.212);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(21,1293.559);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(22,797.2013);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(23,474.7283);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(24,265.6193);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(25,133.0873);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(26,56.29944);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(27,21.56472);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(28,6.752141);
   VbbHcc_duong_Z_dR_stack_2->SetBinContent(29,0.1593482);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(2,0.5418761);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(3,19.5153);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(4,26.43975);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(5,28.75448);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(6,31.59401);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(7,34.38381);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(8,36.47397);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(9,38.65003);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(10,40.30986);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(11,42.20941);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(12,44.08333);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(13,45.50958);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(14,47.15489);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(15,48.14225);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(16,47.67284);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(17,35.89288);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(18,28.48838);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(19,22.94248);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(20,18.75749);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(21,15.03583);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(22,11.82687);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(23,9.122699);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(24,6.75842);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(25,4.771158);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(26,2.997515);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(27,1.82832);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(28,1.063483);
   VbbHcc_duong_Z_dR_stack_2->SetBinError(29,0.1019543);
   VbbHcc_duong_Z_dR_stack_2->SetEntries(2341547);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_3 = new TH1D("VbbHcc_duong_Z_dR_stack_3","",50,0,10);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(2,24.70429);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(3,32323.09);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(4,62586.73);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(5,75014.56);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(6,91502.88);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(7,106851.4);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(8,121161.9);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(9,135424.3);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(10,150297.7);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(11,165760.7);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(12,182793.1);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(13,200850.2);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(14,218639.7);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(15,234648.6);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(16,230072);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(17,120427.5);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(18,68424.09);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(19,40352.64);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(20,23701.91);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(21,13625.59);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(22,7643.258);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(23,4087.696);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(24,2085.135);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(25,965.1014);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(26,397.9922);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(27,136.2742);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(28,32.8065);
   VbbHcc_duong_Z_dR_stack_3->SetBinContent(29,1.185689);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(2,1.270129);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(3,45.92376);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(4,63.98145);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(5,70.11183);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(6,77.45103);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(7,83.71405);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(8,89.15328);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(9,94.25943);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(10,99.32572);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(11,104.3423);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(12,109.6263);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(13,114.9642);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(14,120.0452);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(15,124.4373);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(16,123.3108);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(17,89.22775);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(18,67.25025);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(19,51.63454);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(20,39.55067);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(21,29.97369);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(22,22.38731);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(23,16.34684);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(24,11.62728);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(25,7.894126);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(26,5.048977);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(27,2.944346);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(28,1.433);
   VbbHcc_duong_Z_dR_stack_3->SetBinError(29,0.2652482);
   VbbHcc_duong_Z_dR_stack_3->SetEntries(3.690801e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_4 = new TH1D("VbbHcc_duong_Z_dR_stack_4","",50,0,10);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(2,1.269605);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(3,1104.431);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(4,2852.815);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(5,4318.378);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(6,4226.117);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(7,3355.921);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(8,2726.647);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(9,2325.176);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(10,1987.538);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(11,1909.158);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(12,1899.382);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(13,1960.689);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(14,2101.318);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(15,2277.071);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(16,2190.766);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(17,1154.433);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(18,694.8437);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(19,492.4875);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(20,319.7263);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(21,229.5535);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(22,149.3289);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(23,102.3296);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(24,61.19408);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(25,32.42394);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(26,15.56542);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(27,9.738959);
   VbbHcc_duong_Z_dR_stack_4->SetBinContent(28,1.449086);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(2,0.6352731);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(3,18.14078);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(4,29.14901);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(5,35.89656);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(6,35.51032);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(7,31.59104);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(8,28.46989);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(9,26.30672);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(10,24.31803);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(11,23.83072);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(12,23.76188);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(13,24.14963);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(14,24.99714);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(15,26.01687);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(16,25.52432);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(17,18.51841);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(18,14.34318);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(19,12.07265);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(20,9.716931);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(21,8.216181);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(22,6.623809);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(23,5.455829);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(24,4.205886);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(25,3.029991);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(26,2.098677);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(27,1.638479);
   VbbHcc_duong_Z_dR_stack_4->SetBinError(28,0.6269376);
   VbbHcc_duong_Z_dR_stack_4->SetEntries(131892);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_5 = new TH1D("VbbHcc_duong_Z_dR_stack_5","",50,0,10);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(3,1858.944);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(4,2019.17);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(5,1463.171);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(6,1184.653);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(7,1015.883);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(8,991.4026);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(9,982.1943);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(10,1013.645);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(11,1029.82);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(12,1145.58);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(13,1296.809);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(14,1500.778);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(15,1544.988);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(16,1569.071);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(17,866.306);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(18,601.7559);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(19,421.3282);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(20,315.844);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(21,204.3989);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(22,152.9871);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(23,93.0854);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(24,54.99583);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(25,42.01814);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(26,22.58135);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(27,11.56204);
   VbbHcc_duong_Z_dR_stack_5->SetBinContent(28,2.240349);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(3,45.22566);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(4,47.10963);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(5,40.01211);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(6,36.04479);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(7,33.3735);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(8,32.83302);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(9,32.72367);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(10,33.27468);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(11,33.56632);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(12,35.28541);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(13,37.62146);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(14,40.57345);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(15,41.09163);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(16,41.38415);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(17,30.7137);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(18,25.51811);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(19,21.36194);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(20,18.46891);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(21,14.75814);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(22,12.80034);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(23,9.91676);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(24,7.628294);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(25,6.593924);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(26,4.852765);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(27,3.468504);
   VbbHcc_duong_Z_dR_stack_5->SetBinError(28,1.585272);
   VbbHcc_duong_Z_dR_stack_5->SetEntries(20027);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_6 = new TH1D("VbbHcc_duong_Z_dR_stack_6","",50,0,10);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(3,31.59548);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(4,31.80734);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(5,28.9829);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(6,29.1345);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(7,27.31078);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(8,28.90193);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(9,29.2455);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(10,36.08832);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(11,33.21128);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(12,41.5239);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(13,49.59135);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(14,50.78576);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(15,58.80961);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(16,61.09392);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(17,33.9887);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(18,21.53339);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(19,15.30458);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(20,10.62068);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(21,6.812603);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(22,6.486578);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(23,2.857978);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(24,1.789624);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(25,1.419933);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(26,0.4748367);
   VbbHcc_duong_Z_dR_stack_6->SetBinContent(27,0.3650382);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(3,1.700666);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(4,1.699146);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(5,1.619089);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(6,1.635766);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(7,1.574145);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(8,1.627067);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(9,1.63454);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(10,1.822095);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(11,1.743356);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(12,1.947318);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(13,2.135574);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(14,2.165379);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(15,2.321846);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(16,2.360155);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(17,1.759855);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(18,1.404202);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(19,1.17975);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(20,0.9789473);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(21,0.7848535);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(22,0.7659072);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(23,0.5026079);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(24,0.4028091);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(25,0.3671741);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(26,0.2007511);
   VbbHcc_duong_Z_dR_stack_6->SetBinError(27,0.1828382);
   VbbHcc_duong_Z_dR_stack_6->SetEntries(7131);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_7 = new TH1D("VbbHcc_duong_Z_dR_stack_7","",50,0,10);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(2,0.06684071);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(3,51.47076);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(4,89.23345);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(5,95.23366);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(6,108.3515);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(7,114.3152);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(8,104.299);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(9,95.18248);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(10,81.61022);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(11,74.15931);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(12,70.46555);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(13,66.16471);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(14,70.71026);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(15,71.77479);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(16,73.88699);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(17,34.37519);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(18,18.57275);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(19,11.49117);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(20,7.85725);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(21,4.839278);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(22,3.485945);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(23,2.581414);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(24,1.166871);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(25,0.5007636);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(26,0.5880218);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(27,0.1352961);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(28,0.06671945);
   VbbHcc_duong_Z_dR_stack_7->SetBinContent(29,0.04987789);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(2,0.06684071);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(3,1.866861);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(4,2.46481);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(5,2.549036);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(6,2.714028);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(7,2.793962);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(8,2.672099);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(9,2.54915);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(10,2.361205);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(11,2.250095);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(12,2.196181);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(13,2.126181);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(14,2.194171);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(15,2.204713);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(16,2.245413);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(17,1.52841);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(18,1.129372);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(19,0.8803897);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(20,0.7280887);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(21,0.5705894);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(22,0.4844371);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(23,0.4112587);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(24,0.2836696);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(25,0.1832369);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(26,0.196384);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(27,0.09577267);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(28,0.06671945);
   VbbHcc_duong_Z_dR_stack_7->SetBinError(29,0.04987789);
   VbbHcc_duong_Z_dR_stack_7->SetEntries(18712);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_8 = new TH1D("VbbHcc_duong_Z_dR_stack_8","",50,0,10);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(3,33.6367);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(4,70.90839);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(5,80.69644);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(6,94.98566);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(7,91.19758);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(8,92.60057);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(9,91.18389);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(10,91.53642);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(11,84.74701);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(12,80.60192);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(13,82.37665);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(14,88.16317);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(15,95.32086);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(16,87.76858);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(17,32.19716);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(18,16.86477);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(19,8.807202);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(20,8.145641);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(21,3.938685);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(22,1.856384);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(23,2.483528);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(24,0.5817801);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(25,0.3706891);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(26,0.3337086);
   VbbHcc_duong_Z_dR_stack_8->SetBinContent(27,0.1401072);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(3,2.517162);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(4,3.702648);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(5,3.926773);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(6,4.266619);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(7,4.183496);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(8,4.218413);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(9,4.185864);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(10,4.192258);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(11,4.044041);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(12,3.937967);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(13,3.977897);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(14,4.132988);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(15,4.289466);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(16,4.116333);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(17,2.487243);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(18,1.791127);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(19,1.301614);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(20,1.244241);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(21,0.8513335);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(22,0.5805151);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(23,0.6902503);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(24,0.3361442);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(25,0.2623097);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(26,0.2411049);
   VbbHcc_duong_Z_dR_stack_8->SetBinError(27,0.1401072);
   VbbHcc_duong_Z_dR_stack_8->SetEntries(6580);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_9 = new TH1D("VbbHcc_duong_Z_dR_stack_9","",50,0,10);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(2,0.01214232);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(3,8.966638);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(4,19.52603);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(5,26.10912);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(6,32.07479);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(7,35.89536);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(8,37.142);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(9,36.66847);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(10,35.74106);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(11,34.85559);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(12,33.77262);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(13,33.75695);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(14,35.46847);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(15,37.56991);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(16,35.78487);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(17,11.89711);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(18,4.295647);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(19,1.863895);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(20,0.9776056);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(21,0.5891482);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(22,0.3623359);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(23,0.2053906);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(24,0.1074383);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(25,0.04572997);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(26,0.03533764);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(27,0.009419964);
   VbbHcc_duong_Z_dR_stack_9->SetBinContent(28,0.007800498);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(2,0.004300631);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(3,0.1159718);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(4,0.1716262);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(5,0.1984248);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(6,0.2196992);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(7,0.2326351);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(8,0.2371869);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(9,0.2353712);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(10,0.2325498);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(11,0.2295131);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(12,0.2258869);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(13,0.2254475);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(14,0.2311447);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(15,0.2382702);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(16,0.2326768);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(17,0.1339192);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(18,0.08001318);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(19,0.05240706);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(20,0.03793617);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(21,0.02929265);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(22,0.02299371);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(23,0.01726716);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(24,0.01248153);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(25,0.008381081);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(26,0.007099218);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(27,0.003590399);
   VbbHcc_duong_Z_dR_stack_9->SetBinError(28,0.003189825);
   VbbHcc_duong_Z_dR_stack_9->SetEntries(327490);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_10 = new TH1D("VbbHcc_duong_Z_dR_stack_10","",50,0,10);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(2,0.004329155);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(3,4.321981);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(4,9.08524);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(5,12.34241);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(6,15.18649);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(7,16.11716);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(8,15.00966);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(9,12.51833);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(10,10.18495);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(11,8.771195);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(12,8.042436);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(13,8.072848);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(14,8.343058);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(15,8.830427);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(16,8.395788);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(17,3.406335);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(18,1.571788);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(19,0.7947367);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(20,0.4357045);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(21,0.2598729);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(22,0.1401977);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(23,0.07758833);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(24,0.04215586);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(25,0.02122305);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(26,0.004785972);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(27,0.003946603);
   VbbHcc_duong_Z_dR_stack_10->SetBinContent(28,0.001093024);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(2,0.001308429);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(3,0.0405838);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(4,0.05882877);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(5,0.06865861);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(6,0.07621027);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(7,0.07859736);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(8,0.07586789);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(9,0.06928895);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(10,0.06249715);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(11,0.05796791);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(12,0.05550864);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(13,0.05559008);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(14,0.05651792);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(15,0.05815447);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(16,0.05673199);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(17,0.03607343);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(18,0.02449121);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(19,0.01741148);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(20,0.01285319);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(21,0.009915617);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(22,0.00726316);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(23,0.005404462);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(24,0.003973083);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(25,0.002782188);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(26,0.001335427);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(27,0.00119534);
   VbbHcc_duong_Z_dR_stack_10->SetBinError(28,0.0006350461);
   VbbHcc_duong_Z_dR_stack_10->SetEntries(404395);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_11 = new TH1D("VbbHcc_duong_Z_dR_stack_11","",50,0,10);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(3,0.2641785);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(4,0.4528954);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(5,0.6100086);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(6,0.6569665);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(7,0.6471617);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(8,0.61752);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(9,0.5602489);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(10,0.4373235);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(11,0.4226813);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(12,0.4921647);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(13,0.4839983);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(14,0.4925935);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(15,0.5078491);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(16,0.4893586);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(17,0.1743405);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(18,0.09629581);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(19,0.04081018);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(20,0.02752782);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(21,0.01198985);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(22,0.01393785);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(24,0.003188493);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(25,0.003014248);
   VbbHcc_duong_Z_dR_stack_11->SetBinContent(26,0.001493284);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(3,0.02003209);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(4,0.02672735);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(5,0.03096623);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(6,0.03205418);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(7,0.03174795);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(8,0.03090293);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(9,0.02960451);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(10,0.02653587);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(11,0.02544096);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(12,0.02770635);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(13,0.02778781);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(14,0.02736589);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(15,0.02791591);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(16,0.02761466);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(17,0.01648662);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(18,0.01207017);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(19,0.007809563);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(20,0.006510931);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(21,0.004294459);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(22,0.00445315);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(24,0.002227704);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(25,0.002131957);
   VbbHcc_duong_Z_dR_stack_11->SetBinError(26,0.001493284);
   VbbHcc_duong_Z_dR_stack_11->SetEntries(5485);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_duong_Z_dR_stack_12 = new TH1D("VbbHcc_duong_Z_dR_stack_12","",50,0,10);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(2,3.869294);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(3,3188.437);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(4,5538.854);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(5,7031.416);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(6,7328.17);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(7,5845.604);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(8,4381.324);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(9,3282.862);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(10,2890.065);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(11,2570.695);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(12,2869.76);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(13,2821.006);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(14,2942.697);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(15,3107.462);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(16,3225.593);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(17,1499.328);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(18,790.7457);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(19,466.2837);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(20,370.3202);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(21,192.813);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(22,102.8365);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(23,85.8221);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(24,28.54656);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(25,10.11282);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(26,0.8518846);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(27,2.800823);
   VbbHcc_duong_Z_dR_stack_12->SetBinContent(29,3.909615);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(2,3.869294);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(3,113.3662);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(4,149.0606);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(5,168.6234);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(6,172.1538);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(7,153.5241);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(8,133.0971);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(9,114.9551);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(10,107.4481);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(11,101.2429);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(12,107.4361);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(13,106.362);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(14,108.8663);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(15,111.9535);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(16,113.8213);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(17,77.82817);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(18,56.09564);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(19,43.11337);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(20,38.79488);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(21,27.59667);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(22,20.1083);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(23,17.76426);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(24,10.52481);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(25,5.891949);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(26,0.8518846);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(27,2.800823);
   VbbHcc_duong_Z_dR_stack_12->SetBinError(29,3.909615);
   VbbHcc_duong_Z_dR_stack_12->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_Z_dR__33 = new TH1D("VbbHcc_duong_Z_dR__33","",50,0,10);
   VbbHcc_duong_Z_dR__33->SetBinContent(2,590);
   VbbHcc_duong_Z_dR__33->SetBinContent(3,697270);
   VbbHcc_duong_Z_dR__33->SetBinContent(4,740557);
   VbbHcc_duong_Z_dR__33->SetBinContent(5,523129);
   VbbHcc_duong_Z_dR__33->SetBinContent(6,461363);
   VbbHcc_duong_Z_dR__33->SetBinContent(7,428566);
   VbbHcc_duong_Z_dR__33->SetBinContent(8,410032);
   VbbHcc_duong_Z_dR__33->SetBinContent(9,406223);
   VbbHcc_duong_Z_dR__33->SetBinContent(10,412392);
   VbbHcc_duong_Z_dR__33->SetBinContent(11,427265);
   VbbHcc_duong_Z_dR__33->SetBinContent(12,453586);
   VbbHcc_duong_Z_dR__33->SetBinContent(13,487743);
   VbbHcc_duong_Z_dR__33->SetBinContent(14,534735);
   VbbHcc_duong_Z_dR__33->SetBinContent(15,589247);
   VbbHcc_duong_Z_dR__33->SetBinContent(16,608033);
   VbbHcc_duong_Z_dR__33->SetBinContent(17,363933);
   VbbHcc_duong_Z_dR__33->SetBinContent(18,238708);
   VbbHcc_duong_Z_dR__33->SetBinContent(19,163350);
   VbbHcc_duong_Z_dR__33->SetBinContent(20,113303);
   VbbHcc_duong_Z_dR__33->SetBinContent(21,76760);
   VbbHcc_duong_Z_dR__33->SetBinContent(22,50732);
   VbbHcc_duong_Z_dR__33->SetBinContent(23,32492);
   VbbHcc_duong_Z_dR__33->SetBinContent(24,19330);
   VbbHcc_duong_Z_dR__33->SetBinContent(25,10446);
   VbbHcc_duong_Z_dR__33->SetBinContent(26,5030);
   VbbHcc_duong_Z_dR__33->SetBinContent(27,2098);
   VbbHcc_duong_Z_dR__33->SetBinContent(28,572);
   VbbHcc_duong_Z_dR__33->SetBinContent(29,28);
   VbbHcc_duong_Z_dR__33->SetEntries(8257513);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR__33->SetLineColor(ci);
   VbbHcc_duong_Z_dR__33->SetLineWidth(2);
   VbbHcc_duong_Z_dR__33->SetMarkerStyle(20);
   VbbHcc_duong_Z_dR__33->SetMarkerSize(1.2);
   VbbHcc_duong_Z_dR__33->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR__33->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__33->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__33->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__33->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__33->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__33->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__33->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__33->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR__33->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__33->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR__33->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR__33->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR__33->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR__33->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_Z_dR_fx1033[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_duong_Z_dR_fy1033[50] = {
   0,
   31.60859,
   885170.7,
   1293675,
   984712.8,
   936613.3,
   841647.5,
   798650.4,
   831329,
   854575.1,
   836633.9,
   920401.4,
   1040533,
   1100746,
   1246767,
   1259423,
   758055.5,
   453509.7,
   338150.6,
   208005.4,
   163450.1,
   92303.48,
   69311.07,
   52550.65,
   27982.24,
   18161.89,
   2972.811,
   1866.047,
   5.30453,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_duong_Z_dR_fex1033[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_duong_Z_dR_fey1033[50] = {
   0,
   4.157686,
   34179.22,
   40891.43,
   34986.22,
   33662.44,
   31336.5,
   30170.18,
   30567.89,
   30772.84,
   29881.73,
   31405.97,
   33520.04,
   34382.72,
   36817.78,
   37127.12,
   29199.91,
   22858.28,
   20054.8,
   15657.79,
   14181.27,
   10601.11,
   9258.381,
   8248.02,
   6042.714,
   4925.589,
   1983.182,
   1409.399,
   3.920246,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_duong_Z_dR_fx1033,Graph_from_VbbHcc_duong_Z_dR_fy1033,Graph_from_VbbHcc_duong_Z_dR_fex1033,Graph_from_VbbHcc_duong_Z_dR_fey1033);
   gre->SetName("Graph_from_VbbHcc_duong_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_Z_dR1033 = new TH1F("Graph_Graph_from_VbbHcc_duong_Z_dR1033","",100,0,11);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->SetMinimum(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->SetMaximum(1468023);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_Z_dR1033);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_Z_dR","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__34 = new TH1D("data_mc_ratio__34","",50,0,10);
   data_mc_ratio__34->SetBinContent(2,18.66581);
   data_mc_ratio__34->SetBinContent(3,0.7877238);
   data_mc_ratio__34->SetBinContent(4,0.5724446);
   data_mc_ratio__34->SetBinContent(5,0.5312504);
   data_mc_ratio__34->SetBinContent(6,0.4925865);
   data_mc_ratio__34->SetBinContent(7,0.5091989);
   data_mc_ratio__34->SetBinContent(8,0.5134061);
   data_mc_ratio__34->SetBinContent(9,0.4886429);
   data_mc_ratio__34->SetBinContent(10,0.4825696);
   data_mc_ratio__34->SetBinContent(11,0.5106953);
   data_mc_ratio__34->SetBinContent(12,0.4928132);
   data_mc_ratio__34->SetBinContent(13,0.4687435);
   data_mc_ratio__34->SetBinContent(14,0.4857934);
   data_mc_ratio__34->SetBinContent(15,0.4726201);
   data_mc_ratio__34->SetBinContent(16,0.482787);
   data_mc_ratio__34->SetBinContent(17,0.4800876);
   data_mc_ratio__34->SetBinContent(18,0.526357);
   data_mc_ratio__34->SetBinContent(19,0.4830688);
   data_mc_ratio__34->SetBinContent(20,0.5447118);
   data_mc_ratio__34->SetBinContent(21,0.4696233);
   data_mc_ratio__34->SetBinContent(22,0.5496217);
   data_mc_ratio__34->SetBinContent(23,0.4687852);
   data_mc_ratio__34->SetBinContent(24,0.3678356);
   data_mc_ratio__34->SetBinContent(25,0.3733082);
   data_mc_ratio__34->SetBinContent(26,0.2769536);
   data_mc_ratio__34->SetBinContent(27,0.7057294);
   data_mc_ratio__34->SetBinContent(28,0.3065304);
   data_mc_ratio__34->SetBinContent(29,5.278507);
   data_mc_ratio__34->SetBinError(2,0.7684592);
   data_mc_ratio__34->SetBinError(3,0.0009433513);
   data_mc_ratio__34->SetBinError(4,0.000665203);
   data_mc_ratio__34->SetBinError(5,0.0007345051);
   data_mc_ratio__34->SetBinError(6,0.0007252055);
   data_mc_ratio__34->SetBinError(7,0.0007778192);
   data_mc_ratio__34->SetBinError(8,0.0008017743);
   data_mc_ratio__34->SetBinError(9,0.0007666715);
   data_mc_ratio__34->SetBinError(10,0.0007514583);
   data_mc_ratio__34->SetBinError(11,0.0007812917);
   data_mc_ratio__34->SetBinError(12,0.0007317328);
   data_mc_ratio__34->SetBinError(13,0.0006711812);
   data_mc_ratio__34->SetBinError(14,0.0006643277);
   data_mc_ratio__34->SetBinError(15,0.0006156919);
   data_mc_ratio__34->SetBinError(16,0.0006191445);
   data_mc_ratio__34->SetBinError(17,0.0007958106);
   data_mc_ratio__34->SetBinError(18,0.001077325);
   data_mc_ratio__34->SetBinError(19,0.001195224);
   data_mc_ratio__34->SetBinError(20,0.001618252);
   data_mc_ratio__34->SetBinError(21,0.001695049);
   data_mc_ratio__34->SetBinError(22,0.002440186);
   data_mc_ratio__34->SetBinError(23,0.002600672);
   data_mc_ratio__34->SetBinError(24,0.002645683);
   data_mc_ratio__34->SetBinError(25,0.00365252);
   data_mc_ratio__34->SetBinError(26,0.003905018);
   data_mc_ratio__34->SetBinError(27,0.01540762);
   data_mc_ratio__34->SetBinError(28,0.01281668);
   data_mc_ratio__34->SetBinError(29,0.997544);
   data_mc_ratio__34->SetMinimum(0.4);
   data_mc_ratio__34->SetMaximum(1.6);
   data_mc_ratio__34->SetEntries(58.48429);
   data_mc_ratio__34->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__34->SetLineColor(ci);
   data_mc_ratio__34->SetLineWidth(2);
   data_mc_ratio__34->SetMarkerStyle(20);
   data_mc_ratio__34->SetMarkerSize(1.2);
   data_mc_ratio__34->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__34->GetXaxis()->SetRange(1,50);
   data_mc_ratio__34->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__34->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__34->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__34->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__34->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__34->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__34->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__34->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__34->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__34->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__34->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__34->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__34->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__34->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__34->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1034[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1034[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1034[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1034[50] = {
   0,
   0.1315366,
   0.03861314,
   0.03160875,
   0.03552936,
   0.0359406,
   0.03723233,
   0.03777645,
   0.03676991,
   0.03600952,
   0.03571661,
   0.03412204,
   0.03221431,
   0.03123584,
   0.02953061,
   0.02947947,
   0.03851949,
   0.05040306,
   0.0593073,
   0.07527589,
   0.08676207,
   0.1148505,
   0.1335772,
   0.1569537,
   0.2159482,
   0.2712047,
   0.6671066,
   0.755286,
   0.7390374,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1034,Graph_from_mc_statistical_error_fy1034,Graph_from_mc_statistical_error_fex1034,Graph_from_mc_statistical_error_fey1034);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1034 = new TH1F("Graph_Graph_from_mc_statistical_error1034","",100,0,11);
   Graph_Graph_from_mc_statistical_error1034->SetMinimum(0.09365679);
   Graph_Graph_from_mc_statistical_error1034->SetMaximum(1.906343);
   Graph_Graph_from_mc_statistical_error1034->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1034->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1034);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_16->cd();
   Z_dR_VbbHcc_16->Modified();
   Z_dR_VbbHcc_16->cd();
   Z_dR_VbbHcc_16->SetSelected(Z_dR_VbbHcc_16);
}
