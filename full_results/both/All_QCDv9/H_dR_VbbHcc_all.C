void H_dR_VbbHcc_all()
{
//=========Macro generated from canvas: H_dR_VbbHcc_all/H_dR_VbbHcc_all
//=========  (Mon Nov 21 13:07:00 2022) by ROOT version 6.14/09
   TCanvas *H_dR_VbbHcc_all = new TCanvas("H_dR_VbbHcc_all", "H_dR_VbbHcc_all",0,0,600,600);
   H_dR_VbbHcc_all->SetHighLightColor(2);
   H_dR_VbbHcc_all->Range(0,0,1,1);
   H_dR_VbbHcc_all->SetFillColor(0);
   H_dR_VbbHcc_all->SetFillStyle(4000);
   H_dR_VbbHcc_all->SetBorderMode(0);
   H_dR_VbbHcc_all->SetBorderSize(2);
   H_dR_VbbHcc_all->SetFrameFillStyle(1000);
   H_dR_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-13150.03,10.52419,1.313718e+07);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1.125919e+07);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",50,0,10);
   st_stack_24->SetMinimum(0.3);
   st_stack_24->SetMaximum(1.182215e+07);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetRange(1,50);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetLabelSize(0.035);
   st_stack_24->GetXaxis()->SetTitleSize(0.035);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetLabelSize(0.05);
   st_stack_24->GetYaxis()->SetTitleSize(0.057);
   st_stack_24->GetYaxis()->SetTitleOffset(1.2);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetLabelSize(0.035);
   st_stack_24->GetZaxis()->SetTitleSize(0.035);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_duong_H_dR_all_stack_1 = new TH1D("VbbHcc_duong_H_dR_all_stack_1","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(2,2650.077);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(3,1740551);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(4,2400242);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(5,1887284);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(6,1838661);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(7,1870876);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(8,1870613);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(9,2113889);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(10,2317589);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(11,2530756);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(12,3032846);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(13,3073151);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(14,3603834);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(15,4166973);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(16,4316197);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(17,2975603);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(18,2194966);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(19,1840518);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(20,1412604);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(21,1105405);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(22,804183.3);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(23,588360);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(24,475254.5);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(25,273704.9);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(26,147072.9);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(27,108787.4);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(28,26041.83);
   VbbHcc_duong_H_dR_all_stack_1->SetBinContent(29,2345.768);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(2,1873.887);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(3,48433.49);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(4,56997.77);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(5,50470.97);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(6,49783.16);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(7,50245.65);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(8,49933.55);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(9,53370.15);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(10,55893.65);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(11,58246.25);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(12,63837.97);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(13,64268.8);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(14,69408.98);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(15,74729.5);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(16,76286.44);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(17,63374.73);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(18,54271.67);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(19,49667.29);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(20,43557.47);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(21,38450.34);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(22,32900.54);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(23,28057.47);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(24,25048.77);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(25,19027.78);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(26,13952.46);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(27,11950.98);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(28,5670.894);
   VbbHcc_duong_H_dR_all_stack_1->SetBinError(29,1781.285);
   VbbHcc_duong_H_dR_all_stack_1->SetEntries(37535);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_2 = new TH1D("VbbHcc_duong_H_dR_all_stack_2","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(2,13.63463);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(3,12933.54);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(4,20158.68);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(5,22403.49);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(6,26315.51);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(7,29248.6);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(8,30679.92);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(9,31491.36);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(10,31790.71);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(11,32841.71);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(12,35034.41);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(13,37797.41);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(14,41078.1);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(15,44209.85);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(16,44751.67);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(17,27916.7);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(18,19629.06);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(19,14649.43);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(20,10885.08);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(21,7964.846);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(22,5717.603);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(23,3994.084);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(24,2630.403);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(25,1515.666);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(26,822.7236);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(27,365.6376);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(28,104.9213);
   VbbHcc_duong_H_dR_all_stack_2->SetBinContent(29,8.029026);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(2,1.643477);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(3,50.29956);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(4,62.24867);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(5,64.77144);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(6,68.40641);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(7,70.60409);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(8,71.49135);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(9,72.37108);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(10,72.66863);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(11,74.26197);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(12,77.0463);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(13,80.10309);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(14,83.61871);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(15,86.46588);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(16,86.57572);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(17,65.55029);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(18,52.92077);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(19,44.40811);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(20,37.16125);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(21,30.86286);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(22,25.41035);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(23,20.91854);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(24,16.66643);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(25,12.3532);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(26,9.075511);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(27,5.925808);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(28,2.969861);
   VbbHcc_duong_H_dR_all_stack_2->SetBinError(29,0.9107855);
   VbbHcc_duong_H_dR_all_stack_2->SetEntries(7739056);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_3 = new TH1D("VbbHcc_duong_H_dR_all_stack_3","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(2,133.9883);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(3,162387.2);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(4,289492.4);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(5,351473.9);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(6,421545.6);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(7,459638.4);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(8,472961.4);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(9,478786.3);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(10,488496.5);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(11,510404);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(12,543479.3);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(13,585326.1);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(14,633053.5);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(15,679189.8);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(16,672076.1);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(17,389196.9);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(18,252414.6);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(19,172490.8);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(20,119081.3);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(21,81396.32);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(22,54625.2);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(23,35465.19);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(24,21891.29);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(25,12002.4);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(26,5994.525);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(27,2539.824);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(28,728.3628);
   VbbHcc_duong_H_dR_all_stack_3->SetBinContent(29,51.62429);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(2,2.973893);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(3,105.2669);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(4,140.7966);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(5,155.157);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(6,169.8543);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(7,177.3505);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(8,179.9912);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(9,181.2478);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(10,183.2645);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(11,187.5255);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(12,193.7125);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(13,201.2469);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(14,209.5321);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(15,217.19);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(16,216.1056);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(17,163.9789);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(18,131.5275);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(19,108.2757);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(20,89.52078);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(21,73.66046);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(22,60.02606);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(23,48.09566);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(24,37.57808);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(25,27.65895);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(26,19.43894);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(27,12.56976);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(28,6.633989);
   VbbHcc_duong_H_dR_all_stack_3->SetBinError(29,1.742653);
   VbbHcc_duong_H_dR_all_stack_3->SetEntries(1.244387e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_4 = new TH1D("VbbHcc_duong_H_dR_all_stack_4","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(2,6.646232);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(3,4795.854);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(4,6098.395);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(5,5941.625);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(6,5955.169);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(7,6038.195);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(8,6038.332);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(9,6424.446);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(10,6741.885);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(11,7462.071);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(12,8179.207);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(13,9190.946);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(14,10296.85);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(15,11689.26);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(16,12046.15);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(17,7582.998);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(18,5191.373);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(19,3835.149);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(20,2841.238);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(21,2100.476);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(22,1492.547);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(23,1035.221);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(24,679.9372);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(25,376.0932);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(26,198.7918);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(27,108.5312);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(28,23.28316);
   VbbHcc_duong_H_dR_all_stack_4->SetBinContent(29,1.929232);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(2,1.468898);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(3,40.20884);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(4,45.43857);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(5,44.88748);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(6,44.84771);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(7,45.13679);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(8,45.15548);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(9,46.51292);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(10,47.71249);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(11,50.12682);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(12,52.53277);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(13,55.60991);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(14,58.97563);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(15,62.78162);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(16,63.75151);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(17,50.53655);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(18,41.67366);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(19,35.78854);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(20,30.69874);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(21,26.37222);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(22,22.23434);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(23,18.36589);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(24,14.78596);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(25,10.92658);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(26,7.902485);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(27,5.824722);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(28,2.575907);
   VbbHcc_duong_H_dR_all_stack_4->SetBinError(29,0.7355447);
   VbbHcc_duong_H_dR_all_stack_4->SetEntries(412356);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_5 = new TH1D("VbbHcc_duong_H_dR_all_stack_5","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(3,2387.934);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(4,4239.315);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(5,4371.382);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(6,3926.225);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(7,3833.18);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(8,3787.95);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(9,3950.956);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(10,3976.113);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(11,4154.288);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(12,4773.666);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(13,5116.638);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(14,5805.986);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(15,6351.011);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(16,6286.824);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(17,3987.221);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(18,2434.166);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(19,1979.498);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(20,1469.983);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(21,1108.358);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(22,805.1107);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(23,610.8717);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(24,367.601);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(25,248.7615);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(26,135.1402);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(27,55.59483);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(28,26.55257);
   VbbHcc_duong_H_dR_all_stack_5->SetBinContent(29,2.185838);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(3,53.42269);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(4,71.31791);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(5,72.42555);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(6,68.6312);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(7,67.71841);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(8,67.34947);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(9,68.94818);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(10,68.88405);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(11,70.63328);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(12,75.55782);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(13,78.27083);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(14,83.21695);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(15,87.25984);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(16,86.72623);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(17,68.89911);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(18,53.83892);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(19,48.52773);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(20,41.72749);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(21,36.13562);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(22,30.73888);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(23,26.6513);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(24,20.52541);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(25,16.75116);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(26,12.2331);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(27,7.911005);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(28,5.27598);
   VbbHcc_duong_H_dR_all_stack_5->SetBinError(29,1.545621);
   VbbHcc_duong_H_dR_all_stack_5->SetEntries(66594);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_6 = new TH1D("VbbHcc_duong_H_dR_all_stack_6","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(2,0.1797036);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(3,71.04193);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(4,101.2707);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(5,99.92122);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(6,116.577);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(7,108.1461);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(8,123.21);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(9,118.9151);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(10,135.4228);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(11,146.9879);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(12,155.5743);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(13,175.8021);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(14,196.339);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(15,220.2028);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(16,215.3523);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(17,122.9988);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(18,83.3236);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(19,57.95788);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(20,33.31064);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(21,28.42839);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(22,20.48173);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(23,12.28633);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(24,8.542528);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(25,4.102157);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(26,2.096631);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(27,0.8117075);
   VbbHcc_duong_H_dR_all_stack_6->SetBinContent(28,0.6644251);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(2,0.1270696);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(3,3.237837);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(4,3.960921);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(5,3.947008);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(6,4.310982);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(7,4.133491);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(8,4.471008);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(9,4.320236);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(10,4.607252);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(11,4.795176);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(12,4.938018);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(13,5.31285);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(14,5.486653);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(15,5.918237);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(16,5.843009);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(17,4.410889);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(18,3.607845);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(19,2.964133);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(20,2.220653);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(21,1.951479);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(22,1.890822);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(23,1.376232);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(24,1.083538);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(25,0.7453706);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(26,0.4808571);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(27,0.3535687);
   VbbHcc_duong_H_dR_all_stack_6->SetBinError(28,0.2387578);
   VbbHcc_duong_H_dR_all_stack_6->SetEntries(19122);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_7 = new TH1D("VbbHcc_duong_H_dR_all_stack_7","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(3,151.0049);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(4,213.3588);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(5,228.2725);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(6,234.726);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(7,253.3184);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(8,257.3874);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(9,245.3855);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(10,250.4054);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(11,257.8383);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(12,284.4029);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(13,306.0721);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(14,334.5415);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(15,365.4555);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(16,398.2109);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(17,221.2723);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(18,145.8599);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(19,96.6717);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(20,75.3713);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(21,51.6977);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(22,41.52635);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(23,26.50085);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(24,20.05638);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(25,8.758121);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(26,4.966545);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(27,4.14653);
   VbbHcc_duong_H_dR_all_stack_7->SetBinContent(28,0.1804438);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(3,4.125516);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(4,4.858665);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(5,5.040098);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(6,5.176673);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(7,5.236372);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(8,5.328151);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(9,5.27092);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(10,5.261829);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(11,5.378132);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(12,5.712914);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(13,5.855657);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(14,6.171402);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(15,6.426315);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(16,6.748257);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(17,5.031825);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(18,4.059449);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(19,3.249406);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(20,2.93437);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(21,2.420436);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(22,2.190629);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(23,1.71028);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(24,1.517303);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(25,0.9203472);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(26,0.6955859);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(27,0.6634672);
   VbbHcc_duong_H_dR_all_stack_7->SetBinError(28,0.1804438);
   VbbHcc_duong_H_dR_all_stack_7->SetEntries(49668);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_8 = new TH1D("VbbHcc_duong_H_dR_all_stack_8","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(3,107.1233);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(4,170.9089);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(5,208.2247);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(6,225.352);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(7,225.3654);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(8,254.948);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(9,266.2919);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(10,275.1253);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(11,275.2013);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(12,285.535);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(13,339.8731);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(14,367.3886);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(15,388.9638);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(16,387.8716);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(17,197.2926);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(18,107.7519);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(19,81.03362);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(20,53.21355);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(21,38.72974);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(22,27.06151);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(23,20.97194);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(24,13.51526);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(25,4.636362);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(26,4.323856);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(27,2.007425);
   VbbHcc_duong_H_dR_all_stack_8->SetBinContent(28,0.9676276);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(3,4.650544);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(4,5.903853);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(5,6.538403);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(6,6.772307);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(7,6.785871);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(8,7.194655);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(9,7.354181);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(10,7.464262);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(11,7.517881);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(12,7.627754);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(13,8.323149);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(14,8.643803);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(15,8.88878);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(16,8.89004);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(17,6.309091);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(18,4.664437);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(19,4.115121);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(20,3.291486);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(21,2.760873);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(22,2.328286);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(23,2.047961);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(24,1.614718);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(25,0.9426745);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(26,0.8910223);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(27,0.6085194);
   VbbHcc_duong_H_dR_all_stack_8->SetBinError(28,0.4377855);
   VbbHcc_duong_H_dR_all_stack_8->SetEntries(22006);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_9 = new TH1D("VbbHcc_duong_H_dR_all_stack_9","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(2,0.0490713);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(3,56.71375);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(4,85.61664);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(5,91.13686);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(6,98.55925);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(7,99.47489);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(8,97.36665);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(9,95.97796);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(10,94.14954);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(11,97.07044);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(12,101.5405);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(13,108.6127);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(14,118.0519);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(15,128.8522);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(16,126.4478);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(17,61.81806);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(18,36.05466);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(19,23.56997);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(20,16.91067);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(21,11.85726);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(22,8.497142);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(23,5.562264);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(24,3.753988);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(25,2.023102);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(26,1.017069);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(27,0.4557905);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(28,0.1862124);
   VbbHcc_duong_H_dR_all_stack_9->SetBinContent(29,0.006703824);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(2,0.008669044);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(3,0.3104377);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(4,0.381487);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(5,0.3936468);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(6,0.4093855);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(7,0.4112747);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(8,0.4059159);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(9,0.4026802);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(10,0.3980016);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(11,0.403835);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(12,0.4122497);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(13,0.4264968);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(14,0.4440611);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(15,0.4639567);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(16,0.4602139);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(17,0.320562);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(18,0.2438326);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(19,0.1964688);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(20,0.1662189);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(21,0.1386607);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(22,0.1173036);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(23,0.09473996);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(24,0.07753348);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(25,0.05675519);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(26,0.03980847);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(27,0.02656354);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(28,0.01644774);
   VbbHcc_duong_H_dR_all_stack_9->SetBinError(29,0.003009386);
   VbbHcc_duong_H_dR_all_stack_9->SetEntries(1020933);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_10 = new TH1D("VbbHcc_duong_H_dR_all_stack_10","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(2,0.01066971);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(3,18.15587);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(4,29.43898);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(5,33.64148);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(6,36.19965);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(7,32.21324);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(8,26.87442);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(9,24.00841);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(10,23.41949);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(11,24.57139);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(12,27.47305);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(13,30.11781);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(14,33.86379);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(15,37.3217);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(16,37.0514);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(17,21.13195);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(18,13.90831);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(19,9.628349);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(20,7.040054);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(21,4.963965);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(22,3.38481);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(23,2.391059);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(24,1.544713);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(25,0.8695989);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(26,0.4632735);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(27,0.2135138);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(28,0.06839642);
   VbbHcc_duong_H_dR_all_stack_10->SetBinContent(29,0.005004219);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(2,0.002074425);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(3,0.08573946);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(4,0.1092726);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(5,0.1169301);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(6,0.1214056);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(7,0.1144534);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(8,0.1044753);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(9,0.09866189);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(10,0.09744074);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(11,0.09978519);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(12,0.1054854);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(13,0.110434);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(14,0.1171076);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(15,0.1228901);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(16,0.1224685);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(17,0.09239208);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(18,0.07484608);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(19,0.06217827);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(20,0.05308163);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(21,0.0444428);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(22,0.03664296);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(23,0.03077013);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(24,0.02465596);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(25,0.0183684);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(26,0.01333846);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(27,0.00899852);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(28,0.005071601);
   VbbHcc_duong_H_dR_all_stack_10->SetBinError(29,0.001347721);
   VbbHcc_duong_H_dR_all_stack_10->SetEntries(1213185);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_11 = new TH1D("VbbHcc_duong_H_dR_all_stack_11","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(3,0.5251098);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(4,0.9685715);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(5,1.126218);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(6,1.397009);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(7,1.801692);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(8,1.708309);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(9,1.862002);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(10,1.925638);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(11,1.862793);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(12,1.90595);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(13,2.008909);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(14,2.065993);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(15,2.364555);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(16,2.250742);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(17,0.8644679);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(18,0.510377);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(19,0.241653);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(20,0.2004433);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(21,0.1100793);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(22,0.06737018);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(23,0.06259416);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(24,0.03181707);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(25,0.006260284);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(26,0.01475654);
   VbbHcc_duong_H_dR_all_stack_11->SetBinContent(27,0.006063893);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(3,0.02950535);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(4,0.04008379);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(5,0.04328512);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(6,0.04849258);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(7,0.05494631);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(8,0.05401918);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(9,0.05565937);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(10,0.05657341);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(11,0.05597941);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(12,0.05688744);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(13,0.0578806);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(14,0.05845959);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(15,0.06270798);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(16,0.06145561);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(17,0.03804795);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(18,0.02861699);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(19,0.01978185);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(20,0.01755433);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(21,0.01318988);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(22,0.01053475);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(23,0.009967486);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(24,0.006910622);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(25,0.003083925);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(26,0.00459842);
   VbbHcc_duong_H_dR_all_stack_11->SetBinError(27,0.003036135);
   VbbHcc_duong_H_dR_all_stack_11->SetEntries(18245);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_duong_H_dR_all_stack_12 = new TH1D("VbbHcc_duong_H_dR_all_stack_12","",50,0,10);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(2,8.058089);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(3,4660.112);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(4,8224.764);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(5,9644.216);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(6,13206.05);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(7,14620.82);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(8,14856.04);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(9,14143.77);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(10,12110.98);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(11,11703.95);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(12,11595.28);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(13,11940.06);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(14,13136.56);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(15,14365.64);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(16,14109.71);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(17,7073.986);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(18,4339.356);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(19,2787.027);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(20,1629.576);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(21,1065.267);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(22,795.6331);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(23,482.8435);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(24,281.883);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(25,205.8492);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(26,47.77265);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(27,38.04875);
   VbbHcc_duong_H_dR_all_stack_12->SetBinContent(28,22.71082);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(2,5.69793);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(3,141.8568);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(4,189.3901);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(5,207.9349);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(6,243.6706);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(7,256.6353);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(8,258.2213);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(9,253.3324);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(10,232.7403);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(11,228.9551);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(12,226.666);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(13,229.0967);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(14,240.9154);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(15,251.2683);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(16,249.5001);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(17,176.4885);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(18,137.4399);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(19,110.0309);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(20,84.31314);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(21,68.34298);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(22,57.84627);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(23,44.88133);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(24,34.63163);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(25,30.0406);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(26,13.58628);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(27,12.15612);
   VbbHcc_duong_H_dR_all_stack_12->SetBinError(28,9.284191);
   VbbHcc_duong_H_dR_all_stack_12->SetEntries(47321);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_duong_H_dR_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_H_dR_all__47 = new TH1D("VbbHcc_duong_H_dR_all__47","",50,0,10);
   VbbHcc_duong_H_dR_all__47->SetBinContent(2,779);
   VbbHcc_duong_H_dR_all__47->SetBinContent(3,870929);
   VbbHcc_duong_H_dR_all__47->SetBinContent(4,1016681);
   VbbHcc_duong_H_dR_all__47->SetBinContent(5,828340);
   VbbHcc_duong_H_dR_all__47->SetBinContent(6,837397);
   VbbHcc_duong_H_dR_all__47->SetBinContent(7,858281);
   VbbHcc_duong_H_dR_all__47->SetBinContent(8,892106);
   VbbHcc_duong_H_dR_all__47->SetBinContent(9,950894);
   VbbHcc_duong_H_dR_all__47->SetBinContent(10,1024631);
   VbbHcc_duong_H_dR_all__47->SetBinContent(11,1113493);
   VbbHcc_duong_H_dR_all__47->SetBinContent(12,1230530);
   VbbHcc_duong_H_dR_all__47->SetBinContent(13,1363062);
   VbbHcc_duong_H_dR_all__47->SetBinContent(14,1517728);
   VbbHcc_duong_H_dR_all__47->SetBinContent(15,1692794);
   VbbHcc_duong_H_dR_all__47->SetBinContent(16,1766669);
   VbbHcc_duong_H_dR_all__47->SetBinContent(17,1188637);
   VbbHcc_duong_H_dR_all__47->SetBinContent(18,875328);
   VbbHcc_duong_H_dR_all__47->SetBinContent(19,671795);
   VbbHcc_duong_H_dR_all__47->SetBinContent(20,515846);
   VbbHcc_duong_H_dR_all__47->SetBinContent(21,391605);
   VbbHcc_duong_H_dR_all__47->SetBinContent(22,293573);
   VbbHcc_duong_H_dR_all__47->SetBinContent(23,212780);
   VbbHcc_duong_H_dR_all__47->SetBinContent(24,143925);
   VbbHcc_duong_H_dR_all__47->SetBinContent(25,87300);
   VbbHcc_duong_H_dR_all__47->SetBinContent(26,47495);
   VbbHcc_duong_H_dR_all__47->SetBinContent(27,21571);
   VbbHcc_duong_H_dR_all__47->SetBinContent(28,6791);
   VbbHcc_duong_H_dR_all__47->SetBinContent(29,499);
   VbbHcc_duong_H_dR_all__47->SetEntries(2.042146e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_dR_all__47->SetLineColor(ci);
   VbbHcc_duong_H_dR_all__47->SetLineWidth(2);
   VbbHcc_duong_H_dR_all__47->SetMarkerStyle(20);
   VbbHcc_duong_H_dR_all__47->SetMarkerSize(1.2);
   VbbHcc_duong_H_dR_all__47->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_H_dR_all__47->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all__47->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all__47->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all__47->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all__47->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all__47->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all__47->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all__47->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_dR_all__47->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all__47->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_dR_all__47->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_dR_all__47->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_dR_all__47->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_H_dR_all__47->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_H_dR_all_fx1047[50] = {
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
   Double_t Graph_from_VbbHcc_duong_H_dR_all_fy1047[50] = {
   0,
   2812.644,
   1928120,
   2729057,
   2281781,
   2310323,
   2384976,
   2399698,
   2649439,
   2861485,
   3098125,
   3636764,
   3723484,
   4308257,
   4923921,
   5066635,
   3411986,
   2479362,
   2036529,
   1548698,
   1199176,
   867720.4,
   630016,
   501153.1,
   288074,
   154284.7,
   111902.7,
   26949.73,
   2409.548,
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
   Double_t Graph_from_VbbHcc_duong_H_dR_all_fex1047[50] = {
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
   Double_t Graph_from_VbbHcc_duong_H_dR_all_fey1047[50] = {
   0,
   1873.9,
   48433.89,
   56998.35,
   50471.75,
   49784.16,
   50246.74,
   49934.66,
   53371.17,
   55894.54,
   58247.11,
   63838.78,
   64269.65,
   69409.84,
   74730.37,
   76287.28,
   63375.28,
   54272.07,
   49667.58,
   43557.69,
   38450.51,
   32900.68,
   28057.57,
   25048.84,
   19027.84,
   13952.49,
   11951,
   5670.909,
   1781.287,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_duong_H_dR_all_fx1047,Graph_from_VbbHcc_duong_H_dR_all_fy1047,Graph_from_VbbHcc_duong_H_dR_all_fex1047,Graph_from_VbbHcc_duong_H_dR_all_fey1047);
   gre->SetName("Graph_from_VbbHcc_duong_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_H_dR_all1047 = new TH1F("Graph_Graph_from_VbbHcc_duong_H_dR_all1047","",100,0,11);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->SetMinimum(0);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->SetMaximum(5657214);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_dR_all1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_H_dR_all1047);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_H_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_VbbHcc_all->cd();
  
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
   
   TH1D *data_mc_ratio__48 = new TH1D("data_mc_ratio__48","",50,0,10);
   data_mc_ratio__48->SetBinContent(2,0.2769636);
   data_mc_ratio__48->SetBinContent(3,0.4516985);
   data_mc_ratio__48->SetBinContent(4,0.3725394);
   data_mc_ratio__48->SetBinContent(5,0.3630234);
   data_mc_ratio__48->SetBinContent(6,0.3624589);
   data_mc_ratio__48->SetBinContent(7,0.3598699);
   data_mc_ratio__48->SetBinContent(8,0.3717576);
   data_mc_ratio__48->SetBinContent(9,0.358904);
   data_mc_ratio__48->SetBinContent(10,0.3580766);
   data_mc_ratio__48->SetBinContent(11,0.3594087);
   data_mc_ratio__48->SetBinContent(12,0.3383585);
   data_mc_ratio__48->SetBinContent(13,0.3660716);
   data_mc_ratio__48->SetBinContent(14,0.3522835);
   data_mc_ratio__48->SetBinContent(15,0.3437898);
   data_mc_ratio__48->SetBinContent(16,0.3486869);
   data_mc_ratio__48->SetBinContent(17,0.348371);
   data_mc_ratio__48->SetBinContent(18,0.3530457);
   data_mc_ratio__48->SetBinContent(19,0.3298725);
   data_mc_ratio__48->SetBinContent(20,0.3330837);
   data_mc_ratio__48->SetBinContent(21,0.3265616);
   data_mc_ratio__48->SetBinContent(22,0.3383267);
   data_mc_ratio__48->SetBinContent(23,0.3377375);
   data_mc_ratio__48->SetBinContent(24,0.2871877);
   data_mc_ratio__48->SetBinContent(25,0.3030471);
   data_mc_ratio__48->SetBinContent(26,0.30784);
   data_mc_ratio__48->SetBinContent(27,0.1927657);
   data_mc_ratio__48->SetBinContent(28,0.2519877);
   data_mc_ratio__48->SetBinContent(29,0.2070928);
   data_mc_ratio__48->SetBinError(2,0.009923252);
   data_mc_ratio__48->SetBinError(3,0.0004840133);
   data_mc_ratio__48->SetBinError(4,0.0003694705);
   data_mc_ratio__48->SetBinError(5,0.0003988691);
   data_mc_ratio__48->SetBinError(6,0.0003960892);
   data_mc_ratio__48->SetBinError(7,0.0003884461);
   data_mc_ratio__48->SetBinError(8,0.0003935969);
   data_mc_ratio__48->SetBinError(9,0.0003680545);
   data_mc_ratio__48->SetBinError(10,0.0003537466);
   data_mc_ratio__48->SetBinError(11,0.0003406001);
   data_mc_ratio__48->SetBinError(12,0.0003050219);
   data_mc_ratio__48->SetBinError(13,0.0003135511);
   data_mc_ratio__48->SetBinError(14,0.0002859535);
   data_mc_ratio__48->SetBinError(15,0.0002642354);
   data_mc_ratio__48->SetBinError(16,0.0002623361);
   data_mc_ratio__48->SetBinError(17,0.0003195342);
   data_mc_ratio__48->SetBinError(18,0.000377351);
   data_mc_ratio__48->SetBinError(19,0.0004024647);
   data_mc_ratio__48->SetBinError(20,0.0004637601);
   data_mc_ratio__48->SetBinError(21,0.0005218444);
   data_mc_ratio__48->SetBinError(22,0.0006244221);
   data_mc_ratio__48->SetBinError(23,0.0007321732);
   data_mc_ratio__48->SetBinError(24,0.0007570032);
   data_mc_ratio__48->SetBinError(25,0.001025659);
   data_mc_ratio__48->SetBinError(26,0.001412541);
   data_mc_ratio__48->SetBinError(27,0.001312486);
   data_mc_ratio__48->SetBinError(28,0.003057824);
   data_mc_ratio__48->SetBinError(29,0.009270746);
   data_mc_ratio__48->SetMinimum(0.4);
   data_mc_ratio__48->SetMaximum(1.6);
   data_mc_ratio__48->SetEntries(1355.811);
   data_mc_ratio__48->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__48->SetLineColor(ci);
   data_mc_ratio__48->SetLineWidth(2);
   data_mc_ratio__48->SetMarkerStyle(20);
   data_mc_ratio__48->SetMarkerSize(1.2);
   data_mc_ratio__48->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__48->GetXaxis()->SetRange(1,50);
   data_mc_ratio__48->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__48->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__48->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__48->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__48->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__48->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__48->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__48->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__48->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1048[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1048[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1048[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1048[50] = {
   0,
   0.6662414,
   0.02511975,
   0.02088574,
   0.02211946,
   0.02154857,
   0.02106803,
   0.02080873,
   0.02014433,
   0.0195334,
   0.01880076,
   0.01755373,
   0.01726062,
   0.01611089,
   0.015177,
   0.0150568,
   0.01857431,
   0.02188953,
   0.02438835,
   0.02812536,
   0.03206409,
   0.03791622,
   0.0445347,
   0.04998241,
   0.0660519,
   0.09043343,
   0.1067982,
   0.2104255,
   0.7392619,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1048,Graph_from_mc_statistical_error_fy1048,Graph_from_mc_statistical_error_fex1048,Graph_from_mc_statistical_error_fey1048);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1048 = new TH1F("Graph_Graph_from_mc_statistical_error1048","",100,0,11);
   Graph_Graph_from_mc_statistical_error1048->SetMinimum(0.1128857);
   Graph_Graph_from_mc_statistical_error1048->SetMaximum(1.887114);
   Graph_Graph_from_mc_statistical_error1048->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1048->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1048);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_VbbHcc_all->cd();
   H_dR_VbbHcc_all->Modified();
   H_dR_VbbHcc_all->cd();
   H_dR_VbbHcc_all->SetSelected(H_dR_VbbHcc_all);
}
