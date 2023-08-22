void H_dR_algo_all_logY()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Tue Aug 22 09:17:10 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(0,0,1,1);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-1.414246,6.525,14.64829);
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
   st->SetMinimum(0.3);
   st->SetMaximum(3.058662e+12);
   
   TH1F *st_stack_120 = new TH1F("st_stack_120","",30,0,6);
   st_stack_120->SetMinimum(0.03997759);
   st_stack_120->SetMaximum(1.101633e+13);
   st_stack_120->SetDirectory(0);
   st_stack_120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_120->SetLineColor(ci);
   st_stack_120->GetXaxis()->SetRange(1,31);
   st_stack_120->GetXaxis()->SetLabelFont(42);
   st_stack_120->GetXaxis()->SetLabelSize(0.035);
   st_stack_120->GetXaxis()->SetTitleSize(0.035);
   st_stack_120->GetXaxis()->SetTitleFont(42);
   st_stack_120->GetYaxis()->SetTitle("Events/0.2");
   st_stack_120->GetYaxis()->SetLabelFont(42);
   st_stack_120->GetYaxis()->SetLabelSize(0.05);
   st_stack_120->GetYaxis()->SetTitleSize(0.057);
   st_stack_120->GetYaxis()->SetTitleOffset(1.2);
   st_stack_120->GetYaxis()->SetTitleFont(42);
   st_stack_120->GetZaxis()->SetLabelFont(42);
   st_stack_120->GetZaxis()->SetLabelSize(0.035);
   st_stack_120->GetZaxis()->SetTitleSize(0.035);
   st_stack_120->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_120);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(2,20.64836);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,136960.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,191430.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,167986.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,150240.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,175336.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,183950.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,202231.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,220875.2);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,254620);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,297826.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,319647.6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,379560.3);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,350248.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,380941.1);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,335548.8);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,304042.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,287889.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,276318.5);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,259362);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,197617.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,140950);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(24,107515.4);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(25,86239.54);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(26,70826.54);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,50667.93);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(28,33385.65);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(29,30856.87);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(30,19298.94);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(31,15642.67);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(2,20.64836);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,4768.35);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,6973.149);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,19396.88);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,5697.845);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,6746.415);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,6405.563);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,7112.313);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,7209.621);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,8165.007);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,17563.04);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,8489.612);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,23209.65);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,9125.338);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,18811.55);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,8602.772);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,7618.135);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,7544.769);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,8117.587);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,27029.43);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,17669.7);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,5381.983);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(24,5409.142);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(25,4746.441);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(26,12429.46);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,3824.287);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(28,2919.835);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(29,2584.32);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(30,2228.101);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(31,2240.746);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(333044);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(2,0.2061676);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,741.5467);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,1259.806);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,1367.002);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,1448.38);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,1509.605);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,1538.662);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,1689.043);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,1848.097);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,2013.781);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,2163.802);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,2283.698);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,2294.814);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,2207.633);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,2164.869);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,1999.619);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,1863.297);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,1749.357);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,1595.681);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,1414.061);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,1171.572);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(23,920.5429);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(24,763.0975);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(25,605.1192);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(26,473.8161);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(27,360.5191);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(28,269.1395);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(29,205.5936);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(30,126.9513);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(31,101.5381);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(2,0.2726716);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,11.42879);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,14.93054);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,14.95778);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,15.75809);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,16.04266);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,15.60184);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,16.98305);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,17.52802);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,21.27094);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,18.55035);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,19.00023);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,18.95044);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,18.60389);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,18.33097);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,17.64585);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,17.29518);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,16.62983);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,15.71548);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,14.8766);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,13.73042);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(23,11.87346);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(24,10.70619);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(25,9.662202);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(26,8.755209);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(27,7.511981);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(28,6.771472);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(29,5.617975);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(30,4.488715);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(31,3.9115);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(631310);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(2,8.679902);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(3,21709.04);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(4,43294.92);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(5,50798.97);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(6,51170.46);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(7,46344.45);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(8,40113.67);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(9,35285.57);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(10,32627.83);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(11,32106.05);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(12,32596.56);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(13,32464.54);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(14,30812.86);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(15,28304.99);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(16,26150.82);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(17,24027.86);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(18,22799.81);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(19,22422.56);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(20,21772.15);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(21,19975.36);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(22,17634.86);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(23,15438.43);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(24,13718.05);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(25,12215.61);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(26,10781.16);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(27,9238.322);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(28,7499.976);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(29,5389.932);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(30,3030.57);
   VbbHcc_algo_H_dR_all_stack_3->SetBinContent(31,1981.357);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(2,0.7485203);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(3,39.2182);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(4,54.5705);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(5,59.22591);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(6,58.58445);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(7,55.44182);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(8,51.06761);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(9,47.68669);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(10,45.83946);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(11,45.01823);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(12,45.6412);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(13,45.63227);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(14,44.93803);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(15,43.1018);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(16,41.69487);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(17,39.56553);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(18,38.43918);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(19,38.53442);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(20,37.80121);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(21,36.04265);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(22,33.44024);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(23,31.49221);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(24,29.95104);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(25,28.23895);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(26,26.72775);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(27,24.51054);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(28,22.57261);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(29,19.41818);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(30,14.06541);
   VbbHcc_algo_H_dR_all_stack_3->SetBinError(31,11.20119);
   VbbHcc_algo_H_dR_all_stack_3->SetEntries(1.291274e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(2,0.2135158);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(3,863.9344);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(4,1342.78);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(5,1293.759);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(6,1091.445);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(7,1044.334);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(8,1092.392);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(9,1240.446);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(10,1291.487);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(11,1545.167);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(12,1654.105);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(13,1890.246);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(14,1944.368);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(15,1850.1);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(16,1835.562);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(17,1708.182);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(18,1640.781);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(19,1522.307);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(20,1465.398);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(21,1181.537);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(22,997.2316);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(23,760.5463);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(24,530.9365);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(25,415.6714);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(26,320.5319);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(27,283.5281);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(28,224.4014);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(29,181.5645);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(30,106.2141);
   VbbHcc_algo_H_dR_all_stack_4->SetBinContent(31,73.96578);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(2,0.1257335);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(3,17.4608);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(4,23.10582);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(5,29.81769);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(6,28.2052);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(7,26.46331);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(8,26.35706);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(9,29.95551);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(10,26.72027);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(11,33.8956);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(12,29.1851);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(13,35.29708);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(14,34.33776);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(15,29.88985);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(16,31.92203);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(17,27.14208);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(18,27.8868);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(19,25.71805);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(20,34.17872);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(21,23.80104);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(22,25.28332);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(23,23.80864);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(24,15.8942);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(25,16.73773);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(26,13.77956);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(27,17.88965);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(28,12.57705);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(29,10.82334);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(30,7.225599);
   VbbHcc_algo_H_dR_all_stack_4->SetBinError(31,6.339792);
   VbbHcc_algo_H_dR_all_stack_4->SetEntries(198969);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(2,0.1698784);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(3,370.9304);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(4,489.4346);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(5,406.1713);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(6,403.3301);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(7,351.3118);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(8,413.2485);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(9,421.5428);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(10,553.7486);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(11,605.2735);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(12,658.4383);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(13,734.7717);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(14,763.3973);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(15,733.3392);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(16,720.6612);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(17,706.5654);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(18,645.2093);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(19,652.5677);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(20,611.2622);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(21,499.6874);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(22,435.981);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(23,317.0609);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(24,225.5877);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(25,180.637);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(26,132.3473);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(27,113.3521);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(28,63.02256);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(29,74.60922);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(30,46.7842);
   VbbHcc_algo_H_dR_all_stack_5->SetBinContent(31,35.34126);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(2,0.1297546);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(3,15.76361);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(4,26.26752);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(5,27.2364);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(6,28.18934);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(7,22.81441);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(8,29.95053);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(9,24.95558);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(10,32.63823);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(11,33.05414);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(12,34.73281);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(13,35.87557);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(14,41.60751);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(15,31.57834);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(16,28.41366);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(17,30.68998);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(18,26.16936);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(19,30.31467);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(20,33.44237);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(21,29.76874);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(22,32.57321);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(23,23.07673);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(24,18.0166);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(25,17.28535);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(26,13.01613);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(27,15.21346);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(28,7.840462);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(29,13.74221);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(30,9.793572);
   VbbHcc_algo_H_dR_all_stack_5->SetBinError(31,7.033511);
   VbbHcc_algo_H_dR_all_stack_5->SetEntries(95654);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(3,4.328642);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(4,6.488265);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(5,7.026748);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(6,5.145883);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(7,3.808599);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(8,3.83924);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(9,4.931566);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(10,5.535437);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(11,3.341317);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(12,6.989355);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(13,8.306001);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(14,5.550367);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(15,7.64442);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(16,6.877613);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(17,7.890516);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(18,5.444849);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(19,6.147071);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(20,4.989116);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(21,5.134209);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(22,2.169424);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(23,3.016719);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(24,3.480818);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(25,0.5325545);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(26,1.603732);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(27,0.3704767);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(28,0.3908601);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(29,1.554635);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(30,0.3726561);
   VbbHcc_algo_H_dR_all_stack_6->SetBinContent(31,0.6339091);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(3,1.187392);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(4,1.2753);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(5,1.658896);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(6,0.9105711);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(7,1.220021);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(8,1.603013);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(9,1.167471);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(10,1.309356);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(11,1.100729);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(12,1.388173);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(13,1.766288);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(14,1.247895);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(15,1.684718);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(16,1.576886);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(17,1.446731);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(18,1.198583);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(19,1.487292);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(20,1.212553);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(21,2.645984);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(22,0.8125922);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(23,0.7577061);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(24,1.377616);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(25,0.2384384);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(26,0.7866376);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(27,0.2790747);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(28,0.2076832);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(29,0.9592937);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(30,0.2853998);
   VbbHcc_algo_H_dR_all_stack_6->SetBinError(31,0.5443923);
   VbbHcc_algo_H_dR_all_stack_6->SetEntries(653);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(3,8.817794);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(4,11.89378);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(5,10.32017);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(6,6.131016);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(7,5.525206);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(8,4.777877);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(9,5.404605);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(10,5.565847);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(11,3.922101);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(12,6.443835);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(13,10.38112);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(14,7.757206);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(15,8.464219);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(16,9.418254);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(17,7.272637);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(18,7.952835);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(19,8.612575);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(20,6.428619);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(21,5.319785);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(22,2.618856);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(23,2.480245);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(24,4.658244);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(25,1.130288);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(26,2.316145);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(27,1.421236);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(28,1.391759);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(29,2.065495);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(30,0.7160931);
   VbbHcc_algo_H_dR_all_stack_7->SetBinContent(31,0.7214935);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(3,1.329945);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(4,1.406027);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(5,1.71234);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(6,0.8908);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(7,1.255184);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(8,1.616782);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(9,1.16325);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(10,1.278877);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(11,1.095503);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(12,1.316292);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(13,1.788413);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(14,1.286933);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(15,1.674449);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(16,1.615993);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(17,1.37522);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(18,1.248435);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(19,1.529973);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(20,1.226966);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(21,2.636481);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(22,0.818416);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(23,0.6646848);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(24,1.403783);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(25,0.3041943);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(26,0.8162998);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(27,0.406308);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(28,0.34593);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(29,0.9773205);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(30,0.3328305);
   VbbHcc_algo_H_dR_all_stack_7->SetBinError(31,0.5513593);
   VbbHcc_algo_H_dR_all_stack_7->SetEntries(1264);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(3,26.21309);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(4,42.99163);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(5,38.44435);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(6,20.196);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(7,13.11097);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(8,10.47901);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(9,11.41721);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(10,11.85002);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(11,11.92056);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(12,9.555959);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(13,16.31387);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(14,16.35048);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(15,20.19604);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(16,16.47829);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(17,19.37948);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(18,16.92746);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(19,16.72118);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(20,12.14218);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(21,12.55576);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(22,7.808867);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(23,6.697195);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(24,3.594448);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(25,3.934775);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(26,3.449667);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(27,4.892787);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(28,4.605854);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(29,2.212832);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(30,1.818769);
   VbbHcc_algo_H_dR_all_stack_8->SetBinContent(31,1.1238);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(3,2.599863);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(4,3.379385);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(5,3.21317);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(6,2.209559);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(7,1.825265);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(8,1.64634);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(9,1.666021);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(10,1.769444);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(11,1.723337);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(12,1.519221);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(13,2.012549);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(14,2.038554);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(15,2.379285);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(16,2.000581);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(17,2.28105);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(18,2.08927);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(19,2.069378);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(20,1.736493);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(21,1.793468);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(22,1.377163);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(23,1.327655);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(24,0.9626374);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(25,0.9594169);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(26,0.8810761);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(27,1.094174);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(28,1.109633);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(29,0.745189);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(30,0.7109039);
   VbbHcc_algo_H_dR_all_stack_8->SetBinError(31,0.579886);
   VbbHcc_algo_H_dR_all_stack_8->SetEntries(1595);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(2,0.002257042);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(3,14.47317);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(4,28.42635);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(5,29.05257);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(6,24.20337);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(7,16.59338);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(8,9.751641);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(9,7.408442);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(10,6.587382);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(11,7.729459);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(12,8.905044);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(13,10.19551);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(14,10.6229);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(15,9.385531);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(16,8.597162);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(17,8.128874);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(18,8.20003);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(19,8.047575);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(20,6.873576);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(21,5.591387);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(22,4.066232);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(23,3.357518);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(24,2.914638);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(25,3.03584);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(26,3.286386);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(27,3.500651);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(28,3.383368);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(29,2.530914);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(30,1.574243);
   VbbHcc_algo_H_dR_all_stack_9->SetBinContent(31,0.8090565);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(2,0.001595972);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(3,0.1853967);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(4,0.2630271);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(5,0.2713907);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(6,0.2450854);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(7,0.1947339);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(8,0.1488668);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(9,0.1234531);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(10,0.1147268);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(11,0.1267398);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(12,0.1438196);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(13,0.1471578);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(14,0.1551081);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(15,0.1437233);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(16,0.1392239);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(17,0.1390762);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(18,0.1826957);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(19,0.1434079);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(20,0.124234);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(21,0.1103538);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(22,0.09070281);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(23,0.08198564);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(24,0.08633875);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(25,0.08043263);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(26,0.08643519);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(27,0.08864759);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(28,0.08743548);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(29,0.08220504);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(30,0.06177499);
   VbbHcc_algo_H_dR_all_stack_9->SetBinError(31,0.04206188);
   VbbHcc_algo_H_dR_all_stack_9->SetEntries(160336);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(2,0.001212063);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(3,3.048654);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(4,7.709194);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(5,9.641399);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(6,9.672169);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(7,7.697294);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(8,5.496575);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(9,4.127363);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(10,3.961732);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(11,4.39878);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(12,5.09215);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(13,5.588555);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(14,5.542771);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(15,4.959604);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(16,4.75212);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(17,4.224821);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(18,4.253584);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(19,4.172211);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(20,4.008027);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(21,3.387221);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(22,2.858895);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(23,2.049919);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(24,1.840714);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(25,1.804808);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(26,1.631835);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(27,1.473268);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(28,1.218243);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(29,0.8744387);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(30,0.4728329);
   VbbHcc_algo_H_dR_all_stack_10->SetBinContent(31,0.2866905);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(2,0.0007169126);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(3,0.03740049);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(4,0.05900811);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(5,0.06520005);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(6,0.06466563);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(7,0.05721201);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(8,0.04814709);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(9,0.04204334);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(10,0.04157412);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(11,0.04392834);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(12,0.04736822);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(13,0.04979647);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(14,0.0497609);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(15,0.04718539);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(16,0.04640195);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(17,0.04367731);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(18,0.04386064);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(19,0.04327711);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(20,0.04223026);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(21,0.03876471);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(22,0.03561769);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(23,0.03003165);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(24,0.02826486);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(25,0.02781702);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(26,0.02646423);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(27,0.02517194);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(28,0.02315003);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(29,0.01960606);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(30,0.01448672);
   VbbHcc_algo_H_dR_all_stack_10->SetBinError(31,0.01120346);
   VbbHcc_algo_H_dR_all_stack_10->SetEntries(282471);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(3,0.1140163);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(4,0.1770066);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(5,0.1889108);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(6,0.16508);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(7,0.1002526);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(8,0.107188);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(9,0.06132302);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(10,0.06946398);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(11,0.07044969);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(12,0.08023824);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(13,0.1179182);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(14,0.1013744);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(15,0.09124324);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(16,0.07229122);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(17,0.07129488);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(18,0.0898497);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(19,0.07857781);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(20,0.05959487);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(21,0.04796627);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(22,0.0287184);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(23,0.04585157);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(24,0.02753784);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(25,0.01145665);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(26,0.01845216);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(27,0.03383268);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(28,0.03757434);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(29,0.02694615);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(30,0.009844874);
   VbbHcc_algo_H_dR_all_stack_11->SetBinContent(31,0.01116969);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(3,0.01613822);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(4,0.01935295);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(5,0.02052425);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(6,0.01900152);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(7,0.0145947);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(8,0.01424728);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(9,0.01113799);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(10,0.011926);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(11,0.0118243);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(12,0.01272671);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(13,0.01577733);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(14,0.01477691);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(15,0.01450276);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(16,0.01297182);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(17,0.01238365);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(18,0.01385018);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(19,0.01281075);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(20,0.01176025);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(21,0.01167206);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(22,0.007456472);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(23,0.009581259);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(24,0.007272472);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(25,0.004769532);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(26,0.00589411);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(27,0.008190563);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(28,0.009856858);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(29,0.007574805);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(30,0.004427075);
   VbbHcc_algo_H_dR_all_stack_11->SetBinError(31,0.005102548);
   VbbHcc_algo_H_dR_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(3,0.02828671);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(4,0.07558957);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(5,0.07865362);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(6,0.07260346);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(7,0.06265391);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(8,0.04111277);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(9,0.03101149);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(10,0.03045484);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(11,0.0387558);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(12,0.05095945);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(13,0.05064567);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(14,0.04542495);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(15,0.04917793);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(16,0.04564619);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(17,0.03505532);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(18,0.03520556);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(19,0.04089145);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(20,0.03478288);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(21,0.02376246);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(22,0.01940317);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(23,0.01830281);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(24,0.01383334);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(25,0.01571814);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(26,0.0122062);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(27,0.01237578);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(28,0.01046431);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(29,0.008323791);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(30,0.003296861);
   VbbHcc_algo_H_dR_all_stack_12->SetBinContent(31,0.00276808);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(3,0.002834048);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(4,0.005650444);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(5,0.004666934);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(6,0.004449175);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(7,0.00437175);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(8,0.003354944);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(9,0.002826802);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(10,0.002848539);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(11,0.003260157);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(12,0.00367651);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(13,0.003706058);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(14,0.003557543);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(15,0.003693599);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(16,0.00479825);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(17,0.003108624);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(18,0.003112375);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(19,0.003414816);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(20,0.003068674);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(21,0.002583813);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(22,0.002274135);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(23,0.002236621);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(24,0.001953736);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(25,0.002132497);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(26,0.001774322);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(27,0.001817905);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(28,0.001734596);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(29,0.001593627);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(30,0.0009944626);
   VbbHcc_algo_H_dR_all_stack_12->SetBinError(31,0.0008973316);
   VbbHcc_algo_H_dR_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_all__329 = new TH1D("VbbHcc_algo_H_dR_all__329","",30,0,6);
   VbbHcc_algo_H_dR_all__329->SetBinContent(2,39);
   VbbHcc_algo_H_dR_all__329->SetBinContent(3,89502);
   VbbHcc_algo_H_dR_all__329->SetBinContent(4,119215);
   VbbHcc_algo_H_dR_all__329->SetBinContent(5,105218);
   VbbHcc_algo_H_dR_all__329->SetBinContent(6,105290);
   VbbHcc_algo_H_dR_all__329->SetBinContent(7,106834);
   VbbHcc_algo_H_dR_all__329->SetBinContent(8,110724);
   VbbHcc_algo_H_dR_all__329->SetBinContent(9,118552);
   VbbHcc_algo_H_dR_all__329->SetBinContent(10,128824);
   VbbHcc_algo_H_dR_all__329->SetBinContent(11,144007);
   VbbHcc_algo_H_dR_all__329->SetBinContent(12,162722);
   VbbHcc_algo_H_dR_all__329->SetBinContent(13,180485);
   VbbHcc_algo_H_dR_all__329->SetBinContent(14,192150);
   VbbHcc_algo_H_dR_all__329->SetBinContent(15,195326);
   VbbHcc_algo_H_dR_all__329->SetBinContent(16,194157);
   VbbHcc_algo_H_dR_all__329->SetBinContent(17,185967);
   VbbHcc_algo_H_dR_all__329->SetBinContent(18,175938);
   VbbHcc_algo_H_dR_all__329->SetBinContent(19,163215);
   VbbHcc_algo_H_dR_all__329->SetBinContent(20,146099);
   VbbHcc_algo_H_dR_all__329->SetBinContent(21,124357);
   VbbHcc_algo_H_dR_all__329->SetBinContent(22,99982);
   VbbHcc_algo_H_dR_all__329->SetBinContent(23,79686);
   VbbHcc_algo_H_dR_all__329->SetBinContent(24,61911);
   VbbHcc_algo_H_dR_all__329->SetBinContent(25,47556);
   VbbHcc_algo_H_dR_all__329->SetBinContent(26,36364);
   VbbHcc_algo_H_dR_all__329->SetBinContent(27,28433);
   VbbHcc_algo_H_dR_all__329->SetBinContent(28,22493);
   VbbHcc_algo_H_dR_all__329->SetBinContent(29,17897);
   VbbHcc_algo_H_dR_all__329->SetBinContent(30,11408);
   VbbHcc_algo_H_dR_all__329->SetBinContent(31,8589);
   VbbHcc_algo_H_dR_all__329->SetEntries(3162969);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all__329->SetLineColor(ci);
   VbbHcc_algo_H_dR_all__329->SetLineWidth(2);
   VbbHcc_algo_H_dR_all__329->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_all__329->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_all__329->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__329->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all__329->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_all__329->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all__329->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fx1239[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fy1239[30] = {
   0,
   29.92129,
   160703,
   237915.3,
   221947.4,
   204419.8,
   224633.4,
   227142.8,
   240901.8,
   257230,
   290921.7,
   334936.3,
   357071.8,
   415421.7,
   383395.7,
   411859.3,
   364038.1,
   331034.7,
   314280,
   301797.6,
   282464.7,
   217876.6,
   158404.2,
   122769.6,
   99667.04,
   82546.72,
   60675.36,
   41453.22,
   36717.84,
   22614.43};
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fex1239[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_all_fey1239[30] = {
   0,
   20.66451,
   4768.584,
   6973.468,
   19397.02,
   5698.308,
   6746.752,
   6405.91,
   7112.601,
   7209.912,
   8165.296,
   17563.17,
   8489.906,
   23209.76,
   9125.563,
   18811.65,
   8602.979,
   7618.348,
   7544.991,
   8117.831,
   27029.49,
   17669.78,
   5382.19,
   5409.289,
   4746.596,
   12429.51,
   3824.445,
   2919.968,
   2584.459,
   2228.183};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_all_fx1239,Graph_from_VbbHcc_algo_H_dR_all_fy1239,Graph_from_VbbHcc_algo_H_dR_all_fex1239,Graph_from_VbbHcc_algo_H_dR_all_fey1239);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_all1239 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_all1239","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetMinimum(482.4946);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetMaximum(482494.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_all1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_all1239);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_algo_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__330 = new TH1D("data_mc_ratio__330","",30,0,6);
   data_mc_ratio__330->SetBinContent(2,1.30342);
   data_mc_ratio__330->SetBinContent(3,0.5569406);
   data_mc_ratio__330->SetBinContent(4,0.5010816);
   data_mc_ratio__330->SetBinContent(5,0.4740673);
   data_mc_ratio__330->SetBinContent(6,0.5150674);
   data_mc_ratio__330->SetBinContent(7,0.4755927);
   data_mc_ratio__330->SetBinContent(8,0.4874642);
   data_mc_ratio__330->SetBinContent(9,0.4921175);
   data_mc_ratio__330->SetBinContent(10,0.5008126);
   data_mc_ratio__330->SetBinContent(11,0.4950026);
   data_mc_ratio__330->SetBinContent(12,0.4858297);
   data_mc_ratio__330->SetBinContent(13,0.5054586);
   data_mc_ratio__330->SetBinContent(14,0.4625421);
   data_mc_ratio__330->SetBinContent(15,0.5094632);
   data_mc_ratio__330->SetBinContent(16,0.4714159);
   data_mc_ratio__330->SetBinContent(17,0.5108449);
   data_mc_ratio__330->SetBinContent(18,0.5314791);
   data_mc_ratio__330->SetBinContent(19,0.5193298);
   data_mc_ratio__330->SetBinContent(20,0.484096);
   data_mc_ratio__330->SetBinContent(21,0.4402567);
   data_mc_ratio__330->SetBinContent(22,0.4588927);
   data_mc_ratio__330->SetBinContent(23,0.5030547);
   data_mc_ratio__330->SetBinContent(24,0.5042862);
   data_mc_ratio__330->SetBinContent(25,0.4771487);
   data_mc_ratio__330->SetBinContent(26,0.4405263);
   data_mc_ratio__330->SetBinContent(27,0.4686087);
   data_mc_ratio__330->SetBinContent(28,0.5426116);
   data_mc_ratio__330->SetBinContent(29,0.4874197);
   data_mc_ratio__330->SetBinContent(30,0.5044567);
   data_mc_ratio__330->SetBinContent(31,0.4814878);
   data_mc_ratio__330->SetBinError(2,0.2087142);
   data_mc_ratio__330->SetBinError(3,0.001861626);
   data_mc_ratio__330->SetBinError(4,0.001451253);
   data_mc_ratio__330->SetBinError(5,0.001461487);
   data_mc_ratio__330->SetBinError(6,0.001587342);
   data_mc_ratio__330->SetBinError(7,0.001455059);
   data_mc_ratio__330->SetBinError(8,0.001464947);
   data_mc_ratio__330->SetBinError(9,0.00142927);
   data_mc_ratio__330->SetBinError(10,0.00139533);
   data_mc_ratio__330->SetBinError(11,0.001304415);
   data_mc_ratio__330->SetBinError(12,0.001204373);
   data_mc_ratio__330->SetBinError(13,0.001189775);
   data_mc_ratio__330->SetBinError(14,0.001055191);
   data_mc_ratio__330->SetBinError(15,0.001152744);
   data_mc_ratio__330->SetBinError(16,0.001069862);
   data_mc_ratio__330->SetBinError(17,0.001184598);
   data_mc_ratio__330->SetBinError(18,0.001267087);
   data_mc_ratio__330->SetBinError(19,0.001285474);
   data_mc_ratio__330->SetBinError(20,0.001266508);
   data_mc_ratio__330->SetBinError(21,0.001248449);
   data_mc_ratio__330->SetBinError(22,0.001451277);
   data_mc_ratio__330->SetBinError(23,0.001782068);
   data_mc_ratio__330->SetBinError(24,0.002026717);
   data_mc_ratio__330->SetBinError(25,0.002188019);
   data_mc_ratio__330->SetBinError(26,0.002310128);
   data_mc_ratio__330->SetBinError(27,0.002779067);
   data_mc_ratio__330->SetBinError(28,0.003617974);
   data_mc_ratio__330->SetBinError(29,0.003643452);
   data_mc_ratio__330->SetBinError(30,0.004723013);
   data_mc_ratio__330->SetBinError(31,0.06070534);
   data_mc_ratio__330->SetMinimum(0.4);
   data_mc_ratio__330->SetMaximum(1.6);
   data_mc_ratio__330->SetEntries(260.9227);
   data_mc_ratio__330->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__330->SetLineColor(ci);
   data_mc_ratio__330->SetLineWidth(2);
   data_mc_ratio__330->SetMarkerStyle(20);
   data_mc_ratio__330->SetMarkerSize(1.2);
   data_mc_ratio__330->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__330->GetXaxis()->SetRange(1,31);
   data_mc_ratio__330->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__330->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__330->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__330->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__330->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__330->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__330->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__330->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__330->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__330->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__330->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__330->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__330->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__330->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__330->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__330->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__330->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1240[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1240[30] = {
   0,
   0.690629,
   0.02967328,
   0.02931071,
   0.08739469,
   0.02787551,
   0.03003451,
   0.02820212,
   0.02952489,
   0.02802905,
   0.02806699,
   0.05243734,
   0.02377647,
   0.05587036,
   0.02380194,
   0.04567495,
   0.02363209,
   0.02301375,
   0.02400722,
   0.02689826,
   0.09569154,
   0.08109995,
   0.03397756,
   0.0440605,
   0.04762453,
   0.1505754,
   0.06303127,
   0.07044008,
   0.07038701,
   0.09852928};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1240,Graph_from_mc_statistical_error_fy1240,Graph_from_mc_statistical_error_fex1240,Graph_from_mc_statistical_error_fey1240);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1240 = new TH1F("Graph_Graph_from_mc_statistical_error1240","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1240->SetMinimum(0.1712452);
   Graph_Graph_from_mc_statistical_error1240->SetMaximum(1.828755);
   Graph_Graph_from_mc_statistical_error1240->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1240->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1240->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1240);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
