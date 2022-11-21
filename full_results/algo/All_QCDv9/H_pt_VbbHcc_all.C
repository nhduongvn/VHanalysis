void H_pt_VbbHcc_all()
{
//=========Macro generated from canvas: H_pt_VbbHcc_all/H_pt_VbbHcc_all
//=========  (Mon Nov 21 13:06:14 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_all = new TCanvas("H_pt_VbbHcc_all", "H_pt_VbbHcc_all",0,0,600,600);
   H_pt_VbbHcc_all->SetHighLightColor(2);
   H_pt_VbbHcc_all->Range(0,0,1,1);
   H_pt_VbbHcc_all->SetFillColor(0);
   H_pt_VbbHcc_all->SetFillStyle(4000);
   H_pt_VbbHcc_all->SetBorderMode(0);
   H_pt_VbbHcc_all->SetBorderSize(2);
   H_pt_VbbHcc_all->SetFrameFillStyle(1000);
   H_pt_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-8595.756,1562.903,8587459);
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
   st->SetMaximum(7359861);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",40,0,2000);
   st_stack_16->SetMinimum(0.3);
   st_stack_16->SetMaximum(7727854);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetRange(7,30);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetLabelSize(0.035);
   st_stack_16->GetXaxis()->SetTitleSize(0.035);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/50.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetLabelSize(0.05);
   st_stack_16->GetYaxis()->SetTitleSize(0.057);
   st_stack_16->GetYaxis()->SetTitleOffset(1.2);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetLabelSize(0.035);
   st_stack_16->GetZaxis()->SetTitleSize(0.035);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_algo_H_pt_all_stack_1 = new TH1D("VbbHcc_algo_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(1,798257.3);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(2,3199119);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(3,2582044);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(4,239341.5);
   VbbHcc_algo_H_pt_all_stack_1->SetBinContent(5,8274.617);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(1,32786.19);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(2,65520.81);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(3,58906.57);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(4,17956.36);
   VbbHcc_algo_H_pt_all_stack_1->SetBinError(5,3408.661);
   VbbHcc_algo_H_pt_all_stack_1->SetEntries(5252);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_2 = new TH1D("VbbHcc_algo_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(1,2672.844);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(2,12531.66);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(3,12836.36);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(4,5892.692);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(5,2775.968);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(6,1407.969);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(7,795.4883);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(8,479.5095);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(9,295.4815);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(10,177.4952);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(11,118.0377);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(12,76.94643);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(13,49.56382);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(14,43.78933);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(15,28.59543);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(16,16.60429);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(17,16.80481);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(18,10.70664);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(19,7.340504);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(20,6.125973);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(21,3.227689);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(22,4.547584);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(23,0.618834);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(24,1.015988);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(25,1.525573);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(26,0.4095798);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(27,1.207286);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(28,1.105026);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(30,0.716189);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(33,0.3305);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(36,0.4275483);
   VbbHcc_algo_H_pt_all_stack_2->SetBinContent(38,0.09221279);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(1,18.09365);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(2,39.54435);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(3,41.46393);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(4,29.26548);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(5,21.12194);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(6,15.66425);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(7,11.98826);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(8,9.681022);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(9,7.835475);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(10,6.073949);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(11,5.146507);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(12,4.161047);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(13,3.369377);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(14,3.245264);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(15,2.837114);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(16,1.997421);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(17,2.059875);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(18,1.657112);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(19,1.346555);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(20,1.215717);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(21,0.9318768);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(22,1.111039);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(23,0.6291035);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(24,0.4745406);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(25,0.6196918);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(26,0.3291352);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(27,0.5593427);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(28,0.5824223);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(30,0.4614585);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(33,0.3305);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(36,0.3402989);
   VbbHcc_algo_H_pt_all_stack_2->SetBinError(38,0.06520429);
   VbbHcc_algo_H_pt_all_stack_2->SetEntries(660055);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_2,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_3 = new TH1D("VbbHcc_algo_H_pt_all_stack_3","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(1,16789.36);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(2,93990.18);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(3,124979);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(4,56471.37);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(5,23986.03);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(6,11861.3);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(7,6369.644);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(8,3593.269);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(9,2095.27);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(10,1288.493);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(11,865.7245);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(12,555.0843);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(13,383.1456);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(14,262.2742);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(15,177.1505);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(16,118.0236);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(17,89.14326);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(18,63.15977);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(19,40.04757);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(20,33.55616);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(21,27.18596);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(22,16.35962);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(23,13.95759);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(24,9.785527);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(25,7.03151);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(26,5.484072);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(27,3.509645);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(28,3.045974);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(29,2.944745);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(30,2.041236);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(31,1.104892);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(32,1.098531);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(33,0.4545339);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(34,0.6231592);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(35,0.3259933);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(36,0.1079336);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(37,0.04065973);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(38,0.3213126);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(39,0.07282258);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(40,0.2252685);
   VbbHcc_algo_H_pt_all_stack_3->SetBinContent(41,0.20971);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(1,33.44637);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(2,78.81749);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(3,90.65937);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(4,60.03305);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(5,38.75804);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(6,27.26134);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(7,20.06599);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(8,15.1719);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(9,11.61936);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(10,9.182218);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(11,7.58625);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(12,6.11616);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(13,5.129551);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(14,4.243295);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(15,3.497631);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(16,2.846402);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(17,2.493969);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(18,2.091883);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(19,1.670327);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(20,1.536842);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(21,1.36507);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(22,1.070295);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(23,0.9981439);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(24,0.8336409);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(25,0.6927213);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(26,0.6216773);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(27,0.5016273);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(28,0.4610534);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(29,0.4534172);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(30,0.3785715);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(31,0.2919206);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(32,0.2913548);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(33,0.2110382);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(34,0.2141219);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(35,0.1545252);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(36,0.07632058);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(37,0.04065973);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(38,0.1490593);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(39,0.07282258);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(40,0.1304132);
   VbbHcc_algo_H_pt_all_stack_3->SetBinError(41,0.1211289);
   VbbHcc_algo_H_pt_all_stack_3->SetEntries(5745826);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_pt_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_3,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_4 = new TH1D("VbbHcc_algo_H_pt_all_stack_4","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(1,192.0287);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(2,976.529);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(3,2685.929);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(4,4599.074);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(5,3390.267);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(6,999.5435);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(7,98.93949);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(8,1.324039);
   VbbHcc_algo_H_pt_all_stack_4->SetBinContent(9,1.109632);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(1,7.963259);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(2,18.04821);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(3,30.04716);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(4,39.38145);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(5,33.83751);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(6,18.39226);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(7,5.768107);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(8,0.6697243);
   VbbHcc_algo_H_pt_all_stack_4->SetBinError(9,0.555718);
   VbbHcc_algo_H_pt_all_stack_4->SetEntries(40350);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_pt_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_4,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_5 = new TH1D("VbbHcc_algo_H_pt_all_stack_5","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(1,119.2897);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(2,425.0201);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(3,1220.094);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(4,1935.165);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(5,1504.956);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(6,435.0882);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(7,68.5113);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(8,7.074139);
   VbbHcc_algo_H_pt_all_stack_5->SetBinContent(9,2.165046);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(1,11.9433);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(2,22.24801);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(3,38.0863);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(4,48.21991);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(5,42.41049);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(6,22.77608);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(7,9.070101);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(8,3.229399);
   VbbHcc_algo_H_pt_all_stack_5->SetBinError(9,1.530918);
   VbbHcc_algo_H_pt_all_stack_5->SetEntries(4995);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_pt_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_5,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_6 = new TH1D("VbbHcc_algo_H_pt_all_stack_6","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(1,18.23649);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(2,66.68274);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(3,45.97138);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(4,22.6613);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(5,11.61466);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(6,5.941995);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(7,5.265073);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(8,2.346824);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(9,1.753221);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(10,0.5651151);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(11,0.6124692);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(12,0.6753797);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(13,0.4703074);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(14,0.1827074);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(15,0.1749632);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(16,0.4709969);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(17,0.2436051);
   VbbHcc_algo_H_pt_all_stack_6->SetBinContent(20,0.1791638);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(1,1.712216);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(2,3.22838);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(3,2.695613);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(4,1.929793);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(5,1.255589);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(6,0.9623667);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(7,0.7842564);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(8,0.6007208);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(9,0.4765489);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(10,0.2307167);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(11,0.3100982);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(12,0.369408);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(13,0.2320769);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(14,0.1291936);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(15,0.1237177);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(16,0.3339932);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(17,0.2436051);
   VbbHcc_algo_H_pt_all_stack_6->SetBinError(20,0.1266879);
   VbbHcc_algo_H_pt_all_stack_6->SetEntries(1494);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_pt_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_6,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_7 = new TH1D("VbbHcc_algo_H_pt_all_stack_7","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(1,56.34352);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(2,191.7203);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(3,174.5957);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(4,102.7481);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(5,53.94814);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(6,35.66538);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(7,21.90344);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(8,12.19905);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(9,6.361326);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(10,3.079821);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(11,2.369718);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(12,0.9975585);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(13,0.5495161);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(14,0.1375578);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(15,0.1148049);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(16,0.1828711);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(18,0.1256916);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(19,0.1336814);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(20,0.1676428);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(25,0.1336818);
   VbbHcc_algo_H_pt_all_stack_7->SetBinContent(29,0.05125148);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(1,2.555067);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(2,4.642726);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(3,4.36791);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(4,3.398937);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(5,2.45685);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(6,1.967809);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(7,1.59759);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(8,1.176716);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(9,0.8104223);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(10,0.5783166);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(11,0.5433095);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(12,0.2972016);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(13,0.1944924);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(14,0.09726803);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(15,0.0811793);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(16,0.1828711);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(18,0.08887738);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(19,0.09452704);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(20,0.1676428);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(22,0.1236251);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(25,0.1336818);
   VbbHcc_algo_H_pt_all_stack_7->SetBinError(29,0.03624027);
   VbbHcc_algo_H_pt_all_stack_7->SetEntries(7384);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_pt_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_7,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_8 = new TH1D("VbbHcc_algo_H_pt_all_stack_8","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(1,71.52084);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(2,222.8818);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(3,148.5332);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(4,98.44053);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(5,48.25513);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(6,31.57933);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(7,12.05281);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(8,6.886746);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(9,4.658336);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(10,2.773291);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(11,1.255573);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(12,0.2056985);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(15,0.2274369);
   VbbHcc_algo_H_pt_all_stack_8->SetBinContent(17,0.3763938);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(1,3.826568);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(2,6.723282);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(3,5.497263);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(4,4.459497);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(5,3.15256);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(6,2.544383);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(7,1.586807);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(8,1.166265);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(9,0.9438655);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(10,0.7448159);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(11,0.4957353);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(12,0.2056985);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(15,0.2274369);
   VbbHcc_algo_H_pt_all_stack_8->SetBinError(17,0.2661506);
   VbbHcc_algo_H_pt_all_stack_8->SetEntries(3300);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_pt_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_8,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_9 = new TH1D("VbbHcc_algo_H_pt_all_stack_9","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(1,9.124027);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(2,43.26997);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(3,45.13842);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(4,30.34864);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(5,19.6613);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(6,11.84938);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(7,7.49132);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(8,4.723298);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(9,2.770818);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(10,1.522066);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(11,0.8101875);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(12,0.4253055);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(13,0.2096918);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(14,0.1128099);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(15,0.04401319);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(16,0.04692799);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(17,0.01100974);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(18,0.01989863);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(19,0.01214209);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(20,0.009064093);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(21,0.01460007);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(22,0.0050752);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(23,0.001975509);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(24,0.003318872);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(27,0.001858148);
   VbbHcc_algo_H_pt_all_stack_9->SetBinContent(34,0.002922937);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(1,0.1241829);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(2,0.2719125);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(3,0.2772302);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(4,0.2277159);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(5,0.1832214);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(6,0.1430699);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(7,0.1126519);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(8,0.09005353);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(9,0.06851541);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(10,0.05096818);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(11,0.037202);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(12,0.02649902);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(13,0.01830517);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(14,0.013457);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(15,0.008597932);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(16,0.009148981);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(17,0.003929637);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(18,0.005840328);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(19,0.004294166);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(20,0.003701433);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(21,0.004814901);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(22,0.002599922);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(23,0.001975509);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(24,0.002346797);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(27,0.001858148);
   VbbHcc_algo_H_pt_all_stack_9->SetBinError(34,0.002066828);
   VbbHcc_algo_H_pt_all_stack_9->SetEntries(116514);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_pt_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_9,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_10 = new TH1D("VbbHcc_algo_H_pt_all_stack_10","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(1,1.101539);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(2,5.705776);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(3,11.67277);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(4,11.01445);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(5,6.75211);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(6,4.064394);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(7,2.275667);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(8,1.424479);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(9,0.8826985);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(10,0.5563303);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(11,0.3433742);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(12,0.2579472);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(13,0.1505392);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(14,0.1144057);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(15,0.09122166);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(16,0.05824104);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(17,0.04968844);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(18,0.02952905);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(19,0.02870127);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(20,0.02661939);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(21,0.007395866);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(22,0.01896464);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(23,0.007093098);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(24,0.00514316);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(25,0.002724406);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(26,0.003564661);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(27,0.0070181);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(28,0.002594206);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(29,0.004876139);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(30,0.001188391);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(31,0.002414114);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(32,0.001226906);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(34,0.002422577);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(35,0.00122692);
   VbbHcc_algo_H_pt_all_stack_10->SetBinContent(41,0.001188087);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(1,0.02116686);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(2,0.0481996);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(3,0.06887296);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(4,0.06691459);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(5,0.05229539);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(6,0.04049838);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(7,0.03030229);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(8,0.02395368);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(9,0.01882447);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(10,0.01498939);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(11,0.01176422);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(12,0.01025773);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(13,0.007818772);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(14,0.006805462);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(15,0.006065775);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(16,0.004846502);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(17,0.004464143);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(18,0.003427463);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(19,0.003389062);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(20,0.003367638);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(21,0.001750885);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(22,0.002765296);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(23,0.001677043);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(24,0.001440425);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(25,0.001115019);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(26,0.001197225);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(27,0.001668552);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(28,0.001062824);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(29,0.001413944);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(30,0.0006878337);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(31,0.0009880515);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(32,0.0007101261);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(34,0.0009917326);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(35,0.0007101341);
   VbbHcc_algo_H_pt_all_stack_10->SetBinError(41,0.0006876577);
   VbbHcc_algo_H_pt_all_stack_10->SetEntries(117744);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_pt_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_10,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_11 = new TH1D("VbbHcc_algo_H_pt_all_stack_11","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(1,0.3191552);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(2,1.60282);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(3,1.711553);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(4,0.9547196);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(5,0.3287592);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(6,0.1688898);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(7,0.09974644);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(8,0.09969491);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(9,0.06412317);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(10,0.03503853);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(11,0.004594969);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(12,0.002942536);
   VbbHcc_algo_H_pt_all_stack_11->SetBinContent(14,0.00459557);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(1,0.02313999);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(2,0.05251679);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(3,0.0537581);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(4,0.04030953);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(5,0.02357127);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(6,0.016707);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(7,0.01282492);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(8,0.01279188);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(9,0.01036033);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(10,0.007490971);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(11,0.002655305);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(12,0.002114899);
   VbbHcc_algo_H_pt_all_stack_11->SetBinError(14,0.002654365);
   VbbHcc_algo_H_pt_all_stack_11->SetEntries(3789);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_11,"");
   
   TH1D *VbbHcc_algo_H_pt_all_stack_12 = new TH1D("VbbHcc_algo_H_pt_all_stack_12","",40,0,2000);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(1,801.4598);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(2,4362.827);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(3,9861.46);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(4,8058.5);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(5,3575.77);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(6,1495.784);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(7,936.4102);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(8,400.6308);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(9,336.2422);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(10,162.3138);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(11,122.4951);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(12,44.84564);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(13,45.44019);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(14,24.44869);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(15,8.121913);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(17,8.763785);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(18,8.1554);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(20,17.12691);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(22,4.68262);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(23,8.319342);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(24,7.39988);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(25,8.569034);
   VbbHcc_algo_H_pt_all_stack_12->SetBinContent(27,8.763785);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(1,60.89375);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(2,141.9334);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(3,212.1484);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(4,192.6591);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(5,127.4175);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(6,80.72534);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(7,63.9485);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(8,41.62916);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(9,37.95789);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(10,25.49512);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(11,22.66041);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(12,13.81206);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(13,14.26247);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(14,10.03288);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(15,5.74306);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(17,6.196932);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(18,5.766739);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(20,8.57924);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(22,3.311112);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(23,5.882663);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(24,5.232506);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(25,6.059222);
   VbbHcc_algo_H_pt_all_stack_12->SetBinError(27,6.196932);
   VbbHcc_algo_H_pt_all_stack_12->SetEntries(7489);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_pt_all_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_pt_all__31 = new TH1D("VbbHcc_algo_H_pt_all__31","",40,0,2000);
   VbbHcc_algo_H_pt_all__31->SetBinContent(1,12604);
   VbbHcc_algo_H_pt_all__31->SetBinContent(2,52268);
   VbbHcc_algo_H_pt_all__31->SetBinContent(3,100696);
   VbbHcc_algo_H_pt_all__31->SetBinContent(4,123601);
   VbbHcc_algo_H_pt_all__31->SetBinContent(5,102643);
   VbbHcc_algo_H_pt_all__31->SetBinContent(6,88353);
   VbbHcc_algo_H_pt_all__31->SetBinContent(7,84737);
   VbbHcc_algo_H_pt_all__31->SetBinContent(8,71776);
   VbbHcc_algo_H_pt_all__31->SetBinContent(9,50565);
   VbbHcc_algo_H_pt_all__31->SetBinContent(10,31951);
   VbbHcc_algo_H_pt_all__31->SetBinContent(11,20080);
   VbbHcc_algo_H_pt_all__31->SetBinContent(12,12390);
   VbbHcc_algo_H_pt_all__31->SetBinContent(13,7895);
   VbbHcc_algo_H_pt_all__31->SetBinContent(14,5074);
   VbbHcc_algo_H_pt_all__31->SetBinContent(15,3398);
   VbbHcc_algo_H_pt_all__31->SetBinContent(16,2090);
   VbbHcc_algo_H_pt_all__31->SetBinContent(17,1505);
   VbbHcc_algo_H_pt_all__31->SetBinContent(18,995);
   VbbHcc_algo_H_pt_all__31->SetBinContent(19,707);
   VbbHcc_algo_H_pt_all__31->SetBinContent(20,572);
   VbbHcc_algo_H_pt_all__31->SetBinContent(21,366);
   VbbHcc_algo_H_pt_all__31->SetBinContent(22,279);
   VbbHcc_algo_H_pt_all__31->SetBinContent(23,244);
   VbbHcc_algo_H_pt_all__31->SetBinContent(24,155);
   VbbHcc_algo_H_pt_all__31->SetBinContent(25,100);
   VbbHcc_algo_H_pt_all__31->SetBinContent(26,92);
   VbbHcc_algo_H_pt_all__31->SetBinContent(27,69);
   VbbHcc_algo_H_pt_all__31->SetBinContent(28,58);
   VbbHcc_algo_H_pt_all__31->SetBinContent(29,43);
   VbbHcc_algo_H_pt_all__31->SetBinContent(30,17);
   VbbHcc_algo_H_pt_all__31->SetBinContent(31,14);
   VbbHcc_algo_H_pt_all__31->SetBinContent(32,17);
   VbbHcc_algo_H_pt_all__31->SetBinContent(33,18);
   VbbHcc_algo_H_pt_all__31->SetBinContent(34,4);
   VbbHcc_algo_H_pt_all__31->SetBinContent(35,13);
   VbbHcc_algo_H_pt_all__31->SetBinContent(36,6);
   VbbHcc_algo_H_pt_all__31->SetBinContent(37,8);
   VbbHcc_algo_H_pt_all__31->SetBinContent(38,6);
   VbbHcc_algo_H_pt_all__31->SetBinContent(39,1);
   VbbHcc_algo_H_pt_all__31->SetBinContent(40,1);
   VbbHcc_algo_H_pt_all__31->SetBinContent(41,4);
   VbbHcc_algo_H_pt_all__31->SetEntries(775415);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_all__31->SetLineColor(ci);
   VbbHcc_algo_H_pt_all__31->SetLineWidth(2);
   VbbHcc_algo_H_pt_all__31->SetMarkerStyle(20);
   VbbHcc_algo_H_pt_all__31->SetMarkerSize(1.2);
   VbbHcc_algo_H_pt_all__31->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_all__31->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all__31->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all__31->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all__31->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all__31->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all__31->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all__31->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all__31->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_all__31->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all__31->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_all__31->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_all__31->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_all__31->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_all__31->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_pt_all_fx1031[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_algo_H_pt_all_fy1031[40] = {
   818989,
   3311937,
   2734055,
   316564.5,
   43648.17,
   16288.96,
   8318.081,
   4509.488,
   2746.759,
   1636.834,
   1111.653,
   679.4412,
   479.5297,
   331.0643,
   214.5203,
   135.387,
   115.3925,
   82.19692,
   47.5626,
   57.19153,
   30.43564,
   25.73749,
   22.90483,
   18.20986,
   17.26252,
   5.897217,
   13.48959,
   4.153595,
   3.000873,
   2.758614,
   1.107306,
   1.099758,
   0.7850339,
   0.6285047,
   0.3272202,
   0.5354819,
   0.04065973,
   0.4135254,
   0.07282258,
   0.2252685};
   Double_t Graph_from_VbbHcc_algo_H_pt_all_fex1031[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_algo_H_pt_all_fey1031[40] = {
   32786.27,
   65521.03,
   58907.06,
   17957.62,
   3411.762,
   91.50655,
   68.97108,
   45.50701,
   40.51713,
   27.78763,
   24.45752,
   15.67681,
   15.52982,
   11.3676,
   7.303363,
   3.498113,
   6.999653,
   6.354936,
   2.147596,
   8.802692,
   1.652827,
   3.654956,
   5.999817,
   5.319706,
   6.131551,
   0.7034302,
   6.242312,
   0.7428237,
   0.4548654,
   0.5968758,
   0.2919223,
   0.2913556,
   0.3921319,
   0.2141342,
   0.1545268,
   0.3487523,
   0.04065973,
   0.1626969,
   0.07282258,
   0.1304132};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_algo_H_pt_all_fx1031,Graph_from_VbbHcc_algo_H_pt_all_fy1031,Graph_from_VbbHcc_algo_H_pt_all_fex1031,Graph_from_VbbHcc_algo_H_pt_all_fey1031);
   gre->SetName("Graph_from_VbbHcc_algo_H_pt_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_pt_all1031 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_pt_all1031","",100,0,2200);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->SetMaximum(3715204);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_pt_all1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_pt_all1031);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_pt_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_pt_all","MC unc. (stat.)","fl");

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
   H_pt_VbbHcc_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__32 = new TH1D("data_mc_ratio__32","",40,0,2000);
   data_mc_ratio__32->SetBinContent(1,0.01538971);
   data_mc_ratio__32->SetBinContent(2,0.0157817);
   data_mc_ratio__32->SetBinContent(3,0.03683028);
   data_mc_ratio__32->SetBinContent(4,0.3904449);
   data_mc_ratio__32->SetBinContent(5,2.351599);
   data_mc_ratio__32->SetBinContent(6,5.424105);
   data_mc_ratio__32->SetBinContent(7,10.18709);
   data_mc_ratio__32->SetBinContent(8,15.91666);
   data_mc_ratio__32->SetBinContent(9,18.40897);
   data_mc_ratio__32->SetBinContent(10,19.52);
   data_mc_ratio__32->SetBinContent(11,18.06319);
   data_mc_ratio__32->SetBinContent(12,18.23557);
   data_mc_ratio__32->SetBinContent(13,16.46405);
   data_mc_ratio__32->SetBinContent(14,15.32633);
   data_mc_ratio__32->SetBinContent(15,15.83999);
   data_mc_ratio__32->SetBinContent(16,15.43723);
   data_mc_ratio__32->SetBinContent(17,13.04244);
   data_mc_ratio__32->SetBinContent(18,12.10508);
   data_mc_ratio__32->SetBinContent(19,14.86462);
   data_mc_ratio__32->SetBinContent(20,10.00148);
   data_mc_ratio__32->SetBinContent(21,12.02537);
   data_mc_ratio__32->SetBinContent(22,10.84022);
   data_mc_ratio__32->SetBinContent(23,10.65277);
   data_mc_ratio__32->SetBinContent(24,8.511874);
   data_mc_ratio__32->SetBinContent(25,5.792896);
   data_mc_ratio__32->SetBinContent(26,15.60058);
   data_mc_ratio__32->SetBinContent(27,5.115055);
   data_mc_ratio__32->SetBinContent(28,13.96381);
   data_mc_ratio__32->SetBinContent(29,14.32916);
   data_mc_ratio__32->SetBinContent(30,6.162515);
   data_mc_ratio__32->SetBinContent(31,12.6433);
   data_mc_ratio__32->SetBinContent(32,15.45795);
   data_mc_ratio__32->SetBinContent(33,22.92894);
   data_mc_ratio__32->SetBinContent(34,6.364312);
   data_mc_ratio__32->SetBinContent(35,39.72859);
   data_mc_ratio__32->SetBinContent(36,11.20486);
   data_mc_ratio__32->SetBinContent(37,196.7549);
   data_mc_ratio__32->SetBinContent(38,14.50939);
   data_mc_ratio__32->SetBinContent(39,13.732);
   data_mc_ratio__32->SetBinContent(40,4.439148);
   data_mc_ratio__32->SetBinContent(41,18.9665);
   data_mc_ratio__32->SetBinError(1,0.0001370806);
   data_mc_ratio__32->SetBinError(2,6.902967e-05);
   data_mc_ratio__32->SetBinError(3,0.0001160644);
   data_mc_ratio__32->SetBinError(4,0.001110577);
   data_mc_ratio__32->SetBinError(5,0.007340044);
   data_mc_ratio__32->SetBinError(6,0.01824809);
   data_mc_ratio__32->SetBinError(7,0.0349956);
   data_mc_ratio__32->SetBinError(8,0.05941039);
   data_mc_ratio__32->SetBinError(9,0.08186617);
   data_mc_ratio__32->SetBinError(10,0.1092038);
   data_mc_ratio__32->SetBinError(11,0.1274713);
   data_mc_ratio__32->SetBinError(12,0.1638264);
   data_mc_ratio__32->SetBinError(13,0.1852937);
   data_mc_ratio__32->SetBinError(14,0.2151606);
   data_mc_ratio__32->SetBinError(15,0.2717336);
   data_mc_ratio__32->SetBinError(16,0.337673);
   data_mc_ratio__32->SetBinError(17,0.3361944);
   data_mc_ratio__32->SetBinError(18,0.3837567);
   data_mc_ratio__32->SetBinError(19,0.5590416);
   data_mc_ratio__32->SetBinError(20,0.4181829);
   data_mc_ratio__32->SetBinError(21,0.6285764);
   data_mc_ratio__32->SetBinError(22,0.6489869);
   data_mc_ratio__32->SetBinError(23,0.681974);
   data_mc_ratio__32->SetBinError(24,0.6836901);
   data_mc_ratio__32->SetBinError(25,0.5792896);
   data_mc_ratio__32->SetBinError(26,1.626473);
   data_mc_ratio__32->SetBinError(27,0.6157802);
   data_mc_ratio__32->SetBinError(28,1.833538);
   data_mc_ratio__32->SetBinError(29,2.185177);
   data_mc_ratio__32->SetBinError(30,1.49463);
   data_mc_ratio__32->SetBinError(31,3.379064);
   data_mc_ratio__32->SetBinError(32,3.749103);
   data_mc_ratio__32->SetBinError(33,5.404404);
   data_mc_ratio__32->SetBinError(34,3.182156);
   data_mc_ratio__32->SetBinError(35,11.01873);
   data_mc_ratio__32->SetBinError(36,4.574365);
   data_mc_ratio__32->SetBinError(37,69.56336);
   data_mc_ratio__32->SetBinError(38,5.923433);
   data_mc_ratio__32->SetBinError(39,13.732);
   data_mc_ratio__32->SetBinError(40,4.439148);
   data_mc_ratio__32->SetBinError(41,14.44304);
   data_mc_ratio__32->SetMinimum(0.4);
   data_mc_ratio__32->SetMaximum(1.6);
   data_mc_ratio__32->SetEntries(9.780197);
   data_mc_ratio__32->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__32->SetLineColor(ci);
   data_mc_ratio__32->SetLineWidth(2);
   data_mc_ratio__32->SetMarkerStyle(20);
   data_mc_ratio__32->SetMarkerSize(1.2);
   data_mc_ratio__32->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__32->GetXaxis()->SetRange(7,30);
   data_mc_ratio__32->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__32->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__32->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__32->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__32->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__32->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__32->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__32->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1032[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1032[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1032[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1032[40] = {
   0.04003261,
   0.01978329,
   0.02154568,
   0.05672659,
   0.07816506,
   0.005617705,
   0.008291705,
   0.01009139,
   0.01475089,
   0.01697645,
   0.02200103,
   0.0230731,
   0.03238552,
   0.03433654,
   0.0340451,
   0.02583789,
   0.06065949,
   0.07731355,
   0.04515304,
   0.153916,
   0.05430564,
   0.142009,
   0.2619455,
   0.2921333,
   0.3551944,
   0.1192817,
   0.4627503,
   0.1788387,
   0.1515777,
   0.216368,
   0.2636329,
   0.264927,
   0.4995094,
   0.3407041,
   0.4722411,
   0.6512868,
   1,
   0.3934388,
   1,
   0.5789233};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1032,Graph_from_mc_statistical_error_fy1032,Graph_from_mc_statistical_error_fex1032,Graph_from_mc_statistical_error_fey1032);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1032 = new TH1F("Graph_Graph_from_mc_statistical_error1032","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1032->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1032->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1032->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1032->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1032);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_all->cd();
   H_pt_VbbHcc_all->Modified();
   H_pt_VbbHcc_all->cd();
   H_pt_VbbHcc_all->SetSelected(H_pt_VbbHcc_all);
}
