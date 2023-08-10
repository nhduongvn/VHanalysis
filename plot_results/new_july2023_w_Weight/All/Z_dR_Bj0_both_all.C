void Z_dR_Bj0_both_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_all/Z_dR_Bj0_both_all
//=========  (Thu Aug 10 10:43:23 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_all = new TCanvas("Z_dR_Bj0_both_all", "Z_dR_Bj0_both_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_all->SetHighLightColor(2);
   Z_dR_Bj0_both_all->Range(0,0,1,1);
   Z_dR_Bj0_both_all->SetFillColor(0);
   Z_dR_Bj0_both_all->SetFillStyle(4000);
   Z_dR_Bj0_both_all->SetBorderMode(0);
   Z_dR_Bj0_both_all->SetBorderSize(2);
   Z_dR_Bj0_both_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.377241,6.314516,13.29836);
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
   st->SetMaximum(2.012652e+11);
   
   TH1F *st_stack_244 = new TH1F("st_stack_244","",30,0,6);
   st_stack_244->SetMinimum(0.04339447);
   st_stack_244->SetMaximum(6.773237e+11);
   st_stack_244->SetDirectory(0);
   st_stack_244->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_244->SetLineColor(ci);
   st_stack_244->GetXaxis()->SetRange(1,30);
   st_stack_244->GetXaxis()->SetLabelFont(42);
   st_stack_244->GetXaxis()->SetLabelSize(0.035);
   st_stack_244->GetXaxis()->SetTitleSize(0.035);
   st_stack_244->GetXaxis()->SetTitleFont(42);
   st_stack_244->GetYaxis()->SetTitle("Events/0.2");
   st_stack_244->GetYaxis()->SetLabelFont(42);
   st_stack_244->GetYaxis()->SetLabelSize(0.05);
   st_stack_244->GetYaxis()->SetTitleSize(0.057);
   st_stack_244->GetYaxis()->SetTitleOffset(1.2);
   st_stack_244->GetYaxis()->SetTitleFont(42);
   st_stack_244->GetZaxis()->SetLabelFont(42);
   st_stack_244->GetZaxis()->SetLabelSize(0.035);
   st_stack_244->GetZaxis()->SetTitleSize(0.035);
   st_stack_244->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_244);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(1,23926.99);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(2,97621.08);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(3,110590.2);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(4,64367.42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(5,48868.87);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(6,43540.45);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(7,26142.24);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(8,26014.43);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(9,21296.32);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(10,37592.57);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(11,15140.81);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(12,16089.6);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(13,10367.03);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(14,10933.18);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(15,9393.984);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(16,8705.066);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(17,6769.509);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(18,5333.43);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(19,6340.061);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(20,4508.448);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(21,2822.191);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(22,2600.142);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(23,2009.822);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(24,1644.231);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(25,1060.039);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(26,1101.41);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(27,489.5508);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(28,590.8421);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(29,129.3151);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(30,54.965);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinContent(31,92.93316);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(1,1533.797);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(2,4375.824);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(3,15676.78);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(4,4095.049);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(5,3297.129);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(6,3698.543);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(7,2540.565);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(8,2814.755);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(9,2291.71);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(10,15016.3);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(11,1573.946);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(12,2134.51);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(13,1236.689);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(14,1387.982);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(15,1143.802);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(16,1297.568);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(17,1089.596);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(18,1534.838);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(19,1056.556);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(20,901.3533);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(21,566.6706);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(22,618.9054);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(23,487.3666);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(24,482.0806);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(25,294.171);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(26,464.7767);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(27,89.42314);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(28,374.9296);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(29,53.67467);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(30,34.47493);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetBinError(31,46.2304);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetEntries(30761);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(1,119.9921);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(2,427.9827);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(3,480.5292);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(4,382.5814);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(5,307.2747);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(6,241.6142);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(7,187.1934);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(8,153.1626);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(9,131.17);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(10,118.8959);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(11,101.8084);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(12,91.13771);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(13,77.6407);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(14,64.33744);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(15,58.90734);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(16,53.56588);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(17,38.63992);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(18,37.72635);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(19,29.23796);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(20,26.59912);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(21,20.46925);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(22,18.45543);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(23,16.61706);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(24,10.73235);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(25,9.129116);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(26,6.73329);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(27,5.537551);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(28,3.661804);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(29,2.145389);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(30,1.35417);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinContent(31,1.546739);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(1,4.568882);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(2,8.306936);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(3,8.780266);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(4,7.844243);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(5,6.989998);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(6,6.245024);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(7,5.407738);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(8,4.911973);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(9,4.505064);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(10,4.360776);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(11,4.03875);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(12,3.892115);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(13,3.574391);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(14,3.192869);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(15,3.084576);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(16,2.899642);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(17,2.3872);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(18,2.508871);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(19,2.243817);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(20,2.105987);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(21,1.736662);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(22,1.713058);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(23,1.693027);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(24,1.380276);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(25,1.277783);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(26,1.044501);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(27,1.027165);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(28,0.8114561);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(29,0.587521);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(30,0.4947965);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetBinError(31,0.5074715);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetEntries(36922);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(1,1776.784);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(2,7983.669);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(3,9490.405);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(4,8184.081);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(5,6326.009);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(6,4847.948);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(7,3796.009);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(8,3071.027);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(9,2538.31);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(10,2179.651);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(11,1898.33);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(12,1659.201);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(13,1458.317);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(14,1286.415);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(15,1122.111);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(16,975.0963);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(17,827.7892);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(18,705.4412);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(19,605.8863);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(20,480.8089);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(21,401.7897);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(22,314.8475);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(23,248.0054);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(24,187.3783);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(25,134.1463);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(26,99.39622);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(27,65.41263);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(28,40.61996);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(29,25.59111);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(30,13.38489);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinContent(31,24.07313);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(1,10.98612);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(2,23.24466);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(3,25.36171);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(4,23.55535);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(5,20.70492);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(6,18.11447);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(7,16.02633);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(8,14.40996);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(9,13.09623);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(10,12.13547);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(11,11.33305);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(12,10.59974);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(13,9.93313);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(14,9.329158);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(15,8.715925);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(16,8.123085);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(17,7.491343);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(18,6.908003);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(19,6.407486);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(20,5.692843);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(21,5.198307);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(22,4.600742);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(23,4.096409);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(24,3.554348);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(25,3.00593);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(26,2.592517);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(27,2.099022);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(28,1.646783);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(29,1.311747);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(30,0.9439823);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetBinError(31,1.257779);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetEntries(956114);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(1,326.953);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(2,1268.272);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(3,1322.838);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(4,973.4676);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(5,676.7837);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(6,511.7247);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(7,383.2233);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(8,337.4468);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(9,305.6339);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(10,263.9395);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(11,222.6593);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(12,191.6542);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(13,181.8911);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(14,171.2257);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(15,131.4712);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(16,128.2122);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(17,90.98604);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(18,77.6675);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(19,79.04186);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(20,58.24222);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(21,57.70117);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(22,35.95675);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(23,24.74627);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(24,23.12079);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(25,18.92008);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(26,12.34299);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(27,9.734725);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(28,4.758864);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.604654);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.60283);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinContent(31,3.028231);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(1,6.892625);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(2,20.80413);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(3,26.83896);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(4,23.34295);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(5,19.04281);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(6,16.50592);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(7,13.4221);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(8,13.85737);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(9,15.34407);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(10,12.59388);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(11,11.15448);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(12,10.71419);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(13,10.08902);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(14,10.78015);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(15,7.206895);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(16,9.037121);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(17,5.596237);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(18,5.268366);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(19,6.441452);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(20,4.452693);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(21,5.940138);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(22,3.872511);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(23,2.231062);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(24,2.183342);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(25,1.96336);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(26,1.548082);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(27,1.279144);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(28,0.855601);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(29,0.6131051);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(30,0.5850979);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetBinError(31,0.7716487);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetEntries(52923);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(1,58.06679);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(2,141.6745);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(3,135.7047);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(4,90.92413);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(5,58.55922);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(6,44.75101);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(7,38.14415);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(8,32.36777);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(9,28.2799);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(10,19.45179);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(11,18.54421);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(12,27.43705);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(13,16.22495);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(14,15.11632);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(15,13.26631);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(16,10.26495);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(17,7.949358);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(18,9.815525);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(19,7.234018);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(20,6.695599);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(21,5.692685);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(22,7.348934);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(23,6.311689);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(24,1.988697);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(25,2.456583);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(26,3.554063);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(27,1.140576);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(28,1.091346);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.5353272);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.08590732);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinContent(31,0.359435);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(1,5.404987);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(2,9.315845);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(3,13.34179);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(4,12.82761);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(5,5.749707);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(6,4.550766);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(7,4.753096);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(8,4.260042);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(9,3.478388);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(10,3.305293);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(11,3.343962);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(12,5.012829);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(13,2.765935);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(14,2.499929);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(15,2.292665);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(16,2.174036);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(17,1.091714);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(18,2.506852);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(19,1.489069);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(20,2.239865);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(21,1.447878);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(22,2.498424);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(23,1.911304);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(24,0.4755591);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(25,0.5786294);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(26,1.31454);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(27,0.3496849);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(28,0.3978152);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(29,0.2216809);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(30,0.08448428);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetBinError(31,0.2125622);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetEntries(8398);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(1,1.038455);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(2,0.586412);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(3,1.082654);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(5,0.5840445);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(7,0.5840445);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(8,0.586412);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(11,0.4496752);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(12,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(1,0.6532536);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(2,0.4715906);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(3,0.6349631);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(5,0.3681413);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(7,0.3681413);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(8,0.4715906);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(11,0.3427432);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(12,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(19,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetEntries(21);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(1,1.013067);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(2,1.541855);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(3,2.390429);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(4,0.4359249);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(5,0.4242871);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(6,0.2179625);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(7,0.4242871);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(8,0.6700051);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(9,0.4359249);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(10,0.4359249);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(11,0.5332684);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(12,0.2179625);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(13,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(14,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(15,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(16,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(19,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(1,0.6485076);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(2,0.5684291);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(3,0.7387158);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(4,0.2179625);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(5,0.3336086);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(6,0.1541227);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(7,0.3336086);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(8,0.4775944);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(9,0.2179625);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(10,0.2179625);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(11,0.3509582);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(12,0.1541227);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(13,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(14,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(15,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(16,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(17,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(19,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetBinError(20,0.1089812);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetEntries(62);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(1,8.74541);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(2,30.59392);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(3,29.18274);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(4,16.29917);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(5,10.94043);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(6,6.092003);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(7,6.916586);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(8,5.605589);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(9,6.811831);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(10,6.005929);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(11,4.096254);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(12,4.454235);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(13,2.054279);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(14,2.136712);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(15,2.110523);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(16,2.110523);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(17,1.246091);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.324657);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(19,1.344694);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(20,1.055261);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(21,0.4864143);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(23,1.282298);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(24,1.009036);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(25,1.055261);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(26,0.7758471);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(1,1.524576);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(2,2.833327);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(3,2.75011);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(4,2.073786);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(5,1.691355);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(6,1.244987);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(7,1.358897);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(8,1.196534);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(9,1.338209);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(10,1.254806);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(11,1.025635);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(12,1.082519);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(13,0.7279875);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(14,0.7568253);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(15,0.7475529);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(16,0.7475529);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(17,0.557377);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(18,0.5937311);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(19,0.6020495);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(20,0.5285997);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(21,0.3439469);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(23,0.5741008);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(24,0.5054914);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(25,0.5285997);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(26,0.4487152);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetBinError(28,0.2432072);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetEntries(591);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(1,6.088379);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(2,27.66514);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(3,28.71597);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(4,19.498);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(5,12.40995);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(6,8.376338);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(7,6.48821);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(8,5.529084);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(9,5.005819);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(10,4.585999);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(11,4.419004);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(12,4.152985);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(13,3.496005);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(14,2.816177);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(15,2.376958);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(16,1.937542);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.543962);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.148437);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(19,0.876382);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.6598142);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.6221362);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.5455433);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.4533062);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.3543337);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.2790924);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.2029939);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.1274003);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.06697169);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.02731346);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.009910478);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(1,0.1069789);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(2,0.2277719);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(3,0.2307009);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(4,0.1890957);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1506728);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1242311);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1093816);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1014473);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(9,0.09633834);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(10,0.09199754);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(11,0.09061049);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(12,0.08808591);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(13,0.0804967);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(14,0.07230079);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(15,0.06606216);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(16,0.06003468);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(17,0.05351575);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(18,0.04590933);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(19,0.04005521);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03492007);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(21,0.03368605);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(22,0.03177403);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(23,0.02934226);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(24,0.0257109);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(25,0.02308861);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(26,0.01945803);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(27,0.01530653);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(28,0.01125927);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(29,0.007216041);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetBinError(31,0.004513822);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetEntries(84809);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(1,2.273585);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(2,11.09899);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(3,13.28476);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(4,9.743349);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(5,6.487333);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(6,4.372913);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(7,3.212108);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(8,2.616613);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(9,2.156956);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(10,2.043071);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(11,1.857836);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(12,1.539507);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.354272);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.193735);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.068873);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(16,0.8836385);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(17,0.7203575);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.602356);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.4569124);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.4020281);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.3210736);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.300492);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.2538402);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.1591647);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.1234899);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.07409391);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.0576286);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.02332586);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.01783742);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.004116328);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.001372109);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(1,0.03303628);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(2,0.07299234);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(3,0.07985689);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(4,0.06838953);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(5,0.05580442);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(6,0.04581639);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(7,0.03926726);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(8,0.03544094);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(9,0.03217778);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(10,0.03131679);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(11,0.0298634);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(12,0.02718481);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(13,0.02549696);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(14,0.02393809);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(15,0.02265158);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(16,0.02059552);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(17,0.01859557);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(18,0.01700443);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01480989);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(20,0.01389196);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01241474);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(22,0.01201025);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(23,0.01103864);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(24,0.008740954);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(25,0.007699298);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(26,0.00596385);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(27,0.005259622);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(28,0.003346219);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(29,0.002926183);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(30,0.001405693);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetBinError(31,0.0008115772);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetEntries(150219);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.02535546);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.1180429);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.09016692);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.06207645);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.02093636);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.01535913);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.01315683);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.01546635);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.009570837);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.006943048);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.00589551);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.007990586);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.01568078);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.002627789);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.004208041);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.005788292);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(1,0.00754916);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(2,0.01640747);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(3,0.01434869);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(4,0.0118918);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(5,0.007157038);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(6,0.005973916);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(7,0.005128014);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(8,0.006021849);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(9,0.004877296);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(10,0.004108861);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(11,0.003531947);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(12,0.004614198);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(14,0.006116588);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(16,0.002627789);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(17,0.003066345);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(18,0.003449589);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.008669796);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.0524718);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.04262817);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.03102171);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.01686643);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.009406205);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.005994425);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.005071952);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.006028531);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.003989552);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.004691519);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.003250844);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.002535976);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.001821444);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.001014525);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.003458113);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.002501534);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.001521787);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.001671448);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.001971104);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.0007724772);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0007148681);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.001014525);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(24,0.0008069192);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(25,0.0009565794);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0005072625);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(1,0.001522233);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(2,0.003898372);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(3,0.003518717);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(4,0.00297942);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(5,0.002142341);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(6,0.001640349);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(7,0.001306371);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(8,0.001219635);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(9,0.001339678);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(10,0.0009829406);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(11,0.001153636);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(12,0.0009590356);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(13,0.0008624122);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(14,0.0006989114);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(15,0.0005155469);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(16,0.001020849);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(17,0.0008572663);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(18,0.0006314134);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(19,0.0006951415);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0007569781);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0004624274);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0004195169);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0005155469);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(24,0.0004718988);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(25,0.0005542809);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0003645467);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetEntries(775);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_all__670 = new TH1D("VbbHcc_both_Z_dR_Bj0_all__670","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(1,22356);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(2,82898);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(3,76420);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(4,56648);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(5,43602);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(6,33499);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(7,26552);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(8,21761);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(9,18569);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(10,15825);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(11,13975);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(12,12644);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(13,11015);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(14,9873);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(15,8733);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(16,7568);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(17,6210);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(18,5459);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(19,4713);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(20,3818);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(21,3275);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(22,2711);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(23,2113);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(24,1735);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(25,1375);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(26,1037);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(27,691);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(28,424);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(29,268);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(30,139);
   VbbHcc_both_Z_dR_Bj0_all__670->SetBinContent(31,226);
   VbbHcc_both_Z_dR_Bj0_all__670->SetEntries(496161);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_all__670->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_all__670->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj0_all__670->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj0_all__670->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_all__670->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_all__670->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_all__670->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fx1487[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fy1487[30] = {
   26227.98,
   107514.3,
   122094.4,
   74044.54,
   56268.38,
   49205.57,
   30564.45,
   29623.46,
   24314.14,
   40187.59,
   17393.52,
   18069.54,
   12108.12,
   12476.55,
   10725.41,
   9877.252,
   7738.5,
   6167.164,
   7064.384,
   5083.022,
   3309.411,
   2977.598,
   2307.496,
   1868.974,
   1226.15,
   1224.49,
   571.5618,
   641.3076,
   160.2368,
   71.39691};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fex1487[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj0_all_fey1487[30] = {
   1533.869,
   4375.954,
   15676.83,
   4095.211,
   3297.262,
   3698.633,
   2540.662,
   2814.833,
   2291.806,
   15016.31,
   1574.036,
   2134.573,
   1236.778,
   1388.062,
   1143.864,
   1297.63,
   1089.64,
   1534.866,
   1056.599,
   901.3877,
   566.7302,
   618.9421,
   487.396,
   482.1011,
   294.1967,
   464.7898,
   89.4635,
   374.9353,
   53.69787,
   34.49647};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fx1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fy1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fex1487,Graph_from_VbbHcc_both_Z_dR_Bj0_all_fey1487);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetMinimum(33.2104);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetMaximum(151544.7);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj0_all1487);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_both_all->cd();
  
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
   
   TH1D *data_mc_ratio__671 = new TH1D("data_mc_ratio__671","",30,0,6);
   data_mc_ratio__671->SetBinContent(1,0.8523722);
   data_mc_ratio__671->SetBinContent(2,0.7710413);
   data_mc_ratio__671->SetBinContent(3,0.6259089);
   data_mc_ratio__671->SetBinContent(4,0.765053);
   data_mc_ratio__671->SetBinContent(5,0.7748934);
   data_mc_ratio__671->SetBinContent(6,0.6807969);
   data_mc_ratio__671->SetBinContent(7,0.8687215);
   data_mc_ratio__671->SetBinContent(8,0.7345867);
   data_mc_ratio__671->SetBinContent(9,0.7637119);
   data_mc_ratio__671->SetBinContent(10,0.3937783);
   data_mc_ratio__671->SetBinContent(11,0.8034601);
   data_mc_ratio__671->SetBinContent(12,0.699741);
   data_mc_ratio__671->SetBinContent(13,0.9097199);
   data_mc_ratio__671->SetBinContent(14,0.7913246);
   data_mc_ratio__671->SetBinContent(15,0.8142346);
   data_mc_ratio__671->SetBinContent(16,0.766205);
   data_mc_ratio__671->SetBinContent(17,0.8024811);
   data_mc_ratio__671->SetBinContent(18,0.8851719);
   data_mc_ratio__671->SetBinContent(19,0.6671494);
   data_mc_ratio__671->SetBinContent(20,0.751128);
   data_mc_ratio__671->SetBinContent(21,0.9896022);
   data_mc_ratio__671->SetBinContent(22,0.9104655);
   data_mc_ratio__671->SetBinContent(23,0.9157114);
   data_mc_ratio__671->SetBinContent(24,0.9283166);
   data_mc_ratio__671->SetBinContent(25,1.121396);
   data_mc_ratio__671->SetBinContent(26,0.8468834);
   data_mc_ratio__671->SetBinContent(27,1.208968);
   data_mc_ratio__671->SetBinContent(28,0.6611492);
   data_mc_ratio__671->SetBinContent(29,1.672525);
   data_mc_ratio__671->SetBinContent(30,1.946863);
   data_mc_ratio__671->SetBinContent(31,1.853164);
   data_mc_ratio__671->SetBinError(1,0.005700753);
   data_mc_ratio__671->SetBinError(2,0.00267797);
   data_mc_ratio__671->SetBinError(3,0.002264163);
   data_mc_ratio__671->SetBinError(4,0.003214395);
   data_mc_ratio__671->SetBinError(5,0.003710981);
   data_mc_ratio__671->SetBinError(6,0.003719646);
   data_mc_ratio__671->SetBinError(7,0.005331286);
   data_mc_ratio__671->SetBinError(8,0.004979705);
   data_mc_ratio__671->SetBinError(9,0.00560448);
   data_mc_ratio__671->SetBinError(10,0.003130257);
   data_mc_ratio__671->SetBinError(11,0.006796548);
   data_mc_ratio__671->SetBinError(12,0.006222933);
   data_mc_ratio__671->SetBinError(13,0.008667931);
   data_mc_ratio__671->SetBinError(14,0.007963979);
   data_mc_ratio__671->SetBinError(15,0.008713002);
   data_mc_ratio__671->SetBinError(16,0.008807536);
   data_mc_ratio__671->SetBinError(17,0.01018331);
   data_mc_ratio__671->SetBinError(18,0.01198039);
   data_mc_ratio__671->SetBinError(19,0.009717944);
   data_mc_ratio__671->SetBinError(20,0.01215615);
   data_mc_ratio__671->SetBinError(21,0.01729239);
   data_mc_ratio__671->SetBinError(22,0.01748633);
   data_mc_ratio__671->SetBinError(23,0.0199209);
   data_mc_ratio__671->SetBinError(24,0.02228673);
   data_mc_ratio__671->SetBinError(25,0.03024181);
   data_mc_ratio__671->SetBinError(26,0.0262987);
   data_mc_ratio__671->SetBinError(27,0.04599132);
   data_mc_ratio__671->SetBinError(28,0.03210824);
   data_mc_ratio__671->SetBinError(29,0.1021657);
   data_mc_ratio__671->SetBinError(30,0.1651308);
   data_mc_ratio__671->SetBinError(31,0.7136361);
   data_mc_ratio__671->SetMinimum(0.4);
   data_mc_ratio__671->SetMaximum(1.6);
   data_mc_ratio__671->SetEntries(354.8494);
   data_mc_ratio__671->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__671->SetLineColor(ci);
   data_mc_ratio__671->SetLineWidth(2);
   data_mc_ratio__671->SetMarkerStyle(20);
   data_mc_ratio__671->SetMarkerSize(1.2);
   data_mc_ratio__671->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__671->GetXaxis()->SetRange(1,30);
   data_mc_ratio__671->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__671->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__671->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__671->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__671->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__671->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__671->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__671->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__671->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__671->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__671->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__671->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__671->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__671->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__671->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1488[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1488[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1488[30] = {
   0.05848217,
   0.04070112,
   0.1283992,
   0.05530741,
   0.05859883,
   0.07516695,
   0.08312471,
   0.09502041,
   0.09425816,
   0.3736555,
   0.09049551,
   0.118131,
   0.1021445,
   0.1112536,
   0.1066499,
   0.1313756,
   0.1408076,
   0.2488772,
   0.149567,
   0.177333,
   0.1712481,
   0.2078662,
   0.2112229,
   0.2579496,
   0.2399354,
   0.3795783,
   0.1565246,
   0.584642,
   0.3351158,
   0.4831648};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1488,Graph_from_mc_statistical_error_fy1488,Graph_from_mc_statistical_error_fex1488,Graph_from_mc_statistical_error_fey1488);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1488 = new TH1F("Graph_Graph_from_mc_statistical_error1488","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1488->SetMinimum(0.2984296);
   Graph_Graph_from_mc_statistical_error1488->SetMaximum(1.70157);
   Graph_Graph_from_mc_statistical_error1488->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1488->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1488->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1488);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->Modified();
   Z_dR_Bj0_both_all->cd();
   Z_dR_Bj0_both_all->SetSelected(Z_dR_Bj0_both_all);
}
