#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_16_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_16/nC_medium_jets_all_16
//=========  (Tue Dec  6 15:26:16 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_16 = new TCanvas("nC_medium_jets_all_16", "nC_medium_jets_all_16",0,0,600,600);
   nC_medium_jets_all_16->SetHighLightColor(2);
   nC_medium_jets_all_16->Range(-2.683529,3.67506,11.21633,13.71339);
   nC_medium_jets_all_16->SetFillColor(0);
   nC_medium_jets_all_16->SetFillStyle(4000);
   nC_medium_jets_all_16->SetBorderMode(0);
   nC_medium_jets_all_16->SetBorderSize(2);
   nC_medium_jets_all_16->SetLogy();
   nC_medium_jets_all_16->SetLeftMargin(0.15709);
   nC_medium_jets_all_16->SetRightMargin(0.1234783);
   nC_medium_jets_all_16->SetBottomMargin(0.12);
   nC_medium_jets_all_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_16->SetFrameBorderMode(0);
   nC_medium_jets_all_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(333984.3);
   st->SetMaximum(2.168622e+12);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",10,-0.5,9.5);
   st_stack_45->SetMinimum(75798.22);
   st_stack_45->SetMaximum(5.123351e+12);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_45->GetXaxis()->SetRange(1,10);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetTitleOffset(1);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/1.0");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetTitleSize(0.037);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetTitleOffset(1);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,1.751321e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,2.166836e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,1.270002e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,4.877231e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,1.43569e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,3.582424e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,8.008608e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,1.661863e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,3302356);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,602897.7);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,143189.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,5127924);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,5682970);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,4334483);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,2674552);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,1443550);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,716623.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,336417.2);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,152012.7);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,67054.13);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,28413.77);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,13677.13);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(4.010866e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,2263928);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,3608301);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,2750369);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,1366152);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,512098.6);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,159428.8);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,44106.28);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,11430.2);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,2792.725);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,710.6722);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,236.705);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,469.3625);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,619.2386);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,566.8232);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,417.405);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,264.8749);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,151.2573);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,80.40223);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,40.91715);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,19.9076);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,9.993987);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,5.555468);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(1.791955e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_3 = new TH1D("VbbHcc_jets_all_nC_medium_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(1,3396788);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(2,7767674);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(3,8414043);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(4,5785569);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(5,2873120);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(6,1119375);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(7,365098.1);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(8,104851.4);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(9,27801.67);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(10,6968.301);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(11,2309.349);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(1,453.0228);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(2,702.4917);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(3,746.7053);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(4,629.2439);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(5,448.2247);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(6,281.3681);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(7,160.9058);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(8,86.01461);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(9,44.06603);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(10,21.90016);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(11,12.4257);
   VbbHcc_jets_all_nC_medium_stack_3->SetEntries(4.953882e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_all_nC_medium_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_3->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_3,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_4 = new TH1D("VbbHcc_jets_all_nC_medium_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(1,631563.4);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(2,1280724);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(3,1198165);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(4,693779.9);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(5,289956.2);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(6,96798.34);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(7,28079.14);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(8,7338.781);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(9,1873.191);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(10,470.9893);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(11,164.9505);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(1,447.5586);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(2,634.9659);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(3,611.9827);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(4,463.8732);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(5,298.5462);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(6,171.5987);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(7,91.83608);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(8,46.59421);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(9,23.32442);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(10,11.5206);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(11,6.742173);
   VbbHcc_jets_all_nC_medium_stack_4->SetEntries(1.381774e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_all_nC_medium_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_4->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_4,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_5 = new TH1D("VbbHcc_jets_all_nC_medium_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(1,1353499);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(2,3056108);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(3,2986017);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(4,1746118);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(5,724734.9);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(6,239861.5);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(7,68538.81);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(8,17802.85);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(9,4540.458);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(10,1180.365);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(11,389.5127);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(1,1220.6);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(2,1829.038);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(3,1801.853);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(4,1372.356);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(5,879.9978);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(6,503.5132);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(7,267.4101);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(8,135.1774);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(9,67.66112);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(10,34.2401);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(11,19.27112);
   VbbHcc_jets_all_nC_medium_stack_5->SetEntries(9601782);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_all_nC_medium_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_5->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_5,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_6 = new TH1D("VbbHcc_jets_all_nC_medium_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(1,817161.4);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(2,1019937);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(3,634048.8);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(4,259685);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(5,81161.81);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(6,21733.43);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(7,5396.832);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(8,1297.838);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(9,305.9652);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(10,77.66595);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(11,29.50244);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(1,276.164);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(2,307.9514);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(3,242.1206);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(4,154.3374);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(5,85.81021);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(6,44.1023);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(7,21.80653);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(8,10.58485);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(9,5.088384);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(10,2.53062);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(11,1.535711);
   VbbHcc_jets_all_nC_medium_stack_6->SetEntries(3.111554e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_all_nC_medium_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_6->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_6,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_7 = new TH1D("VbbHcc_jets_all_nC_medium_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(1,298920.9);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(2,362692.5);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(3,226906.5);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(4,94679.87);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(5,30314.35);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(6,8232.948);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(7,2055.615);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(8,499.4615);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(9,117.2512);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(10,30.49047);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(11,10.00984);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(1,150.293);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(2,165.1299);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(3,130.2026);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(4,83.76243);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(5,47.15049);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(6,24.40471);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(7,12.10166);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(8,5.9166);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(9,2.836507);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(10,1.436507);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(11,0.8049409);
   VbbHcc_jets_all_nC_medium_stack_7->SetEntries(1.387664e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_all_nC_medium_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_7->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_7,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_8 = new TH1D("VbbHcc_jets_all_nC_medium_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(1,136420.3);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(2,157413.4);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(3,98071.36);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(4,41379.94);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(5,13382.79);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(6,3587.864);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(7,911.619);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(8,216.9436);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(9,51.44197);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(10,14.75944);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(11,4.970367);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(1,165.3114);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(2,177.048);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(3,139.2932);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(4,90.11435);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(5,50.97728);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(6,26.21249);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(7,13.12583);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(8,6.327092);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(9,3.053563);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(10,1.631061);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(11,0.9142127);
   VbbHcc_jets_all_nC_medium_stack_8->SetEntries(2307748);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_all_nC_medium_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_8->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_8,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_9 = new TH1D("VbbHcc_jets_all_nC_medium_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(1,2574.049);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(2,4503.093);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(3,3661.422);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(4,1863.581);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(5,697.1058);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(6,213.3122);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(7,58.21326);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(8,15.15138);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(9,3.870775);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(10,1.014545);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(11,0.3462749);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(1,2.107089);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(2,2.763728);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(3,2.471025);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(4,1.746866);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(5,1.058049);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(6,0.580086);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(7,0.3006102);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(8,0.1516344);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(9,0.07602527);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(10,0.03848002);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(11,0.02231792);
   VbbHcc_jets_all_nC_medium_stack_9->SetEntries(9308026);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_all_nC_medium_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_9->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_9,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_10 = new TH1D("VbbHcc_jets_all_nC_medium_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(1,279.5534);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(2,563.0558);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(3,530.3855);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(4,312.3363);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(5,132.4709);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(6,44.5506);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(7,12.97183);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(8,3.515217);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(9,0.8789664);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(10,0.2138656);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(11,0.0768266);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(1,0.3297433);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(2,0.4665939);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(3,0.4513631);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(4,0.3449922);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(5,0.2235989);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(6,0.128914);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(7,0.06907518);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(8,0.03569057);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(9,0.01768385);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(10,0.008618068);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(11,0.005142567);
   VbbHcc_jets_all_nC_medium_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_all_nC_medium_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_10->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_10,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_11 = new TH1D("VbbHcc_jets_all_nC_medium_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(1,117.866);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(2,231.6934);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(3,185.4012);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(4,73.56691);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(5,16.15992);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(6,2.313454);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(7,0.3085165);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(8,0.06002378);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(9,0.004557443);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(10,0.003080716);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(1,0.4412609);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(2,0.6133994);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(3,0.5444894);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(4,0.341319);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(5,0.1586935);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(6,0.05934616);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(7,0.02160367);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(8,0.0093605);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(9,0.002382344);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(10,0.002179075);
   VbbHcc_jets_all_nC_medium_stack_11->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nC_medium_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_11->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_11,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_12 = new TH1D("VbbHcc_jets_all_nC_medium_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(1,225756.4);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(2,603133.4);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(3,612822.1);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(4,311116.5);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(5,84452);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(6,11421.66);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(7,558.7753);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(1,957.1876);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(2,1562.709);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(3,1572.114);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(4,1117.299);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(5,580.3641);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(6,212.9202);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(7,46.85073);
   VbbHcc_jets_all_nC_medium_stack_12->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nC_medium_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_12->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_16->Modified();
   nC_medium_jets_all_16->cd();
   nC_medium_jets_all_16->SetSelected(nC_medium_jets_all_16);
}
