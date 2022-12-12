#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_18()
{
//=========Macro generated from canvas: nC_medium_jets_all_18/nC_medium_jets_all_18
//=========  (Mon Dec 12 10:49:50 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_18 = new TCanvas("nC_medium_jets_all_18", "nC_medium_jets_all_18",0,0,600,600);
   nC_medium_jets_all_18->SetHighLightColor(2);
   nC_medium_jets_all_18->Range(-2.683529,-1.05802e+10,11.21633,7.758817e+10);
   nC_medium_jets_all_18->SetFillColor(0);
   nC_medium_jets_all_18->SetFillStyle(4000);
   nC_medium_jets_all_18->SetBorderMode(0);
   nC_medium_jets_all_18->SetBorderSize(2);
   nC_medium_jets_all_18->SetLeftMargin(0.15709);
   nC_medium_jets_all_18->SetRightMargin(0.1234783);
   nC_medium_jets_all_18->SetBottomMargin(0.12);
   nC_medium_jets_all_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_18->SetFrameBorderMode(0);
   nC_medium_jets_all_18->SetFrameFillStyle(1000);
   nC_medium_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.877133e+10);
   
   TH1F *st_stack_67 = new TH1F("st_stack_67","",10,-0.5,9.5);
   st_stack_67->SetMinimum(0);
   st_stack_67->SetMaximum(6.877133e+10);
   st_stack_67->SetDirectory(0);
   st_stack_67->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_67->SetLineColor(ci);
   st_stack_67->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_67->GetXaxis()->SetRange(1,10);
   st_stack_67->GetXaxis()->SetLabelFont(42);
   st_stack_67->GetXaxis()->SetTitleOffset(1);
   st_stack_67->GetXaxis()->SetTitleFont(42);
   st_stack_67->GetYaxis()->SetTitle("Events/1.0");
   st_stack_67->GetYaxis()->SetLabelFont(42);
   st_stack_67->GetYaxis()->SetTitleSize(0.037);
   st_stack_67->GetYaxis()->SetTitleFont(42);
   st_stack_67->GetZaxis()->SetLabelFont(42);
   st_stack_67->GetZaxis()->SetTitleOffset(1);
   st_stack_67->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_67);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,3.324972e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,4.581819e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,3.072262e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,1.376461e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,4.765336e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,1.379682e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,3.522519e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,8.145829e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,1.72562e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,3551100);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,815351.9);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,8334690);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,9376581);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,7353766);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,4704165);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,2665348);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,1386628);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,681981.3);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,320519.2);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,145995.8);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,64281.84);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,30692.29);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(2.217035e+08);

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
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3527029);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,6136613);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,5127639);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,2790439);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,1136699);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,376634.3);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,107052.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,27091.44);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,6119.47);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,1301.548);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,327.2152);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,761.7884);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,1025.703);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,959.6081);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,718.5117);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,464.564);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,268.4878);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,144.665);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,72.35605);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,33.82918);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,15.5806);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,7.759341);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(2.46127e+08);

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
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(1,5452787);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(2,1.312083e+07);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(3,1.499134e+07);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(4,1.091166e+07);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(5,5747693);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(6,2368621);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(7,808065.4);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(8,237523.6);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(9,61930.64);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(10,14767.4);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(11,4073.54);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(1,699.8709);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(2,1094.095);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(3,1170.287);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(4,992.7924);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(5,713.2909);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(6,451.639);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(7,260.4409);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(8,139.2377);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(9,70.12609);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(10,33.72624);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(11,17.46821);
   VbbHcc_jets_all_nC_medium_stack_3->SetEntries(7.666522e+08);

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
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(1,1045401);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(2,2209129);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(3,2196218);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(4,1375072);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(5,620524.2);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(6,221435.5);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(7,66502.16);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(8,17570.58);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(9,4171.92);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(10,882.0103);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(11,224.2128);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(1,901.4288);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(2,1270.766);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(3,1240.099);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(4,955.4443);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(5,625.4518);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(6,362.7042);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(7,196.1033);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(8,98.54118);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(9,47.79875);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(10,21.41499);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(11,10.68175);
   VbbHcc_jets_all_nC_medium_stack_4->SetEntries(1.321133e+07);

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
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(1,2173911);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(2,5241559);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(3,5512596);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(4,3505164);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(5,1580207);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(6,560929.3);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(7,166398.9);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(8,43034.06);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(9,10092.99);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(10,2299.939);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(11,532.7106);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(1,2701.91);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(2,4089.554);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(3,4088.331);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(4,3185.195);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(5,2061.683);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(6,1203.757);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(7,636.2475);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(8,319.0823);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(9,151.7731);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(10,71.96589);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(11,34.11791);
   VbbHcc_jets_all_nC_medium_stack_5->SetEntries(7460725);

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
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(1,1205135);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(2,1751227);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(3,1251802);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(4,585942.8);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(5,207110);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(6,60321.22);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(7,15251.7);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(8,3457.314);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(9,761.1793);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(10,158.3527);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(11,32.09492);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(1,722.299);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(2,841.3541);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(3,689.6776);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(4,457.0157);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(5,263.6292);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(6,139.089);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(7,69.72133);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(8,32.15255);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(9,14.8507);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(10,6.702049);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(11,2.989738);
   VbbHcc_jets_all_nC_medium_stack_6->SetEntries(1.542487e+07);

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
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(1,448812);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(2,622415.3);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(3,443208.7);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(4,211542.6);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(5,76058);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(6,22732.33);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(7,5834.003);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(8,1356.241);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(9,287.0792);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(10,55.90607);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(11,15.57732);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(1,413.4131);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(2,470.8827);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(3,387.0113);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(4,259.2786);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(5,150.732);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(6,80.91655);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(7,39.86193);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(8,18.91966);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(9,8.665986);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(10,3.751816);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(11,1.928388);
   VbbHcc_jets_all_nC_medium_stack_7->SetEntries(6302940);

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
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(1,207751.3);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(2,270810.1);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(3,190801.6);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(4,91073.23);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(5,32958.15);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(6,9808.378);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(7,2537.941);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(8,604.4989);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(9,120.2367);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(10,22.90876);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(11,5.78134);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(1,273.4088);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(2,300.8523);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(3,246.6079);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(4,167.4307);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(5,97.03453);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(6,51.19302);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(7,25.81116);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(8,12.35908);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(9,5.407114);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(10,2.320343);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(11,1.099475);
   VbbHcc_jets_all_nC_medium_stack_8->SetEntries(2933859);

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
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(1,4191.141);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(2,7660.891);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(3,6667.533);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(4,3696.792);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(5,1511.364);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(6,499.3379);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(7,141.3298);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(8,35.63757);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(9,8.487118);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(10,1.794351);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(11,0.4445529);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(1,3.93636);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(2,5.153552);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(3,4.657602);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(4,3.358871);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(5,2.085112);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(6,1.164749);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(7,0.602089);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(8,0.2993815);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(9,0.1429301);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(10,0.06503379);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(11,0.03248686);
   VbbHcc_jets_all_nC_medium_stack_9->SetEntries(9973110);

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
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(1,465.4546);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(2,937.4842);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(3,883.0885);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(4,520.0379);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(5,220.5633);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(6,74.17646);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(7,21.59802);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(8,5.852814);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(9,1.463473);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(10,0.3560848);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(11,0.1279158);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(1,0.5490205);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(2,0.7768758);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(3,0.7515166);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(4,0.5744099);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(5,0.3722907);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(6,0.214641);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(7,0.1150097);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(8,0.05942456);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(9,0.0294435);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(10,0.01434903);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(11,0.008562342);
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
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(1,137.2613);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(2,344.816);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(3,345.3561);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(4,176.7449);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(5,50.89232);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(6,8.306666);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(7,0.7306046);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(8,0.03874314);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(9,0.002123052);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(1,0.6263261);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(2,0.9803539);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(3,0.9761763);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(4,0.690546);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(5,0.368043);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(6,0.1472865);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(7,0.04278169);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(8,0.009516245);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(9,0.001533082);
   VbbHcc_jets_all_nC_medium_stack_11->SetEntries(486910);

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
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(1,15.51826);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(2,46.15801);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(3,50.69526);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(4,26.67201);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(5,7.435567);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(6,0.9788789);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(7,0.04822682);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(8,0.001220252);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(9,0.0002459785);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(1,0.07204427);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(2,0.1242483);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(3,0.1300527);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(4,0.09385212);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(5,0.04959187);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(6,0.01779888);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(7,0.003890168);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(8,0.0006213496);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(9,0.0002459785);
   VbbHcc_jets_all_nC_medium_stack_12->SetEntries(496915);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_18->Modified();
   nC_medium_jets_all_18->cd();
   nC_medium_jets_all_18->SetSelected(nC_medium_jets_all_18);
}
