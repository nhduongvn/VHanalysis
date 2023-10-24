#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algoFirst_16()
{
//=========Macro generated from canvas: Sphericity_algoFirst_16/Sphericity_algoFirst_16
//=========  (Fri Oct 20 15:09:11 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algoFirst_16 = new TCanvas("Sphericity_algoFirst_16", "Sphericity_algoFirst_16",0,0,600,600);
   Sphericity_algoFirst_16->SetHighLightColor(2);
   Sphericity_algoFirst_16->Range(0,0,1,1);
   Sphericity_algoFirst_16->SetFillColor(0);
   Sphericity_algoFirst_16->SetFillStyle(4000);
   Sphericity_algoFirst_16->SetBorderMode(0);
   Sphericity_algoFirst_16->SetBorderSize(2);
   Sphericity_algoFirst_16->SetFrameFillStyle(1000);
   Sphericity_algoFirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-303.552,1.052419,303258.4);
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
   st->SetMaximum(272902.2);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",25,0,1);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(272902.2);
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
   
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_1 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_1","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(1,110429.3);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(2,110446.5);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(3,51569.14);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(4,28925.1);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(5,15495.44);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(6,5123.159);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(7,1667.25);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(8,198.6575);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(9,272.1621);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(10,318.3758);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(11,42.63674);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(12,3.709075);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(13,6.371211);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(14,2.642017);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(17,0.9973332);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(1,5463.846);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(2,15701.65);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(3,3431.895);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(4,2753.037);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(5,2009.95);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(6,1255.949);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(7,518.0671);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(8,55.33092);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(9,219.9637);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(10,285.4272);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(11,22.24791);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(12,3.709075);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(13,6.371211);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(14,2.642017);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(17,0.9973332);
   VbbHcc_algoFirst_Sphericity_stack_1->SetEntries(16028);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algoFirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_2 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_2","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(1,637.5962);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(2,593.008);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(3,358.4865);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(4,182.6036);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(5,95.68222);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(6,43.23635);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(7,13.56893);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(8,6.647678);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(9,2.904717);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(10,1.661377);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(11,0.6170316);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(12,0.4088793);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(13,0.3158936);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(14,0.397782);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(15,0.07238626);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(16,0.2247586);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(17,0.03324507);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(18,0.1052672);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(1,9.178152);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(2,8.5511);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(3,6.952);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(4,5.042918);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(5,3.760633);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(6,2.650713);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(7,1.401033);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(8,1.017714);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(9,0.709789);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(10,0.5273577);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(11,0.2416573);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(12,0.2867489);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(13,0.2359388);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(14,0.2085555);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(15,0.05944581);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(16,0.1557964);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(17,0.03324507);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(18,0.06174383);
   VbbHcc_algoFirst_Sphericity_stack_2->SetEntries(39142);

   ci = TColor::GetColor("#660066");
   VbbHcc_algoFirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_3 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_3","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(1,6685.933);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(2,6925.387);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(3,3803.966);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(4,2057.617);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(5,1074.498);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(6,520.6185);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(7,232.3743);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(8,113.0629);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(9,56.24278);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(10,30.80668);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(11,19.07328);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(12,12.39578);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(13,8.358422);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(14,4.295532);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(15,2.548058);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(16,1.857616);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(17,1.420937);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(18,1.032257);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(19,0.7334394);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(20,0.08957049);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(21,0.1526725);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(1,18.7813);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(2,19.05356);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(3,14.15351);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(4,10.45516);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(5,7.555519);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(6,5.23772);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(7,3.455477);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(8,2.359498);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(9,1.643002);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(10,1.204826);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(11,0.9244223);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(12,0.7524217);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(13,0.617067);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(14,0.4366738);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(15,0.3224619);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(16,0.2903509);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(17,0.245215);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(18,0.2142381);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(19,0.188647);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(20,0.06384864);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(21,0.08014985);
   VbbHcc_algoFirst_Sphericity_stack_3->SetEntries(446959);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algoFirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_4 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_4","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(1,720.6988);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(2,621.2926);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(3,367.8562);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(4,196.9346);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(5,110.0827);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(6,47.6095);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(7,13.32497);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(8,3.709804);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(9,1.004154);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(10,0.332921);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(11,0.1979278);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(12,0.1197154);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(13,0.08684082);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(14,0.700512);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(15,0.03639045);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(17,0.01820376);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(19,0.05088052);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(1,19.6457);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(2,18.77845);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(3,14.34564);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(4,8.908708);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(5,7.406435);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(6,3.860988);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(7,2.084354);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(8,0.7947577);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(9,0.3330044);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(10,0.1529398);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(11,0.1500256);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(12,0.08553427);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(13,0.06241161);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(14,0.4312506);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(15,0.03639045);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(17,0.01820376);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(19,0.05088052);
   VbbHcc_algoFirst_Sphericity_stack_4->SetEntries(15860);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algoFirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_5 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_5","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(1,374.2199);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(2,364.8022);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(3,192.4319);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(4,110.6739);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(5,61.09181);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(6,28.68691);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(7,8.488087);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(8,2.220549);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(9,0.98216);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(10,0.9296266);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(11,0.0109446);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(13,0.2802707);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(14,0.02735157);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(16,0.0002950033);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(17,0.02393252);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(1,21.23326);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(2,24.33282);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(3,17.28458);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(4,10.81536);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(5,10.56135);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(6,3.773317);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(7,2.000355);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(8,1.244527);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(9,0.8481859);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(10,0.8444801);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(11,0.0109446);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(13,0.2798745);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(14,0.02735157);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(16,0.0002950033);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(17,0.02393252);
   VbbHcc_algoFirst_Sphericity_stack_5->SetEntries(9388);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algoFirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_6 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_6","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(1,1.904763);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(2,2.082001);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(3,0.9728875);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(4,0.4602484);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(5,0.6285252);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(6,0.269738);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(7,0.09914452);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(1,0.4663716);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(2,0.4849271);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(3,0.3480816);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(4,0.2067136);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(5,0.2822078);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(6,0.1919645);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(7,0.09914452);
   VbbHcc_algoFirst_Sphericity_stack_6->SetEntries(57);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algoFirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_7 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_7","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(1,14.84525);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(2,11.89013);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(3,7.337572);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(4,3.917246);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(5,2.584994);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(6,1.536204);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(7,0.107039);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(8,0.2607724);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(13,0.07703467);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(1,1.209069);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(2,1.062377);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(3,0.8328427);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(4,0.6116168);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(5,0.5046284);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(6,0.3874949);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(7,0.107039);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(8,0.1636338);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(13,0.07703467);
   VbbHcc_algoFirst_Sphericity_stack_7->SetEntries(458);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algoFirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_8 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_8","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(1,10.06811);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(2,9.684551);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(3,5.50099);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(4,3.107858);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(5,2.38597);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(6,0.1447985);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(8,0.2448065);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(1,1.441239);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(2,1.429379);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(3,1.079266);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(4,0.7957562);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(5,0.7366769);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(6,0.1447985);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(8,0.2448065);
   VbbHcc_algoFirst_Sphericity_stack_8->SetEntries(156);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algoFirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_9 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_9","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(1,3.625001);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(2,3.482431);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(3,1.986355);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(4,1.395791);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(5,0.8441885);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(6,0.4255547);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(7,0.1004099);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(8,0.02074488);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(9,0.005847092);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(11,0.001148691);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(12,0.001089024);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(14,0.001556566);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(15,0.0009854662);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(17,0.0008485859);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(1,0.0670903);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(2,0.06524974);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(3,0.049377);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(4,0.04142386);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(5,0.03285147);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(6,0.02352726);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(7,0.01123441);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(8,0.005094214);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(9,0.002651458);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(11,0.001148691);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(12,0.001089024);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(14,0.001556566);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(15,0.0009854662);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(17,0.0008485859);
   VbbHcc_algoFirst_Sphericity_stack_9->SetEntries(10635);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algoFirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_10 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_10","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(1,1.566259);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(2,1.490436);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(3,0.8619017);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(4,0.524292);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(5,0.2987723);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(6,0.1450798);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(7,0.04493941);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(8,0.01299894);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(9,0.00311982);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(10,0.001840182);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(11,0.001027603);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(12,0.0009334604);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(13,0.001017941);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(14,0.0003885679);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(16,0.0002466008);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(18,0.0003061634);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(1,0.02251245);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(2,0.02178445);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(3,0.01667151);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(4,0.01303382);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(5,0.009788828);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(6,0.006885741);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(7,0.003817297);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(8,0.001980149);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(9,0.001008604);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(10,0.0007737503);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(11,0.0006059077);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(12,0.0004703735);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(13,0.0005102106);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(14,0.0003885679);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(16,0.0002466008);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(18,0.0003061634);
   VbbHcc_algoFirst_Sphericity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algoFirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_11 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_11","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(1,0.1434809);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(2,0.1117206);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(3,0.06448703);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(4,0.06689077);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(5,0.04395466);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(6,0.0253491);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(7,0.002022594);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(1,0.01771067);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(2,0.01571283);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(3,0.01160586);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(4,0.01197627);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(5,0.009936645);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(6,0.007524889);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(7,0.002022594);
   VbbHcc_algoFirst_Sphericity_stack_11->SetEntries(222);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algoFirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_12 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_12","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(1,0.05261558);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(2,0.05858073);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(3,0.02503182);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(4,0.01756676);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(5,0.008028472);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(6,0.00602866);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(7,0.001061711);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(8,0.0006183905);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(1,0.003872765);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(2,0.00402226);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(3,0.00265231);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(4,0.002251881);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(5,0.001535338);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(6,0.00131211);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(7,0.0005332692);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(8,0.0004390202);
   VbbHcc_algoFirst_Sphericity_stack_12->SetEntries(620);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algoFirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algoFirst_Sphericity__229 = new TH1D("VbbHcc_algoFirst_Sphericity__229","",25,0,1);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(1,122806);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(2,114689);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(3,61022);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(4,32330);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(5,16286);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(6,6662);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(7,2173);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(8,724);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(9,276);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(10,139);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(11,90);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(12,52);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(13,36);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(14,17);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(15,18);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(16,11);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(17,3);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(18,6);
   VbbHcc_algoFirst_Sphericity__229->SetBinContent(19,2);
   VbbHcc_algoFirst_Sphericity__229->SetEntries(357366);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity__229->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity__229->SetLineWidth(2);
   VbbHcc_algoFirst_Sphericity__229->SetMarkerStyle(20);
   VbbHcc_algoFirst_Sphericity__229->SetMarkerSize(1.2);
   VbbHcc_algoFirst_Sphericity__229->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity__229->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__229->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity__229->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__229->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__229->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__229->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__229->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity__229->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__229->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fx1229[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fy1229[25] = { 118879.9, 118979.8, 56308.63, 31482.42, 16843.59, 5765.863, 1935.361, 324.8383, 333.3049, 352.1082, 62.5381, 16.63547, 15.49069, 8.065139, 2.657821, 2.082917, 2.4945,
   1.13783, 0.7843199, 0.08957049, 0.1526725, 0, 0, 0, 0 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fex1229[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fey1229[25] = { 5463.963, 15701.7, 3432.005, 2753.097, 2010.01, 1255.974, 518.0886, 55.41102, 219.9728, 285.4315, 22.26893, 3.796434, 6.412248, 2.720507, 0.3299102, 0.3295092, 1.028015,
   0.2229582, 0.1953881, 0.06384864, 0.08014985, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algoFirst_Sphericity_fx1229,Graph_from_VbbHcc_algoFirst_Sphericity_fy1229,Graph_from_VbbHcc_algoFirst_Sphericity_fex1229,Graph_from_VbbHcc_algoFirst_Sphericity_fey1229);
   gre->SetName("Graph_from_VbbHcc_algoFirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->SetMaximum(148149.6);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_Sphericity1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algoFirst_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_algoFirst_16->cd();
  
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
   data_mc_ratio__230->SetBinContent(1,1.033025);
   data_mc_ratio__230->SetBinContent(2,0.9639371);
   data_mc_ratio__230->SetBinContent(3,1.083706);
   data_mc_ratio__230->SetBinContent(4,1.026922);
   data_mc_ratio__230->SetBinContent(5,0.9668961);
   data_mc_ratio__230->SetBinContent(6,1.155421);
   data_mc_ratio__230->SetBinContent(7,1.122788);
   data_mc_ratio__230->SetBinContent(8,2.228801);
   data_mc_ratio__230->SetBinContent(9,0.8280706);
   data_mc_ratio__230->SetBinContent(10,0.394765);
   data_mc_ratio__230->SetBinContent(11,1.439123);
   data_mc_ratio__230->SetBinContent(12,3.125851);
   data_mc_ratio__230->SetBinContent(13,2.323976);
   data_mc_ratio__230->SetBinContent(14,2.107837);
   data_mc_ratio__230->SetBinContent(15,6.772466);
   data_mc_ratio__230->SetBinContent(16,5.281056);
   data_mc_ratio__230->SetBinContent(17,1.202646);
   data_mc_ratio__230->SetBinContent(18,5.273196);
   data_mc_ratio__230->SetBinContent(19,2.54998);
   data_mc_ratio__230->SetBinError(1,0.002947822);
   data_mc_ratio__230->SetBinError(2,0.002846347);
   data_mc_ratio__230->SetBinError(3,0.004387006);
   data_mc_ratio__230->SetBinError(4,0.005711297);
   data_mc_ratio__230->SetBinError(5,0.007576569);
   data_mc_ratio__230->SetBinError(6,0.01415592);
   data_mc_ratio__230->SetBinError(7,0.02408617);
   data_mc_ratio__230->SetBinError(8,0.08283273);
   data_mc_ratio__230->SetBinError(9,0.04984399);
   data_mc_ratio__230->SetBinError(10,0.03348353);
   data_mc_ratio__230->SetBinError(11,0.1516969);
   data_mc_ratio__230->SetBinError(12,0.4334775);
   data_mc_ratio__230->SetBinError(13,0.3873294);
   data_mc_ratio__230->SetBinError(14,0.5112256);
   data_mc_ratio__230->SetBinError(15,1.596286);
   data_mc_ratio__230->SetBinError(16,1.592298);
   data_mc_ratio__230->SetBinError(17,0.6943478);
   data_mc_ratio__230->SetBinError(18,2.152773);
   data_mc_ratio__230->SetBinError(19,1.803108);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(82.92866);
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
   Double_t Graph_from_mc_statistical_error_fey1230[25] = { 0.04596202, 0.1319695, 0.06094989, 0.08744872, 0.1193338, 0.2178294, 0.2676961, 0.1705803, 0.6599748, 0.8106356, 0.3560858, 0.2282132, 0.4139421, 0.3373168, 0.1241281, 0.158196, 0.4121124,
   0.1959504, 0.2491179, 0.7128312, 0.524979, 0, 0, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.02723723);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(1.972763);
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
   Sphericity_algoFirst_16->cd();
   Sphericity_algoFirst_16->Modified();
   Sphericity_algoFirst_16->cd();
   Sphericity_algoFirst_16->SetSelected(Sphericity_algoFirst_16);
}
