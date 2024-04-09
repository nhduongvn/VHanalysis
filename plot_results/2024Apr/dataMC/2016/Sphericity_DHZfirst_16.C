#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_16/Sphericity_DHZfirst_16
//=========  (Mon Apr  8 11:54:17 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_16 = new TCanvas("Sphericity_DHZfirst_16", "Sphericity_DHZfirst_16",0,0,600,600);
   Sphericity_DHZfirst_16->SetHighLightColor(2);
   Sphericity_DHZfirst_16->Range(0,0,1,1);
   Sphericity_DHZfirst_16->SetFillColor(0);
   Sphericity_DHZfirst_16->SetFillStyle(4000);
   Sphericity_DHZfirst_16->SetBorderMode(0);
   Sphericity_DHZfirst_16->SetBorderSize(2);
   Sphericity_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-313.9883,1.052419,313684.3);
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
   st->SetMaximum(282284.4);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",25,0,1);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(282284.4);
   st_stack_115->SetDirectory(nullptr);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->SetLineWidth(0);
   st_stack_115->GetXaxis()->SetRange(1,25);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.04");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,85120.44);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,82539.51);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,44163.13);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,20004.47);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,10844.83);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,4237.168);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,2375.659);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,405.5949);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,410.7875);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,304.234);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,25.1633);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,24.31256);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,20.37204);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,21.49867);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.171979);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,1.887532);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(18,20.43695);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,4561.148);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,4045.059);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,3322.493);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,1844.092);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,1526.658);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,700.0944);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,956.9742);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,200.1972);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,281.3278);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,270.9521);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,17.30107);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,20.92453);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,15.39989);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,19.73549);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.171979);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,1.887532);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(18,20.43695);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(13484);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,634.1965);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,623.8655);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,371.8944);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,196.6508);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,102.4487);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,50.05015);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,19.71461);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,7.986011);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,2.391712);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,1.352096);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,0.9403225);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.4748413);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,1.150623);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.4260363);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.137936);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.1408304);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.1262643);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.04217522);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(19,0.2322785);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,8.64782);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,8.550027);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,6.60909);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,5.012693);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,3.657323);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,2.685962);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,1.675076);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,0.9940192);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.4663377);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.2667874);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.3854637);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.1329638);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.4532087);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.2699574);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.06360276);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.06566923);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.05815331);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.03318839);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(19,0.2322785);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(36231);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,6123.779);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,6615.604);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,3666.41);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,1964.231);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,1027.018);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,505.0121);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,232.0347);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,108.699);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,58.46112);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,30.33112);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,16.44865);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,11.39837);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,8.08684);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,4.395525);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,2.516512);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,2.26856);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,1.715538);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,1.110544);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.5177999);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.2373633);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.07609581);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,18.32553);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,18.99332);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,14.16407);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,10.39776);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,7.545823);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,5.266264);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,3.541046);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,2.391908);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,1.740311);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.226733);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,0.8933085);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.7389333);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.6273885);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.4481555);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.340788);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.3131622);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.2780774);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.2263695);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.1482327);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.1094419);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.0539209);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(401489);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,536.8143);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,482.4503);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,275.3069);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,172.1995);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,98.28338);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,48.19894);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,12.86266);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,1.731772);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,0.361387);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.1783565);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.05063649);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.4769329);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.09722238);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,16.90257);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,17.3808);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,11.79632);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,9.724008);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,7.35167);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,5.041551);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,2.825217);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.4879615);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.2406267);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.09713958);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.05063649);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.3198314);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.06990985);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(12460);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,332.0204);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,285.238);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,168.5033);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,84.46054);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,54.80367);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,25.11557);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,6.935761);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,0.4685658);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,1.136701);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,1.474638);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(11,4.218097);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(12,0.02266769);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(13,0.2775462);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(15,0.03700329);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(16,0.02895015);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(17,0.04269082);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(18,0.0002245513);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,21.04797);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,19.65481);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,15.92172);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,8.584309);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,8.766795);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,7.142933);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,1.850861);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,0.2353566);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.8385631);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,1.068594);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(11,4.179754);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(12,0.02266769);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(13,0.2773033);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(15,0.03700329);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(16,0.02895015);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(17,0.04269082);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(18,0.0002245513);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(8142);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,3.480588);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,2.248943);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.7611498);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(4,0.9918771);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(5,0.6116564);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(6,0.2740819);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(8,0.1538023);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,0.6333666);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.5092159);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.2928233);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(4,0.344817);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(5,0.2527574);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(6,0.1952395);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(8,0.1289642);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(78);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,12.25839);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,9.923324);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,4.892016);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,2.726778);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,1.280024);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.4917666);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.3155607);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(8,0.0893421);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(9,0.09302342);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(13,0.0785989);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.09619);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,0.982755);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,0.6838739);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.5068283);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.3603326);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.2203806);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.1824701);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(8,0.0893421);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(9,0.09302342);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(13,0.0785989);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(342);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,8.575249);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,7.031605);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,4.751824);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,1.572407);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,1.133381);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.308112);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.204904);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,0.9862446);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,0.5542032);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.5095622);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(118);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,3.250325);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,3.144465);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,1.845458);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,1.31272);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,0.8585969);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.3678741);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.1300006);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.02855472);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.00565742);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(10,0.002575856);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.001075961);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(13,0.001834051);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.06165747);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.06017664);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.04630734);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.03911286);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.03173078);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.02096937);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.0125137);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.005766159);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.002549601);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(10,0.001547225);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.001075961);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(13,0.00129742);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(9781);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,1.418607);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,1.423438);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,0.8030076);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.5069091);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.2969643);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.1407185);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.04325465);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.01758853);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.006326678);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.002366319);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.001076329);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.0009170078);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0004563948);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0004630624);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.0003651301);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.0225917);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.02247095);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.0167831);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.01340597);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01027793);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.007123745);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.00391847);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.002475311);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.001472064);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.0008663339);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.0006226118);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0005233704);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0003663865);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0004630624);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.0003651301);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(13681);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1051545);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.07319467);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.06294384);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.03990658);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.02048198);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.01882713);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(8,0.001461375);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.01465603);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01203404);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.01093266);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.009019967);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.006259533);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.006298138);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(8,0.001461375);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(167);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.03774007);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.03851043);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.01972609);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.01437937);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.005618595);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.004181967);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.001105314);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.0002978436);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(9,0.0002772462);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.003247179);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.003263702);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.00236272);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.002004246);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001251052);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.001085369);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0005540038);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0002978436);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(9,0.0002772462);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(452);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__229 = new TH1D("VH_DHZfirst_Sphericity__229","",25,0,1);
   VH_DHZfirst_Sphericity__229->SetBinContent(1,127028);
   VH_DHZfirst_Sphericity__229->SetBinContent(2,117365);
   VH_DHZfirst_Sphericity__229->SetBinContent(3,63546);
   VH_DHZfirst_Sphericity__229->SetBinContent(4,34003);
   VH_DHZfirst_Sphericity__229->SetBinContent(5,16943);
   VH_DHZfirst_Sphericity__229->SetBinContent(6,7320);
   VH_DHZfirst_Sphericity__229->SetBinContent(7,2578);
   VH_DHZfirst_Sphericity__229->SetBinContent(8,892);
   VH_DHZfirst_Sphericity__229->SetBinContent(9,386);
   VH_DHZfirst_Sphericity__229->SetBinContent(10,205);
   VH_DHZfirst_Sphericity__229->SetBinContent(11,110);
   VH_DHZfirst_Sphericity__229->SetBinContent(12,65);
   VH_DHZfirst_Sphericity__229->SetBinContent(13,52);
   VH_DHZfirst_Sphericity__229->SetBinContent(14,26);
   VH_DHZfirst_Sphericity__229->SetBinContent(15,18);
   VH_DHZfirst_Sphericity__229->SetBinContent(16,20);
   VH_DHZfirst_Sphericity__229->SetBinContent(17,10);
   VH_DHZfirst_Sphericity__229->SetBinContent(18,3);
   VH_DHZfirst_Sphericity__229->SetBinContent(19,3);
   VH_DHZfirst_Sphericity__229->SetBinContent(20,2);
   VH_DHZfirst_Sphericity__229->SetBinContent(22,1);
   VH_DHZfirst_Sphericity__229->SetEntries(370600);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__229->SetLineColor(ci);
   VH_DHZfirst_Sphericity__229->SetLineWidth(2);
   VH_DHZfirst_Sphericity__229->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__229->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1229[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1229[25] = { 92776.37, 90570.55, 48658.38, 22429.17, 12131.59, 4866.842, 2647.696, 524.7713, 473.2437, 337.5752, 46.82316, 36.68629, 30.06516, 26.3207, 2.863796, 2.438341, 3.772026,
   21.5899, 0.7500784, 0.2373633, 0.07609581, 0, 0, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1229[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1229[25] = { 4561.274, 4045.198, 3322.589, 1844.174, 1526.724, 700.174, 956.9882, 200.2147, 281.335, 270.9572, 17.82545, 20.94045, 15.42218, 19.74243, 0.3887518, 0.3212804, 1.909269,
   20.43824, 0.2755472, 0.1094419, 0.0539209, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1229,Graph_from_VH_DHZfirst_Sphericity_fy1229,Graph_from_VH_DHZfirst_Sphericity_fex1229,Graph_from_VH_DHZfirst_Sphericity_fey1229);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1229 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1229","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetMaximum(107071.4);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_DHZfirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__230 = new TH1D("data_mc_ratio__230","",25,0,1);
   data_mc_ratio__230->SetBinContent(1,1.369185);
   data_mc_ratio__230->SetBinContent(2,1.295841);
   data_mc_ratio__230->SetBinContent(3,1.305962);
   data_mc_ratio__230->SetBinContent(4,1.516017);
   data_mc_ratio__230->SetBinContent(5,1.396601);
   data_mc_ratio__230->SetBinContent(6,1.504055);
   data_mc_ratio__230->SetBinContent(7,0.9736767);
   data_mc_ratio__230->SetBinContent(8,1.699788);
   data_mc_ratio__230->SetBinContent(9,0.8156473);
   data_mc_ratio__230->SetBinContent(10,0.6072722);
   data_mc_ratio__230->SetBinContent(11,2.349265);
   data_mc_ratio__230->SetBinContent(12,1.771779);
   data_mc_ratio__230->SetBinContent(13,1.729576);
   data_mc_ratio__230->SetBinContent(14,0.9878158);
   data_mc_ratio__230->SetBinContent(15,6.285365);
   data_mc_ratio__230->SetBinContent(16,8.202299);
   data_mc_ratio__230->SetBinContent(17,2.651096);
   data_mc_ratio__230->SetBinContent(18,0.1389539);
   data_mc_ratio__230->SetBinContent(19,3.999582);
   data_mc_ratio__230->SetBinContent(20,8.425901);
   data_mc_ratio__230->SetBinError(1,0.003841602);
   data_mc_ratio__230->SetBinError(2,0.003782529);
   data_mc_ratio__230->SetBinError(3,0.005180676);
   data_mc_ratio__230->SetBinError(4,0.008221392);
   data_mc_ratio__230->SetBinError(5,0.01072945);
   data_mc_ratio__230->SetBinError(6,0.01757957);
   data_mc_ratio__230->SetBinError(7,0.01917667);
   data_mc_ratio__230->SetBinError(8,0.05691311);
   data_mc_ratio__230->SetBinError(9,0.04151536);
   data_mc_ratio__230->SetBinError(10,0.04241373);
   data_mc_ratio__230->SetBinError(11,0.2239936);
   data_mc_ratio__230->SetBinError(12,0.2197621);
   data_mc_ratio__230->SetBinError(13,0.2398491);
   data_mc_ratio__230->SetBinError(14,0.1937266);
   data_mc_ratio__230->SetBinError(15,1.481475);
   data_mc_ratio__230->SetBinError(16,1.83409);
   data_mc_ratio__230->SetBinError(17,0.83835);
   data_mc_ratio__230->SetBinError(18,0.08022505);
   data_mc_ratio__230->SetBinError(19,2.30916);
   data_mc_ratio__230->SetBinError(20,5.958012);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(33.12917);
   data_mc_ratio__230->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__230->SetLineColor(ci);
   data_mc_ratio__230->SetLineWidth(2);
   data_mc_ratio__230->SetMarkerStyle(20);
   data_mc_ratio__230->SetMarkerSize(1.2);
   data_mc_ratio__230->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__230->GetXaxis()->SetRange(1,25);
   data_mc_ratio__230->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__230->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__230->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__230->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__230->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__230->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__230->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1230[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1230[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1230[25] = { 0.04916417, 0.0446635, 0.068284, 0.0822221, 0.125847, 0.1438662, 0.3614418, 0.3815275, 0.5944822, 0.8026573, 0.3806973, 0.5707976, 0.5129584, 0.7500724, 0.135747, 0.1317619, 0.5061656,
   0.9466573, 0.3673579, 0.4610731, 0.7085923, 0, 0, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.04800842);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(2.135989);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->SetSelected(Sphericity_DHZfirst_16);
}
