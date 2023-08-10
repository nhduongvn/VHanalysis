void H_dR_Bj1_algo_all()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_all/H_dR_Bj1_algo_all
//=========  (Thu Aug 10 12:24:14 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_all = new TCanvas("H_dR_Bj1_algo_all", "H_dR_Bj1_algo_all",0,0,600,600);
   gStyle->SetOptStat(0);
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
   topPad->Range(-0.9193524,-1610.192,6.314516,1608882);
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
   st->SetMaximum(1378888);
   
   TH1F *st_stack_144 = new TH1F("st_stack_144","",30,0,6);
   st_stack_144->SetMinimum(0.3);
   st_stack_144->SetMaximum(1447833);
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
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(1,23.09573);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(2,161087.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(3,338193.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(4,408885.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(5,486896.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(6,540606.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(7,498120.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(8,454349.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(9,446213.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(10,390367.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(11,366561.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(12,332986.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(13,336059.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(14,329257.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(15,267196.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(16,267981.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(17,228697.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(18,189650.4);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(19,154403.7);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(20,144571.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(21,105438.6);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(22,76522.72);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(23,67499.85);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(24,50872.55);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(25,36345.88);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(26,30541.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(27,17868.23);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(28,13135.46);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(29,6927.256);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(30,5833.806);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinContent(31,4659.504);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(1,23.09573);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(2,6908);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(3,9411.888);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(4,18200.06);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(5,12077.84);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(6,23747.58);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(7,18865.53);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(8,11298.69);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(9,22930.26);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(10,10189.12);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(11,22019.11);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(12,9202.562);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(13,26281.95);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(14,21739.57);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(15,7649.709);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(16,16870.49);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(17,8040.244);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(18,7067.621);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(19,5636.268);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(20,15935.91);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(21,4753.799);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(22,3726.203);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(23,3647.538);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(24,4086.902);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(25,3003.662);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(26,2596.303);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(27,1525.842);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(28,1444.423);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(29,1087.825);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(30,2115.268);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetBinError(31,1592.372);
   VbbHcc_algo_H_dR_Bj1_all_stack_1->SetEntries(355717);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(1,1.453535);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(2,987.2919);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(3,2802.071);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(4,3636.35);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(5,4102.462);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(6,4025.766);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(7,3824.382);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(8,3501.482);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(9,3158.341);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(10,2865.1);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(11,2579.163);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(12,2328.092);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(13,2140.862);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(14,1987.46);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(15,1828.118);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(16,1722.428);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(17,1485.372);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(18,1333.583);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(19,1127.198);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(20,938.2269);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(21,763.5239);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(22,593.9285);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(23,469.1899);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(24,356.7596);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(25,261.8885);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(26,180.3643);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(27,124.6845);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(28,74.33117);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(29,41.98349);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(30,26.91217);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinContent(31,37.92011);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(1,0.554403);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(2,12.7788);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(3,20.95471);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(4,23.56436);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(5,24.74599);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(6,24.09653);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(7,23.38394);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(8,22.36695);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(9,21.1682);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(10,20.11383);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(11,19.0929);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(12,17.90349);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(13,17.2087);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(14,16.45034);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(15,15.84241);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(16,15.49415);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(17,14.20586);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(18,13.62356);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(19,12.51179);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(20,11.42261);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(21,10.27153);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(22,9.024614);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(23,8.016021);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(24,6.951173);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(25,5.926096);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(26,4.909093);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(27,4.078696);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(28,3.00513);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(29,2.225965);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(30,1.860666);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetBinError(31,2.078437);
   VbbHcc_algo_H_dR_Bj1_all_stack_2->SetEntries(639487);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(1,41.30994);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(2,29180.56);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(3,91288.28);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(4,101977.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(5,89445.79);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(6,71956.8);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(7,58339.17);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(8,48338.97);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(9,40722.61);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(10,34972.07);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(11,30247.75);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(12,26461);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(13,23826.11);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(14,21917.92);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(15,20632.12);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(16,19596.5);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(17,18114.2);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(18,16694.51);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(19,14964.02);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(20,13174.75);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(21,11446.53);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(22,9618.592);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(23,7741.07);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(24,5983.599);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(25,4401.593);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(26,2977.735);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(27,1825.057);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(28,995.8376);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(29,482.051);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(30,241.5269);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinContent(31,314.3972);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(1,1.597397);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(2,44.26454);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(3,78.58132);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(4,82.8859);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(5,77.32123);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(6,69.05121);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(7,61.95998);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(8,56.28778);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(9,51.59835);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(10,47.78419);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(11,44.4401);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(12,41.56161);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(13,39.42923);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(14,37.83115);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(15,36.73162);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(16,35.81);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(17,34.45627);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(18,33.09937);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(19,31.3503);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(20,29.44705);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(21,27.46905);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(22,25.22012);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(23,22.65377);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(24,19.92077);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(25,17.07862);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(26,14.03673);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(27,10.96721);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(28,8.059336);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(29,5.562209);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(30,3.908038);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetBinError(31,4.458649);
   VbbHcc_algo_H_dR_Bj1_all_stack_3->SetEntries(1.27678e+07);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(1,0.6974344);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(2,865.2712);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(3,2364.731);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(4,2477.468);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(5,2900.439);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(6,2763.391);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(7,2575.926);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(8,2382.922);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(9,2184.459);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(10,2000.338);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(11,1868.456);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(12,1666.372);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(13,1550.386);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(14,1469.023);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(15,1281.015);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(16,1199.645);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(17,1070.946);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(18,950.0137);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(19,779.7315);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(20,652.6553);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(21,526.6116);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(22,406.5633);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(23,321.9435);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(24,245.7578);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(25,195.2365);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(26,142.8347);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(27,84.85114);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(28,55.10365);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(29,31.42707);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(30,13.37596);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinContent(31,33.02529);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(1,0.3369841);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(2,19.96228);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(3,38.02147);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(4,45.14266);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(5,50.25611);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(6,46.79893);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(7,43.59487);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(8,40.84699);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(9,37.81711);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(10,35.06689);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(11,33.47684);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(12,29.57226);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(13,28.91714);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(14,27.29739);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(15,23.53561);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(16,24.32365);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(17,23.31562);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(18,23.74456);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(19,20.33153);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(20,21.23648);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(21,18.00514);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(22,16.51041);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(23,14.47302);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(24,11.96043);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(25,10.16321);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(26,8.393887);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(27,5.925004);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(28,3.458511);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(29,4.149624);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(30,1.707106);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetBinError(31,7.280347);
   VbbHcc_algo_H_dR_Bj1_all_stack_4->SetEntries(204480);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(1,0.0944224);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(2,392.5649);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(3,872.0712);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(4,836.1978);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(5,968.571);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(6,1066.866);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(7,966.4103);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(8,942.7419);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(9,944.2344);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(10,778.047);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(11,783.2535);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(12,655.9395);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(13,647.6636);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(14,637.0915);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(15,626.8271);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(16,524.1259);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(17,508.5453);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(18,418.452);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(19,395.5188);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(20,294.9127);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(21,240.9991);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(22,209.7309);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(23,177.941);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(24,89.24817);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(25,84.99284);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(26,47.54043);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(27,29.29615);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(28,24.67375);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(29,17.18013);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(30,8.164265);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinContent(31,22.64966);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(1,0.09322292);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(2,25.07665);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(3,40.23082);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(4,43.13884);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(5,40.72482);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(6,45.67736);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(7,42.54313);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(8,43.96411);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(9,41.56065);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(10,32.17561);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(11,32.15047);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(12,29.80114);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(13,27.76543);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(14,29.74322);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(15,30.98478);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(16,23.75012);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(17,28.6908);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(18,27.46456);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(19,27.25284);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(20,23.09869);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(21,19.55735);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(22,21.44597);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(23,19.76587);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(24,8.858567);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(25,12.25923);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(26,4.932424);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(27,3.28343);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(28,3.533053);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(29,2.96358);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(30,2.448553);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetBinError(31,9.020949);
   VbbHcc_algo_H_dR_Bj1_all_stack_5->SetEntries(98236);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(2,9.826231);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(3,21.28986);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(4,17.28327);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(5,16.51976);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(6,12.13543);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(7,12.76605);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(8,10.03704);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(9,8.627437);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(10,8.421113);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(11,7.069465);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(12,8.588044);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(13,10.59806);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(14,5.550885);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(15,5.664346);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(16,6.334351);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(17,4.433317);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(18,4.064541);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(19,4.368209);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(20,2.967571);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(21,2.320841);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(22,1.97778);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(23,1.732062);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(24,2.091241);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(25,1.089812);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(26,0.2179625);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(27,0.8602121);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(28,0.6700051);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(29,0.1089812);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinContent(31,0.1089812);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(2,1.396929);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(3,1.891016);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(4,1.69388);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(5,1.910873);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(6,1.605703);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(7,1.666469);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(8,1.503188);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(9,1.349357);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(10,1.316519);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(11,1.157937);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(12,1.33847);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(13,1.573465);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(14,0.9434678);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(15,1.059543);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(16,1.162208);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(17,0.8235985);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(18,0.8678223);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(19,0.9572463);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(20,0.9585174);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(21,0.7503899);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(22,0.6087851);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(23,0.5038032);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(24,0.7766069);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(25,0.3446289);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(26,0.1541227);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(27,0.3985001);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(28,0.4775944);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(29,0.1089812);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetBinError(31,0.1089812);
   VbbHcc_algo_H_dR_Bj1_all_stack_7->SetEntries(1323);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(1,0.005825587);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(2,17.16613);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(3,49.13026);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(4,44.54217);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(5,31.93746);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(6,20.85042);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(7,15.22532);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(8,12.07198);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(9,11.14171);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(10,9.979708);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(11,9.035895);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(12,8.312925);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(13,7.316057);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(14,7.012557);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(15,6.497767);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(16,5.898594);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(17,5.142938);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(18,4.333456);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(19,3.851466);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(20,3.147464);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(21,3.072974);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(22,2.793531);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(23,2.557564);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(24,2.337977);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(25,1.93448);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(26,1.403908);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(27,0.876926);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(28,0.4767963);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(29,0.1432504);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(30,0.08250083);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinContent(31,0.06642661);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(1,0.00292292);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(2,0.1781418);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(3,0.3003814);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(4,0.2832836);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(5,0.2384887);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(6,0.1921573);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(7,0.1641483);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(8,0.1464889);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(9,0.1411372);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(10,0.1337697);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(11,0.127701);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(12,0.1226474);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(13,0.1150719);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(14,0.1127524);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(15,0.1083581);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(16,0.1029686);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(17,0.095949);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(18,0.08805085);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(19,0.08296602);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(20,0.07480302);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(21,0.07386031);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(22,0.07102043);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(23,0.06792073);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(24,0.06542486);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(25,0.05963973);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(26,0.05103173);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(27,0.0405421);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(28,0.02968802);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(29,0.01598469);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(30,0.01219696);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetBinError(31,0.01087468);
   VbbHcc_algo_H_dR_Bj1_all_stack_9->SetEntries(167452);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(1,0.002744219);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(2,5.207155);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(3,18.30257);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(4,20.86018);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(5,17.78665);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(6,12.49992);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(7,9.817443);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(8,8.128376);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(9,7.178877);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(10,6.590242);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(11,5.853419);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(12,5.203039);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(13,4.569124);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(14,4.253539);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(15,4.044979);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(16,3.760952);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(17,3.493391);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(18,2.989826);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(19,2.554868);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(20,2.371005);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(21,1.959372);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(22,1.753556);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(23,1.420133);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(24,1.121013);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(25,0.7875908);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(26,0.5474717);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(27,0.3663532);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(28,0.1811184);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(29,0.1056524);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(30,0.03018641);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinContent(31,0.03979117);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(1,0.001147744);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(2,0.04999606);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(3,0.09373278);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(4,0.1000678);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(5,0.09240227);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(6,0.07746206);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(7,0.06864907);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(8,0.06246509);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(9,0.05870346);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(10,0.05624529);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(11,0.05300786);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(12,0.04997629);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(13,0.046833);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(14,0.04518671);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(15,0.04406498);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(16,0.04248977);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(17,0.04095049);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(18,0.03788423);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(19,0.03502029);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(20,0.03373663);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(21,0.0306686);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(22,0.02901318);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(23,0.02610959);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(24,0.02319748);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(25,0.01944401);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(26,0.01621124);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(27,0.01326128);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(28,0.009324313);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(29,0.007121561);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(30,0.003806635);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetBinError(31,0.004370477);
   VbbHcc_algo_H_dR_Bj1_all_stack_10->SetEntries(336228);

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
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(2,0.1566301);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(3,0.3285468);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(4,0.3908309);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(5,0.2629347);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(6,0.2107439);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(7,0.1489466);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(8,0.1013248);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(9,0.09437833);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(10,0.09395622);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(11,0.1034019);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(12,0.08690257);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(13,0.05376758);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(14,0.08374545);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(15,0.06216916);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(16,0.05197627);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(17,0.03954532);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(18,0.03009959);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(19,0.03052509);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(20,0.02334972);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(21,0.0283049);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(22,0.04092903);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(23,0.01884129);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(24,0.01967439);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(25,0.008630517);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(26,0.02051087);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(27,0.00589551);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinContent(28,0.006943048);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(2,0.01934714);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(3,0.02827429);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(4,0.0305357);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(5,0.02502073);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(6,0.02237328);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(7,0.01917711);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(8,0.01554805);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(9,0.01483486);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(10,0.01507796);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(11,0.01608688);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(12,0.01432136);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(13,0.01109887);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(14,0.01431408);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(15,0.01245012);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(16,0.01115005);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(17,0.01003544);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(18,0.008322694);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(19,0.008171986);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(20,0.00754841);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(21,0.008100621);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(22,0.009686458);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(23,0.006512068);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(24,0.006757599);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(25,0.004467093);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(26,0.007328648);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(27,0.003531947);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetBinError(28,0.004108861);
   VbbHcc_algo_H_dR_Bj1_all_stack_11->SetEntries(1102);

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
   
   TH1D *VbbHcc_algo_H_dR_Bj1_all__395 = new TH1D("VbbHcc_algo_H_dR_Bj1_all__395","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(1,123);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(2,86234);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(3,190191);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(4,201604);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(5,238167);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(6,241387);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(7,230423);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(8,216496);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(9,201318);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(10,187597);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(11,174160);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(12,162755);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(13,151885);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(14,142179);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(15,132643);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(16,123199);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(17,106301);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(18,92274);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(19,77432);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(20,64699);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(21,52264);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(22,41443);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(23,33062);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(24,25648);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(25,19710);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(26,14200);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(27,9990);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(28,6228);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(29,3606);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(30,2128);
   VbbHcc_algo_H_dR_Bj1_all__395->SetBinContent(31,2296);
   VbbHcc_algo_H_dR_Bj1_all__395->SetEntries(3231671);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_all__395->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_all__395->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1_all__395->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1_all__395->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_all__395->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_all__395->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_all__395->Draw("same E");
   
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
   66.65963,
   192579.6,
   435688.7,
   517956,
   584425.8,
   620499.8,
   563896.1,
   509575.7,
   493278.2,
   431032.1,
   402082.2,
   364143,
   364268.7,
   355305.9,
   291601.1,
   291056.4,
   249904,
   209070.6,
   171692.1,
   159650,
   118429.5,
   87363.57,
   76220.15,
   57559.01,
   41296,
   33892.92,
   19935.73,
   14288.47,
   7500.536,
   6123.898};
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
   23.16018,
   6908.228,
   9412.404,
   18200.37,
   12078.28,
   23747.78,
   18865.74,
   11299.01,
   22930.4,
   10189.36,
   22019.21,
   9202.769,
   26282.02,
   21739.65,
   7649.913,
   16870.57,
   8040.416,
   7067.805,
   5636.472,
   15935.97,
   4753.964,
   3726.398,
   3647.699,
   4086.983,
   3003.759,
   2596.364,
   1525.903,
   1444.457,
   1087.854,
   2115.275};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fx1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fy1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fex1287,Graph_from_VbbHcc_algo_H_dR_Bj1_all_fey1287);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetMinimum(39.14951);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj1_all1287->SetMaximum(708667.9);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
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
   
   TH1D *data_mc_ratio__396 = new TH1D("data_mc_ratio__396","",30,0,6);
   data_mc_ratio__396->SetBinContent(1,1.845195);
   data_mc_ratio__396->SetBinContent(2,0.4477838);
   data_mc_ratio__396->SetBinContent(3,0.4365296);
   data_mc_ratio__396->SetBinContent(4,0.38923);
   data_mc_ratio__396->SetBinContent(5,0.4075231);
   data_mc_ratio__396->SetBinContent(6,0.3890203);
   data_mc_ratio__396->SetBinContent(7,0.4086267);
   data_mc_ratio__396->SetBinContent(8,0.4248555);
   data_mc_ratio__396->SetBinContent(9,0.4081226);
   data_mc_ratio__396->SetBinContent(10,0.4352274);
   data_mc_ratio__396->SetBinContent(11,0.4331452);
   data_mc_ratio__396->SetBinContent(12,0.4469536);
   data_mc_ratio__396->SetBinContent(13,0.4169587);
   data_mc_ratio__396->SetBinContent(14,0.4001595);
   data_mc_ratio__396->SetBinContent(15,0.4548782);
   data_mc_ratio__396->SetBinContent(16,0.4232822);
   data_mc_ratio__396->SetBinContent(17,0.4253673);
   data_mc_ratio__396->SetBinContent(18,0.4413532);
   data_mc_ratio__396->SetBinContent(19,0.4509934);
   data_mc_ratio__396->SetBinContent(20,0.4052553);
   data_mc_ratio__396->SetBinContent(21,0.441309);
   data_mc_ratio__396->SetBinContent(22,0.4743739);
   data_mc_ratio__396->SetBinContent(23,0.4337698);
   data_mc_ratio__396->SetBinContent(24,0.4455949);
   data_mc_ratio__396->SetBinContent(25,0.477286);
   data_mc_ratio__396->SetBinContent(26,0.4189665);
   data_mc_ratio__396->SetBinContent(27,0.5011103);
   data_mc_ratio__396->SetBinContent(28,0.4358758);
   data_mc_ratio__396->SetBinContent(29,0.4807657);
   data_mc_ratio__396->SetBinContent(30,0.3474911);
   data_mc_ratio__396->SetBinContent(31,0.4530524);
   data_mc_ratio__396->SetBinError(1,0.1663756);
   data_mc_ratio__396->SetBinError(2,0.001524857);
   data_mc_ratio__396->SetBinError(3,0.001000965);
   data_mc_ratio__396->SetBinError(4,0.0008668755);
   data_mc_ratio__396->SetBinError(5,0.000835048);
   data_mc_ratio__396->SetBinError(6,0.0007917997);
   data_mc_ratio__396->SetBinError(7,0.0008512632);
   data_mc_ratio__396->SetBinError(8,0.0009130956);
   data_mc_ratio__396->SetBinError(9,0.0009095977);
   data_mc_ratio__396->SetBinError(10,0.001004855);
   data_mc_ratio__396->SetBinError(11,0.001037909);
   data_mc_ratio__396->SetBinError(12,0.001107886);
   data_mc_ratio__396->SetBinError(13,0.001069881);
   data_mc_ratio__396->SetBinError(14,0.001061244);
   data_mc_ratio__396->SetBinError(15,0.001248973);
   data_mc_ratio__396->SetBinError(16,0.001205942);
   data_mc_ratio__396->SetBinError(17,0.001304654);
   data_mc_ratio__396->SetBinError(18,0.001452936);
   data_mc_ratio__396->SetBinError(19,0.001620727);
   data_mc_ratio__396->SetBinError(20,0.001593235);
   data_mc_ratio__396->SetBinError(21,0.001930374);
   data_mc_ratio__396->SetBinError(22,0.002330211);
   data_mc_ratio__396->SetBinError(23,0.002385584);
   data_mc_ratio__396->SetBinError(24,0.002782361);
   data_mc_ratio__396->SetBinError(25,0.003399659);
   data_mc_ratio__396->SetBinError(26,0.003515889);
   data_mc_ratio__396->SetBinError(27,0.00501361);
   data_mc_ratio__396->SetBinError(28,0.005523171);
   data_mc_ratio__396->SetBinError(29,0.008006092);
   data_mc_ratio__396->SetBinError(30,0.007532824);
   data_mc_ratio__396->SetBinError(31,0.142672);
   data_mc_ratio__396->SetMinimum(0.4);
   data_mc_ratio__396->SetMaximum(1.6);
   data_mc_ratio__396->SetEntries(435.3799);
   data_mc_ratio__396->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__396->SetLineColor(ci);
   data_mc_ratio__396->SetLineWidth(2);
   data_mc_ratio__396->SetMarkerStyle(20);
   data_mc_ratio__396->SetMarkerSize(1.2);
   data_mc_ratio__396->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__396->GetXaxis()->SetRange(1,30);
   data_mc_ratio__396->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__396->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__396->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__396->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__396->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__396->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__396->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__396->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__396->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__396->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__396->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__396->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__396->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__396->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__396->Draw("E1");
   
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
   0.3474393,
   0.03587208,
   0.02160351,
   0.03513884,
   0.02066692,
   0.03827203,
   0.03345607,
   0.02217337,
   0.04648573,
   0.02363945,
   0.05476296,
   0.02527241,
   0.07215007,
   0.06118572,
   0.02623417,
   0.05796323,
   0.03217402,
   0.03380582,
   0.03282895,
   0.09981818,
   0.04014172,
   0.04265391,
   0.04785741,
   0.0710051,
   0.07273728,
   0.0766049,
   0.07654109,
   0.1010925,
   0.1450368,
   0.3454131};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1288,Graph_from_mc_statistical_error_fy1288,Graph_from_mc_statistical_error_fex1288,Graph_from_mc_statistical_error_fey1288);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1288 = new TH1F("Graph_Graph_from_mc_statistical_error1288","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1288->SetMinimum(0.5830728);
   Graph_Graph_from_mc_statistical_error1288->SetMaximum(1.416927);
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
