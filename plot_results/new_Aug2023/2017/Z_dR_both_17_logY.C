void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Tue Aug 22 09:18:15 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(0,0,1,1);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.860134,6.314516,12.02498);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(1.011257e+10);
   
   TH1F *st_stack_210 = new TH1F("st_stack_210","",30,0,6);
   st_stack_210->SetMinimum(0.001428076);
   st_stack_210->SetMaximum(3.439256e+10);
   st_stack_210->SetDirectory(0);
   st_stack_210->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_210->SetLineColor(ci);
   st_stack_210->GetXaxis()->SetRange(1,30);
   st_stack_210->GetXaxis()->SetLabelFont(42);
   st_stack_210->GetXaxis()->SetLabelSize(0.035);
   st_stack_210->GetXaxis()->SetTitleSize(0.035);
   st_stack_210->GetXaxis()->SetTitleFont(42);
   st_stack_210->GetYaxis()->SetTitle("Events/0.2");
   st_stack_210->GetYaxis()->SetLabelFont(42);
   st_stack_210->GetYaxis()->SetLabelSize(0.05);
   st_stack_210->GetYaxis()->SetTitleSize(0.057);
   st_stack_210->GetYaxis()->SetTitleOffset(1.2);
   st_stack_210->GetYaxis()->SetTitleFont(42);
   st_stack_210->GetZaxis()->SetLabelFont(42);
   st_stack_210->GetZaxis()->SetLabelSize(0.035);
   st_stack_210->GetZaxis()->SetTitleSize(0.035);
   st_stack_210->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_210);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,11767.05);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,12606.72);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,30451.45);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,7403.622);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,7507.599);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,6489.947);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,5164.738);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,6655.036);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,7888.763);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,7341.804);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,9668.232);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,7114.734);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,8600.989);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,7471.641);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,7031.23);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,21616.3);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,5897.619);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,3800.155);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,3068.408);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,3370.603);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,2919.75);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,3104.849);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,2617.893);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,2503.844);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,1603);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,1481.111);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1485.292);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,446.9568);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,933.4605);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,1171.743);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,1320.51);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,20623.18);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,1010.621);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,1089.116);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,981.6279);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,727.999);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,1043.052);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,1266.765);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,1065.09);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,1715.022);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1029.623);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,1198.107);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,988.3791);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,995.7789);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,16543.25);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,925.993);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,630.1538);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,561.3572);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,634.834);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,641.5053);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,719.8207);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,655.3437);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,689.1389);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,400.1431);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,370.342);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,424.3491);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,91.37601);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,400.7382);
   VbbHcc_both_Z_dR_stack_1->SetEntries(9795);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.05316449);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,34.9223);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,51.27924);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,44.98534);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,45.37731);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,45.41718);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,47.55331);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,48.28833);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,45.65346);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,40.48532);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,47.41013);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,47.29239);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,43.59297);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,53.11351);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,43.74188);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,30.64733);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,40.80272);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,32.38539);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,26.95317);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,27.77958);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,22.70461);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,22.25629);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,16.35701);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,13.64454);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,13.14396);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,10.32364);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,8.71198);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,7.404551);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,4.979971);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,2.848755);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.05316449);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,2.526809);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,2.99416);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,2.747805);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,2.845612);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,2.80697);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,2.931667);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,2.867306);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,2.774584);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,2.668757);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,2.874385);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,2.837031);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,2.766834);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,3.119801);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,2.764919);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,2.187114);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,2.773536);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,2.368507);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,2.19167);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,2.24915);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,1.96002);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,1.980584);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,1.699094);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,1.473134);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,1.511256);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.346345);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.208217);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,1.162894);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,0.8699234);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,0.6681547);
   VbbHcc_both_Z_dR_stack_2->SetEntries(12402);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,0.827703);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,699.7833);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,1027.193);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,1079.189);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,1104.219);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,1102.045);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,1057.294);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,1016.241);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,979.102);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,990.2757);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,958.0653);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,980.4801);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,956.2602);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,920.0758);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,891.3075);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,825.1994);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,752.6105);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,684.2222);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,611.0335);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,542.569);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,463.8508);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,411.2988);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,361.0399);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,295.108);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,262.6469);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,226.1698);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,186.6708);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,150.2951);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,98.00038);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,72.31608);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.265287);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,6.91668);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,8.334388);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,8.525096);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,8.601146);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,8.560227);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,8.345567);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,8.147053);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,8.0004);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,8.048903);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,7.932417);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,8.042452);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,7.954819);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,7.817092);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,7.721599);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,7.435566);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,7.098291);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,6.756818);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,6.369359);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,6.011474);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,5.518021);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,5.193311);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,4.862575);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,4.399743);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,4.171707);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,3.864163);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,3.521115);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,3.144699);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,2.563741);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,2.195932);
   VbbHcc_both_Z_dR_stack_3->SetEntries(333238);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(2,0.07431946);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,136.4583);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,185.8792);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,179.3545);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,164.4725);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,112.9742);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,110.6264);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,100.7143);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,87.24139);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,103.5912);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,99.36877);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,100.8473);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,110.4686);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,99.19463);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,97.8359);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,90.86078);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,84.29146);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,82.57667);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,68.07709);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,45.13912);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,45.84866);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,42.1115);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,36.80687);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,26.51605);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,27.75015);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,26.7792);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,22.81661);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,17.70744);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,12.15537);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,8.28769);
   VbbHcc_both_Z_dR_stack_4->SetBinError(2,0.07431946);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,4.210883);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,5.497031);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,8.756438);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,8.553749);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,5.814069);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,6.699994);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,6.856058);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,5.140686);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,8.025654);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,6.976217);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,6.731594);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,8.110906);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,5.765549);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,5.383789);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,4.515498);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,4.60373);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,5.839786);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,4.325741);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,2.809156);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,3.609839);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,4.540659);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,3.743537);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,3.462179);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,4.761377);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,2.399858);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,1.922429);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,1.65529);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,1.467698);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,1.166514);
   VbbHcc_both_Z_dR_stack_4->SetEntries(18334);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,26.6678);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,25.63352);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,14.56221);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,17.07648);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,11.18706);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,10.20512);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,13.57375);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,6.071432);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,9.614389);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,7.147686);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,10.5594);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,12.4626);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,9.494192);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,5.481901);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,9.868706);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,9.87903);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,4.926272);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,3.894512);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,4.067481);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,3.979851);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,4.398416);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,2.640247);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,11.36885);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,5.205104);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,3.374882);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,3.482765);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,2.919357);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,2.015377);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,2.265818);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,2.97689);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,3.230603);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,2.440804);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,2.979311);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,1.963993);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,1.9609);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,5.337476);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,0.9750604);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,1.677977);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,1.528245);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,2.141804);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,2.527846);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,1.440124);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,0.814909);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,2.130688);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,2.23161);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,0.7966807);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,0.7070864);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,0.8616687);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,0.6728248);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,1.543168);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,0.9553332);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,7.842461);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,1.808539);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,1.259676);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,1.312439);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,0.7679155);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,0.6295032);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,1.309993);
   VbbHcc_both_Z_dR_stack_5->SetEntries(2217);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(5,0.2950387);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,0.3049337);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(14,0.4684864);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(17,0.3752659);
   VbbHcc_both_Z_dR_stack_6->SetBinError(5,0.2950387);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.3049337);
   VbbHcc_both_Z_dR_stack_6->SetBinError(14,0.3312753);
   VbbHcc_both_Z_dR_stack_6->SetBinError(17,0.3752659);
   VbbHcc_both_Z_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,1.335553);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.7396079);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.1465374);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.4237883);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.6717148);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.2275793);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.2711943);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.5182622);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.2529144);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.3092329);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.2329143);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.5645121);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(23,0.2454468);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.2774426);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.2962674);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.6113885);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.4377645);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.1465374);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.3060047);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.3933135);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.2275793);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.2711943);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.3682743);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.2529144);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.3092329);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.2329143);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.401993);
   VbbHcc_both_Z_dR_stack_7->SetBinError(23,0.2454468);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.2774426);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.2962674);
   VbbHcc_both_Z_dR_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,3.940981);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,5.603241);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,6.218729);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,2.723282);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,0.8876125);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,1.275376);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,1.025316);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,0.9335974);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,1.02419);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,0.7311201);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,1.844472);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,1.288402);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,2.849186);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,1.785278);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,0.7048411);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,1.715556);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,2.108917);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,1.830878);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,0.7590541);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,0.4598251);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,0.5662893);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,0.5110649);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,0.3271961);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,0.2304085);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,0.7352413);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.4309789);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.2198757);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.013039);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.12218);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.234835);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,0.799798);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.4507837);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.5707679);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.5175383);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.4902132);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.5241118);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.3655692);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.6620638);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,0.596537);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,0.8706792);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.6835198);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.4119893);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.6538598);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.7104942);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.6764729);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.4432322);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.3252653);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.3284999);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.3624056);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.3271961);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.2304085);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.4370992);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.3114242);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.2198757);
   VbbHcc_both_Z_dR_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,2.497692);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,4.857828);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,4.544039);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,3.542412);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,2.324286);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,1.419609);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,1.019863);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,1.011101);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,1.138514);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,1.416049);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,1.660819);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,1.862826);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,2.193491);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,2.133577);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,2.057586);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,1.885874);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,1.563221);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.177158);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,0.7858845);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.578149);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.3828786);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.3453309);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.3035585);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.3755346);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.4259616);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.4986845);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.4407595);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.221148);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.1272508);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.06604206);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.08996242);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.08548287);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.07436821);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.06016462);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.04722173);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.03990147);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.03973707);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.04226);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.04756842);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.05136251);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.05506894);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.05966191);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.0588619);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.05780338);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.05561411);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.05034109);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.04364895);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.03567397);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.03025915);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.02463008);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.02307334);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.02134892);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.02384845);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.0259295);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.02856654);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.02682848);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.01905392);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.01432129);
   VbbHcc_both_Z_dR_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,0.6964536);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,1.421594);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,1.685935);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,1.499386);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,1.105957);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,0.7669105);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,0.5761176);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,0.5253848);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,0.5149777);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,0.5585455);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,0.6183506);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,0.6285695);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,0.6392202);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,0.6243456);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,0.6011801);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,0.5522167);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.4677745);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.4038471);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.3343756);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.2832065);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.2100695);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.1901906);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.1904259);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.1998964);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.2167754);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.1801148);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.1466139);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.08993846);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.04689274);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.01699615);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.02385037);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.0256839);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.0240022);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.02054718);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.01712195);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.01486815);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.01425755);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.01412499);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.01469934);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.01543747);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.01557732);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.01574616);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.01554959);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.01525658);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.01460071);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.01345409);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.01247383);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.01139071);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01048559);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.009000094);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.008543603);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.008580043);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.008728656);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.009142821);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.008378542);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.007627812);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.005972304);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.004315457);
   VbbHcc_both_Z_dR_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.02059252);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.01230006);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03204736);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01493307);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.004543207);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.006709729);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.004753969);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.00348426);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.001917841);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.009431983);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.001052596);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.001676953);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.006889878);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.002745678);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.002176473);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(20,0.002009449);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(22,0.003770382);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.003160696);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(25,0.003260446);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(26,0.00344075);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.001174952);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(28,0.003274426);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(31,0.001291342);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.005757668);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.00440774);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.00712917);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.004763056);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.002374171);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.003359021);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.00287641);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.002502184);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.001917841);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.003907524);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.001052596);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.001676953);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.003485939);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.001943489);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.002176473);
   VbbHcc_both_Z_dR_stack_11->SetBinError(20,0.001669739);
   VbbHcc_both_Z_dR_stack_11->SetBinError(22,0.002667107);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.00224032);
   VbbHcc_both_Z_dR_stack_11->SetBinError(25,0.00232838);
   VbbHcc_both_Z_dR_stack_11->SetBinError(26,0.002438184);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.001174952);
   VbbHcc_both_Z_dR_stack_11->SetBinError(28,0.002354108);
   VbbHcc_both_Z_dR_stack_11->SetBinError(31,0.001291342);
   VbbHcc_both_Z_dR_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.004720908);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.009739579);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.009079136);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.004977625);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.004424496);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.00305135);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.001274888);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.001723939);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.002353495);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.001228868);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.002343899);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.001678723);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.0009876294);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.00205312);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.0008679456);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.00161353);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001627656);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.0006291594);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.001186384);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.0006481336);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.0009374021);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(24,0.0006569159);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.001130959);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.0006691981);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.0006788293);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0003648148);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.0004267307);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(31,0.0006047822);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.001024941);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.001457851);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.001371263);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.0009931213);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.0009452245);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.0007737771);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.0005256172);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.0005794613);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.0007492329);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.0004694618);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.0007151238);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0006020814);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.0004336385);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.0006595567);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.000401262);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0005802372);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.0005830879);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.0003674585);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.000533908);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0003757929);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.0004381394);
   VbbHcc_both_Z_dR_stack_12->SetBinError(24,0.0003794195);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0004509416);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.0003358287);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.0003923445);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0002618145);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.0003058262);
   VbbHcc_both_Z_dR_stack_12->SetBinError(31,0.0003580482);
   VbbHcc_both_Z_dR_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__576 = new TH1D("VbbHcc_both_Z_dR__576","",30,0,6);
   VbbHcc_both_Z_dR__576->SetBinContent(2,2);
   VbbHcc_both_Z_dR__576->SetBinContent(3,4900);
   VbbHcc_both_Z_dR__576->SetBinContent(4,5557);
   VbbHcc_both_Z_dR__576->SetBinContent(5,4107);
   VbbHcc_both_Z_dR__576->SetBinContent(6,3623);
   VbbHcc_both_Z_dR__576->SetBinContent(7,3356);
   VbbHcc_both_Z_dR__576->SetBinContent(8,3249);
   VbbHcc_both_Z_dR__576->SetBinContent(9,3019);
   VbbHcc_both_Z_dR__576->SetBinContent(10,2858);
   VbbHcc_both_Z_dR__576->SetBinContent(11,2898);
   VbbHcc_both_Z_dR__576->SetBinContent(12,2867);
   VbbHcc_both_Z_dR__576->SetBinContent(13,2925);
   VbbHcc_both_Z_dR__576->SetBinContent(14,2910);
   VbbHcc_both_Z_dR__576->SetBinContent(15,2925);
   VbbHcc_both_Z_dR__576->SetBinContent(16,2847);
   VbbHcc_both_Z_dR__576->SetBinContent(17,2656);
   VbbHcc_both_Z_dR__576->SetBinContent(18,2419);
   VbbHcc_both_Z_dR__576->SetBinContent(19,2186);
   VbbHcc_both_Z_dR__576->SetBinContent(20,1905);
   VbbHcc_both_Z_dR__576->SetBinContent(21,1650);
   VbbHcc_both_Z_dR__576->SetBinContent(22,1491);
   VbbHcc_both_Z_dR__576->SetBinContent(23,1249);
   VbbHcc_both_Z_dR__576->SetBinContent(24,1057);
   VbbHcc_both_Z_dR__576->SetBinContent(25,900);
   VbbHcc_both_Z_dR__576->SetBinContent(26,774);
   VbbHcc_both_Z_dR__576->SetBinContent(27,749);
   VbbHcc_both_Z_dR__576->SetBinContent(28,623);
   VbbHcc_both_Z_dR__576->SetBinContent(29,605);
   VbbHcc_both_Z_dR__576->SetBinContent(30,437);
   VbbHcc_both_Z_dR__576->SetBinContent(31,292);
   VbbHcc_both_Z_dR__576->SetEntries(67065);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__576->SetLineColor(ci);
   VbbHcc_both_Z_dR__576->SetLineWidth(2);
   VbbHcc_both_Z_dR__576->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__576->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__576->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__576->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__576->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1419[30] = {
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
   5.9};
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1419[30] = {
   0,
   0.955187,
   12673.37,
   13909.35,
   31782.47,
   8742.977,
   8784.221,
   7719.325,
   6346.488,
   7775.851,
   9035.411,
   8456.512,
   10811.54,
   8242.289,
   9688.81,
   8514.865,
   7991.779,
   22508.04,
   6706.438,
   4513.528,
   3689.844,
   3908.313,
   3401.224,
   3523.017,
   2965.356,
   2813.169,
   1870.522,
   1704.507,
   1664.637,
   564.6392};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1419[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1419[30] = {
   0,
   0.2805834,
   1171.778,
   1320.556,
   20623.18,
   1010.703,
   1089.17,
   981.6927,
   728.1023,
   1043.1,
   1266.82,
   1065.147,
   1715.058,
   1029.693,
   1198.151,
   988.4284,
   995.8218,
   16543.26,
   926.0398,
   630.2054,
   561.4018,
   634.8717,
   641.5475,
   719.8497,
   655.4163,
   689.172,
   400.1733,
   370.3684,
   424.3664,
   91.43033};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1419,Graph_from_VbbHcc_both_Z_dR_fy1419,Graph_from_VbbHcc_both_Z_dR_fex1419,Graph_from_VbbHcc_both_Z_dR_fey1419);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1419 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1419","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetMinimum(57.64622);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetMaximum(57646.22);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1419->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1419);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_both_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__577 = new TH1D("data_mc_ratio__577","",30,0,6);
   data_mc_ratio__577->SetBinContent(2,2.093831);
   data_mc_ratio__577->SetBinContent(3,0.3866374);
   data_mc_ratio__577->SetBinContent(4,0.3995153);
   data_mc_ratio__577->SetBinContent(5,0.1292222);
   data_mc_ratio__577->SetBinContent(6,0.4143898);
   data_mc_ratio__577->SetBinContent(7,0.3820487);
   data_mc_ratio__577->SetBinContent(8,0.4208917);
   data_mc_ratio__577->SetBinContent(9,0.4756962);
   data_mc_ratio__577->SetBinContent(10,0.3675482);
   data_mc_ratio__577->SetBinContent(11,0.320738);
   data_mc_ratio__577->SetBinContent(12,0.3390287);
   data_mc_ratio__577->SetBinContent(13,0.2705443);
   data_mc_ratio__577->SetBinContent(14,0.3530573);
   data_mc_ratio__577->SetBinContent(15,0.3018947);
   data_mc_ratio__577->SetBinContent(16,0.3343564);
   data_mc_ratio__577->SetBinContent(17,0.3323415);
   data_mc_ratio__577->SetBinContent(18,0.1074727);
   data_mc_ratio__577->SetBinContent(19,0.3259555);
   data_mc_ratio__577->SetBinContent(20,0.4220645);
   data_mc_ratio__577->SetBinContent(21,0.4471734);
   data_mc_ratio__577->SetBinContent(22,0.3814946);
   data_mc_ratio__577->SetBinContent(23,0.3672207);
   data_mc_ratio__577->SetBinContent(24,0.3000269);
   data_mc_ratio__577->SetBinContent(25,0.3035049);
   data_mc_ratio__577->SetBinContent(26,0.2751346);
   data_mc_ratio__577->SetBinContent(27,0.4004229);
   data_mc_ratio__577->SetBinContent(28,0.3655016);
   data_mc_ratio__577->SetBinContent(29,0.3634427);
   data_mc_ratio__577->SetBinContent(30,0.7739455);
   data_mc_ratio__577->SetBinContent(31,0.2864557);
   data_mc_ratio__577->SetBinError(2,1.480562);
   data_mc_ratio__577->SetBinError(3,0.005523391);
   data_mc_ratio__577->SetBinError(4,0.005359364);
   data_mc_ratio__577->SetBinError(5,0.002016391);
   data_mc_ratio__577->SetBinError(6,0.006884539);
   data_mc_ratio__577->SetBinError(7,0.006594893);
   data_mc_ratio__577->SetBinError(8,0.007384065);
   data_mc_ratio__577->SetBinError(9,0.008657612);
   data_mc_ratio__577->SetBinError(10,0.006875166);
   data_mc_ratio__577->SetBinError(11,0.005958011);
   data_mc_ratio__577->SetBinError(12,0.006331733);
   data_mc_ratio__577->SetBinError(13,0.005002366);
   data_mc_ratio__577->SetBinError(14,0.006544835);
   data_mc_ratio__577->SetBinError(15,0.005582034);
   data_mc_ratio__577->SetBinError(16,0.006266369);
   data_mc_ratio__577->SetBinError(17,0.006448676);
   data_mc_ratio__577->SetBinError(18,0.002185145);
   data_mc_ratio__577->SetBinError(19,0.006971612);
   data_mc_ratio__577->SetBinError(20,0.009670109);
   data_mc_ratio__577->SetBinError(21,0.01100865);
   data_mc_ratio__577->SetBinError(22,0.009879831);
   data_mc_ratio__577->SetBinError(23,0.01039073);
   data_mc_ratio__577->SetBinError(24,0.009228321);
   data_mc_ratio__577->SetBinError(25,0.01011683);
   data_mc_ratio__577->SetBinError(26,0.009889507);
   data_mc_ratio__577->SetBinError(27,0.01463114);
   data_mc_ratio__577->SetBinError(28,0.01464351);
   data_mc_ratio__577->SetBinError(29,0.01477605);
   data_mc_ratio__577->SetBinError(30,0.03702283);
   data_mc_ratio__577->SetBinError(31,0.1138578);
   data_mc_ratio__577->SetMinimum(0.4);
   data_mc_ratio__577->SetMaximum(1.6);
   data_mc_ratio__577->SetEntries(55.04152);
   data_mc_ratio__577->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__577->SetLineColor(ci);
   data_mc_ratio__577->SetLineWidth(2);
   data_mc_ratio__577->SetMarkerStyle(20);
   data_mc_ratio__577->SetMarkerSize(1.2);
   data_mc_ratio__577->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__577->GetXaxis()->SetRange(1,30);
   data_mc_ratio__577->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__577->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__577->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__577->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__577->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__577->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__577->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__577->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__577->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__577->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__577->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__577->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__577->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__577->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__577->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1420[30] = {
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
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1420[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1420[30] = {
   0,
   0.2937471,
   0.09245983,
   0.09494012,
   0.6488855,
   0.1156017,
   0.1239917,
   0.1271734,
   0.1147252,
   0.134146,
   0.1402061,
   0.1259559,
   0.1586322,
   0.124928,
   0.1236634,
   0.1160827,
   0.1246058,
   0.7349931,
   0.1380822,
   0.1396259,
   0.1521479,
   0.1624414,
   0.1886225,
   0.2043276,
   0.2210245,
   0.2449807,
   0.2139367,
   0.2172877,
   0.2549303,
   0.161927};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1420,Graph_from_mc_statistical_error_fy1420,Graph_from_mc_statistical_error_fex1420,Graph_from_mc_statistical_error_fey1420);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1420 = new TH1F("Graph_Graph_from_mc_statistical_error1420","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1420->SetMinimum(0.1180083);
   Graph_Graph_from_mc_statistical_error1420->SetMaximum(1.881992);
   Graph_Graph_from_mc_statistical_error1420->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1420->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1420->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1420);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
