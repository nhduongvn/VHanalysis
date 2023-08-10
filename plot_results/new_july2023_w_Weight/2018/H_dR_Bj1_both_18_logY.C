void H_dR_Bj1_both_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_both_18/H_dR_Bj1_both_18
//=========  (Thu Aug 10 12:21:45 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_18 = new TCanvas("H_dR_Bj1_both_18", "H_dR_Bj1_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_18->SetHighLightColor(2);
   H_dR_Bj1_both_18->Range(0,0,1,1);
   H_dR_Bj1_both_18->SetFillColor(0);
   H_dR_Bj1_both_18->SetFillStyle(4000);
   H_dR_Bj1_both_18->SetBorderMode(0);
   H_dR_Bj1_both_18->SetBorderSize(2);
   H_dR_Bj1_both_18->SetFrameFillStyle(1000);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.873514,6.314516,12.50687);
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
   st->SetMinimum(0.01);
   st->SetMaximum(2.670479e+10);
   
   TH1F *st_stack_239 = new TH1F("st_stack_239","",30,0,6);
   st_stack_239->SetMinimum(0.001386329);
   st_stack_239->SetMaximum(9.307467e+10);
   st_stack_239->SetDirectory(0);
   st_stack_239->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_239->SetLineColor(ci);
   st_stack_239->GetXaxis()->SetRange(1,30);
   st_stack_239->GetXaxis()->SetLabelFont(42);
   st_stack_239->GetXaxis()->SetLabelSize(0.035);
   st_stack_239->GetXaxis()->SetTitleSize(0.035);
   st_stack_239->GetXaxis()->SetTitleFont(42);
   st_stack_239->GetYaxis()->SetTitle("Events/0.2");
   st_stack_239->GetYaxis()->SetLabelFont(42);
   st_stack_239->GetYaxis()->SetLabelSize(0.05);
   st_stack_239->GetYaxis()->SetTitleSize(0.057);
   st_stack_239->GetYaxis()->SetTitleOffset(1.2);
   st_stack_239->GetYaxis()->SetTitleFont(42);
   st_stack_239->GetZaxis()->SetLabelFont(42);
   st_stack_239->GetZaxis()->SetLabelSize(0.035);
   st_stack_239->GetZaxis()->SetTitleSize(0.035);
   st_stack_239->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_239);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,12943.98);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,32981.13);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,28394.92);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,25873.71);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,19325.36);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,16752.4);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,12355.85);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,6624.983);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,8669.091);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,7204.084);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,9052.959);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,7099.898);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,5831.434);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,8095.824);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,6655.523);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,4041.612);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,1962.856);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,2545.301);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,537.8195);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,828.8369);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,1099.712);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,225.2954);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,210.5491);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,98.57165);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,121.3994);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,6.294484);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,377.7098);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,10.94896);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,10.49506);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,1244.66);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,2323.376);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,2160.606);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,2713.748);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,2459.909);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,2421.534);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,1575.883);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,896.6721);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,1273.08);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,1207.72);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,1421.33);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,1206.47);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,955.5042);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,2057.308);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,1146.91);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,780.3285);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,224.048);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,757.6585);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,108.8162);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,385.3679);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,531.9867);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,64.72682);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,73.60692);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,47.77574);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,56.90885);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,6.294484);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,370.706);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,10.21404);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,10.19017);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(10527);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,83.54402);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,184.1288);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,195.8144);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,161.5556);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,122.6691);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,106.9875);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,85.94394);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,70.58013);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,59.81438);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,50.37987);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,45.79559);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,37.89574);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,38.01015);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,38.20622);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,32.99504);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,24.67644);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,14.2819);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,11.48799);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,6.564505);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,5.022287);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,4.771011);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,3.018395);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,1.445107);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,0.5134287);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,0.8624523);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,0.5485958);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,0.4257196);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,0.5951439);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(30,0.04982199);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,0.1148528);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,3.91857);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,5.46614);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,5.662924);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,5.225915);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,4.4673);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,4.264848);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,3.776203);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,3.427777);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,3.173689);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,2.860894);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,2.80976);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,2.491979);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,2.486757);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,2.54667);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,2.358001);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,1.903742);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,1.492929);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,1.278732);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,1.009207);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,0.7922829);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,0.8931451);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,0.7238219);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,0.4472922);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,0.1630002);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,0.4147654);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,0.2971573);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,0.2894179);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.3888393);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(30,0.04982199);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.08192212);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(15109);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,1216.821);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,3664.94);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,4022.548);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,3386.946);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,2739.972);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,2145.209);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,1728.252);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,1405.517);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,1157.636);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,1000.7);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,853.6424);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,758.4695);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,691.9721);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,619.0581);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,572.4262);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,518.3248);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,295.9692);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,188.4984);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,132.3681);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,87.31057);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,57.11774);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,36.55766);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,24.9405);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,15.87903);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,9.394615);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,4.587475);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,3.29226);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,1.752593);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,1.677106);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,0.5948163);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,1.459201);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,9.385587);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,16.28341);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,17.06793);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,15.66354);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,14.08142);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,12.44875);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,11.17388);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,10.0693);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,9.140802);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,8.498463);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,7.846965);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,7.395234);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,7.070912);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,6.688566);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,6.429835);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,6.116938);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,4.623487);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,3.687149);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,3.088959);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,2.505786);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,2.034008);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,1.61499);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,1.338648);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,1.068262);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,0.8199987);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,0.5686018);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,0.48538);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,0.3500452);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,0.3500097);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,0.2103855);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,0.3283508);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(383737);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,228.7434);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,544.2263);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,501.6714);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,398.2049);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,279.0488);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,215.9187);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,185.4375);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,127.9999);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,126.6902);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,122.4437);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,107.6266);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,100.4947);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,90.33785);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,83.11705);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,83.09045);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,72.35662);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,44.09002);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,28.90127);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,12.73602);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,10.16675);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,6.00352);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,4.937474);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,3.451092);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,1.486382);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,0.3109243);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,0.9571067);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,0.2183513);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,0.1257783);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(30,0.09257296);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,0.2183513);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,7.403498);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,14.38397);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,12.89987);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,15.70662);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,11.60954);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,11.17386);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,12.27265);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,7.457777);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,8.410084);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,10.60827);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,7.123137);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,6.835996);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,7.626124);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,7.327185);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,5.184735);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,7.09976);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,5.302412);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,6.176787);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,1.99505);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,1.80772);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,1.049424);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,1.268026);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,1.109478);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,0.6139625);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,0.1815481);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,0.565332);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,0.1561728);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,0.1257783);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(30,0.09257296);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.1561728);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(19219);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,33.75735);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,55.06665);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,51.11828);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,46.15208);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,34.8486);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,17.594);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,18.92019);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,9.013394);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,17.08588);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,6.51574);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,5.994544);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,6.723498);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,6.036256);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,5.632715);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,13.08265);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,6.13784);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,2.168732);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,4.009942);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,1.481304);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,1.129334);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,3.145262);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,0.5930124);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,0.1263986);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(27,0.1263986);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,3.610918);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,5.091759);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,6.72933);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,11.54918);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,5.882108);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,3.320113);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,3.956463);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,2.37004);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,4.371421);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,1.122644);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,1.0087);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,1.198252);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,1.080675);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,1.076311);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,4.104033);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,1.106214);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,0.5960235);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,2.152642);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,0.4503655);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,0.4886019);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,2.128002);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,0.372059);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,0.1263986);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(27,0.1263986);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(2591);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,1.356128);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,0.4520427);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.7829609);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,0.4520427);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,2.479394);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,2.833593);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,2.125195);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.9371228);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,1.001826);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.8676071);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(11,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(18,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,6.985359);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,14.25013);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,9.500088);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,6.985359);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,3.632387);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,3.632387);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.9559);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,2.235315);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.117657);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,2.514729);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.995418);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.629252);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.397072);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,1.007443);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,1.007443);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.7392609);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.4839599);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.7903031);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.6247895);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.5588287);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.8382431);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.6247895);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(23,0.2794144);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,3.977255);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,12.77065);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,11.34889);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,7.552213);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,4.87328);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,3.396667);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,2.70179);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,2.315494);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,2.002342);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,1.817194);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,1.627474);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,1.636618);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,1.497185);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,1.485756);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,1.412611);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,1.241178);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,0.6377322);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.422869);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.2742934);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.1417183);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.08914537);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.05028713);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.02057201);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.01371467);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.02057201);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.009143115);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.004571557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.09534739);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.1708534);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1610623);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.1313875);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.1055426);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.08811373);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.07858559);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.07275099);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.06765287);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.06444923);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.06099218);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.06116327);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.05849986);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.05827615);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.05682356);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.05326404);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.03818003);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.03108995);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.02503945);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.01799824);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.01427468);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.01072125);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.006857336);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.005598991);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.006857336);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.004571557);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(30,0.002285779);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.003232579);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,1.493947);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,5.060298);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,5.629193);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,4.22787);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,2.855829);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,1.879385);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,1.425226);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,1.213683);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,1.057117);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,0.8401958);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,0.7864137);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,0.7027527);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,0.5922006);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,0.5659072);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,0.5073444);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.4786606);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.2491904);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.1428213);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.08007556);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.04661115);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.03884262);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.01912252);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.01075642);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.008963682);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.002390315);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.001792736);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.003585473);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.001195158);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.001195158);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.02987894);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.05499024);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.05799902);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.05026416);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.04131081);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.0335124);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.02918364);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.02693086);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.02513386);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.02240721);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.0216782);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.02049268);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.01881187);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.01838951);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.01741202);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01691264);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.01220291);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.009238345);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.006917475);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.005277673);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.004817835);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.003380416);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.002535312);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.002314413);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.001195158);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.001035037);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.001463763);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.0008451041);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0008451041);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.005255579);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.04730021);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.03941684);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.0236501);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.01051116);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.01839453);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.01051116);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.007883368);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.003716255);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.01114877);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.01017738);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.007883368);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.005255579);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.006952477);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.005255579);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.004551465);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.002627789);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(69);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.003895538);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.01887838);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01708044);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.01648112);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.00839039);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.009888674);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.003895538);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.002397254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.002397254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.001797941);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.0008989704);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(20,0.0008989704);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.001080428);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.002378452);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.002262359);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.002222314);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001585635);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.001721397);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.000947598);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.001080428);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0008475574);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0008475574);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0007340063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.0005190208);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.0004237787);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(20,0.0005190208);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__656 = new TH1D("VbbHcc_both_H_dR_Bj1__656","",30,0,6);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(1,17601);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(2,49200);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(3,46400);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(4,36255);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(5,28560);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(6,22834);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(7,18551);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(8,15431);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(9,13405);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(10,11913);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(11,10553);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(12,9722);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(13,8765);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(14,8165);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(15,7929);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(16,7352);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(17,4204);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(18,2827);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(19,1987);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(20,1376);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(21,930);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(22,664);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(23,424);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(24,289);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(25,174);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(26,120);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(27,55);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(28,28);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(29,13);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(30,18);
   VbbHcc_both_H_dR_Bj1__656->SetBinContent(31,22);
   VbbHcc_both_H_dR_Bj1__656->SetEntries(325796);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__656->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__656->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__656->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__656->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__656->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__656->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__656->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1477[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1477[30] = {
   14519.31,
   37464.12,
   33196.8,
   29887.95,
   22514.44,
   19247.75,
   14381.42,
   8243.937,
   10036.61,
   8387.628,
   10071.38,
   8008.338,
   6661.28,
   8845.012,
   7359.673,
   4667.346,
   2321.654,
   2779.119,
   691.6039,
   932.6551,
   1170.877,
   270.4714,
   240.6968,
   116.5996,
   131.9904,
   12.3986,
   381.7784,
   12.82853,
   12.76959,
   0.7394971};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1477[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1477[30] = {
   1244.729,
   2323.491,
   2160.731,
   2713.869,
   2459.988,
   2421.598,
   1575.98,
   896.7697,
   1273.153,
   1207.8,
   1421.373,
   1206.516,
   955.5648,
   2057.334,
   1146.95,
   780.3884,
   224.165,
   757.6969,
   108.8843,
   385.3814,
   531.9966,
   64.7645,
   73.62934,
   47.79208,
   56.91656,
   6.352304,
   370.7065,
   10.22081,
   10.20359,
   0.2352005};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1477,Graph_from_VbbHcc_both_H_dR_Bj1_fy1477,Graph_from_VbbHcc_both_H_dR_Bj1_fex1477,Graph_from_VbbHcc_both_H_dR_Bj1_fey1477);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11477 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11477","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetMinimum(0.4538669);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetMaximum(43766.32);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11477->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11477);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__657 = new TH1D("data_mc_ratio__657","",30,0,6);
   data_mc_ratio__657->SetBinContent(1,1.212248);
   data_mc_ratio__657->SetBinContent(2,1.313257);
   data_mc_ratio__657->SetBinContent(3,1.397725);
   data_mc_ratio__657->SetBinContent(4,1.213031);
   data_mc_ratio__657->SetBinContent(5,1.268519);
   data_mc_ratio__657->SetBinContent(6,1.18632);
   data_mc_ratio__657->SetBinContent(7,1.289929);
   data_mc_ratio__657->SetBinContent(8,1.8718);
   data_mc_ratio__657->SetBinContent(9,1.335611);
   data_mc_ratio__657->SetBinContent(10,1.420306);
   data_mc_ratio__657->SetBinContent(11,1.047821);
   data_mc_ratio__657->SetBinContent(12,1.213985);
   data_mc_ratio__657->SetBinContent(13,1.315813);
   data_mc_ratio__657->SetBinContent(14,0.9231192);
   data_mc_ratio__657->SetBinContent(15,1.077358);
   data_mc_ratio__657->SetBinContent(16,1.575199);
   data_mc_ratio__657->SetBinContent(17,1.810778);
   data_mc_ratio__657->SetBinContent(18,1.017229);
   data_mc_ratio__657->SetBinContent(19,2.873032);
   data_mc_ratio__657->SetBinContent(20,1.475358);
   data_mc_ratio__657->SetBinContent(21,0.7942761);
   data_mc_ratio__657->SetBinContent(22,2.454973);
   data_mc_ratio__657->SetBinContent(23,1.761552);
   data_mc_ratio__657->SetBinContent(24,2.478568);
   data_mc_ratio__657->SetBinContent(25,1.318278);
   data_mc_ratio__657->SetBinContent(26,9.678514);
   data_mc_ratio__657->SetBinContent(27,0.1440626);
   data_mc_ratio__657->SetBinContent(28,2.182636);
   data_mc_ratio__657->SetBinContent(29,1.018043);
   data_mc_ratio__657->SetBinContent(30,24.34087);
   data_mc_ratio__657->SetBinContent(31,12.23465);
   data_mc_ratio__657->SetBinError(1,0.0091374);
   data_mc_ratio__657->SetBinError(2,0.005920618);
   data_mc_ratio__657->SetBinError(3,0.006488776);
   data_mc_ratio__657->SetBinError(4,0.00637071);
   data_mc_ratio__657->SetBinError(5,0.007506163);
   data_mc_ratio__657->SetBinError(6,0.007850747);
   data_mc_ratio__657->SetBinError(7,0.009470699);
   data_mc_ratio__657->SetBinError(8,0.01506823);
   data_mc_ratio__657->SetBinError(9,0.01153577);
   data_mc_ratio__657->SetBinError(10,0.01301282);
   data_mc_ratio__657->SetBinError(11,0.01019997);
   data_mc_ratio__657->SetBinError(12,0.01231219);
   data_mc_ratio__657->SetBinError(13,0.01405459);
   data_mc_ratio__657->SetBinError(14,0.01021597);
   data_mc_ratio__657->SetBinError(15,0.01209903);
   data_mc_ratio__657->SetBinError(16,0.018371);
   data_mc_ratio__657->SetBinError(17,0.02792762);
   data_mc_ratio__657->SetBinError(18,0.0191318);
   data_mc_ratio__657->SetBinError(19,0.06445276);
   data_mc_ratio__657->SetBinError(20,0.03977298);
   data_mc_ratio__657->SetBinError(21,0.02604534);
   data_mc_ratio__657->SetBinError(22,0.09527144);
   data_mc_ratio__657->SetBinError(23,0.08554853);
   data_mc_ratio__657->SetBinError(24,0.1457981);
   data_mc_ratio__657->SetBinError(25,0.0999384);
   data_mc_ratio__657->SetBinError(26,0.8835234);
   data_mc_ratio__657->SetBinError(27,0.0194254);
   data_mc_ratio__657->SetBinError(28,0.4124794);
   data_mc_ratio__657->SetBinError(29,0.2823544);
   data_mc_ratio__657->SetBinError(30,5.737197);
   data_mc_ratio__657->SetBinError(31,3.638041);
   data_mc_ratio__657->SetMinimum(0.4);
   data_mc_ratio__657->SetMaximum(1.6);
   data_mc_ratio__657->SetEntries(43.65149);
   data_mc_ratio__657->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__657->SetLineColor(ci);
   data_mc_ratio__657->SetLineWidth(2);
   data_mc_ratio__657->SetMarkerStyle(20);
   data_mc_ratio__657->SetMarkerSize(1.2);
   data_mc_ratio__657->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__657->GetXaxis()->SetRange(1,30);
   data_mc_ratio__657->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__657->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__657->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__657->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__657->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__657->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__657->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__657->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__657->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__657->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__657->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__657->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__657->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__657->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__657->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1478[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1478[30] = {
   0.08572921,
   0.0620191,
   0.06508854,
   0.09080144,
   0.1092627,
   0.125812,
   0.1095845,
   0.1087793,
   0.1268509,
   0.1439978,
   0.1411299,
   0.1506575,
   0.1434506,
   0.2325982,
   0.1558425,
   0.1672017,
   0.09655403,
   0.2726392,
   0.1574374,
   0.413209,
   0.4543572,
   0.2394505,
   0.3059008,
   0.4098821,
   0.4312176,
   0.5123405,
   0.9709992,
   0.7967255,
   0.7990539,
   0.3180547};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1478,Graph_from_mc_statistical_error_fy1478,Graph_from_mc_statistical_error_fex1478,Graph_from_mc_statistical_error_fey1478);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1478 = new TH1F("Graph_Graph_from_mc_statistical_error1478","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1478->SetMinimum(0.02610068);
   Graph_Graph_from_mc_statistical_error1478->SetMaximum(2.165199);
   Graph_Graph_from_mc_statistical_error1478->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1478->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1478->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1478);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->SetSelected(H_dR_Bj1_both_18);
}
