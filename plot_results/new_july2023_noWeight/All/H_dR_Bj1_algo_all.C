void H_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Thu Aug  3 10:21:25 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   H_dR_Bj1_algo_all->SetHighLightColor(2);
   H_dR_Bj1_algo_all->Range(0,0,1,1);
   H_dR_Bj1_algo_all->SetFillColor(0);
   H_dR_Bj1_algo_all->SetFillStyle(4000);
   H_dR_Bj1_algo_all->SetBorderMode(0);
   H_dR_Bj1_algo_all->SetBorderSize(2);
   H_dR_Bj1_algo_all->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1615.307,6.314516,1613992);
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
   st->SetMaximum(1383268);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",30,0,6);
   st_stack_144->SetMinimum(0.3);
   st_stack_144->SetMaximum(1452431);
   st_stack_144->SetDirectory(0);
   st_stack_144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_144->SetLineColor(ci);
   st_stack_144->GetXaxis()->SetRange(1,30);
   st_stack_144->GetXaxis()->SetLabelFont(42);
   st_stack_144->GetXaxis()->SetLabelSize(0.035);
   st_stack_144->GetXaxis()->SetTitleSize(0.035);
   st_stack_144->GetXaxis()->SetTitleFont(42);
   st_stack_144->GetYaxis()->SetTitle("Events/0.2");
   st_stack_144->GetYaxis()->SetLabelFont(42);
   st_stack_144->GetYaxis()->SetLabelSize(0.05);
   st_stack_144->GetYaxis()->SetTitleSize(0.057);
   st_stack_144->GetYaxis()->SetTitleOffset(1.2);
   st_stack_144->GetYaxis()->SetTitleFont(42);
   st_stack_144->GetZaxis()->SetLabelFont(42);
   st_stack_144->GetZaxis()->SetLabelSize(0.035);
   st_stack_144->GetZaxis()->SetTitleSize(0.035);
   st_stack_144->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_144);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(1,22.20356);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,161442.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,337979.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,409893.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,487956.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,542574.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,496888.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,454206.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,445934.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,389657);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,366126.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,334707.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,335623.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,330356.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,266961.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,267123.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,227901.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,190579.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,154800.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,144461.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,105601.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,76815.17);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(23,67551.89);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(24,50674.38);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(25,36396.25);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(26,30417.86);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(27,17923.28);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(28,13321.87);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(29,6930.824);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(30,5774.994);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(31,4681.953);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(1,22.20356);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,6915.143);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,9370.504);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,18203.44);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,12064.9);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,23655.98);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,18819.69);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,11296.45);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,22788.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,10152.75);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,21872.06);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,9192.764);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,26155.46);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,21945.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,7637.904);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,16846.16);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,7982.278);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,7136.153);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,5629.567);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,15926.32);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,4752.701);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,3694.358);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(23,3646.659);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(24,4077.308);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(25,3002.182);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(26,2596.097);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(27,1524.936);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(28,1445.686);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(29,1087.445);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(30,2114.839);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(31,1592.47);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(367140);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(1,1.460956);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,988.9953);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,2801.162);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,3637.097);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,4102.154);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,4025.523);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,3823.141);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,3505.64);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,3159.723);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,2862.224);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,2578.019);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,2328.971);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,2144.45);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,1991.579);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,1828.812);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,1726.074);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,1484.138);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,1334.965);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,1130.045);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,937.6956);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,764.0555);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,593.4669);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,468.2027);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(24,355.9632);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(25,261.2081);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(26,179.9743);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(27,124.4042);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(28,73.97296);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(29,42.15777);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(30,27.30527);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(31,37.8237);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(1,0.5522793);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,12.80897);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,20.96433);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,23.59485);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,24.72693);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,24.08612);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,23.38187);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,22.37166);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,21.16871);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,20.08036);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,19.08109);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,17.89419);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,17.20958);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,16.4525);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,15.83797);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,15.50935);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,14.18716);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,13.61808);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,12.513);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,11.41474);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,10.26811);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,9.012495);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,7.984858);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(24,6.939524);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(25,5.904576);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(26,4.90455);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(27,4.059407);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(28,2.98843);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(29,2.219234);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(30,1.875865);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(31,2.06271);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(669400);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(1,40.69457);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(2,29182.47);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(3,91318.51);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(4,101962.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(5,89434.33);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(6,71961.48);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(7,58334.32);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(8,48318.81);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(9,40733.51);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(10,34996.11);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(11,30239.06);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(12,26481.96);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(13,23829.98);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(14,21916.63);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(15,20623.23);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(16,19609.17);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(17,18099.14);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(18,16686.39);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(19,14959.71);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(20,13178.08);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(21,11449.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(22,9622.532);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(23,7728.92);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(24,5987.812);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(25,4397.047);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(26,2985.506);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(27,1825.578);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(28,996.0161);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(29,483.9278);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(30,242.8053);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(31,314.3015);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(1,1.457674);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(2,42.81836);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(3,76.22968);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(4,80.482);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(5,75.04986);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(6,66.95412);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(7,59.99373);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(8,54.43229);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(9,49.87759);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(10,46.17621);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(11,42.88976);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(12,40.11383);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(13,38.04164);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(14,36.50227);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(15,35.44107);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(16,34.58959);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(17,33.27906);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(18,31.99616);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(19,30.31722);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(20,28.50039);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(21,26.60255);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(22,24.42725);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(23,21.91101);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(24,19.28955);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(25,16.50979);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(26,13.59238);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(27,10.60133);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(28,7.78008);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(29,5.374645);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(30,3.774506);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(31,4.293295);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetEntries(1.366985e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(1,0.705584);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(2,869.4099);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(3,2376.395);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(4,2480.229);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(5,2929.3);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(6,2760.004);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(7,2565.802);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(8,2383.556);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(9,2188.773);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(10,2004.088);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(11,1866.649);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(12,1671.682);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(13,1558.719);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(14,1459.003);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(15,1279.524);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(16,1199.663);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(17,1063.627);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(18,946.0378);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(19,784.6785);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(20,657.8676);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(21,524.1037);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(22,404.8375);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(23,316.2161);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(24,247.1866);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(25,192.9786);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(26,141.0103);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(27,82.82449);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(28,54.57752);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(29,32.3414);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(30,13.46569);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(31,31.03506);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(1,0.3402829);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(2,20.49048);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(3,38.95265);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(4,46.18444);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(5,52.15014);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(6,47.71124);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(7,44.2241);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(8,41.62742);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(9,38.59018);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(10,35.83113);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(11,34.08759);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(12,30.3329);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(13,29.70662);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(14,27.41142);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(15,23.80417);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(16,24.76663);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(17,23.3726);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(18,24.07844);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(19,20.82074);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(20,22.00663);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(21,18.1954);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(22,16.7315);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(23,14.29325);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(24,12.58724);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(25,10.28193);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(26,8.374291);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(27,5.519921);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(28,3.383686);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(29,4.488239);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(30,1.731246);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(31,7.051744);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetEntries(203141);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(1,0.1034366);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(2,392.5237);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(3,870.692);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(4,834.9394);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(5,966.6833);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(6,1068.274);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(7,966.1443);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(8,940.7581);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(9,943.3648);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(10,775.3262);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(11,783.9574);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(12,653.205);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(13,647.1008);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(14,636.8894);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(15,627.6894);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(16,522.1805);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(17,509.3544);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(18,419.9646);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(19,395.3211);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(20,294.3386);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(21,240.2346);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(22,209.7676);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(23,177.4838);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(24,90.0854);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(25,84.59866);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(26,47.31027);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(27,29.54262);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(28,25.15428);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(29,17.04817);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(30,8.079576);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(31,22.60927);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(1,0.1023164);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(2,25.07136);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(3,40.19925);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(4,43.11085);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(5,40.67584);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(6,45.67293);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(7,42.51942);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(8,43.91615);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(9,41.50991);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(10,32.10662);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(11,32.13938);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(12,29.75053);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(13,27.75372);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(14,29.74242);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(15,30.96206);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(16,23.70231);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(17,28.69522);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(18,27.4703);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(19,27.23696);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(20,23.05782);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(21,19.52925);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(22,21.44541);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(23,19.73172);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(24,8.860991);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(25,12.24254);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(26,4.92679);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(27,3.283);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(28,3.542107);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(29,2.95962);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(30,2.444701);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(31,9.021121);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetEntries(104522);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(2,5.219303);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(3,12.61968);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(4,9.925194);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(5,12.05341);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(6,7.24491);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(7,9.219215);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(8,10.33304);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(9,7.369212);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(10,6.24769);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(11,5.524541);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(12,7.144673);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(13,7.694585);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(14,5.919949);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(15,5.746713);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(16,4.720693);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(17,3.767673);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(18,2.516517);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(19,3.415867);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(20,3.86791);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(21,2.247778);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(22,1.392628);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(23,0.5840445);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(24,1.622499);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(25,0.2687386);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(27,0.4496752);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(28,0.7207813);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinContent(31,0.1343693);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(2,1.226345);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(3,1.68599);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(4,1.490252);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(5,1.819719);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(6,1.456145);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(7,1.581058);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(8,1.56485);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(9,1.338957);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(10,1.25899);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(11,1.121487);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(12,1.316485);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(13,1.495938);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(14,1.026237);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(15,1.109296);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(16,1.111878);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(17,0.8230496);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(18,0.7907885);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(19,0.9275194);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(20,1.031811);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(21,0.7676172);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(22,0.5750898);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(23,0.3681413);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(24,0.7498455);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(25,0.1900269);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(27,0.3427432);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(28,0.4903599);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetBinError(31,0.1343693);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(2,9.83103);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(3,21.30193);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(4,17.29279);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(5,16.52704);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(6,12.14101);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(7,12.77162);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(8,10.04122);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(9,8.631385);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(10,8.316079);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(11,7.072948);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(12,8.482778);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(13,10.60232);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(14,5.554059);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(15,5.667055);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(16,6.337215);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(17,4.435794);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(18,3.957727);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(19,4.261163);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(20,2.968268);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(21,2.321848);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(22,1.978864);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(23,1.733068);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(24,2.09186);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(25,1.090586);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(26,0.2181173);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(27,0.8605991);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(28,0.6701599);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(31,0.1090586);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(2,1.397303);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(3,1.891712);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(4,1.694493);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(5,1.911289);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(6,1.606081);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(7,1.666833);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(8,1.503491);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(9,1.349676);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(10,1.312329);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(11,1.158265);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(12,1.33433);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(13,1.57376);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(14,0.9438344);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(15,1.059821);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(16,1.162476);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(17,0.8239263);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(18,0.8612266);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(19,0.9512441);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(20,0.9585966);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(21,0.7505361);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(22,0.6089791);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(23,0.5040209);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(24,0.7766938);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(25,0.3448737);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(26,0.1542322);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(27,0.398606);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(28,0.4776297);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(29,0.1090586);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(31,0.1090586);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetEntries(1319);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(2,28.55559);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(3,66.60308);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(4,50.55669);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(5,33.69962);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(6,27.27148);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(7,22.50936);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(8,19.5729);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(9,20.39133);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(10,17.7682);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(11,14.31299);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(12,16.05187);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(13,14.19844);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(14,14.04997);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(15,14.31708);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(16,11.79461);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(17,10.24292);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(18,9.704128);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(19,7.659868);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(20,5.230082);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(21,3.632162);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(22,4.066423);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(23,3.83301);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(24,3.895406);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(25,2.317523);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(26,1.055261);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(27,1.055261);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(28,1.009036);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinContent(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(2,2.727347);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(3,4.170454);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(4,3.608261);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(5,2.938748);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(6,2.653781);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(7,2.403259);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(8,2.233966);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(9,2.298523);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(10,2.142925);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(11,1.91594);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(12,2.04258);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(13,1.917913);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(14,1.915741);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(15,1.933942);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(16,1.74228);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(17,1.622605);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(18,1.576912);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(19,1.400592);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(20,1.171833);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(21,0.9729365);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(22,1.051352);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(23,0.991378);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(24,1.007821);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(25,0.7739912);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(26,0.5285997);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(27,0.5285997);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(28,0.5054914);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetBinError(29,0.2794144);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(1,0.005736969);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(2,17.16235);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(3,49.10998);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(4,44.5264);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(5,31.90612);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(6,20.85754);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(7,15.22268);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(8,12.07172);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(9,11.15482);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(10,9.959472);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(11,9.044933);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(12,8.288035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(13,7.31932);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(14,7.021336);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(15,6.477819);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(16,5.901681);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(17,5.134125);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(18,4.329636);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(19,3.858041);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(20,3.159185);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(21,3.076324);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(22,2.789818);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(23,2.563922);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(24,2.346332);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(25,1.928035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(26,1.404462);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(27,0.8736473);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(28,0.4760169);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(29,0.1431163);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(30,0.08160922);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(31,0.0669703);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(1,0.002876078);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(2,0.1772306);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(3,0.2988099);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(4,0.2817476);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(5,0.2371041);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(6,0.1911602);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(7,0.1632861);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(8,0.1457283);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(9,0.1405036);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(10,0.1329707);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(11,0.1271197);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(12,0.1218743);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(13,0.1145052);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(14,0.1122416);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(15,0.10767);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(16,0.1024402);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(17,0.09538258);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(18,0.0875669);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(19,0.08258959);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(20,0.07454428);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(21,0.0734817);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(22,0.0706262);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(23,0.06765084);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(24,0.06518858);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(25,0.0592611);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(26,0.05080565);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(27,0.04029144);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(28,0.02952051);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(29,0.01589388);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(30,0.01208224);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(31,0.01084114);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetEntries(169575);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(1,0.002737633);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(2,5.20424);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(3,18.30381);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(4,20.85666);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(5,17.79598);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(6,12.50277);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(7,9.821258);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(8,8.130769);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(9,7.178073);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(10,6.588113);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(11,5.857165);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(12,5.206978);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(13,4.562265);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(14,4.261125);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(15,4.038008);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(16,3.760139);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(17,3.495957);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(18,2.98402);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(19,2.554211);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(20,2.369421);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(21,1.958776);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(22,1.754823);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(23,1.420831);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(24,1.121061);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(25,0.7870694);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(26,0.5488954);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(27,0.365474);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(28,0.1806838);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(29,0.1067677);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(30,0.03148278);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(31,0.03969568);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(1,0.001144989);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(2,0.04992204);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(3,0.09362342);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(4,0.09993924);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(5,0.09231551);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(6,0.07737788);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(7,0.06857996);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(8,0.06239927);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(9,0.0586297);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(10,0.05616868);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(11,0.05296115);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(12,0.04993517);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(13,0.04674164);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(14,0.04517268);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(15,0.04397414);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(16,0.04243416);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(17,0.04091634);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(18,0.03780198);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(19,0.03497374);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(20,0.03368487);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(21,0.03062712);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(22,0.0289888);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(23,0.02608465);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(24,0.02317012);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(25,0.01941423);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(26,0.01621282);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(27,0.01322945);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(28,0.009301934);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(29,0.007150454);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(30,0.003882846);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(31,0.004359988);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetEntries(337056);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(2,0.1506208);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(3,0.330044);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(4,0.3844199);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(5,0.262885);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(6,0.2071988);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(7,0.1450495);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(8,0.09815651);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(9,0.09242977);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(10,0.09569152);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(11,0.1098524);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(12,0.084954);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(13,0.05130339);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(14,0.08320499);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(15,0.0616287);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(16,0.05021614);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(17,0.03708113);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(18,0.03429909);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(19,0.03017306);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(20,0.02841686);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(21,0.02724882);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(22,0.03881686);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(23,0.01884129);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(24,0.01861831);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(25,0.008630517);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(26,0.01980681);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(27,0.00589551);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(28,0.00659102);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(2,0.01824512);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(3,0.02765711);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(4,0.02941277);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(5,0.02453309);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(6,0.02170759);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(7,0.01834915);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(8,0.01504015);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(9,0.01430168);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(10,0.01496307);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(11,0.01614053);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(12,0.0137683);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(13,0.01054047);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(14,0.01400937);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(15,0.01209856);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(16,0.01075605);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(17,0.009414182);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(18,0.008826054);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(19,0.008065678);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(20,0.0079928);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(21,0.007774413);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(22,0.009136211);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(23,0.006512068);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(24,0.006362907);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(25,0.004467093);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(26,0.007089196);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(27,0.003531947);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(28,0.003893142);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_all_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(2,0.03947005);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(3,0.1266209);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(4,0.1388712);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(5,0.1133022);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(6,0.0916989);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(7,0.07345209);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(8,0.06133484);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(9,0.05939021);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(10,0.05238031);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(11,0.04236553);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(12,0.03795881);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(13,0.02913009);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(14,0.02801129);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(15,0.0319531);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(16,0.0206338);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(17,0.02480644);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(18,0.0206798);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(19,0.01817826);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(20,0.01764783);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(21,0.01439766);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(22,0.01058228);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(23,0.01159613);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(24,0.007654261);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(25,0.005567939);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(26,0.006005364);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(27,0.002293928);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(28,0.0008304226);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(30,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinContent(31,0.0005072625);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(2,0.003368938);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(3,0.006041472);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(4,0.006410422);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(5,0.005792544);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(6,0.005250246);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(7,0.004686994);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(8,0.004303388);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(9,0.004172547);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(10,0.003930363);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(11,0.003481647);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(12,0.003364125);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(13,0.002908617);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(14,0.00285967);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(15,0.003103366);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(16,0.002469377);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(17,0.002719418);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(18,0.002497018);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(19,0.002345249);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(20,0.002310477);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(21,0.002063974);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(22,0.001757901);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(23,0.001874719);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(24,0.001513028);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(25,0.00128084);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(26,0.001328812);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(27,0.0008317484);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(28,0.0004152113);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(30,0.0002935987);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetBinError(31,0.0003645467);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all__287 = new TH1D("VbbHcc_algo_H_dR_Bj1_all__287","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(1,124);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(2,86774);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(3,191248);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(4,202621);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(5,239431);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(6,242487);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(7,231511);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(8,217585);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(9,202336);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(10,188602);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(11,175023);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(12,163597);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(13,152729);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(14,142952);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(15,133342);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(16,123866);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(17,106813);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(18,92741);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(19,77883);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(20,65075);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(21,52469);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(22,41695);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(23,33244);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(24,25797);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(25,19799);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(26,14253);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(27,10031);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(28,6252);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(29,3622);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(30,2138);
   VbbHcc_algo_H_dR_Bj1_all__287->SetBinContent(31,2303);
   VbbHcc_algo_H_dR_Bj1_all__287->SetEntries(3248372);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all__287->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all__287->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1_all__287->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1_all__287->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all__287->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__287->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__287->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fx1287[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fy1287[30] = {
   65.17658,
   192942.4,
   435514.6,
   518951.7,
   585501,
   622470.5,
   562648,
   509415.2,
   493014.9,
   430343.8,
   401636.1,
   365888.8,
   363848.2,
   356397.5,
   291357,
   290213.5,
   249085,
   209990.8,
   172091.8,
   159547.6,
   118592.2,
   87657.8,
   76252.88,
   57366.53,
   41338.49,
   33774.91,
   19989.24,
   14474.65,
   7506.938,
   6066.763};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fex1287[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_all_fey1287[30] = {
   22.26104,
   6915.364,
   9371.006,
   18203.74,
   12065.34,
   23656.18,
   18819.9,
   11296.77,
   22788.94,
   10152.99,
   21872.17,
   9192.968,
   26155.52,
   21945.57,
   7638.103,
   16846.24,
   7982.446,
   7136.332,
   5629.767,
   15926.38,
   4752.861,
   3694.55,
   3646.815,
   4077.389,
   3002.276,
   2596.155,
   1524.992,
   1445.719,
   1087.474,
   2114.845};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fx1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fy1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fex1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fey1287);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetMinimum(38.62398);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetMaximum(710735);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1_all","MC unc. (stat.)","fl");

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
   H_dR_Bj1_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__288 = new TH1D("data_mc_ratio__288","",30,0,6);
   data_mc_ratio__288->SetBinContent(1,1.902524);
   data_mc_ratio__288->SetBinContent(2,0.4497404);
   data_mc_ratio__288->SetBinContent(3,0.4391311);
   data_mc_ratio__288->SetBinContent(4,0.3904429);
   data_mc_ratio__288->SetBinContent(5,0.4089335);
   data_mc_ratio__288->SetBinContent(6,0.3895558);
   data_mc_ratio__288->SetBinContent(7,0.4114669);
   data_mc_ratio__288->SetBinContent(8,0.427127);
   data_mc_ratio__288->SetBinContent(9,0.4104055);
   data_mc_ratio__288->SetBinContent(10,0.4382589);
   data_mc_ratio__288->SetBinContent(11,0.435775);
   data_mc_ratio__288->SetBinContent(12,0.4471222);
   data_mc_ratio__288->SetBinContent(13,0.4197602);
   data_mc_ratio__288->SetBinContent(14,0.4011027);
   data_mc_ratio__288->SetBinContent(15,0.4576584);
   data_mc_ratio__288->SetBinContent(16,0.4268099);
   data_mc_ratio__288->SetBinContent(17,0.4288214);
   data_mc_ratio__288->SetBinContent(18,0.4416432);
   data_mc_ratio__288->SetBinContent(19,0.4525666);
   data_mc_ratio__288->SetBinContent(20,0.4078721);
   data_mc_ratio__288->SetBinContent(21,0.4424323);
   data_mc_ratio__288->SetBinContent(22,0.4756565);
   data_mc_ratio__288->SetBinContent(23,0.4359704);
   data_mc_ratio__288->SetBinContent(24,0.4496873);
   data_mc_ratio__288->SetBinContent(25,0.4789483);
   data_mc_ratio__288->SetBinContent(26,0.4219996);
   data_mc_ratio__288->SetBinContent(27,0.5018199);
   data_mc_ratio__288->SetBinContent(28,0.4319275);
   data_mc_ratio__288->SetBinContent(29,0.482487);
   data_mc_ratio__288->SetBinContent(30,0.352412);
   data_mc_ratio__288->SetBinContent(31,0.4526271);
   data_mc_ratio__288->SetBinError(1,0.1708517);
   data_mc_ratio__288->SetBinError(2,0.001526747);
   data_mc_ratio__288->SetBinError(3,0.001004143);
   data_mc_ratio__288->SetBinError(4,0.0008673918);
   data_mc_ratio__288->SetBinError(5,0.0008357234);
   data_mc_ratio__288->SetBinError(6,0.0007910892);
   data_mc_ratio__288->SetBinError(7,0.0008551633);
   data_mc_ratio__288->SetBinError(8,0.0009156776);
   data_mc_ratio__288->SetBinError(9,0.0009123817);
   data_mc_ratio__288->SetBinError(10,0.001009154);
   data_mc_ratio__288->SetBinError(11,0.001041633);
   data_mc_ratio__288->SetBinError(12,0.001105449);
   data_mc_ratio__288->SetBinError(13,0.00107409);
   data_mc_ratio__288->SetBinError(14,0.001060866);
   data_mc_ratio__288->SetBinError(15,0.001253308);
   data_mc_ratio__288->SetBinError(16,0.001212714);
   data_mc_ratio__288->SetBinError(17,0.001312092);
   data_mc_ratio__288->SetBinError(18,0.001450226);
   data_mc_ratio__288->SetBinError(19,0.001621665);
   data_mc_ratio__288->SetBinError(20,0.001598884);
   data_mc_ratio__288->SetBinError(21,0.001931503);
   data_mc_ratio__288->SetBinError(22,0.002329439);
   data_mc_ratio__288->SetBinError(23,0.002391115);
   data_mc_ratio__288->SetBinError(24,0.002799793);
   data_mc_ratio__288->SetBinError(25,0.003403823);
   data_mc_ratio__288->SetBinError(26,0.003534752);
   data_mc_ratio__288->SetBinError(27,0.005010439);
   data_mc_ratio__288->SetBinError(28,0.005462625);
   data_mc_ratio__288->SetBinError(29,0.008016991);
   data_mc_ratio__288->SetBinError(30,0.007621612);
   data_mc_ratio__288->SetBinError(31,0.1419816);
   data_mc_ratio__288->SetMinimum(0.4);
   data_mc_ratio__288->SetMaximum(1.6);
   data_mc_ratio__288->SetEntries(430.0043);
   data_mc_ratio__288->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__288->SetLineColor(ci);
   data_mc_ratio__288->SetLineWidth(2);
   data_mc_ratio__288->SetMarkerStyle(20);
   data_mc_ratio__288->SetMarkerSize(1.2);
   data_mc_ratio__288->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__288->GetXaxis()->SetRange(1,30);
   data_mc_ratio__288->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__288->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__288->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__288->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__288->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__288->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__288->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__288->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__288->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__288->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__288->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__288->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__288->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__288->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__288->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__288->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__288->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1288[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1288[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1288[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1288[30] = {
   0.3415497,
   0.03584159,
   0.02151709,
   0.03507792,
   0.02060687,
   0.03800369,
   0.0334488,
   0.02217596,
   0.04622363,
   0.02359275,
   0.05445766,
   0.02512503,
   0.07188581,
   0.0615761,
   0.02621561,
   0.05804774,
   0.03204707,
   0.03398402,
   0.03271374,
   0.09982218,
   0.04007736,
   0.04214742,
   0.04782528,
   0.0710761,
   0.07262665,
   0.07686638,
   0.07629062,
   0.09987936,
   0.1448625,
   0.3485953};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1288,Graph_from_mc_statistical_error_fy1288,Graph_from_mc_statistical_error_fex1288,Graph_from_mc_statistical_error_fey1288);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1288 = new TH1F("Graph_Graph_from_mc_statistical_error1288","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1288->SetMinimum(0.5816856);
   Graph_Graph_from_mc_statistical_error1288->SetMaximum(1.418314);
   Graph_Graph_from_mc_statistical_error1288->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1288->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1288->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1288->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1288->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1288);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->Modified();
   H_dR_Bj1_algo_all->cd();
   H_dR_Bj1_algo_all->SetSelected(H_dR_Bj1_algo_all);
}
