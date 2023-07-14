void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Fri Jul 14 13:38:26 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(0,0,1,1);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-184.8229,1.052419,184648.1);
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
   st->SetMaximum(158252.2);
   
   TH1F *st_stack_154 = new TH1F("st_stack_154","",25,0,1);
   st_stack_154->SetMinimum(0.01);
   st_stack_154->SetMaximum(166164.8);
   st_stack_154->SetDirectory(0);
   st_stack_154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_154->SetLineColor(ci);
   st_stack_154->GetXaxis()->SetRange(1,25);
   st_stack_154->GetXaxis()->SetLabelFont(42);
   st_stack_154->GetXaxis()->SetLabelSize(0.035);
   st_stack_154->GetXaxis()->SetTitleSize(0.035);
   st_stack_154->GetXaxis()->SetTitleFont(42);
   st_stack_154->GetYaxis()->SetTitle("Events/0.04");
   st_stack_154->GetYaxis()->SetLabelFont(42);
   st_stack_154->GetYaxis()->SetLabelSize(0.05);
   st_stack_154->GetYaxis()->SetTitleSize(0.057);
   st_stack_154->GetYaxis()->SetTitleOffset(1.2);
   st_stack_154->GetYaxis()->SetTitleFont(42);
   st_stack_154->GetZaxis()->SetLabelFont(42);
   st_stack_154->GetZaxis()->SetLabelSize(0.035);
   st_stack_154->GetZaxis()->SetTitleSize(0.035);
   st_stack_154->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_154);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,64556);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,56259.74);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,30519.65);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,16210.16);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,10756.58);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,2407.768);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,1750.44);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,121.5129);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,43.10585);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,25.56305);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,13.66115);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,33.65888);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,13.20172);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,2.548973);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,1.222538);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,3152.135);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,3047.997);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,2764.262);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,1745.536);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,2183.055);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,438.8695);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,1425.001);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,36.66897);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,31.96497);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,23.45071);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,8.461698);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,28.69911);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,9.33874);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,2.548973);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,1.222538);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(13510);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,488.9538);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,440.4419);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,249.8875);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,139.2692);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,57.0687);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,29.17789);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,9.532855);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,4.173196);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,1.671639);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.4093845);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.1302317);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.4522276);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.4342089);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.6719571);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.06853077);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.1285375);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.008613847);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,9.327587);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,8.784231);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,6.66241);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,5.251099);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,3.362746);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,2.504815);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,1.410747);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.935416);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.5476603);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.1596343);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.08467234);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.343132);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.3349516);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.4382865);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.05097499);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.07603635);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.03521532);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(19837);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,5420.516);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,5233.167);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,2939.096);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,1558.426);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,800.3667);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,381.2919);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,170.429);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,80.10291);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,38.01235);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,24.8758);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,13.20496);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,8.791897);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,5.264498);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,3.440003);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,2.318262);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,1.159473);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,1.033282);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,0.892601);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,0.2987398);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,0.1939452);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.1254569);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.03753087);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.02509228);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,19.82547);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,19.66523);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,14.73654);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,10.71532);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,7.65665);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,5.241072);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,3.448849);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,2.322379);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,1.572308);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,1.259674);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,0.9188707);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,0.7271202);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,0.5528023);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,0.4328643);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,0.3675436);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.2468898);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.2418874);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.2305833);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.1285583);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.1161377);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.09750199);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.03753087);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.02509228);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(257832);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,482.7749);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,408.2023);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,243.1561);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,148.8282);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,81.06117);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,26.77268);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,9.711354);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,2.301877);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,0.432928);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,0.5967898);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.04983454);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,16.69274);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,16.85789);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,12.25905);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,11.41713);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,8.452121);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,2.601814);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,1.62393);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,0.7318534);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,0.2000658);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.4393521);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.04983454);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(8463);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,243.1761);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,218.9344);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,120.2726);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,65.29275);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,33.26655);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,22.45935);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,12.43469);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,0.679706);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,0.2160495);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,0.1778462);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.1674972);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.02608641);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.0003393656);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.04360035);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,14.60765);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,19.04678);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,12.38868);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,7.194293);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,4.927625);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,6.537725);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,7.517977);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,0.3108381);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.1525997);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.1778462);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.1674972);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.02608641);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.0003393656);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.04360035);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(3604);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,3.502171);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,0.9197125);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,0.4420548);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,0.9011667);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,0.463545);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,0.3130376);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(22);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,5.500986);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,5.78267);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,2.43753);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,1.449505);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,1.549765);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,0.8457542);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.1790143);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,0.9792649);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,1.017877);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,0.6404848);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,0.4941);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.5180437);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.3496234);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.1790143);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(106);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,7.563696);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,4.612848);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,2.145213);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,1.430415);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,1.951873);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,0.442656);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,1.297376);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,0.9993768);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,0.6825558);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,0.5443855);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,0.6578385);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.3138442);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(86);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,3.073625);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,2.803054);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,1.563041);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,1.07276);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,0.727523);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,0.3126174);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.1028425);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.01080829);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.004343004);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.003459377);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.07701498);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.07355642);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.05556648);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.04593023);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.03792543);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.02475956);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.01389349);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.00465127);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.003082695);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.002489943);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(5585);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,2.2059);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,2.136433);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,1.22628);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,0.743405);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,0.4237354);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,0.2032111);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.06317609);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.01880499);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.00442304);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.002622533);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.00127328);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.001409244);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.001488488);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.0004349723);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.0003518022);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0003734022);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.03122298);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.03076113);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.02337203);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.01819923);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.01370927);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.009505107);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.005283364);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.002836807);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.001407388);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.001060955);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.0007355603);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.0007055463);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.0007480015);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.0004349723);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0003518022);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0003734022);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.1710316);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.1136328);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.07700868);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.04047404);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.04007331);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.01683713);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(9,0.004047012);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.01765263);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.01469256);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01251304);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.008559071);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.009423492);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.005721128);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(9,0.0028656);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(279);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.05678007);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.06214586);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.02959877);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.01754232);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.01338541);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.004705842);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.002186308);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.001371728);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0001732053);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0002137836);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.003685709);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.003860405);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.002665259);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.002073375);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.001765811);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001094346);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.0007129483);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0005695713);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0001732053);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0002137836);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(816);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__307 = new TH1D("VbbHcc_algo_Sphericity__307","",25,0,1);
   VbbHcc_algo_Sphericity__307->SetBinContent(1,10919);
   VbbHcc_algo_Sphericity__307->SetBinContent(2,8579);
   VbbHcc_algo_Sphericity__307->SetBinContent(3,4884);
   VbbHcc_algo_Sphericity__307->SetBinContent(4,2793);
   VbbHcc_algo_Sphericity__307->SetBinContent(5,1505);
   VbbHcc_algo_Sphericity__307->SetBinContent(6,651);
   VbbHcc_algo_Sphericity__307->SetBinContent(7,231);
   VbbHcc_algo_Sphericity__307->SetBinContent(8,86);
   VbbHcc_algo_Sphericity__307->SetBinContent(9,35);
   VbbHcc_algo_Sphericity__307->SetBinContent(10,30);
   VbbHcc_algo_Sphericity__307->SetBinContent(11,9);
   VbbHcc_algo_Sphericity__307->SetBinContent(12,8);
   VbbHcc_algo_Sphericity__307->SetBinContent(13,3);
   VbbHcc_algo_Sphericity__307->SetBinContent(14,3);
   VbbHcc_algo_Sphericity__307->SetBinContent(15,3);
   VbbHcc_algo_Sphericity__307->SetBinContent(16,2);
   VbbHcc_algo_Sphericity__307->SetBinContent(17,1);
   VbbHcc_algo_Sphericity__307->SetBinContent(18,1);
   VbbHcc_algo_Sphericity__307->SetEntries(29743);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__307->SetLineColor(ci);
   VbbHcc_algo_Sphericity__307->SetLineWidth(2);
   VbbHcc_algo_Sphericity__307->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__307->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__307->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__307->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__307->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__307->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__307->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__307->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__307->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__307->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__307->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__307->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__307->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__307->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__307->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__307->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__307->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1307[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1307[25] = {
   71213.49,
   62576.91,
   34079.98,
   18126.73,
   11733.05,
   2869.296,
   1952.895,
   208.8016,
   83.45163,
   51.62567,
   27.00128,
   43.07191,
   18.92801,
   6.661707,
   2.430393,
   1.288362,
   2.305655,
   0.8929744,
   0.3073536,
   0.1939452,
   0.1254569,
   0.03753087,
   0.02509228,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1307[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1307[25] = {
   3152.29,
   3048.179,
   2764.364,
   1745.629,
   2183.094,
   438.9646,
   1425.027,
   36.76294,
   32.00929,
   23.48984,
   8.511864,
   28.71086,
   9.361118,
   2.622352,
   0.3736144,
   0.2583336,
   1.247234,
   0.2305836,
   0.1332943,
   0.1161377,
   0.09750199,
   0.03753087,
   0.02509228,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1307,Graph_from_VbbHcc_algo_Sphericity_fy1307,Graph_from_VbbHcc_algo_Sphericity_fex1307,Graph_from_VbbHcc_algo_Sphericity_fey1307);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1307 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1307","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetMinimum(-7436.578);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetMaximum(81802.36);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1307);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__308 = new TH1D("data_mc_ratio__308","",25,0,1);
   data_mc_ratio__308->SetBinContent(1,0.1533277);
   data_mc_ratio__308->SetBinContent(2,0.1370953);
   data_mc_ratio__308->SetBinContent(3,0.1433099);
   data_mc_ratio__308->SetBinContent(4,0.1540819);
   data_mc_ratio__308->SetBinContent(5,0.1282701);
   data_mc_ratio__308->SetBinContent(6,0.2268849);
   data_mc_ratio__308->SetBinContent(7,0.1182859);
   data_mc_ratio__308->SetBinContent(8,0.4118742);
   data_mc_ratio__308->SetBinContent(9,0.4194046);
   data_mc_ratio__308->SetBinContent(10,0.5811063);
   data_mc_ratio__308->SetBinContent(11,0.3333175);
   data_mc_ratio__308->SetBinContent(12,0.1857359);
   data_mc_ratio__308->SetBinContent(13,0.1584953);
   data_mc_ratio__308->SetBinContent(14,0.4503351);
   data_mc_ratio__308->SetBinContent(15,1.234368);
   data_mc_ratio__308->SetBinContent(16,1.552359);
   data_mc_ratio__308->SetBinContent(17,0.4337163);
   data_mc_ratio__308->SetBinContent(18,1.119853);
   data_mc_ratio__308->SetBinError(1,0.001467335);
   data_mc_ratio__308->SetBinError(2,0.001480145);
   data_mc_ratio__308->SetBinError(3,0.002050636);
   data_mc_ratio__308->SetBinError(4,0.002915521);
   data_mc_ratio__308->SetBinError(5,0.003306414);
   data_mc_ratio__308->SetBinError(6,0.008892322);
   data_mc_ratio__308->SetBinError(7,0.007782643);
   data_mc_ratio__308->SetBinError(8,0.04441354);
   data_mc_ratio__308->SetBinError(9,0.07089232);
   data_mc_ratio__308->SetBinError(10,0.106095);
   data_mc_ratio__308->SetBinError(11,0.1111058);
   data_mc_ratio__308->SetBinError(12,0.06566756);
   data_mc_ratio__308->SetBinError(13,0.09150731);
   data_mc_ratio__308->SetBinError(14,0.2600011);
   data_mc_ratio__308->SetBinError(15,0.7126629);
   data_mc_ratio__308->SetBinError(16,1.097684);
   data_mc_ratio__308->SetBinError(17,0.4337163);
   data_mc_ratio__308->SetBinError(18,1.119853);
   data_mc_ratio__308->SetMinimum(0.4);
   data_mc_ratio__308->SetMaximum(1.6);
   data_mc_ratio__308->SetEntries(16.99039);
   data_mc_ratio__308->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__308->SetLineColor(ci);
   data_mc_ratio__308->SetLineWidth(2);
   data_mc_ratio__308->SetMarkerStyle(20);
   data_mc_ratio__308->SetMarkerSize(1.2);
   data_mc_ratio__308->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__308->GetXaxis()->SetRange(1,25);
   data_mc_ratio__308->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__308->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__308->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__308->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__308->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__308->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__308->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__308->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__308->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__308->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__308->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__308->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__308->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__308->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__308->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__308->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__308->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1308[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1308[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1308[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1308[25] = {
   0.04426535,
   0.04871093,
   0.08111402,
   0.09630141,
   0.1860635,
   0.1529869,
   0.7296997,
   0.1760664,
   0.383567,
   0.4550031,
   0.3152393,
   0.6665796,
   0.4945644,
   0.3936456,
   0.1537259,
   0.2005132,
   0.5409458,
   0.2582197,
   0.4336838,
   0.5988169,
   0.777175,
   1,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1308,Graph_from_mc_statistical_error_fy1308,Graph_from_mc_statistical_error_fex1308,Graph_from_mc_statistical_error_fey1308);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1308 = new TH1F("Graph_Graph_from_mc_statistical_error1308","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1308->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1308->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1308->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1308->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1308->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1308);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
