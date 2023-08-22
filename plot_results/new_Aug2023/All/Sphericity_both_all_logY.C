void Sphericity_both_all_logY()
{
//=========Macro generated from canvas: Sphericity_both_all/Sphericity_both_all
//=========  (Tue Aug 22 09:18:47 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_all = new TCanvas("Sphericity_both_all", "Sphericity_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_all->SetHighLightColor(2);
   Sphericity_both_all->Range(0,0,1,1);
   Sphericity_both_all->SetFillColor(0);
   Sphericity_both_all->SetFillStyle(4000);
   Sphericity_both_all->SetBorderMode(0);
   Sphericity_both_all->SetBorderSize(2);
   Sphericity_both_all->SetFrameFillStyle(1000);
   Sphericity_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1.372035,1.052419,13.11666);
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
   st->SetMaximum(1.39598e+11);
   
   TH1F *st_stack_252 = new TH1F("st_stack_252","",25,0,1);
   st_stack_252->SetMinimum(0.04389893);
   st_stack_252->SetMaximum(4.653572e+11);
   st_stack_252->SetDirectory(0);
   st_stack_252->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_252->SetLineColor(ci);
   st_stack_252->GetXaxis()->SetRange(1,25);
   st_stack_252->GetXaxis()->SetLabelFont(42);
   st_stack_252->GetXaxis()->SetLabelSize(0.035);
   st_stack_252->GetXaxis()->SetTitleSize(0.035);
   st_stack_252->GetXaxis()->SetTitleFont(42);
   st_stack_252->GetYaxis()->SetTitle("Events/0.04");
   st_stack_252->GetYaxis()->SetLabelFont(42);
   st_stack_252->GetYaxis()->SetLabelSize(0.05);
   st_stack_252->GetYaxis()->SetTitleSize(0.057);
   st_stack_252->GetYaxis()->SetTitleOffset(1.2);
   st_stack_252->GetYaxis()->SetTitleFont(42);
   st_stack_252->GetZaxis()->SetLabelFont(42);
   st_stack_252->GetZaxis()->SetLabelSize(0.035);
   st_stack_252->GetZaxis()->SetTitleSize(0.035);
   st_stack_252->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_252);
   
   
   TH1D *VbbHcc_both_Sphericity_all_stack_1 = new TH1D("VbbHcc_both_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(1,77910.89);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(2,91043.22);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(3,68769.5);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(4,57196.34);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(5,42795.06);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(6,35524.31);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(7,30164.93);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(8,15981.35);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(9,55763.63);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(10,17175.76);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(11,13546.17);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(12,12440.98);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(13,8926.485);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(14,6050.257);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(15,6815.634);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(16,4316.605);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(17,3691.373);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(18,2460.586);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(19,1251.827);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(20,998.2941);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(21,821.0052);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(22,114.6049);
   VbbHcc_both_Sphericity_all_stack_1->SetBinContent(23,261.4261);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(1,3525.948);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(2,4248.437);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(3,3972.24);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(4,3666.05);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(5,3474.36);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(6,2776.761);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(7,2659.37);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(8,1378.872);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(9,26472.4);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(10,2219.278);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(11,1933.52);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(12,2636.678);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(13,1326.527);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(14,844.5372);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(15,1403.961);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(16,713.2327);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(17,764.3385);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(18,626.3124);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(19,422.0116);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(20,571.5082);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(21,690.0222);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(22,47.39457);
   VbbHcc_both_Sphericity_all_stack_1->SetBinError(23,237.597);
   VbbHcc_both_Sphericity_all_stack_1->SetEntries(28873);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_2 = new TH1D("VbbHcc_both_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(1,484.6041);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(2,482.4455);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(3,370.6803);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(4,273.6264);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(5,212.838);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(6,168.7515);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(7,144.6905);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(8,128.4734);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(9,105.4454);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(10,90.632);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(11,69.23454);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(12,67.56096);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(13,57.28843);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(14,43.89153);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(15,38.74731);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(16,28.61356);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(17,21.04979);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(18,17.71974);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(19,7.875257);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(20,3.959412);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(21,1.354461);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(22,0.2848283);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(23,0.1195397);
   VbbHcc_both_Sphericity_all_stack_2->SetBinContent(25,0.06807733);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(1,9.492266);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(2,9.1142);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(3,8.083362);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(4,7.034721);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(5,6.150281);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(6,5.539924);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(7,5.227439);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(8,4.954578);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(9,4.452864);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(10,3.981098);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(11,3.582311);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(12,3.59604);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(13,3.317988);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(14,2.835655);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(15,2.768689);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(16,2.307001);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(17,2.050498);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(18,1.782503);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(19,1.131477);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(20,0.8614327);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(21,0.5406049);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(22,0.2923629);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(23,0.07271188);
   VbbHcc_both_Sphericity_all_stack_2->SetBinError(25,0.06807733);
   VbbHcc_both_Sphericity_all_stack_2->SetEntries(36867);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_3 = new TH1D("VbbHcc_both_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(1,9505.294);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(2,10535.27);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(3,7889.077);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(4,5965.833);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(5,4651.642);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(6,3713.746);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(7,3090.646);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(8,2558.333);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(9,2171.821);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(10,1829.304);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(11,1575.182);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(12,1342.508);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(13,1151.377);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(14,951.6485);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(15,793.644);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(16,646.0709);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(17,493.8019);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(18,348.2521);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(19,208.7513);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(20,100.7153);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(21,35.68175);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(22,14.22141);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(23,3.192263);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(24,0.3327222);
   VbbHcc_both_Sphericity_all_stack_3->SetBinContent(25,0.06405613);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(1,26.89029);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(2,27.51583);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(3,23.9302);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(4,20.59183);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(5,18.66857);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(6,16.36771);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(7,14.82292);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(8,13.64683);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(9,12.48823);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(10,11.39329);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(11,11.04973);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(12,9.780461);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(13,9.343992);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(14,8.156891);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(15,7.427816);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(16,7.559097);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(17,5.884082);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(18,5.150515);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(19,3.812911);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(20,2.652436);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(21,1.55812);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(22,0.9685976);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(23,0.4573879);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(24,0.1292019);
   VbbHcc_both_Sphericity_all_stack_3->SetBinError(25,0.06405613);
   VbbHcc_both_Sphericity_all_stack_3->SetEntries(982703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_4 = new TH1D("VbbHcc_both_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(1,1258.639);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(2,1315.9);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(3,965.9372);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(4,772.8123);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(5,590.9572);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(6,460.1747);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(7,389.0602);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(8,317.5412);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(9,275.3925);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(10,225.2108);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(11,196.7822);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(12,151.5112);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(13,144.9566);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(14,126.9367);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(15,94.73958);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(16,76.26328);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(17,64.68478);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(18,36.98316);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(19,20.75534);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(20,12.9771);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(21,4.587286);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(22,0.9339458);
   VbbHcc_both_Sphericity_all_stack_4->SetBinContent(23,0.0810002);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(1,23.69035);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(2,26.12064);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(3,25.20263);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(4,20.24502);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(5,19.7387);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(6,13.23675);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(7,13.60877);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(8,11.41401);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(9,12.46818);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(10,10.42143);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(11,9.403165);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(12,6.988534);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(13,7.793488);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(14,8.084322);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(15,7.769785);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(16,4.398686);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(17,5.481632);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(18,3.44835);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(19,2.598589);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(20,2.491235);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(21,1.248213);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(22,0.3970181);
   VbbHcc_both_Sphericity_all_stack_4->SetBinError(23,0.0810002);
   VbbHcc_both_Sphericity_all_stack_4->SetEntries(51772);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_5 = new TH1D("VbbHcc_both_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(1,139.5417);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(2,125.8611);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(3,106.8217);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(4,64.02604);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(5,59.29193);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(6,52.57408);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(7,39.98424);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(8,41.52572);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(9,27.94401);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(10,23.60178);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(11,23.20946);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(12,13.7481);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(13,10.3026);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(14,8.115647);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(15,11.49061);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(16,7.088121);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(17,6.946211);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(18,5.201265);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(19,1.849169);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(20,0.1224036);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(21,0.0007523573);
   VbbHcc_both_Sphericity_all_stack_5->SetBinContent(22,0.1857799);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(1,10.63101);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(2,11.97564);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(3,8.330942);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(4,4.985695);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(5,5.829286);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(6,5.932485);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(7,5.514458);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(8,6.901092);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(9,6.386574);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(10,5.530498);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(11,3.524256);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(12,2.602589);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(13,1.253588);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(14,1.085266);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(15,2.859243);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(16,1.535815);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(17,2.258011);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(18,2.711776);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(19,0.6350667);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(20,0.1223852);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(21,0.0004343913);
   VbbHcc_both_Sphericity_all_stack_5->SetBinError(22,0.1857799);
   VbbHcc_both_Sphericity_all_stack_5->SetEntries(7913);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_6 = new TH1D("VbbHcc_both_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(1,0.1152503);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(2,1.038017);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(4,0.7003767);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(5,1.037171);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(6,0.1234178);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(7,0.3599561);
   VbbHcc_both_Sphericity_all_stack_6->SetBinContent(12,0.3049337);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(1,0.1152503);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(2,0.5338092);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(4,0.4213254);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(5,0.6992355);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(6,0.1234178);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(7,0.266398);
   VbbHcc_both_Sphericity_all_stack_6->SetBinError(12,0.3049337);
   VbbHcc_both_Sphericity_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_7 = new TH1D("VbbHcc_both_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(1,0.4629638);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(2,1.447165);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(3,0.6140486);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(4,0.840485);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(5,1.195332);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(6,0.364918);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(7,0.5432214);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(8,0.1957118);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(9,0.09049555);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(10,0.3743229);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(11,0.09206678);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(12,0.3905159);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(14,0.1719348);
   VbbHcc_both_Sphericity_all_stack_7->SetBinContent(15,0.07699256);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(1,0.2076475);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(2,0.5540384);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(3,0.2326602);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(4,0.4295439);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(5,0.7073577);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(6,0.1834333);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(7,0.2853184);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(8,0.1383897);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(9,0.09049555);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(10,0.1874663);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(11,0.09206678);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(12,0.3167157);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(14,0.1221175);
   VbbHcc_both_Sphericity_all_stack_7->SetBinError(15,0.07699256);
   VbbHcc_both_Sphericity_all_stack_7->SetEntries(56);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_8 = new TH1D("VbbHcc_both_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(1,23.35566);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(2,24.58772);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(3,16.04208);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(4,15.41177);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(5,12.75766);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(6,7.727319);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(7,9.062122);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(8,8.671639);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(9,5.224699);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(10,5.189742);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(11,3.638685);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(12,3.677059);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(13,2.1693);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(14,2.071128);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(15,0.5378393);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(16,1.751534);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(17,0.7089346);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(19,0.3700786);
   VbbHcc_both_Sphericity_all_stack_8->SetBinContent(20,0.5774915);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(1,2.506355);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(2,2.560247);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(3,2.092296);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(4,2.024445);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(5,1.847918);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(6,1.444827);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(7,1.590415);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(8,1.505175);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(9,1.169114);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(10,1.24192);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(11,1.000937);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(12,0.9486892);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(13,0.7436863);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(14,0.7141636);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(15,0.3805836);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(16,0.6875987);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(17,0.4216186);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(19,0.3700786);
   VbbHcc_both_Sphericity_all_stack_8->SetBinError(20,0.4243569);
   VbbHcc_both_Sphericity_all_stack_8->SetEntries(574);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_9 = new TH1D("VbbHcc_both_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(1,21.19864);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(2,22.43086);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(3,16.55104);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(4,13.76038);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(5,11.38892);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(6,9.463256);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(7,7.863681);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(8,6.597938);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(9,5.804969);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(10,4.685946);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(11,3.99134);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(12,3.260535);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(13,2.796035);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(14,2.319088);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(15,1.888604);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(16,1.53183);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(17,1.097976);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(18,0.7844405);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(19,0.3858996);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(20,0.1674301);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(21,0.0691881);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(22,0.01216146);
   VbbHcc_both_Sphericity_all_stack_9->SetBinContent(23,0.001087504);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(1,0.2304474);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(2,0.2306935);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(3,0.235224);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(4,0.1852448);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(5,0.1678592);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(6,0.1484439);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(7,0.1391846);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(8,0.1309006);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(9,0.1194797);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(10,0.103394);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(11,0.09555609);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(12,0.08563686);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(13,0.08133128);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(14,0.07327248);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(15,0.06520534);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(16,0.07545195);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(17,0.05211163);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(18,0.04306895);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(19,0.02836768);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(20,0.01807378);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(21,0.01218065);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(22,0.004457617);
   VbbHcc_both_Sphericity_all_stack_9->SetBinError(23,0.001087504);
   VbbHcc_both_Sphericity_all_stack_9->SetEntries(80589);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_10 = new TH1D("VbbHcc_both_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(1,7.912279);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(2,8.569053);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(3,6.329133);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(4,4.938577);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(5,4.304136);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(6,3.429318);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(7,2.86408);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(8,2.526417);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(9,2.140528);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(10,1.860715);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(11,1.599783);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(12,1.370609);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(13,1.160153);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(14,1.015289);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(15,0.8215305);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(16,0.7012197);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(17,0.4879958);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(18,0.3578322);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(19,0.2166151);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(20,0.1055072);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(21,0.02017297);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(22,0.007554876);
   VbbHcc_both_Sphericity_all_stack_10->SetBinContent(23,0.001149165);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(1,0.05982963);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(2,0.06181857);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(3,0.05325786);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(4,0.04706798);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(5,0.04398065);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(6,0.0392792);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(7,0.03585535);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(8,0.03365113);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(9,0.03107683);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(10,0.02892598);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(11,0.02683594);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(12,0.02482054);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(13,0.02290557);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(14,0.02142315);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(15,0.01920957);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(16,0.01767847);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(17,0.01486232);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(18,0.0126169);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(19,0.009732095);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(20,0.00678114);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(21,0.002932232);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(22,0.001832737);
   VbbHcc_both_Sphericity_all_stack_10->SetBinError(23,0.0006797098);
   VbbHcc_both_Sphericity_all_stack_10->SetEntries(125673);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_11 = new TH1D("VbbHcc_both_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(1,0.07252234);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(2,0.06879744);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(3,0.04766755);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(4,0.04469731);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(5,0.02838692);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(6,0.03368649);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(7,0.02318398);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(8,0.01055239);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(9,0.01608311);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(10,0.02028827);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(11,0.0164373);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(12,0.007161773);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(13,0.005104648);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(14,0.007240391);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(15,0.001697729);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(16,0.001589558);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(17,0.004895125);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(18,0.002241271);
   VbbHcc_both_Sphericity_all_stack_11->SetBinContent(19,0.002276254);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(1,0.0121486);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(2,0.01184473);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(3,0.009928028);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(4,0.009848632);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(5,0.00754968);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(6,0.008493044);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(7,0.00685094);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(8,0.004477785);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(9,0.005593417);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(10,0.006640968);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(11,0.005910346);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(12,0.003620942);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(13,0.002994557);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(14,0.003874414);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(15,0.001697729);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(16,0.001589558);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(17,0.003671149);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(18,0.002241271);
   VbbHcc_both_Sphericity_all_stack_11->SetBinError(19,0.002276254);
   VbbHcc_both_Sphericity_all_stack_11->SetEntries(215);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_all_stack_12 = new TH1D("VbbHcc_both_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(1,0.03586089);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(2,0.03072018);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(3,0.02087002);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(4,0.01937796);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(5,0.0190611);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(6,0.01232848);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(7,0.01125232);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(8,0.009953033);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(9,0.009583326);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(10,0.007058891);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(11,0.006586672);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(12,0.005136329);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(13,0.003371448);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(14,0.004410223);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(15,0.003046235);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(16,0.002080797);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(17,0.00173671);
   VbbHcc_both_Sphericity_all_stack_12->SetBinContent(22,0.0004012604);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(1,0.003258878);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(2,0.002917824);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(3,0.002364201);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(4,0.002359989);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(5,0.002320572);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(6,0.001857047);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(7,0.001795495);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(8,0.001653162);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(9,0.001632833);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(10,0.001423944);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(11,0.001382707);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(12,0.001151913);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(13,0.0009357766);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(14,0.001065833);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(15,0.001079784);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(16,0.0007490209);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(17,0.0007126521);
   VbbHcc_both_Sphericity_all_stack_12->SetBinError(22,0.0004012604);
   VbbHcc_both_Sphericity_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity_all__692 = new TH1D("VbbHcc_both_Sphericity_all__692","",25,0,1);
   VbbHcc_both_Sphericity_all__692->SetBinContent(1,84079);
   VbbHcc_both_Sphericity_all__692->SetBinContent(2,85651);
   VbbHcc_both_Sphericity_all__692->SetBinContent(3,63840);
   VbbHcc_both_Sphericity_all__692->SetBinContent(4,48224);
   VbbHcc_both_Sphericity_all__692->SetBinContent(5,37910);
   VbbHcc_both_Sphericity_all__692->SetBinContent(6,30428);
   VbbHcc_both_Sphericity_all__692->SetBinContent(7,25063);
   VbbHcc_both_Sphericity_all__692->SetBinContent(8,20608);
   VbbHcc_both_Sphericity_all__692->SetBinContent(9,17082);
   VbbHcc_both_Sphericity_all__692->SetBinContent(10,14347);
   VbbHcc_both_Sphericity_all__692->SetBinContent(11,12373);
   VbbHcc_both_Sphericity_all__692->SetBinContent(12,10508);
   VbbHcc_both_Sphericity_all__692->SetBinContent(13,9050);
   VbbHcc_both_Sphericity_all__692->SetBinContent(14,7247);
   VbbHcc_both_Sphericity_all__692->SetBinContent(15,6090);
   VbbHcc_both_Sphericity_all__692->SetBinContent(16,4640);
   VbbHcc_both_Sphericity_all__692->SetBinContent(17,3701);
   VbbHcc_both_Sphericity_all__692->SetBinContent(18,2667);
   VbbHcc_both_Sphericity_all__692->SetBinContent(19,1483);
   VbbHcc_both_Sphericity_all__692->SetBinContent(20,610);
   VbbHcc_both_Sphericity_all__692->SetBinContent(21,241);
   VbbHcc_both_Sphericity_all__692->SetBinContent(22,76);
   VbbHcc_both_Sphericity_all__692->SetBinContent(23,26);
   VbbHcc_both_Sphericity_all__692->SetBinContent(24,4);
   VbbHcc_both_Sphericity_all__692->SetBinContent(25,1);
   VbbHcc_both_Sphericity_all__692->SetEntries(485973);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_all__692->SetLineColor(ci);
   VbbHcc_both_Sphericity_all__692->SetLineWidth(2);
   VbbHcc_both_Sphericity_all__692->SetMarkerStyle(20);
   VbbHcc_both_Sphericity_all__692->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_all__692->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__692->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_all__692->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_all__692->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_all__692->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fx1503[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fy1503[25] = {
   89352.12,
   103560.9,
   78141.62,
   64308.36,
   48340.52,
   39940.71,
   33850.04,
   19045.24,
   58357.52,
   19356.65,
   15419.92,
   14025.33,
   10296.54,
   7186.438,
   7757.585,
   5078.629,
   4280.157,
   2869.887,
   1492.033,
   1116.919,
   862.7188,
   130.251,
   264.8212,
   0.3327222,
   0.1321335};
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fex1503[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_all_fey1503[25] = {
   3526.16,
   4248.634,
   3972.41,
   3666.174,
   3474.477,
   2776.854,
   2659.457,
   1379.014,
   26472.41,
   2219.343,
   1933.581,
   2636.709,
   1326.587,
   844.621,
   1404.008,
   713.292,
   764.387,
   626.3515,
   422.039,
   571.5206,
   690.0253,
   47.40739,
   237.5975,
   0.1292019,
   0.09347572};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_all_fx1503,Graph_from_VbbHcc_both_Sphericity_all_fy1503,Graph_from_VbbHcc_both_Sphericity_all_fex1503,Graph_from_VbbHcc_both_Sphericity_all_fey1503);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity_all1503 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity_all1503","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetMinimum(0.03479196);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetMaximum(118590.4);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity_all1503->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity_all1503);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity_all","MC unc. (stat.)","fl");

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
   Sphericity_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__693 = new TH1D("data_mc_ratio__693","",25,0,1);
   data_mc_ratio__693->SetBinContent(1,0.9409849);
   data_mc_ratio__693->SetBinContent(2,0.8270596);
   data_mc_ratio__693->SetBinContent(3,0.8169782);
   data_mc_ratio__693->SetBinContent(4,0.749887);
   data_mc_ratio__693->SetBinContent(5,0.7842282);
   data_mc_ratio__693->SetBinContent(6,0.7618292);
   data_mc_ratio__693->SetBinContent(7,0.7404128);
   data_mc_ratio__693->SetBinContent(8,1.082055);
   data_mc_ratio__693->SetBinContent(9,0.2927129);
   data_mc_ratio__693->SetBinContent(10,0.7411924);
   data_mc_ratio__693->SetBinContent(11,0.8024035);
   data_mc_ratio__693->SetBinContent(12,0.749216);
   data_mc_ratio__693->SetBinContent(13,0.8789357);
   data_mc_ratio__693->SetBinContent(14,1.008427);
   data_mc_ratio__693->SetBinContent(15,0.7850381);
   data_mc_ratio__693->SetBinContent(16,0.9136323);
   data_mc_ratio__693->SetBinContent(17,0.8646878);
   data_mc_ratio__693->SetBinContent(18,0.929305);
   data_mc_ratio__693->SetBinContent(19,0.9939462);
   data_mc_ratio__693->SetBinContent(20,0.5461454);
   data_mc_ratio__693->SetBinContent(21,0.2793494);
   data_mc_ratio__693->SetBinContent(22,0.5834889);
   data_mc_ratio__693->SetBinContent(23,0.09817946);
   data_mc_ratio__693->SetBinContent(24,12.02204);
   data_mc_ratio__693->SetBinContent(25,7.568106);
   data_mc_ratio__693->SetBinError(1,0.003245181);
   data_mc_ratio__693->SetBinError(2,0.00282599);
   data_mc_ratio__693->SetBinError(3,0.003233434);
   data_mc_ratio__693->SetBinError(4,0.003414792);
   data_mc_ratio__693->SetBinError(5,0.004027778);
   data_mc_ratio__693->SetBinError(6,0.004367379);
   data_mc_ratio__693->SetBinError(7,0.004676893);
   data_mc_ratio__693->SetBinError(8,0.007537573);
   data_mc_ratio__693->SetBinError(9,0.002239611);
   data_mc_ratio__693->SetBinError(10,0.006188001);
   data_mc_ratio__693->SetBinError(11,0.007213654);
   data_mc_ratio__693->SetBinError(12,0.007308815);
   data_mc_ratio__693->SetBinError(13,0.009239167);
   data_mc_ratio__693->SetBinError(14,0.01184583);
   data_mc_ratio__693->SetBinError(15,0.01005963);
   data_mc_ratio__693->SetBinError(16,0.01341258);
   data_mc_ratio__693->SetBinError(17,0.01421346);
   data_mc_ratio__693->SetBinError(18,0.01799479);
   data_mc_ratio__693->SetBinError(19,0.02581025);
   data_mc_ratio__693->SetBinError(20,0.02211278);
   data_mc_ratio__693->SetBinError(21,0.01799448);
   data_mc_ratio__693->SetBinError(22,0.06693076);
   data_mc_ratio__693->SetBinError(23,0.01925458);
   data_mc_ratio__693->SetBinError(24,6.011021);
   data_mc_ratio__693->SetBinError(25,7.568106);
   data_mc_ratio__693->SetMinimum(0.4);
   data_mc_ratio__693->SetMaximum(1.6);
   data_mc_ratio__693->SetEntries(9.362067);
   data_mc_ratio__693->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__693->SetLineColor(ci);
   data_mc_ratio__693->SetLineWidth(2);
   data_mc_ratio__693->SetMarkerStyle(20);
   data_mc_ratio__693->SetMarkerSize(1.2);
   data_mc_ratio__693->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__693->GetXaxis()->SetRange(1,25);
   data_mc_ratio__693->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__693->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__693->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__693->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__693->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__693->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__693->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__693->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__693->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__693->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__693->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__693->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__693->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__693->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__693->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__693->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__693->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1504[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1504[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1504[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1504[25] = {
   0.03946364,
   0.04102548,
   0.05083603,
   0.0570093,
   0.07187504,
   0.06952439,
   0.07856587,
   0.07240728,
   0.4536246,
   0.1146553,
   0.125395,
   0.1879963,
   0.1288381,
   0.1175299,
   0.1809852,
   0.1404497,
   0.1785885,
   0.2182495,
   0.2828618,
   0.511694,
   0.7998264,
   0.3639696,
   0.8971998,
   0.3883177,
   0.7074342};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1504,Graph_from_mc_statistical_error_fy1504,Graph_from_mc_statistical_error_fex1504,Graph_from_mc_statistical_error_fey1504);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1504 = new TH1F("Graph_Graph_from_mc_statistical_error1504","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1504->SetMinimum(0.09252021);
   Graph_Graph_from_mc_statistical_error1504->SetMaximum(2.07664);
   Graph_Graph_from_mc_statistical_error1504->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1504->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1504->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1504->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1504->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1504);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->Modified();
   Sphericity_both_all->cd();
   Sphericity_both_all->SetSelected(Sphericity_both_all);
}
