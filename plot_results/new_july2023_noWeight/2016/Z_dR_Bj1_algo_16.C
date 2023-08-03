void Z_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Thu Aug  3 12:24:48 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(0,0,1,1);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetFillStyle(4000);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1160.054,6.314516,1158904);
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
   st->SetMaximum(993235.4);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(0.01);
   st_stack_149->SetMaximum(1042897);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetRange(1,30);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetLabelSize(0.035);
   st_stack_149->GetXaxis()->SetTitleSize(0.035);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Events/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetLabelSize(0.05);
   st_stack_149->GetYaxis()->SetTitleSize(0.057);
   st_stack_149->GetYaxis()->SetTitleOffset(1.2);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetLabelSize(0.035);
   st_stack_149->GetZaxis()->SetTitleSize(0.035);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,1818.551);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,220913.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,324817.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,374147.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,353818.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,316704);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,272714.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,238557.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,165711.3);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,138993.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,153138.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,109209);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,90459.56);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,82305.55);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,78108.36);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,70891.94);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,60806.54);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,47895.85);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,50753.49);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,41917.11);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,35459.33);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,28410.86);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,29195.29);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,24103.74);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,18840.39);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,12069.75);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,8688.155);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,6361.492);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,3911.619);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,1625.732);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,3341.266);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,660.9218);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,8355.339);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,9913.301);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,22935.46);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,11502.74);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,10727.39);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,22085.05);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,21874.84);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,7595.739);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,6756.637);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,21328.21);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,6514.956);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,5478.983);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,5191.307);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,5431.778);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,4679.555);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,4620.842);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,3689.26);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,4452.606);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,3313.083);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,3117.177);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,2162.888);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,3189.784);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,2725.594);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,2527.216);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,1323.684);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,1135.149);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,990.8284);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,818.9453);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,309.9049);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,680.0248);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(135373);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,3.711846);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,1423.509);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,3080.456);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,3411.555);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,2970.03);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,2351.529);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,1830.085);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,1423.512);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,1119.044);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,909.8393);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,763.5734);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,638.363);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,589.1971);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,527.1504);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,472.2099);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,436.941);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,406.1892);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,387.8036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,345.6162);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,326.2542);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,301.9387);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,251.864);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,200.3285);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,154.6897);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,116.0627);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,82.9991);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,51.70205);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,36.04766);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,19.78872);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,11.70135);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,19.1726);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.7631838);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,14.10499);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,20.30031);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,21.24962);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,19.80426);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,17.80124);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,15.77916);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,13.86945);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,12.28191);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,11.08731);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,10.04489);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,9.136874);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,8.827214);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,8.382806);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,7.894412);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,7.594612);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,7.416133);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,7.298524);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,6.75808);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,6.565549);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,6.403038);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,5.790834);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,5.117238);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,4.487162);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,3.985755);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,3.414495);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,2.572295);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,2.187621);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,1.54248);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,1.19559);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.331751);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(358903);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,63.57988);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,27478.65);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,66216.25);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,66550.88);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,50372.43);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,35360.69);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,25007.24);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,18393.36);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,13963.66);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,11230.35);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,9400.477);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,8199.883);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,7325.679);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,6690.876);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,6208.975);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,5845.59);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,5470.524);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,5284.505);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,5101.867);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,4878.736);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,4494.363);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,3857.119);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,3012.96);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,2169.376);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,1448.906);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,865.4585);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,480.8475);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,248.48);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,130.4426);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,79.6223);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,125.5487);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,1.942162);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,41.78739);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,64.96967);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,64.89368);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,56.14485);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,46.83097);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,39.26685);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,33.60121);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,29.23567);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,26.20233);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,23.95689);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,22.3754);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,21.15023);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,20.23795);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,19.5131);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,18.94874);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,18.36331);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,18.07087);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,17.79907);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,17.42363);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,16.74529);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,15.5334);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,13.72452);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,11.63933);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,9.502771);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,7.320514);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,5.427518);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,3.866123);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.784655);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,2.172271);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.710586);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(6548404);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,5.334598);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,1105.823);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,2016.241);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1915.232);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,1685.059);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,1345.441);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,1065.208);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,847.4444);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,688.6395);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,596.4401);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,461.2805);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,417.3659);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,364.3817);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,328.991);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,296.1456);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,284.0568);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,270.7799);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,234.286);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,229.8183);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,188.1223);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,180.8358);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,140.4634);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,140.6712);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,98.53762);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,80.27145);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,55.24721);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,36.64337);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,29.65358);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,14.17564);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,11.3417);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,9.884614);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,2.758757);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,23.77006);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,39.69245);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,42.84526);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,40.95905);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,35.09278);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,29.51179);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,26.07409);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,23.03326);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,22.33669);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,17.28564);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,18.53784);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,15.91139);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,15.31073);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,13.95087);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,14.79119);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,14.97931);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,13.80374);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,15.57151);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,11.91927);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,12.39028);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,9.624778);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,11.21847);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,7.152219);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,6.841516);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,5.371373);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,2.314587);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,4.238873);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.391576);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,2.915579);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.235418);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(93897);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,1.23435);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,636.1929);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,966.7269);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,863.0151);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,854.5172);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,636.1849);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,544.0275);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,446.4667);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,402.2698);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,303.1113);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,259.5727);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,223.8979);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,202.2831);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,170.8255);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,190.2116);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,150.0499);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,132.7123);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,125.9465);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,104.3263);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,96.34771);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,71.41526);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,80.97451);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,79.21787);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,58.35403);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,40.39044);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,37.64358);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,26.48576);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,11.777);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,9.478682);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,5.420442);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,12.01937);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.355973);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,28.51593);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,40.81828);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,40.79173);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,43.49027);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,32.65119);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,30.87075);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,28.22945);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,29.10868);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,23.36793);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,21.48527);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,18.57287);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,15.27785);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,14.8279);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,17.30538);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,11.91841);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,15.17972);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,13.00188);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,12.53251);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,10.71424);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,5.728271);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,10.33303);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,10.18238);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,9.626259);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,4.130057);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,6.807648);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,3.369391);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,1.453702);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,1.715279);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,1.201671);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,2.507853);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(71986);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,8.330897);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,11.01828);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,7.390311);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,5.374772);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,5.509141);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,5.106033);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,5.374772);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(9,3.224863);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(10,4.165448);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,3.76234);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(12,2.821755);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,2.418647);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,1.209324);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(15,1.746801);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,1.209324);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(17,0.9405851);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(18,0.8062158);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(19,0.8062158);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(20,1.612432);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,1.209324);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(22,0.9405851);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(23,0.8062158);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(24,0.4031079);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(25,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(26,0.2687386);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(27,0.2687386);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(31,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,1.058025);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,1.216766);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,0.9965094);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,0.8498261);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.8603833);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.828308);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,0.8498261);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(9,0.6582724);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(10,0.7481366);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.7110155);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(12,0.6157575);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.5700807);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.4031079);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(15,0.4844754);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.4031079);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(17,0.3555077);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(18,0.3291362);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(19,0.3291362);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(20,0.4654689);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.4031079);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(22,0.3555077);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(23,0.3291362);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(24,0.2327345);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(25,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(26,0.1900269);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(27,0.1900269);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(31,0.1343693);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(1,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,14.83197);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,23.01137);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,14.06856);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,11.66927);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,8.615632);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,5.561991);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,5.234815);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,5.889167);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,4.907639);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,3.271759);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,2.835525);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,3.053642);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,3.380818);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,2.944583);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,2.39929);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,1.199645);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,1.63588);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,2.39929);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,1.090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,1.744938);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,2.39929);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,1.308704);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,0.8724691);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.8724691);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.5452932);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(27,0.2181173);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(28,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(30,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(1,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,1.271831);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,1.584168);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,1.238668);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,1.128111);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,0.9693344);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,0.7788345);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.7555804);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,0.8014141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,0.7315876);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,0.5973388);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.5560921);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.5770841);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.6072128);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.5666853);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.5115304);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.3617066);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.4223823);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.5115304);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.3448737);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.4362346);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.5115304);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.3777902);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.3084644);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.3084644);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.2438625);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(27,0.1542322);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(28,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(29,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(30,0.1090586);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(1159);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(1,0.2432072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,19.69978);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,30.88731);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,23.59109);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,16.53809);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,10.94432);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,8.998665);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,6.566593);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,7.053007);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,5.593764);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,3.648107);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,4.377729);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,2.675279);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,4.134522);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,1.945657);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(16,2.675279);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,2.675279);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,0.9728286);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(19,1.216036);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,1.70245);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,1.459243);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,0.4864143);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,0.7296215);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,1.216036);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(25,0.7296215);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.7296215);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(29,0.2432072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(1,0.2432072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,2.188864);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,2.740805);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,2.395313);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,2.005538);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,1.631483);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,1.479371);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,1.263741);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,1.309711);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,1.166381);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,0.9419372);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,1.031841);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.8066269);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,1.002769);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.6878937);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(16,0.8066269);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.8066269);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.4864143);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(19,0.5438277);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.6434656);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.5957334);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.3439469);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.4212471);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.5438277);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(25,0.4212471);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.4212471);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(29,0.2432072);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.02747902);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,12.85331);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,22.41738);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,16.19888);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,10.05457);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,6.402611);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,4.817071);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,3.569524);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,2.915524);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,2.387926);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,2.095275);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,1.871321);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.667976);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.589661);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.397308);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,1.338228);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,1.236556);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,1.090917);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,1.071682);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.9370344);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.920547);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.8284923);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.7336897);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.5811812);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.3668449);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.2857818);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1318993);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.1030463);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.02747902);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01786136);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.03847062);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.006144495);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.1328902);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.1755004);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.149186);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.117535);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.09379164);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.08135367);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.07003107);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.06329128);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.05727908);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.05365449);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.05070604);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.04787188);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.04673453);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.04381589);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.04287959);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.04121852);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.03871519);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.03837236);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.0358809);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.03556383);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.03373882);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.03174986);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.028258);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.02245054);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.0198154);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.01346191);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.01189876);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.006144495);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.00495385);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.007270264);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.007160924);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,3.368499);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,7.808272);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,6.543294);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,4.501357);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,3.031935);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,2.184082);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,1.723634);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,1.428962);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.193368);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.031531);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,0.8901029);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.8041718);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.7254016);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.697474);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.627297);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.5585521);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.503413);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.4758434);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.4292974);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.394925);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.3755905);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.3075617);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.2227047);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.1489472);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1095621);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.06480636);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.0286437);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.01682817);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.01002529);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.0139638);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.001601231);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.03472864);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.05287459);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.0484025);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.04014591);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.03294803);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.0279643);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.02484232);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.02261934);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.02067077);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.01921811);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.01785211);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.01696852);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.01611606);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.01580278);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.0149867);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.01414169);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.01342554);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.01305274);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.01239792);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.01189123);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.0115965);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.01049387);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.008929647);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.007302738);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.006263251);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.004817019);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.003202463);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.002454641);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.001894602);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.002235998);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1230753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1996555);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.1449554);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.1094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.07111019);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.03282009);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.02461507);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.04649513);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.02188006);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.01914505);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.01914505);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.01641004);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.02188006);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(24,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(1,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01834699);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.02336791);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01991115);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.01729771);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.01394586);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.009474344);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.008205022);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.01127672);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.007735769);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.00723615);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.00723615);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.006699373);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.007735769);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(24,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(27,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.03572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.07681216);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.06573692);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.03787018);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.02357955);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.02215048);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.02000689);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.01714876);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.01607696);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.01036071);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.01000344);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.01000344);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.006788051);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.008217114);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.006788051);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.007859849);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.00428719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.002858127);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002858127);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.00428719);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.002143595);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.005238546);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.00484619);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.003678277);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.002902441);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.002813114);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.002673533);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.00247521);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.002396612);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.001923935);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.001890473);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.001890473);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.001557286);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.001713387);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.001557286);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.001675725);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.001597741);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.001237605);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.0010105);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0010105);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.001237605);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.001129774);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.000875119);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__408 = new TH1D("VbbHcc_algo_Z_dR_Bj1__408","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(1,223);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(2,65403);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(3,98068);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(4,91129);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(5,86129);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(6,74912);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(7,61968);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(8,51182);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(9,42392);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(10,35701);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(11,30642);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(12,26695);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(13,23815);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(14,21390);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(15,19802);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(16,17920);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(17,15299);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(18,13437);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(19,12257);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(20,11069);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(21,9973);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(22,9088);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(23,7644);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(24,6239);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(25,5026);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(26,3735);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(27,2824);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(28,1969);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(29,1178);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(30,786);
   VbbHcc_algo_Z_dR_Bj1__408->SetBinContent(31,1209);
   VbbHcc_algo_Z_dR_Bj1__408->SetEntries(849133);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__408->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__408->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__408->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__408->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__408->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__408->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__408->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1297[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1297[30] = {
   1892.802,
   251617.2,
   397193,
   446955.9,
   409749.1,
   356432.4,
   301187.4,
   259691.1,
   181905.5,
   152051.7,
   164037.7,
   118701.4,
   98951.75,
   90034.46,
   85284.67,
   77616.84,
   67093.38,
   53933.42,
   56541.11,
   47412.36,
   40513.62,
   32746.32,
   32632.37,
   26588.01,
   20528.27,
   13113.04,
   9284.523,
   6687.692,
   4085.901,
   1733.955};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1297[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1297[30] = {
   660.931,
   8355.539,
   9913.699,
   22935.63,
   11503.05,
   10727.61,
   22085.13,
   21874.91,
   7595.896,
   6756.774,
   21328.25,
   6515.054,
   5479.075,
   5191.397,
   5431.864,
   4679.638,
   4620.934,
   3689.36,
   4452.691,
   3313.175,
   3117.259,
   2162.998,
   3189.854,
   2725.649,
   2527.25,
   1323.737,
   1135.173,
   990.8485,
   818.9545,
   309.9309};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1297);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetMinimum(1108.684);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetMaximum(516757.5);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__409 = new TH1D("data_mc_ratio__409","",30,0,6);
   data_mc_ratio__409->SetBinContent(1,0.1178148);
   data_mc_ratio__409->SetBinContent(2,0.2599306);
   data_mc_ratio__409->SetBinContent(3,0.2469026);
   data_mc_ratio__409->SetBinContent(4,0.2038881);
   data_mc_ratio__409->SetBinContent(5,0.2101994);
   data_mc_ratio__409->SetBinContent(6,0.2101717);
   data_mc_ratio__409->SetBinContent(7,0.2057456);
   data_mc_ratio__409->SetBinContent(8,0.197088);
   data_mc_ratio__409->SetBinContent(9,0.2330441);
   data_mc_ratio__409->SetBinContent(10,0.2347951);
   data_mc_ratio__409->SetBinContent(11,0.1867986);
   data_mc_ratio__409->SetBinContent(12,0.224892);
   data_mc_ratio__409->SetBinContent(13,0.2406728);
   data_mc_ratio__409->SetBinContent(14,0.2375757);
   data_mc_ratio__409->SetBinContent(15,0.2321871);
   data_mc_ratio__409->SetBinContent(16,0.2308777);
   data_mc_ratio__409->SetBinContent(17,0.2280255);
   data_mc_ratio__409->SetBinContent(18,0.2491405);
   data_mc_ratio__409->SetBinContent(19,0.2167803);
   data_mc_ratio__409->SetBinContent(20,0.2334623);
   data_mc_ratio__409->SetBinContent(21,0.2461641);
   data_mc_ratio__409->SetBinContent(22,0.2775274);
   data_mc_ratio__409->SetBinContent(23,0.234246);
   data_mc_ratio__409->SetBinContent(24,0.2346546);
   data_mc_ratio__409->SetBinContent(25,0.2448331);
   data_mc_ratio__409->SetBinContent(26,0.2848311);
   data_mc_ratio__409->SetBinContent(27,0.3041621);
   data_mc_ratio__409->SetBinContent(28,0.2944215);
   data_mc_ratio__409->SetBinContent(29,0.2883085);
   data_mc_ratio__409->SetBinContent(30,0.4532989);
   data_mc_ratio__409->SetBinContent(31,0.3446332);
   data_mc_ratio__409->SetBinError(1,0.007889461);
   data_mc_ratio__409->SetBinError(2,0.001016386);
   data_mc_ratio__409->SetBinError(3,0.0007884281);
   data_mc_ratio__409->SetBinError(4,0.0006754039);
   data_mc_ratio__409->SetBinError(5,0.0007162369);
   data_mc_ratio__409->SetBinError(6,0.0007678891);
   data_mc_ratio__409->SetBinError(7,0.0008265077);
   data_mc_ratio__409->SetBinError(8,0.0008711673);
   data_mc_ratio__409->SetBinError(9,0.001131869);
   data_mc_ratio__409->SetBinError(10,0.00124265);
   data_mc_ratio__409->SetBinError(11,0.001067124);
   data_mc_ratio__409->SetBinError(12,0.001376446);
   data_mc_ratio__409->SetBinError(13,0.001559559);
   data_mc_ratio__409->SetBinError(14,0.001624414);
   data_mc_ratio__409->SetBinError(15,0.001649999);
   data_mc_ratio__409->SetBinError(16,0.001724698);
   data_mc_ratio__409->SetBinError(17,0.001843537);
   data_mc_ratio__409->SetBinError(18,0.002149281);
   data_mc_ratio__409->SetBinError(19,0.001958068);
   data_mc_ratio__409->SetBinError(20,0.002219027);
   data_mc_ratio__409->SetBinError(21,0.002464971);
   data_mc_ratio__409->SetBinError(22,0.002911198);
   data_mc_ratio__409->SetBinError(23,0.002679241);
   data_mc_ratio__409->SetBinError(24,0.002970788);
   data_mc_ratio__409->SetBinError(25,0.003453495);
   data_mc_ratio__409->SetBinError(26,0.004660602);
   data_mc_ratio__409->SetBinError(27,0.005723646);
   data_mc_ratio__409->SetBinError(28,0.006635087);
   data_mc_ratio__409->SetBinError(29,0.008400106);
   data_mc_ratio__409->SetBinError(30,0.01616864);
   data_mc_ratio__409->SetBinError(31,0.06753804);
   data_mc_ratio__409->SetMinimum(0.4);
   data_mc_ratio__409->SetMaximum(1.6);
   data_mc_ratio__409->SetEntries(2333.053);
   data_mc_ratio__409->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__409->SetLineColor(ci);
   data_mc_ratio__409->SetLineWidth(2);
   data_mc_ratio__409->SetMarkerStyle(20);
   data_mc_ratio__409->SetMarkerSize(1.2);
   data_mc_ratio__409->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__409->GetXaxis()->SetRange(1,30);
   data_mc_ratio__409->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__409->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__409->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__409->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__409->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__409->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__409->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__409->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__409->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__409->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__409->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__409->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__409->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__409->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__409->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1298[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1298[30] = {
   0.3491813,
   0.03320735,
   0.0249594,
   0.0513152,
   0.02807341,
   0.03009719,
   0.07332687,
   0.08423433,
   0.04175738,
   0.04443734,
   0.1300204,
   0.05488607,
   0.05537118,
   0.05766011,
   0.06369098,
   0.06029153,
   0.06887317,
   0.06840583,
   0.07875139,
   0.06987997,
   0.07694348,
   0.06605316,
   0.09775124,
   0.1025142,
   0.1231107,
   0.1009482,
   0.1222651,
   0.14816,
   0.2004342,
   0.1787421};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1298,Graph_from_mc_statistical_error_fy1298,Graph_from_mc_statistical_error_fex1298,Graph_from_mc_statistical_error_fey1298);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1298 = new TH1F("Graph_Graph_from_mc_statistical_error1298","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1298->SetMinimum(0.5809824);
   Graph_Graph_from_mc_statistical_error1298->SetMaximum(1.419018);
   Graph_Graph_from_mc_statistical_error1298->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1298->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1298->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1298);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}
