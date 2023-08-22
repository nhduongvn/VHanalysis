void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Tue Aug 22 09:21:49 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(0,0,1,1);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1159.153,6.314516,1158004);
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
   st->SetMaximum(992464.4);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0.01);
   st_stack_147->SetMaximum(1042088);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetLabelSize(0.035);
   st_stack_147->GetXaxis()->SetTitleSize(0.035);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Events/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetLabelSize(0.05);
   st_stack_147->GetYaxis()->SetTitleSize(0.057);
   st_stack_147->GetYaxis()->SetTitleOffset(1.2);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetLabelSize(0.035);
   st_stack_147->GetZaxis()->SetTitleSize(0.035);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,126372.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,385348.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,343681.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,268001.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,172694.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,114653.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,78764.66);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,58344.57);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,52018.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,36523.83);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,30992.65);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,28810.04);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,25027.79);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,21837.06);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,19908.12);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,15826.81);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,11303.35);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,11667.53);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,9143.799);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,5717.909);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,3959.11);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,2437.399);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,1671.661);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,1578.14);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,238.5821);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,249.2085);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,32.83725);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,816.9775);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,81.61307);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(30,33.30724);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,109.0391);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,3143.417);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,7941.099);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,8395.187);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,22186.49);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,6547.674);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,5351.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,4322.006);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,4420.624);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3719.677);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,2648.117);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,2500.529);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,2966.319);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,2819.304);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2735.324);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,2079.691);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1861.706);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1480.488);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1609.979);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1420.662);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1134.623);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,930.6098);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,756.3137);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,650.999);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,650.3125);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,68.53709);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,79.13098);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,18.0543);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,525.6096);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,39.7173);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(30,33.30724);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,51.49998);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(105593);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,537.1935);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,2721.052);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,2804.083);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,1969.695);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,1274.732);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,859.9262);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,604.4844);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,457.7741);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,355.3186);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,297.9726);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,241.9372);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,205.2209);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,177.7847);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,155.4602);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,135.7754);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,115.5471);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,103.6936);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,85.46102);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,64.78755);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,45.98744);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,26.84133);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,17.87962);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,8.177557);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,9.461375);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,4.493513);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,3.322164);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.755088);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.836493);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.075);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.5987375);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.229235);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,9.398063);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,20.58587);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,20.83228);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,17.51993);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,14.08456);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,11.58252);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,9.726605);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,8.393425);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,7.420525);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,6.765175);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,5.979922);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.559801);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.258778);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.879198);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.625319);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,4.166072);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,4.000469);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,3.641702);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,3.185725);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.58895);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.933374);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.553446);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.025881);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,1.284975);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.692398);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.7000572);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.3114346);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.5257674);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.4168788);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1897862);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.3519679);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(152694);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,8872.963);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,54841.62);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,53367.3);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,33279.8);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,19742.82);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,12720.78);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,8989.391);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,6728.277);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,5376.479);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,4440.068);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,3752.59);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,3209.293);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,2806.706);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,2441.43);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,2177.458);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,1933.566);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,1685.617);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,1418.797);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,1099.795);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,774.6537);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,430.8063);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,199.6834);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,99.68826);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,59.74439);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,38.64201);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,25.16168);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,16.69079);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,12.91244);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,9.652276);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,5.885136);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,15.67909);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,24.7661);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,61.39246);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,60.19868);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,47.26947);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,36.32902);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,29.12794);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,24.47243);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,21.15329);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,18.92021);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,17.19242);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,15.80173);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,14.61719);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,13.67309);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,12.76354);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,12.07738);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,11.39601);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,10.64874);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,9.783815);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,8.61441);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,7.230991);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,5.379208);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,3.637036);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,2.551204);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,1.964586);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.577738);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.266468);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,1.034877);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.8896486);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.7917544);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.6124784);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,1.011162);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(3537992);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,730.7892);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,2775.837);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,2200.482);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,1472.334);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,971.9949);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,645.9808);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,489.129);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,357.4074);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,272.8161);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,258.5823);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,205.2843);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,166.9287);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,135.3705);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,116.1294);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,113.5174);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,99.53025);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,63.86788);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,54.61928);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,54.42827);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,28.07654);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,27.23966);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,7.196601);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,4.500502);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,4.652003);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,4.939323);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,2.322081);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.5881);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,1.359294);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,0.9121137);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(30,0.4894939);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,0.5662797);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,13.94024);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,37.11803);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,36.71872);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,30.06256);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,25.18862);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,20.85405);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,18.19045);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,16.26943);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,12.83514);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,16.21644);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,12.57514);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,10.83193);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,8.640781);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,8.326568);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,10.63837);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,8.894995);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,4.60004);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,4.304565);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,5.804697);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,3.148164);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,3.13578);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,1.401695);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.278269);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,1.349188);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,1.364399);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.9095631);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.6266721);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.7274142);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.5349598);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(30,0.4894939);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.2592602);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(53670);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,254.726);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,776.0919);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,708.3735);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,443.7986);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,310.9239);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,230.5578);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,150.5241);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,115.9803);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,78.11407);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,74.41832);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,74.65515);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,65.34293);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,30.77551);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,55.27);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,29.37039);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,27.58863);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,16.67943);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,9.291341);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,16.27625);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,20.87619);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,5.303013);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,3.474061);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,5.061718);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,0.9743816);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,2.274747);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,0.550474);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(27,0.5520904);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,0.5446944);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.7433025);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,11.40838);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,32.10403);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,42.42341);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,31.32462);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,29.49647);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,24.32232);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,17.00192);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,18.38683);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,13.62171);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,9.389817);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,14.16053);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,16.82957);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,5.305664);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,13.50671);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,5.669824);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,5.964189);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,4.059535);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,3.208626);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,4.547011);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,5.13523);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,1.273146);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,2.235149);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,3.06972);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,0.474216);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,2.151906);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,0.347059);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(27,0.3476517);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,0.4357898);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.439692);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(13622);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.854671);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,9.134947);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,5.709342);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,4.567473);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,2.854671);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,3.425605);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,1.712803);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,1.141868);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,1.141868);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.141868);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(21,0.5709342);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,1.276648);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,2.283737);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.805452);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.614846);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.276648);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,1.398497);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.988887);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.8074229);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.8074229);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.8074229);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(21,0.5709342);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(60);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,7.438181);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,27.27333);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,14.52216);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,7.438181);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,6.021385);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,4.604589);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,5.312987);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,2.479394);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.125195);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,1.770996);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,3.187792);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,1.062597);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,1.770996);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.416796);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.3541991);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.623144);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,3.108085);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,2.267981);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.623144);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,1.4604);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,1.277083);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,1.371807);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.9371228);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.8676071);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.7920133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,1.062597);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.5009132);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.6134909);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.7920133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.7083982);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.3541991);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,12.29423);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,52.25048);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,31.01499);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,13.13247);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,10.05892);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,4.750044);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,5.308873);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,4.750044);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,3.352972);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,2.514729);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.676486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,1.397072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,2.514729);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,1.397072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(19,0.5588287);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.853425);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,3.820934);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.943813);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,1.915568);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.676486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,1.152055);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.217939);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,1.152055);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.9679197);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.6844226);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.6247895);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.6247895);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.3951516);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(19,0.3951516);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,8.887827);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,39.90447);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,21.44819);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,10.71417);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,5.790984);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,4.23689);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,3.003258);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.52682);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,2.223375);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.840523);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.61932);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,1.242141);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,1.171242);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.813914);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.7742109);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.7033124);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.4821093);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.4594218);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.3318047);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.269414);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.1843359);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.08507812);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.03119531);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.02835937);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.01134375);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.005671875);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.005671875);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.005671875);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.1587618);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.3364024);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.2466287);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.1743121);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.1281517);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.1096155);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.09228787);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.08465166);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.07940624);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.07224686);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.06776644);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.05935177);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.05763306);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.04804382);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.04685737);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.04466038);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.0369761);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.03609559);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.03067535);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.0276413);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.02286406);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.01553307);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.00940574);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.008968021);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.005671875);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.004010621);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.004010621);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.004010621);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(38365);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,2.702164);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,16.7899);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,15.2755);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,8.8948);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,5.250909);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,3.448759);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,2.537433);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,2.067983);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.718016);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,1.339063);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,1.078886);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.9275875);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.8392122);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.7359898);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.7197287);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.5705511);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.4857108);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.3846094);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.2969411);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.2184638);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.1371585);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.06150923);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.02828011);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.02050308);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.006363024);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.01060504);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.003535013);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.007070027);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.002828011);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.004242016);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.004949019);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.04370855);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.1089518);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.1039222);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.07930099);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.06092952);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.04937896);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.0423553);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.03823701);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.03485172);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.03076883);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.02761839);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.02560873);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.02435827);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.02281111);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.02255771);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.02008435);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.01853102);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.01648999);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.01448924);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.01242797);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.009847408);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.006594482);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.004471477);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.003807326);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.002121008);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.00273821);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.001580906);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.002235739);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.001414005);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.001731796);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.001870553);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.05461829);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.2912975);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1593033);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.06827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.05461829);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.03641219);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.03413643);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.0182061);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01137881);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01114891);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02574731);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.01904039);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.01246486);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.01114891);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.005574455);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.008813988);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.006436827);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.005088758);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.005574455);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(16,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01767975);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.1141692);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.07821042);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.04374989);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.02577048);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.02037666);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.01288524);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.01078764);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.009888674);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.007191763);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.00659245);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.007791077);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.004794509);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.005393822);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.005094166);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.003895538);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.002397254);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.002301708);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.005849067);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.004841104);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.003620767);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.002778903);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.002471033);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.001964981);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.001797941);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.001721397);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.001468013);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.001405515);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.001527956);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.001271336);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.001235517);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.001080428);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0008475574);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__403 = new TH1D("VbbHcc_algo_Z_dR_Bj0__403","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(1,96751);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(2,436181);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(3,413046);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(4,306529);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(5,201455);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(6,134949);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(7,97406);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(8,73772);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(9,59224);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(10,48230);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(11,40348);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(12,34287);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(13,29424);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(14,25463);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(15,21971);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(16,18798);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(17,15647);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(18,12836);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(19,10126);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(20,7255);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(21,4694);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(22,3037);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(23,1895);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(24,1353);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(25,965);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(26,680);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(27,480);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(28,336);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(29,222);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(30,149);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(31,454);
   VbbHcc_algo_Z_dR_Bj0__403->SetEntries(2097992);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__403->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__403->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__403->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__403->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1293[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1293[30] = {
   136802.2,
   446609,
   402850.2,
   305212.3,
   195024.7,
   129131.5,
   89016.09,
   66017.02,
   58112.26,
   41602.36,
   35274.69,
   32461.12,
   28182.35,
   24609.52,
   22370.82,
   18005.73,
   13175.02,
   13237.11,
   10380.63,
   6588.832,
   4451.031,
   2665.78,
   1789.148,
   1653.021,
   288.9494,
   280.5815,
   53.42686,
   833.6374,
   93.25529,
   40.29052};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1293[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1293[30] = {
   3143.581,
   7941.517,
   8395.617,
   22186.59,
   6547.905,
   5352.168,
   4322.159,
   4420.751,
   3719.78,
   2648.248,
   2500.658,
   2966.428,
   2819.361,
   2735.405,
   2079.766,
   1861.776,
   1480.545,
   1610.021,
   1420.711,
   1134.665,
   930.6338,
   756.3287,
   651.0133,
   650.3183,
   68.60607,
   79.15019,
   18.10081,
   525.6113,
   39.73098,
   33.31701};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1293);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetMinimum(6.276163);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetMaximum(500004.8);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__404 = new TH1D("data_mc_ratio__404","",30,0,6);
   data_mc_ratio__404->SetBinContent(1,0.7072327);
   data_mc_ratio__404->SetBinContent(2,0.9766508);
   data_mc_ratio__404->SetBinContent(3,1.025309);
   data_mc_ratio__404->SetBinContent(4,1.004314);
   data_mc_ratio__404->SetBinContent(5,1.032972);
   data_mc_ratio__404->SetBinContent(6,1.045051);
   data_mc_ratio__404->SetBinContent(7,1.094252);
   data_mc_ratio__404->SetBinContent(8,1.117469);
   data_mc_ratio__404->SetBinContent(9,1.019131);
   data_mc_ratio__404->SetBinContent(10,1.159309);
   data_mc_ratio__404->SetBinContent(11,1.143823);
   data_mc_ratio__404->SetBinContent(12,1.056248);
   data_mc_ratio__404->SetBinContent(13,1.044058);
   data_mc_ratio__404->SetBinContent(14,1.034681);
   data_mc_ratio__404->SetBinContent(15,0.9821275);
   data_mc_ratio__404->SetBinContent(16,1.044001);
   data_mc_ratio__404->SetBinContent(17,1.187626);
   data_mc_ratio__404->SetBinContent(18,0.9696984);
   data_mc_ratio__404->SetBinContent(19,0.9754703);
   data_mc_ratio__404->SetBinContent(20,1.101106);
   data_mc_ratio__404->SetBinContent(21,1.054587);
   data_mc_ratio__404->SetBinContent(22,1.139254);
   data_mc_ratio__404->SetBinContent(23,1.059163);
   data_mc_ratio__404->SetBinContent(24,0.8185013);
   data_mc_ratio__404->SetBinContent(25,3.339685);
   data_mc_ratio__404->SetBinContent(26,2.423538);
   data_mc_ratio__404->SetBinContent(27,8.984245);
   data_mc_ratio__404->SetBinContent(28,0.4030529);
   data_mc_ratio__404->SetBinContent(29,2.380562);
   data_mc_ratio__404->SetBinContent(30,3.69814);
   data_mc_ratio__404->SetBinContent(31,3.567286);
   data_mc_ratio__404->SetBinError(1,0.002273708);
   data_mc_ratio__404->SetBinError(2,0.001478788);
   data_mc_ratio__404->SetBinError(3,0.001595349);
   data_mc_ratio__404->SetBinError(4,0.001813985);
   data_mc_ratio__404->SetBinError(5,0.002301438);
   data_mc_ratio__404->SetBinError(6,0.002844807);
   data_mc_ratio__404->SetBinError(7,0.0035061);
   data_mc_ratio__404->SetBinError(8,0.004114242);
   data_mc_ratio__404->SetBinError(9,0.004187753);
   data_mc_ratio__404->SetBinError(10,0.005278867);
   data_mc_ratio__404->SetBinError(11,0.005694397);
   data_mc_ratio__404->SetBinError(12,0.005704285);
   data_mc_ratio__404->SetBinError(13,0.006086584);
   data_mc_ratio__404->SetBinError(14,0.00648413);
   data_mc_ratio__404->SetBinError(15,0.006625871);
   data_mc_ratio__404->SetBinError(16,0.007614566);
   data_mc_ratio__404->SetBinError(17,0.009494327);
   data_mc_ratio__404->SetBinError(18,0.008558977);
   data_mc_ratio__404->SetBinError(19,0.009693823);
   data_mc_ratio__404->SetBinError(20,0.01292737);
   data_mc_ratio__404->SetBinError(21,0.01539256);
   data_mc_ratio__404->SetBinError(22,0.02067274);
   data_mc_ratio__404->SetBinError(23,0.02433091);
   data_mc_ratio__404->SetBinError(24,0.02225207);
   data_mc_ratio__404->SetBinError(25,0.1075083);
   data_mc_ratio__404->SetBinError(26,0.09293844);
   data_mc_ratio__404->SetBinError(27,0.4100728);
   data_mc_ratio__404->SetBinError(28,0.02198834);
   data_mc_ratio__404->SetBinError(29,0.1597729);
   data_mc_ratio__404->SetBinError(30,0.3029635);
   data_mc_ratio__404->SetBinError(31,1.453591);
   data_mc_ratio__404->SetMinimum(0.4);
   data_mc_ratio__404->SetMaximum(1.6);
   data_mc_ratio__404->SetEntries(97.63271);
   data_mc_ratio__404->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__404->SetLineColor(ci);
   data_mc_ratio__404->SetLineWidth(2);
   data_mc_ratio__404->SetMarkerStyle(20);
   data_mc_ratio__404->SetMarkerSize(1.2);
   data_mc_ratio__404->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__404->GetXaxis()->SetRange(1,30);
   data_mc_ratio__404->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__404->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__404->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__404->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__404->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__404->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__404->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__404->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__404->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__404->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__404->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__404->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__404->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__404->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1294[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1294[30] = {
   0.02297902,
   0.01778181,
   0.02084055,
   0.07269232,
   0.03357474,
   0.04144744,
   0.0485548,
   0.06696381,
   0.06401024,
   0.0636562,
   0.07089099,
   0.09138403,
   0.1000399,
   0.1111523,
   0.09296782,
   0.1033991,
   0.1123751,
   0.1216294,
   0.1368617,
   0.1722103,
   0.2090828,
   0.2837176,
   0.3638677,
   0.3934119,
   0.2374328,
   0.2820934,
   0.338796,
   0.6305034,
   0.4260454,
   0.8269192};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1294,Graph_from_mc_statistical_error_fy1294,Graph_from_mc_statistical_error_fex1294,Graph_from_mc_statistical_error_fey1294);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1294 = new TH1F("Graph_Graph_from_mc_statistical_error1294","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1294->SetMinimum(0.007696903);
   Graph_Graph_from_mc_statistical_error1294->SetMaximum(1.992303);
   Graph_Graph_from_mc_statistical_error1294->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1294->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1294->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1294);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
