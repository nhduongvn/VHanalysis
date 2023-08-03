void Z_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Thu Aug  3 10:21:25 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(0,0,1,1);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3809.16,6.314516,3805651);
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
   st->SetMaximum(3261624);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0.3);
   st_stack_148->SetMaximum(3424705);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetLabelSize(0.035);
   st_stack_148->GetXaxis()->SetTitleSize(0.035);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetLabelSize(0.05);
   st_stack_148->GetYaxis()->SetTitleSize(0.057);
   st_stack_148->GetYaxis()->SetTitleOffset(1.2);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetLabelSize(0.035);
   st_stack_148->GetZaxis()->SetTitleSize(0.035);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,346608.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,1264584);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,1215224);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,999845.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,690126.1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,449160.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,361351.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,245194.8);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,199218.1);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,183160.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,138198.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,153198.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,91711.55);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,89200.55);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,77313.42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,60554.27);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,49612.25);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,38740.29);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,31078.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,27779.87);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,17386.09);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,11262.37);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,7129.294);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,4236.479);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,2788.435);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,2630.817);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(27,450.491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(28,1086.886);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(29,269.9243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(30,659.0441);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(31,1528.429);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,5601.624);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,21413.19);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,16964.82);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,26161.53);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,21131.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,12278.47);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,33331.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,8521.414);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,7593.352);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,25712.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,7063.679);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,25654.36);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,5182.516);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,6064.324);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,5073.434);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,3971.567);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,3857.894);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,3558.731);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,2856.333);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,3470.812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,2638.824);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,2192.87);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,1625.58);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,969.7072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,722.5729);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,1473.253);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(27,274.2935);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(28,530.1435);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(29,68.78864);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(30,384.0491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(31,546.1957);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(367140);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,1820.456);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,9484.394);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,10428.43);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,7543.655);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,4913.199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,3297.354);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,2290.529);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,1732.844);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,1352.031);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,1103.924);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,918.0978);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,769.6421);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,670.7042);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,579.1649);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,520.6046);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,450.0466);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,384.2867);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,330.7296);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,258.7235);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,183.9237);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,107.195);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,64.06924);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,37.70358);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,25.75995);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,12.24851);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,12.8103);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,7.43225);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,7.242509);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,3.352331);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,2.772144);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,7.080345);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,16.75025);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,37.09987);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,38.58568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,32.76535);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,26.40498);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,21.7243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,18.0832);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,15.62674);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,13.83136);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,12.52144);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,11.32159);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,10.36134);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,9.801345);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,8.983423);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,8.701253);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,7.986243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,7.306516);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,6.900023);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,6.123295);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,5.140847);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,3.850353);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,2.864754);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,2.259357);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,1.846976);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,1.110414);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,1.366176);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.8405501);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,1.000581);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.6275598);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.5516816);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.8942731);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(669400);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(1,28995.42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(2,182222.9);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(3,189633);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(4,123085.8);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(5,73947.01);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(6,47522.2);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(7,33053.85);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(8,24642.15);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(9,19370.09);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(10,15808.49);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(11,13250.81);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(12,11288.3);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(13,9873.937);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(14,8690.61);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(15,7839.152);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(16,7044.488);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(17,6171.374);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(18,5279.495);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(19,4114.45);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(20,2815.162);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(21,1580.17);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(22,734.2097);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(23,360.9847);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(24,203.6503);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(25,131.6115);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(26,83.56763);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(27,56.26459);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(28,40.41758);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(29,30.529);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(30,19.42708);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(31,49.96266);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(1,42.90378);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(2,107.1592);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(3,108.7649);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(4,87.22366);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(5,67.46061);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(6,54.03258);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(7,45.03005);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(8,38.83753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(9,34.41919);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(10,31.06978);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(11,28.44625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(12,26.25867);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(13,24.57336);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(14,23.07859);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(15,21.9693);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(16,20.8663);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(17,19.55046);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(18,18.11537);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(19,16.00487);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(20,13.22163);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(21,9.879301);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(22,6.694409);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(23,4.657736);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(24,3.477331);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(25,2.785728);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(26,2.207972);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(27,1.825979);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(28,1.531956);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(29,1.339139);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(30,1.06586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(31,1.714362);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetEntries(1.366985e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(1,2085.582);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(2,7870.545);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(3,6989.437);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(4,4900.57);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(5,3226.276);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(6,2077.801);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(7,1561.81);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(8,1201.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(9,920.8065);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(10,743.1958);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(11,643.3517);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(12,510.8008);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(13,453.9495);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(14,373.5375);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(15,359.7317);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(16,306.4732);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(17,249.2298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(18,200.2483);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(19,161.7268);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(20,84.47486);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(21,64.10008);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(22,31.66844);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(23,17.62514);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(24,16.78555);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(25,8.990101);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(26,8.366377);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(27,4.539533);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(28,5.49818);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(29,2.378802);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(30,1.193406);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(31,4.562041);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(1,20.90925);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(2,61.6651);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(3,71.61363);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(4,62.33503);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(5,51.71511);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(6,39.71543);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(7,35.67268);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(8,31.63208);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(9,25.79496);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(10,24.52328);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(11,22.77378);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(12,19.30541);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(13,18.17868);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(14,15.45803);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(15,18.4152);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(16,16.30332);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(17,14.86533);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(18,13.04137);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(19,10.82801);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(20,5.954202);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(21,5.585544);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(22,3.760286);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(23,2.113566);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(24,3.335247);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(25,1.628118);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(26,1.520602);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(27,1.010713);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(28,2.870719);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(29,0.726191);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(30,0.6375165);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(31,1.004429);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetEntries(203141);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(1,1136.935);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(2,3219.614);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(3,2662.879);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(4,1934.428);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(5,1236.447);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(6,884.7784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(7,602.7775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(8,486.5884);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(9,332.8199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(10,310.9842);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(11,254.324);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(12,210.2385);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(13,148.7916);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(14,188.6373);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(15,114.617);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(16,125.1047);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(17,86.80237);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(18,62.25417);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(19,75.62652);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(20,48.84788);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(21,29.59612);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(22,14.3174);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(23,11.07646);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(24,3.852326);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(25,5.06388);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(26,5.463732);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(27,1.007425);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(28,4.567354);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(29,0.9148012);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(30,0.146767);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(31,1.223568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(1,20.27272);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(2,64.0307);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(3,69.71524);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(4,63.20529);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(5,49.3907);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(6,43.08956);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(7,33.02557);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(8,33.98371);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(9,23.86081);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(10,23.73623);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(11,23.57293);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(12,22.01589);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(13,13.87756);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(14,22.58356);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(15,13.36506);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(16,16.37538);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(17,12.59898);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(18,10.34664);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(19,13.82298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(20,8.630315);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(21,9.064731);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(22,3.196636);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(23,3.433835);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(24,1.21539);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(25,2.444303);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(26,1.998878);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(27,0.4044075);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(28,1.977066);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(29,0.42555);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(30,0.146767);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(31,0.4725124);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetEntries(104522);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(1,10.96365);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(2,33.72203);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(3,26.78176);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(4,18.19849);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(5,12.08457);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(6,7.249645);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(7,5.030666);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(8,3.818975);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(9,4.764893);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(10,1.793368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(11,1.52463);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(12,1.793368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(13,1.707934);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(14,1.436828);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(15,2.431082);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(16,0.6718465);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(17,0.9871524);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(18,0.7184138);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(19,0.7184138);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(20,0.5374772);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(24,0.4496752);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(1,1.627142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(2,2.985976);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(3,2.559566);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(4,2.102936);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(5,1.690328);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(6,1.514627);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(7,1.078806);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(8,0.9562728);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(9,1.101232);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(10,0.5459157);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(11,0.5117751);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(12,0.5459157);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(13,0.6558553);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(14,0.5542258);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(15,0.8703267);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(16,0.3004589);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(17,0.435538);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(18,0.3918968);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(19,0.3918968);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(20,0.2687386);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(22,0.1343693);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(24,0.3427432);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetEntries(733);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(1,15.36135);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(2,48.7963);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(3,34.2063);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(4,23.66556);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(5,14.89515);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(6,10.7786);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(7,7.887776);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(8,5.787984);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(9,5.098022);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(10,3.259889);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(11,2.38742);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(12,1.405892);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(13,3.166639);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(14,1.61214);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(15,2.77389);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(16,1.526821);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(17,0.6424818);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(18,1.296834);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(19,1.078716);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.4362346);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(21,0.6701599);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(22,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(26,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(29,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(1,1.723587);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(2,3.184072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(3,2.639427);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(4,2.180985);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(5,1.723332);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(6,1.61584);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(7,1.179149);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(8,1.035074);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(9,1.091433);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(10,0.6484983);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(11,0.5704382);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(12,0.4672854);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(13,0.7519466);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(14,0.5530639);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(15,0.8761546);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(16,0.4080601);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(17,0.3675584);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(18,0.4543808);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(19,0.4274042);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(20,0.2181173);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(21,0.4776297);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(22,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(26,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(29,0.1090586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetEntries(1319);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(1,33.30747);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(2,130.2533);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(3,88.66407);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(4,43.46773);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(5,34.77035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(6,16.31102);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(7,13.98142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(8,13.62572);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(9,9.523317);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(10,8.675056);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(11,4.635046);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(12,4.638912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(13,2.550712);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(14,2.833993);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(15,5.006911);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(16,4.102406);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(17,2.803937);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(18,1.298469);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(19,1.045243);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(20,1.324657);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(21,1.841127);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(22,0.4864143);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(23,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(27,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(1,2.938028);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(2,5.824346);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(3,4.789083);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(4,3.339716);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(5,2.986561);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(6,2.042528);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(7,1.906093);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(8,1.875181);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(9,1.568558);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(10,1.490363);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(11,1.094589);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(12,1.095032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(13,0.8082318);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(14,0.855735);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(15,1.150647);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(16,1.027584);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(17,0.8469722);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(18,0.5818655);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(19,0.5238742);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(20,0.5937311);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(21,0.696948);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(22,0.3439469);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(23,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(27,0.2432072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetEntries(1651);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(1,21.18975);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(2,96.65653);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(3,59.95407);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(4,30.97237);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(5,17.38381);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(6,12.03223);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(7,8.887506);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(8,7.298595);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(9,6.065502);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(10,5.001944);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(11,4.105357);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(12,3.305726);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(13,2.978472);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(14,2.552108);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(15,2.293802);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(16,1.910763);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(17,1.550069);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(18,1.344908);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(19,1.082901);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.7717832);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.4713489);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.2270036);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.09303032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(24,0.05156284);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.02659519);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(26,0.01814294);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(27,0.004121852);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.00503368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(29,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(30,0.007560625);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(31,0.01719849);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(1,0.196579);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(2,0.419177);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(3,0.325576);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(4,0.2327717);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(5,0.1740737);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(6,0.1455385);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(7,0.1250226);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(8,0.1132205);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(9,0.1037823);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(10,0.09423238);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(11,0.08583088);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(12,0.07658221);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(13,0.07310021);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(14,0.06692009);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(15,0.06341521);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(16,0.05808784);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(17,0.05180801);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(18,0.04830439);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(19,0.04332084);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(20,0.03679473);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(21,0.02883043);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(22,0.01986691);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(23,0.01276627);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(24,0.009823339);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(25,0.006814358);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(26,0.005571673);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(27,0.002379753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(28,0.003000044);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(29,0.001373951);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(30,0.003865994);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(31,0.005572353);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetEntries(169575);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(1,6.213058);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(2,38.81826);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(3,35.26619);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(4,20.68418);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(5,12.07707);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(6,7.904915);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(7,5.873591);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(8,4.782644);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(9,3.995575);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(10,3.092156);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(11,2.519991);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(12,2.155886);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(13,1.90813);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(14,1.697332);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(15,1.639842);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(16,1.333227);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(17,1.107372);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.9006812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.6638759);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.4955115);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.320303);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.1368816);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.067072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(24,0.04927739);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.01231935);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.02326988);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(27,0.009581715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(28,0.01368816);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(29,0.005475266);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(30,0.009581715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.01231935);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(1,0.05454644);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(2,0.1363427);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(3,0.129955);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(4,0.09952516);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(5,0.07604916);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(6,0.06152651);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(7,0.05303536);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(8,0.04785725);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(9,0.04374247);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(10,0.03848083);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(11,0.03473867);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(12,0.03213117);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(13,0.03022858);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(14,0.02851);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(15,0.02802301);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(16,0.0252677);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(17,0.02302823);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(18,0.02076822);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(19,0.01783024);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(20,0.01540425);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(21,0.01238495);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(22,0.008096295);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(23,0.005667406);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(24,0.004857777);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(25,0.002428888);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(26,0.003338188);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(27,0.002142078);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(28,0.002560273);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(29,0.001619259);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(30,0.002142078);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(31,0.002428888);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetEntries(337056);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.1846233);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.7650647);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.5202048);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.275709);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.1760531);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.1067328);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.06428292);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.08117878);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.06220967);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.04675187);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.03067934);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.04112637);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.02204882);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.02728257);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.01861831);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.0226973);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.01094003);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(19,0.007712026);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(20,0.008171272);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(1,0.02021622);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(2,0.04160024);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(3,0.03461424);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(4,0.02538199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(5,0.02058098);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(6,0.01533125);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(7,0.01207564);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(8,0.0137813);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(9,0.011672);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(10,0.0100371);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(11,0.008402599);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(12,0.009666256);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(13,0.007116793);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(14,0.00807642);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(15,0.006362907);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(16,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(17,0.007076957);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(18,0.005470015);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(19,0.003918236);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(20,0.004201636);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetEntries(1141);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.04145271);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.2904867);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.2351242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.1367753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.0781201);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.05850319);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.04004743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.03995336);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.03084687);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.02725199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.01860441);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.01694491);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.01522775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.01395861);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.009521423);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.01135476);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.008403235);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.005717599);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.003723664);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.002293928);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.001844611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0008645283);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(23,0.0005648715);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(1,0.003471482);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(2,0.009267912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(3,0.008345474);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(4,0.006329971);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(5,0.004832088);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(6,0.004118501);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(7,0.003411585);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(8,0.003473891);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(9,0.003039591);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(10,0.002814912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(11,0.002376032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(12,0.002232397);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(13,0.002124069);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(14,0.002074454);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(15,0.001663261);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(16,0.001817706);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(17,0.001597931);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(18,0.001313426);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(19,0.001021662);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0008317484);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0007193555);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0005104245);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(23,0.0004132058);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetEntries(3862);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all__295 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all__295","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(1,180078);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(2,683419);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(3,630602);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(4,467440);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(5,307098);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(6,205811);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(7,148203);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(8,112410);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(9,89936);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(10,73744);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(11,61546);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(12,52512);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(13,44665);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(14,38273);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(15,33308);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(16,28621);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(17,23741);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(18,19398);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(19,15233);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(20,11033);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(21,7126);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(22,4437);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(23,2792);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(24,2003);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(25,1466);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(26,991);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(27,728);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(28,503);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(29,346);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(30,239);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(31,641);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetEntries(3248372);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all__295->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fx1295[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fy1295[30] = {
   380734.1,
   1467731,
   1425183,
   1137447,
   773540.5,
   502996.8,
   398902.1,
   273292.8,
   221223.4,
   201148.8,
   153280,
   165991,
   102871.3,
   99042.67,
   86161.7,
   68489.95,
   56511.06,
   44618.59,
   35693.83,
   30915.86,
   19170.9,
   12107.73,
   7557.09,
   4487.393,
   2946.388,
   2741.176,
   519.9919,
   1144.63,
   307.2152,
   682.6006};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fex1295[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fey1295[30] = {
   5601.89,
   21413.67,
   16965.5,
   26161.84,
   21131.55,
   12278.75,
   33331.37,
   8521.644,
   7593.524,
   25712.34,
   7063.821,
   25654.39,
   5182.634,
   6064.436,
   5073.54,
   3971.697,
   3858,
   3558.823,
   2856.439,
   3470.857,
   2638.867,
   2192.887,
   1625.593,
   969.7218,
   722.5851,
   1473.258,
   274.3031,
   530.1582,
   68.80977,
   384.0515};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fx1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fy1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fex1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fey1295);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetMinimum(214.5649);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetMaximum(1638035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__296 = new TH1D("data_mc_ratio__296","",30,0,6);
   data_mc_ratio__296->SetBinContent(1,0.4729758);
   data_mc_ratio__296->SetBinContent(2,0.4656297);
   data_mc_ratio__296->SetBinContent(3,0.4424708);
   data_mc_ratio__296->SetBinContent(4,0.4109554);
   data_mc_ratio__296->SetBinContent(5,0.3970031);
   data_mc_ratio__296->SetBinContent(6,0.4091696);
   data_mc_ratio__296->SetBinContent(7,0.3715272);
   data_mc_ratio__296->SetBinContent(8,0.411317);
   data_mc_ratio__296->SetBinContent(9,0.4065392);
   data_mc_ratio__296->SetBinContent(10,0.3666142);
   data_mc_ratio__296->SetBinContent(11,0.4015265);
   data_mc_ratio__296->SetBinContent(12,0.3163545);
   data_mc_ratio__296->SetBinContent(13,0.4341834);
   data_mc_ratio__296->SetBinContent(14,0.3864294);
   data_mc_ratio__296->SetBinContent(15,0.3865755);
   data_mc_ratio__296->SetBinContent(16,0.4178861);
   data_mc_ratio__296->SetBinContent(17,0.4201124);
   data_mc_ratio__296->SetBinContent(18,0.4347515);
   data_mc_ratio__296->SetBinContent(19,0.4267684);
   data_mc_ratio__296->SetBinContent(20,0.3568719);
   data_mc_ratio__296->SetBinContent(21,0.3717091);
   data_mc_ratio__296->SetBinContent(22,0.3664601);
   data_mc_ratio__296->SetBinContent(23,0.3694544);
   data_mc_ratio__296->SetBinContent(24,0.4463617);
   data_mc_ratio__296->SetBinContent(25,0.4975584);
   data_mc_ratio__296->SetBinContent(26,0.3615237);
   data_mc_ratio__296->SetBinContent(27,1.400022);
   data_mc_ratio__296->SetBinContent(28,0.4394433);
   data_mc_ratio__296->SetBinContent(29,1.126246);
   data_mc_ratio__296->SetBinContent(30,0.3501315);
   data_mc_ratio__296->SetBinContent(31,0.4028185);
   data_mc_ratio__296->SetBinError(1,0.001114573);
   data_mc_ratio__296->SetBinError(2,0.0005632447);
   data_mc_ratio__296->SetBinError(3,0.0005571947);
   data_mc_ratio__296->SetBinError(4,0.0006010792);
   data_mc_ratio__296->SetBinError(5,0.0007163998);
   data_mc_ratio__296->SetBinError(6,0.0009019221);
   data_mc_ratio__296->SetBinError(7,0.0009650774);
   data_mc_ratio__296->SetBinError(8,0.001226801);
   data_mc_ratio__296->SetBinError(9,0.001355613);
   data_mc_ratio__296->SetBinError(10,0.001350038);
   data_mc_ratio__296->SetBinError(11,0.001618506);
   data_mc_ratio__296->SetBinError(12,0.001380526);
   data_mc_ratio__296->SetBinError(13,0.002054421);
   data_mc_ratio__296->SetBinError(14,0.001975258);
   data_mc_ratio__296->SetBinError(15,0.002118166);
   data_mc_ratio__296->SetBinError(16,0.002470106);
   data_mc_ratio__296->SetBinError(17,0.002726566);
   data_mc_ratio__296->SetBinError(18,0.003121495);
   data_mc_ratio__296->SetBinError(19,0.003457798);
   data_mc_ratio__296->SetBinError(20,0.003397547);
   data_mc_ratio__296->SetBinError(21,0.00440332);
   data_mc_ratio__296->SetBinError(22,0.005501511);
   data_mc_ratio__296->SetBinError(23,0.006992028);
   data_mc_ratio__296->SetBinError(24,0.009973473);
   data_mc_ratio__296->SetBinError(25,0.01299502);
   data_mc_ratio__296->SetBinError(26,0.01148418);
   data_mc_ratio__296->SetBinError(27,0.05188826);
   data_mc_ratio__296->SetBinError(28,0.01959381);
   data_mc_ratio__296->SetBinError(29,0.06054738);
   data_mc_ratio__296->SetBinError(30,0.02264813);
   data_mc_ratio__296->SetBinError(31,0.1391775);
   data_mc_ratio__296->SetMinimum(0.4);
   data_mc_ratio__296->SetMaximum(1.6);
   data_mc_ratio__296->SetEntries(244.5531);
   data_mc_ratio__296->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__296->SetLineColor(ci);
   data_mc_ratio__296->SetLineWidth(2);
   data_mc_ratio__296->SetMarkerStyle(20);
   data_mc_ratio__296->SetMarkerSize(1.2);
   data_mc_ratio__296->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__296->GetXaxis()->SetRange(1,30);
   data_mc_ratio__296->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__296->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__296->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__296->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__296->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__296->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__296->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__296->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__296->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__296->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__296->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__296->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__296->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__296->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__296->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__296->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__296->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1296[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1296[30] = {
   0.01471339,
   0.01458965,
   0.01190409,
   0.02300049,
   0.02731796,
   0.02441118,
   0.08355776,
   0.03118137,
   0.03432514,
   0.1278275,
   0.04608442,
   0.1545529,
   0.0503798,
   0.06123054,
   0.05888394,
   0.05798949,
   0.06826981,
   0.07976098,
   0.08002612,
   0.1122678,
   0.1376496,
   0.1811147,
   0.2151084,
   0.2160992,
   0.2452444,
   0.5374547,
   0.5275142,
   0.4631699,
   0.2239791,
   0.5626299};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1296,Graph_from_mc_statistical_error_fy1296,Graph_from_mc_statistical_error_fex1296,Graph_from_mc_statistical_error_fey1296);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1296 = new TH1F("Graph_Graph_from_mc_statistical_error1296","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1296->SetMinimum(0.3248441);
   Graph_Graph_from_mc_statistical_error1296->SetMaximum(1.675156);
   Graph_Graph_from_mc_statistical_error1296->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1296->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1296->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1296);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
