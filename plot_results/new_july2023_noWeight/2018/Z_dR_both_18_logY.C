void Z_dR_both_18_logY()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Thu Aug 10 12:32:45 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(0,0,1,1);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.853419,6.314516,11.78814);
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
   st->SetMaximum(6.27637e+09);
   
   TH1F *st_stack_211 = new TH1F("st_stack_211","",30,0,6);
   st_stack_211->SetMinimum(0.001449516);
   st_stack_211->SetMaximum(2.108573e+10);
   st_stack_211->SetDirectory(0);
   st_stack_211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_211->SetLineColor(ci);
   st_stack_211->GetXaxis()->SetRange(1,30);
   st_stack_211->GetXaxis()->SetLabelFont(42);
   st_stack_211->GetXaxis()->SetLabelSize(0.035);
   st_stack_211->GetXaxis()->SetTitleSize(0.035);
   st_stack_211->GetXaxis()->SetTitleFont(42);
   st_stack_211->GetYaxis()->SetTitle("Events/0.2");
   st_stack_211->GetYaxis()->SetLabelFont(42);
   st_stack_211->GetYaxis()->SetLabelSize(0.05);
   st_stack_211->GetYaxis()->SetTitleSize(0.057);
   st_stack_211->GetYaxis()->SetTitleOffset(1.2);
   st_stack_211->GetYaxis()->SetTitleFont(42);
   st_stack_211->GetZaxis()->SetLabelFont(42);
   st_stack_211->GetZaxis()->SetLabelSize(0.035);
   st_stack_211->GetZaxis()->SetTitleSize(0.035);
   st_stack_211->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_211);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,17863.04);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,16840.78);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,14201.17);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,10246.35);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,9088.056);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,11101.51);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,6555.003);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,7571.15);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,7617.409);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,10473.95);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,7771.559);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,10165.59);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,11649.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,11522.23);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,10995.47);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,10305.5);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,8194.103);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,7617.902);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,5783.179);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,4774.357);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,2883.608);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,4573.171);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,3523.625);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,1485.132);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,1452.837);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,2315.889);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1534.907);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,871.7053);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,966.4895);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,1688.741);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,1606.369);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,2233.482);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,1337.089);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,1174.039);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,2156.202);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,893.9965);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,1100.571);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,1041.643);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,2095.117);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,1210.168);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1384.873);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,1569.411);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,2101.54);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,1482.166);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,1476.787);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,1317.965);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,1262.935);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,1019.55);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,940.6047);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,572.0734);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,1004.954);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,923.3577);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,402.3893);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,400.1766);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,665.073);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,405.4074);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,146.8999);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,389.9768);
   VbbHcc_both_Z_dR_stack_1->SetEntries(10726);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.05476569);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,54.0223);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,75.95914);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,66.52488);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,77.18635);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,70.81457);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,71.00362);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,68.89083);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,67.09519);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,70.39419);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,68.2584);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,70.918);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,63.90915);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,73.47724);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,62.33288);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,55.15017);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,53.07369);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,44.84745);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,39.86177);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,38.58536);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,35.16206);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,31.63665);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,22.33229);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,22.8963);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,21.87431);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,15.52664);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,17.76388);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,11.44497);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,8.923313);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,6.803859);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.05476569);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,3.027731);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,3.641323);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,3.313317);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,3.730207);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,3.505027);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,3.487785);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,3.407748);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,3.464127);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,3.423684);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,3.444964);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,3.441331);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,3.266129);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,3.591518);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,3.136818);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,3.023274);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,3.008364);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,2.647539);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,2.514022);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,2.57535);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,2.429254);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,2.367538);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,1.939623);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,1.925599);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,2.034471);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.656475);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,1.860256);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,1.354767);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,1.276332);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,1.085144);
   VbbHcc_both_Z_dR_stack_2->SetEntries(15898);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,0.7429674);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,960.1702);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,1427.564);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,1473.456);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,1533.302);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,1487.185);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,1437.391);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,1378.739);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,1347.652);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,1333.765);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,1326.038);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,1321.051);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,1313.591);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,1300.783);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,1261.021);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,1166.317);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,1065.048);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,961.2356);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,862.2871);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,755.0594);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,676.0249);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,583.9744);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,509.0616);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,431.0955);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,380.7729);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,327.4968);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,266.6208);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,213.6271);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,139.5327);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,107.5587);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.2111517);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,7.683758);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,9.415122);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,9.58374);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,9.776232);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,9.610094);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,9.430484);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,9.230808);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,9.105167);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,9.055668);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,9.03343);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,9.014164);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,8.999499);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,8.96531);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,8.832388);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,8.493358);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,8.119195);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,7.722547);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,7.301134);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,6.837934);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,6.461984);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,5.998853);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,5.601779);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,5.160263);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,4.844417);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,4.504721);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,4.050297);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,3.624854);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,2.932137);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,2.564723);
   VbbHcc_both_Z_dR_stack_3->SetEntries(458232);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,190.2096);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,287.8134);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,258.8712);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,219.7415);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,172.7733);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,142.8997);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,130.6183);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,115.9365);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,122.8671);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,136.3547);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,133.8063);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,164.7237);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,150.4939);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,153.9385);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,129.0883);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,128.4572);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,116.6565);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,109.3787);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,88.02047);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,75.86636);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,57.29686);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,51.18461);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,48.62401);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,55.63933);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,34.58724);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,33.20289);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,35.04296);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,24.59774);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,11.88876);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,5.81938);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,9.263161);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,10.4681);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,12.47774);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,9.74713);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,6.553337);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,8.22333);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,7.924004);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,7.020739);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,7.431232);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,9.082582);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,10.45488);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,8.611949);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,9.444887);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,8.059378);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,8.097401);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,9.597888);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,7.804246);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,5.176455);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,4.716618);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,4.243587);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,5.496952);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,3.922441);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,7.857928);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,3.273584);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,3.063474);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,4.953131);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,4.601351);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,1.728299);
   VbbHcc_both_Z_dR_stack_4->SetEntries(19394);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,33.15659);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,32.79119);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,14.37503);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,23.2996);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,10.78928);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,19.52437);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,17.86612);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,11.84623);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,17.87822);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,12.44431);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,11.95401);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,13.14713);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,16.74013);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,21.50576);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,13.74378);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,7.726198);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,8.115486);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,9.004637);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,10.63261);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,3.848293);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,9.118248);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,3.700638);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,2.723329);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,7.758421);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,2.217989);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,2.373344);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,3.579801);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,3.186069);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,1.216197);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,4.267978);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,5.058081);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,2.539687);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,10.6036);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,1.35698);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,4.375856);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,3.399899);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,3.14748);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,4.36417);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,2.549855);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,3.185115);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,3.237575);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,3.657745);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,4.877133);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,3.273224);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,1.185753);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,1.306754);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,2.37417);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,2.443898);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,0.7848433);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,3.110555);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,0.8458546);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,0.6638337);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,3.072801);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,0.5761982);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,0.6274954);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,0.9912365);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,0.8549652);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,0.5361906);
   VbbHcc_both_Z_dR_stack_5->SetEntries(2575);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(5,0.4520427);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,0.4520427);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(11,0.9040853);
   VbbHcc_both_Z_dR_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_Z_dR_stack_6->SetBinError(5,0.4520427);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.4520427);
   VbbHcc_both_Z_dR_stack_6->SetBinError(11,0.6392849);
   VbbHcc_both_Z_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,2.125195);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,2.125195);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,1.416796);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.7083982);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.7083982);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(26,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.8676071);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.8676071);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.7083982);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.5009132);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.5009132);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinError(12,0.5009132);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.5009132);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinError(26,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinError(27,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.3541991);
   VbbHcc_both_Z_dR_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,5.308873);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,6.42653);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,8.661845);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,3.632387);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,2.514729);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,1.9559);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,1.676486);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,0.5588287);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,1.117657);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,1.397072);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,1.676486);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,4.191215);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,4.750044);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,2.514729);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,2.514729);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,2.235315);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,1.9559);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,1.9559);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,1.676486);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,0.8382431);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,1.676486);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,0.5588287);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,0.5588287);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,1.117657);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,0.2794144);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,1.9559);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.2794144);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.5588287);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.2794144);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.217939);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.340024);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.555713);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,1.007443);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.8382431);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.7392609);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.6844226);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.3951516);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.5588287);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.6247895);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.6844226);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,1.082167);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,1.152055);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.8382431);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.8382431);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.7903031);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.7392609);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.7392609);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.6844226);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.4839599);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.6844226);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.3951516);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.3951516);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.5588287);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.2794144);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.7392609);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.2794144);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.3951516);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.2794144);
   VbbHcc_both_Z_dR_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,4.018399);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,7.584214);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,6.89848);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,5.095001);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,3.028657);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,1.778336);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,1.357753);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,1.318894);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,1.542901);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,1.81948);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,2.422925);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,3.101802);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,3.088087);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,3.380667);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,3.188661);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,2.738363);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,2.345209);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.721191);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,1.190891);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.9280261);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.6903052);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.4617273);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.4685846);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.5760162);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.6263033);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.7703074);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.6285891);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.4000113);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.1782907);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.09583929);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.1316656);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.1255723);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.1079168);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.0832036);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.06375643);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.05570926);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.05490629);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.05938627);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.06448975);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.07441956);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.08420233);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.08401597);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.08790595);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.08537314);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.07911568);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.07321631);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.0627237);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.05217387);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.04605716);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.0397226);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.03248702);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.03272737);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.03628561);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.03783637);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.04196132);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.03790535);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.03023801);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.02018745);
   VbbHcc_both_Z_dR_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,1.240577);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,2.593825);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,3.117836);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,2.80963);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,2.100814);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,1.479035);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,1.097502);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,0.9872155);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,0.9627736);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,1.068291);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,1.155328);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,1.176193);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,1.189905);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,1.186328);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,1.126117);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,1.048022);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.8799095);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.7779688);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.6241634);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.5246073);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.4012053);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.3660328);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.3517253);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.3880902);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.4023976);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.3356294);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.276015);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.1722858);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.08703712);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.02719491);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.03932296);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.04311243);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.0409261);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.03538911);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.02969375);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.0255787);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.0242595);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.0239573);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.02523601);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.02624391);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.02647983);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.02663373);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.02659366);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.02591001);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.02499546);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.02290313);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.0215356);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.01928968);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01768451);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.01546533);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.01477188);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.0144803);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.01521045);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.01548829);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.01414509);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.0128275);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.01013446);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.007203243);
   VbbHcc_both_Z_dR_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.03186067);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.03868795);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03186067);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.02048186);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.009103048);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.004551524);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.009103048);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.004551524);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.006827286);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.004551524);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.009103048);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.008515121);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.009383207);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.008515121);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.006827286);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.004551524);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.003218413);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.003218413);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.004551524);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.003218413);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.003941735);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.003218413);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.003218413);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.004551524);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetBinError(30,0.002275762);
   VbbHcc_both_Z_dR_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.007791077);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.01258559);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.01678078);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.01078764);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.006292793);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.002996568);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.002696911);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.002397254);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.002996568);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.002996568);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.002397254);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.002397254);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.002397254);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.001797941);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.001797941);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.002696911);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001498284);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.003595882);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.001498284);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.001198627);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.001797941);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.0008989704);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.001498284);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.001198627);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.002996568);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0005993136);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.0002996568);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.001527956);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.001941998);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.002242426);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.001797941);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.0013732);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.000947598);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.0008989704);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.0008475574);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.000947598);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.000947598);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.0008475574);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0008475574);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.0008475574);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.0007340063);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.0007340063);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0008989704);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.000670053);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.001038042);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.000670053);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0005993136);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.0007340063);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0005190208);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.000670053);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.0005993136);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.000947598);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0004237787);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.0002996568);
   VbbHcc_both_Z_dR_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__579 = new TH1D("VbbHcc_both_Z_dR__579","",30,0,6);
   VbbHcc_both_Z_dR__579->SetBinContent(2,17);
   VbbHcc_both_Z_dR__579->SetBinContent(3,22776);
   VbbHcc_both_Z_dR__579->SetBinContent(4,25643);
   VbbHcc_both_Z_dR__579->SetBinContent(5,19553);
   VbbHcc_both_Z_dR__579->SetBinContent(6,17225);
   VbbHcc_both_Z_dR__579->SetBinContent(7,15577);
   VbbHcc_both_Z_dR__579->SetBinContent(8,14388);
   VbbHcc_both_Z_dR__579->SetBinContent(9,13919);
   VbbHcc_both_Z_dR__579->SetBinContent(10,13368);
   VbbHcc_both_Z_dR__579->SetBinContent(11,13432);
   VbbHcc_both_Z_dR__579->SetBinContent(12,13562);
   VbbHcc_both_Z_dR__579->SetBinContent(13,14008);
   VbbHcc_both_Z_dR__579->SetBinContent(14,14403);
   VbbHcc_both_Z_dR__579->SetBinContent(15,14941);
   VbbHcc_both_Z_dR__579->SetBinContent(16,14724);
   VbbHcc_both_Z_dR__579->SetBinContent(17,13853);
   VbbHcc_both_Z_dR__579->SetBinContent(18,12685);
   VbbHcc_both_Z_dR__579->SetBinContent(19,11481);
   VbbHcc_both_Z_dR__579->SetBinContent(20,10198);
   VbbHcc_both_Z_dR__579->SetBinContent(21,8768);
   VbbHcc_both_Z_dR__579->SetBinContent(22,7493);
   VbbHcc_both_Z_dR__579->SetBinContent(23,6144);
   VbbHcc_both_Z_dR__579->SetBinContent(24,5523);
   VbbHcc_both_Z_dR__579->SetBinContent(25,4678);
   VbbHcc_both_Z_dR__579->SetBinContent(26,4051);
   VbbHcc_both_Z_dR__579->SetBinContent(27,3606);
   VbbHcc_both_Z_dR__579->SetBinContent(28,3395);
   VbbHcc_both_Z_dR__579->SetBinContent(29,3183);
   VbbHcc_both_Z_dR__579->SetBinContent(30,2159);
   VbbHcc_both_Z_dR__579->SetBinContent(31,1615);
   VbbHcc_both_Z_dR__579->SetEntries(326397);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__579->SetLineColor(ci);
   VbbHcc_both_Z_dR__579->SetLineWidth(2);
   VbbHcc_both_Z_dR__579->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__579->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1421[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1421[30] = {
   0,
   0.7977331,
   19113.33,
   18684.14,
   16034.99,
   12112.16,
   10837.99,
   12777.55,
   8156.415,
   9116.902,
   9166.849,
   12022.04,
   9314.908,
   11730.14,
   13200.03,
   13028.12,
   12366.6,
   11565.83,
   9330.14,
   8642.893,
   6679.324,
   5567.551,
   3568.413,
   5160.837,
   4030.344,
   1953.614,
   1834.332,
   2639.269,
   1800.143,
   1049.079};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1421[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1421[30] = {
   0,
   0.2181383,
   1688.777,
   1606.436,
   2233.532,
   1337.231,
   1174.125,
   2156.24,
   894.0954,
   1100.647,
   1041.721,
   2095.154,
   1210.245,
   1384.95,
   1569.469,
   2101.588,
   1482.219,
   1476.835,
   1318.027,
   1262.986,
   1019.592,
   940.6424,
   572.1344,
   1004.987,
   923.3827,
   402.5126,
   400.2195,
   665.0958,
   405.4576,
   147.0098};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1421,Graph_from_VbbHcc_both_Z_dR_fy1421,Graph_from_VbbHcc_both_Z_dR_fex1421,Graph_from_VbbHcc_both_Z_dR_fey1421);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1421 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1421","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetMinimum(22.88232);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetMaximum(22882.32);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1421);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__580 = new TH1D("data_mc_ratio__580","",30,0,6);
   data_mc_ratio__580->SetBinContent(2,21.31039);
   data_mc_ratio__580->SetBinContent(3,1.191629);
   data_mc_ratio__580->SetBinContent(4,1.372447);
   data_mc_ratio__580->SetBinContent(5,1.219396);
   data_mc_ratio__580->SetBinContent(6,1.422125);
   data_mc_ratio__580->SetBinContent(7,1.43726);
   data_mc_ratio__580->SetBinContent(8,1.126038);
   data_mc_ratio__580->SetBinContent(9,1.706509);
   data_mc_ratio__580->SetBinContent(10,1.466288);
   data_mc_ratio__580->SetBinContent(11,1.46528);
   data_mc_ratio__580->SetBinContent(12,1.128094);
   data_mc_ratio__580->SetBinContent(13,1.503826);
   data_mc_ratio__580->SetBinContent(14,1.227863);
   data_mc_ratio__580->SetBinContent(15,1.131892);
   data_mc_ratio__580->SetBinContent(16,1.130171);
   data_mc_ratio__580->SetBinContent(17,1.120195);
   data_mc_ratio__580->SetBinContent(18,1.096766);
   data_mc_ratio__580->SetBinContent(19,1.230528);
   data_mc_ratio__580->SetBinContent(20,1.179929);
   data_mc_ratio__580->SetBinContent(21,1.312708);
   data_mc_ratio__580->SetBinContent(22,1.345834);
   data_mc_ratio__580->SetBinContent(23,1.721774);
   data_mc_ratio__580->SetBinContent(24,1.070175);
   data_mc_ratio__580->SetBinContent(25,1.160695);
   data_mc_ratio__580->SetBinContent(26,2.073592);
   data_mc_ratio__580->SetBinContent(27,1.965839);
   data_mc_ratio__580->SetBinContent(28,1.286341);
   data_mc_ratio__580->SetBinContent(29,1.768193);
   data_mc_ratio__580->SetBinContent(30,2.057996);
   data_mc_ratio__580->SetBinContent(31,1.475557);
   data_mc_ratio__580->SetBinError(2,5.168528);
   data_mc_ratio__580->SetBinError(3,0.007895913);
   data_mc_ratio__580->SetBinError(4,0.008570601);
   data_mc_ratio__580->SetBinError(5,0.00872043);
   data_mc_ratio__580->SetBinError(6,0.01083573);
   data_mc_ratio__580->SetBinError(7,0.01151578);
   data_mc_ratio__580->SetBinError(8,0.009387558);
   data_mc_ratio__580->SetBinError(9,0.01446454);
   data_mc_ratio__580->SetBinError(10,0.01268195);
   data_mc_ratio__580->SetBinError(11,0.012643);
   data_mc_ratio__580->SetBinError(12,0.009686873);
   data_mc_ratio__580->SetBinError(13,0.01270602);
   data_mc_ratio__580->SetBinError(14,0.01023112);
   data_mc_ratio__580->SetBinError(15,0.009260085);
   data_mc_ratio__580->SetBinError(16,0.009313892);
   data_mc_ratio__580->SetBinError(17,0.00951747);
   data_mc_ratio__580->SetBinError(18,0.009737973);
   data_mc_ratio__580->SetBinError(19,0.01148422);
   data_mc_ratio__580->SetBinError(20,0.01168418);
   data_mc_ratio__580->SetBinError(21,0.01401902);
   data_mc_ratio__580->SetBinError(22,0.01554761);
   data_mc_ratio__580->SetBinError(23,0.02196598);
   data_mc_ratio__580->SetBinError(24,0.01440016);
   data_mc_ratio__580->SetBinError(25,0.01697024);
   data_mc_ratio__580->SetBinError(26,0.03257934);
   data_mc_ratio__580->SetBinError(27,0.03273671);
   data_mc_ratio__580->SetBinError(28,0.02207681);
   data_mc_ratio__580->SetBinError(29,0.0313409);
   data_mc_ratio__580->SetBinError(30,0.04429128);
   data_mc_ratio__580->SetBinError(31,0.5270487);
   data_mc_ratio__580->SetMinimum(0.4);
   data_mc_ratio__580->SetMaximum(1.6);
   data_mc_ratio__580->SetEntries(58.36404);
   data_mc_ratio__580->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__580->SetLineColor(ci);
   data_mc_ratio__580->SetLineWidth(2);
   data_mc_ratio__580->SetMarkerStyle(20);
   data_mc_ratio__580->SetMarkerSize(1.2);
   data_mc_ratio__580->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__580->GetXaxis()->SetRange(1,30);
   data_mc_ratio__580->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__580->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__580->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__580->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__580->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__580->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__580->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__580->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__580->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__580->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__580->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__580->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__580->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__580->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1422[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1422[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1422[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1422[30] = {
   0,
   0.2734477,
   0.08835599,
   0.08597861,
   0.1392911,
   0.110404,
   0.1083342,
   0.1687522,
   0.1096187,
   0.120726,
   0.1136401,
   0.1742761,
   0.1299256,
   0.1180676,
   0.118899,
   0.1613117,
   0.1198566,
   0.1276895,
   0.1412655,
   0.14613,
   0.152649,
   0.1689508,
   0.160333,
   0.1947334,
   0.2291077,
   0.2060348,
   0.2181827,
   0.2520001,
   0.2252364,
   0.1401323};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1422,Graph_from_mc_statistical_error_fy1422,Graph_from_mc_statistical_error_fex1422,Graph_from_mc_statistical_error_fey1422);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1422 = new TH1F("Graph_Graph_from_mc_statistical_error1422","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1422->SetMinimum(0.6718627);
   Graph_Graph_from_mc_statistical_error1422->SetMaximum(1.328137);
   Graph_Graph_from_mc_statistical_error1422->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1422->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1422->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1422);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
