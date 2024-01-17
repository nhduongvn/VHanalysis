#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_18/Aplanarity_tagFirst_18
//=========  (Wed Jan 10 10:25:34 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_18 = new TCanvas("Aplanarity_tagFirst_18", "Aplanarity_tagFirst_18",0,0,600,600);
   Aplanarity_tagFirst_18->SetHighLightColor(2);
   Aplanarity_tagFirst_18->Range(0,0,1,1);
   Aplanarity_tagFirst_18->SetFillColor(0);
   Aplanarity_tagFirst_18->SetFillStyle(4000);
   Aplanarity_tagFirst_18->SetBorderMode(0);
   Aplanarity_tagFirst_18->SetBorderSize(2);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6455.076,1.052419,6448631);
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
   st->SetMaximum(5803122);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(0.01);
   st_stack_192->SetMaximum(5803122);
   st_stack_192->SetDirectory(nullptr);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->SetLineWidth(0);
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetLabelSize(0.05);
   st_stack_192->GetYaxis()->SetTitleSize(0.057);
   st_stack_192->GetYaxis()->SetTitleOffset(1.2);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VH_tagFirst_Aplanarity_stack_1 = new TH1D("VH_tagFirst_Aplanarity_stack_1","",50,0,1);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(1,1715847);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(2,211807.7);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(3,48013.38);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(4,18320.07);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(5,5811.915);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(6,3063.24);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(7,2038.121);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(8,5539.951);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(9,1100.605);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(10,246.8886);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(11,126.1079);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(12,75.32032);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(13,704.3169);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(14,34.73357);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(15,24.88177);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(16,9.583468);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(17,21.89749);
   VH_tagFirst_Aplanarity_stack_1->SetBinContent(18,0.6956178);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(1,20156);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(2,8079.04);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(3,3006.908);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(4,2130.006);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(5,705.4315);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(6,551.825);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(7,643.1961);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(8,4360.166);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(9,602.4623);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(10,72.7228);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(11,35.66508);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(12,24.74039);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(13,597.7443);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(14,18.08839);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(15,14.02715);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(16,8.786664);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(17,15.48865);
   VH_tagFirst_Aplanarity_stack_1->SetBinError(18,0.6956178);
   VH_tagFirst_Aplanarity_stack_1->SetEntries(170361);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_2 = new TH1D("VH_tagFirst_Aplanarity_stack_2","",50,0,1);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(1,19519.16);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(2,2619.963);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(3,694.7586);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(4,252.8279);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(5,113.2646);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(6,44.73132);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(7,27.60142);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(8,17.38584);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(9,8.477613);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(10,5.328801);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(11,2.546983);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(12,1.392643);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(13,1.343921);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(14,0.915153);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(15,1.090622);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(16,0.1361967);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(17,0.2099796);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(18,0.05110414);
   VH_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.0412906);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(1,66.54365);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(2,23.06207);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(3,13.02165);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(4,7.168947);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(5,5.274762);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(6,2.843254);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(7,3.591829);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(8,1.921908);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(9,1.277724);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(10,1.018606);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(11,0.7330835);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(12,0.4471207);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(13,0.5064627);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(14,0.4008926);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(15,0.5518715);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(16,0.0792816);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(17,0.09922191);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(18,0.05110414);
   VH_tagFirst_Aplanarity_stack_2->SetBinError(19,0.0412906);
   VH_tagFirst_Aplanarity_stack_2->SetEntries(244547);

   ci = TColor::GetColor("#660066");
   VH_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_3 = new TH1D("VH_tagFirst_Aplanarity_stack_3","",50,0,1);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(1,345710);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(2,46619.42);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(3,12347.58);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(4,4477.766);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(5,2070.59);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(6,1052.555);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(7,579.0092);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(8,343.3615);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(9,207.9811);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(10,134.4986);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(11,85.48792);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(12,54.15957);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(13,33.82349);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(14,22.12244);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(15,12.24144);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(16,8.417614);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(17,5.716201);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(18,2.739977);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(19,1.256058);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(20,0.4174318);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(21,0.4267119);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.1511536);
   VH_tagFirst_Aplanarity_stack_3->SetBinContent(23,0.1029744);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(1,173.6622);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(2,63.42467);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(3,32.7629);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(4,19.30947);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(5,13.51633);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(6,9.337644);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(7,6.869511);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(8,5.313385);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(9,4.109773);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(10,3.247913);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(11,2.647055);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(12,2.041298);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(13,1.673506);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(14,3.467786);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(15,0.9641522);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(16,0.8294728);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(17,1.050902);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(18,0.4772895);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(19,0.3131859);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(20,0.1810204);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(21,0.1799852);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(22,0.1070743);
   VH_tagFirst_Aplanarity_stack_3->SetBinError(23,0.1029744);
   VH_tagFirst_Aplanarity_stack_3->SetEntries(5766430);

   ci = TColor::GetColor("#cc00cc");
   VH_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_4 = new TH1D("VH_tagFirst_Aplanarity_stack_4","",50,0,1);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(1,14257.46);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(2,1566.058);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(3,401.9705);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(4,132.73);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(5,60.04146);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(6,29.08137);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(7,16.62934);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(8,11.31098);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(9,7.125058);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(10,3.668448);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(11,1.685989);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(12,1.142364);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(13,0.517538);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(14,0.4952749);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(15,0.2381696);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(16,0.2148118);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.2445057);
   VH_tagFirst_Aplanarity_stack_4->SetBinContent(20,0.4799386);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(1,85.92847);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(2,30.79138);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(3,14.48872);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(4,6.761323);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(5,4.400829);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(6,2.997002);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(7,5.594622);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(8,1.805604);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(9,1.337489);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(10,1.438217);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(11,0.6340304);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(12,0.3940111);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(13,0.260993);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(14,0.2494456);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(15,0.1696871);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(16,0.1518949);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(19,0.1649869);
   VH_tagFirst_Aplanarity_stack_4->SetBinError(20,0.4799386);
   VH_tagFirst_Aplanarity_stack_4->SetEntries(92535);

   ci = TColor::GetColor("#00cccc");
   VH_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_5 = new TH1D("VH_tagFirst_Aplanarity_stack_5","",50,0,1);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(1,7109.328);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(2,737.4348);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(3,229.406);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(4,76.31192);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(5,30.37564);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(6,25.0909);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(7,10.95394);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(8,4.851495);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(9,3.726622);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(10,0.6730591);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(11,0.4910548);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(12,1.179943);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(13,0.1524675);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(15,0.0004431656);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(16,2.35509);
   VH_tagFirst_Aplanarity_stack_5->SetBinContent(17,0.1333172);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(1,105.7589);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(2,32.03319);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(3,25.41157);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(4,9.243546);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(5,8.215959);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(6,10.27495);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(7,3.606184);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(8,1.869609);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(9,2.116676);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(10,0.2952151);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(11,0.2592303);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(12,0.6249397);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(13,0.1357881);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(15,0.0004431656);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(16,2.230562);
   VH_tagFirst_Aplanarity_stack_5->SetBinError(17,0.1333172);
   VH_tagFirst_Aplanarity_stack_5->SetEntries(42333);

   ci = TColor::GetColor("#ff99cc");
   VH_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_6 = new TH1D("VH_tagFirst_Aplanarity_stack_6","",50,0,1);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(1,62.99483);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(2,6.143618);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(3,1.260351);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(4,0.4684126);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(5,0.587622);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.5642928);
   VH_tagFirst_Aplanarity_stack_6->SetBinContent(7,0.4870807);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(1,5.659032);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(2,1.69819);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(3,0.7473219);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(4,0.4684126);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(5,0.587622);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(6,0.5642928);
   VH_tagFirst_Aplanarity_stack_6->SetBinError(7,0.4870807);
   VH_tagFirst_Aplanarity_stack_6->SetEntries(150);

   ci = TColor::GetColor("#9933ff");
   VH_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_7 = new TH1D("VH_tagFirst_Aplanarity_stack_7","",50,0,1);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(1,176.7553);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(2,22.58789);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(3,3.414976);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(4,3.836886);
   VH_tagFirst_Aplanarity_stack_7->SetBinContent(5,0.5166625);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(1,8.632475);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(2,3.111326);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(3,1.177284);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(4,1.289599);
   VH_tagFirst_Aplanarity_stack_7->SetBinError(5,0.5166625);
   VH_tagFirst_Aplanarity_stack_7->SetEntries(523);

   ci = TColor::GetColor("#3399ff");
   VH_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_8 = new TH1D("VH_tagFirst_Aplanarity_stack_8","",50,0,1);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(1,151.0783);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(2,12.15817);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(3,3.92328);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(4,0.3381559);
   VH_tagFirst_Aplanarity_stack_8->SetBinContent(6,0.3800276);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(1,7.575891);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(2,2.19106);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(3,1.196556);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(4,0.3381559);
   VH_tagFirst_Aplanarity_stack_8->SetBinError(6,0.3800276);
   VH_tagFirst_Aplanarity_stack_8->SetEntries(463);

   ci = TColor::GetColor("#33ff99");
   VH_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_9 = new TH1D("VH_tagFirst_Aplanarity_stack_9","",50,0,1);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(1,80.43357);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(2,7.15142);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(3,1.667069);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(4,0.5572126);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(5,0.2991651);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(6,0.1109642);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.06756092);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.04670071);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.02717397);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.02443198);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.01387379);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.002390428);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.002308004);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.006762789);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.001488595);
   VH_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.005085333);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(1,0.4974468);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(2,0.1357785);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(3,0.06533756);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(4,0.0379808);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(5,0.04587298);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(6,0.01646001);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(7,0.0128423);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(8,0.01148318);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(9,0.008812801);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(10,0.00790077);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(11,0.006229042);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(12,0.002390428);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(13,0.002308004);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(14,0.003905899);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(15,0.001488595);
   VH_tagFirst_Aplanarity_stack_9->SetBinError(16,0.003596338);
   VH_tagFirst_Aplanarity_stack_9->SetEntries(37266);

   ci = TColor::GetColor("#cccc00");
   VH_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_10 = new TH1D("VH_tagFirst_Aplanarity_stack_10","",50,0,1);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(1,73.61002);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(2,8.48241);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(3,2.040948);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(4,0.6825145);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(5,0.3207527);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.1346868);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.08853057);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.04944277);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.02812279);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.01840885);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.007412791);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.006004372);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.004385792);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.001589102);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.0008079094);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.001502912);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.0003458597);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.001519348);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.0007273831);
   VH_tagFirst_Aplanarity_stack_10->SetBinContent(21,0.0007148411);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(1,0.2324152);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(2,0.0788654);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(3,0.03864721);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(4,0.02234805);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(5,0.01530094);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(6,0.009899488);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(7,0.007993749);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(8,0.00602415);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(9,0.004510931);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(10,0.003623308);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(11,0.002319466);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(12,0.002052295);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(13,0.001791628);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(14,0.001123748);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(15,0.0008079094);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(16,0.001063769);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(17,0.0003458597);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(18,0.001074932);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0007273831);
   VH_tagFirst_Aplanarity_stack_10->SetBinError(21,0.0007148411);
   VH_tagFirst_Aplanarity_stack_10->SetEntries(118631);

   ci = TColor::GetColor("#0000cc");
   VH_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_11 = new TH1D("VH_tagFirst_Aplanarity_stack_11","",50,0,1);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(1,2.044803);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.1705612);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.03563001);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.008724177);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.002000323);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.001623734);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.00525871);
   VH_tagFirst_Aplanarity_stack_11->SetBinContent(8,0.003132481);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(1,0.07801322);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(2,0.02084235);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(3,0.00935636);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(4,0.004481874);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(5,0.002000323);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(6,0.001623734);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(7,0.00373589);
   VH_tagFirst_Aplanarity_stack_11->SetBinError(8,0.003132481);
   VH_tagFirst_Aplanarity_stack_11->SetEntries(939);

   ci = TColor::GetColor("#cc0000");
   VH_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VH_tagFirst_Aplanarity_stack_12 = new TH1D("VH_tagFirst_Aplanarity_stack_12","",50,0,1);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(1,1.018065);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.1080053);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.02359802);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.006697449);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.003128886);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.0009677252);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.0004199154);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.001756335);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.0003603593);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.000280877);
   VH_tagFirst_Aplanarity_stack_12->SetBinContent(12,0.001298875);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01946117);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(2,0.006097371);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(3,0.002847819);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(4,0.001518216);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(5,0.001060837);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(6,0.0005593156);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(7,0.0004199154);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(8,0.0007345383);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(9,0.0003603593);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(10,0.000280877);
   VH_tagFirst_Aplanarity_stack_12->SetBinError(12,0.0006529964);
   VH_tagFirst_Aplanarity_stack_12->SetEntries(3484);

   ci = TColor::GetColor("#00cc00");
   VH_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Aplanarity__383 = new TH1D("VH_tagFirst_Aplanarity__383","",50,0,1);
   VH_tagFirst_Aplanarity__383->SetBinContent(0,2);
   VH_tagFirst_Aplanarity__383->SetBinContent(1,2611405);
   VH_tagFirst_Aplanarity__383->SetBinContent(2,342025);
   VH_tagFirst_Aplanarity__383->SetBinContent(3,89957);
   VH_tagFirst_Aplanarity__383->SetBinContent(4,30589);
   VH_tagFirst_Aplanarity__383->SetBinContent(5,12860);
   VH_tagFirst_Aplanarity__383->SetBinContent(6,6270);
   VH_tagFirst_Aplanarity__383->SetBinContent(7,3355);
   VH_tagFirst_Aplanarity__383->SetBinContent(8,1949);
   VH_tagFirst_Aplanarity__383->SetBinContent(9,1149);
   VH_tagFirst_Aplanarity__383->SetBinContent(10,777);
   VH_tagFirst_Aplanarity__383->SetBinContent(11,449);
   VH_tagFirst_Aplanarity__383->SetBinContent(12,311);
   VH_tagFirst_Aplanarity__383->SetBinContent(13,184);
   VH_tagFirst_Aplanarity__383->SetBinContent(14,91);
   VH_tagFirst_Aplanarity__383->SetBinContent(15,77);
   VH_tagFirst_Aplanarity__383->SetBinContent(16,51);
   VH_tagFirst_Aplanarity__383->SetBinContent(17,29);
   VH_tagFirst_Aplanarity__383->SetBinContent(18,17);
   VH_tagFirst_Aplanarity__383->SetBinContent(19,12);
   VH_tagFirst_Aplanarity__383->SetBinContent(20,1);
   VH_tagFirst_Aplanarity__383->SetBinContent(21,2);
   VH_tagFirst_Aplanarity__383->SetEntries(3101611);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__383->SetLineColor(ci);
   VH_tagFirst_Aplanarity__383->SetLineWidth(2);
   VH_tagFirst_Aplanarity__383->SetMarkerStyle(20);
   VH_tagFirst_Aplanarity__383->SetMarkerSize(1.2);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetRange(1,100);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__383->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__383->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__383->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_Aplanarity_fx1383[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fy1383[50] = { 2102991, 263407.4, 61699.47, 23265.61, 8087.916, 4215.891, 2672.964, 5916.962, 1327.971, 391.1006, 216.3411, 133.2045, 740.161, 58.27478, 38.45475, 20.71377, 27.95734,
   3.488219, 1.542581, 0.8973704, 0.4274267, 0.1511536, 0.1029744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fex1383[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagFirst_Aplanarity_fey1383[50] = { 20157.32, 8079.445, 3007.257, 2130.137, 705.6427, 552.0155, 643.2774, 4360.171, 602.4829, 72.81722, 35.77725, 24.83947, 597.7469, 18.42385, 14.07209, 9.104848, 15.52515,
   0.845164, 0.3563868, 0.512942, 0.1799866, 0.1070743, 0.1029744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagFirst_Aplanarity_fx1383,Graph_from_VH_tagFirst_Aplanarity_fy1383,Graph_from_VH_tagFirst_Aplanarity_fex1383,Graph_from_VH_tagFirst_Aplanarity_fey1383);
   gre->SetName("Graph_from_VH_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_Aplanarity1383 = new TH1F("Graph_Graph_from_VH_tagFirst_Aplanarity1383","",100,0,1.1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetMinimum(-212314.8);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetMaximum(2335463);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_Aplanarity1383->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_Aplanarity1383);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagFirst_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__384 = new TH1D("data_mc_ratio__384","",50,0,1);
   data_mc_ratio__384->SetBinContent(1,1.241758);
   data_mc_ratio__384->SetBinContent(2,1.298464);
   data_mc_ratio__384->SetBinContent(3,1.457987);
   data_mc_ratio__384->SetBinContent(4,1.314773);
   data_mc_ratio__384->SetBinContent(5,1.590026);
   data_mc_ratio__384->SetBinContent(6,1.48723);
   data_mc_ratio__384->SetBinContent(7,1.255161);
   data_mc_ratio__384->SetBinContent(8,0.329392);
   data_mc_ratio__384->SetBinContent(9,0.8652296);
   data_mc_ratio__384->SetBinContent(10,1.986701);
   data_mc_ratio__384->SetBinContent(11,2.075426);
   data_mc_ratio__384->SetBinContent(12,2.334755);
   data_mc_ratio__384->SetBinContent(13,0.2485946);
   data_mc_ratio__384->SetBinContent(14,1.561567);
   data_mc_ratio__384->SetBinContent(15,2.002354);
   data_mc_ratio__384->SetBinContent(16,2.46213);
   data_mc_ratio__384->SetBinContent(17,1.037295);
   data_mc_ratio__384->SetBinContent(18,4.873548);
   data_mc_ratio__384->SetBinContent(19,7.779168);
   data_mc_ratio__384->SetBinContent(20,1.114367);
   data_mc_ratio__384->SetBinContent(21,4.679165);
   data_mc_ratio__384->SetBinError(1,0.0007684218);
   data_mc_ratio__384->SetBinError(2,0.002220245);
   data_mc_ratio__384->SetBinError(3,0.004861117);
   data_mc_ratio__384->SetBinError(4,0.00751741);
   data_mc_ratio__384->SetBinError(5,0.01402116);
   data_mc_ratio__384->SetBinError(6,0.01878211);
   data_mc_ratio__384->SetBinError(7,0.02166972);
   data_mc_ratio__384->SetBinError(8,0.007461173);
   data_mc_ratio__384->SetBinError(9,0.02552533);
   data_mc_ratio__384->SetBinError(10,0.07127251);
   data_mc_ratio__384->SetBinError(11,0.09794542);
   data_mc_ratio__384->SetBinError(12,0.1323918);
   data_mc_ratio__384->SetBinError(13,0.01832663);
   data_mc_ratio__384->SetBinError(14,0.1636967);
   data_mc_ratio__384->SetBinError(15,0.2281894);
   data_mc_ratio__384->SetBinError(16,0.3447672);
   data_mc_ratio__384->SetBinError(17,0.1926208);
   data_mc_ratio__384->SetBinError(18,1.182009);
   data_mc_ratio__384->SetBinError(19,2.245652);
   data_mc_ratio__384->SetBinError(20,1.114367);
   data_mc_ratio__384->SetBinError(21,3.308669);
   data_mc_ratio__384->SetMinimum(0.4);
   data_mc_ratio__384->SetMaximum(1.6);
   data_mc_ratio__384->SetEntries(59.70522);
   data_mc_ratio__384->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__384->SetLineColor(ci);
   data_mc_ratio__384->SetLineWidth(2);
   data_mc_ratio__384->SetMarkerStyle(20);
   data_mc_ratio__384->SetMarkerSize(1.2);
   data_mc_ratio__384->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__384->GetXaxis()->SetRange(1,50);
   data_mc_ratio__384->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__384->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__384->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__384->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__384->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__384->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__384->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1384[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1384[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1384[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1384[50] = { 0.009585074, 0.03067281, 0.04874041, 0.09155731, 0.08724654, 0.1309369, 0.2406607, 0.7368935, 0.4536867, 0.1861854, 0.1653743, 0.1864762, 0.8075904, 0.3161548, 0.365939, 0.4395554, 0.5553156,
   0.242291, 0.2310327, 0.5716056, 0.4210934, 0.7083809, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1384,Graph_from_mc_statistical_error_fy1384,Graph_from_mc_statistical_error_fex1384,Graph_from_mc_statistical_error_fey1384);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1384 = new TH1F("Graph_Graph_from_mc_statistical_error1384","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1384->SetMinimum(-0.2);
   Graph_Graph_from_mc_statistical_error1384->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1384->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1384->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1384->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1384);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->SetSelected(Aplanarity_tagFirst_18);
}
