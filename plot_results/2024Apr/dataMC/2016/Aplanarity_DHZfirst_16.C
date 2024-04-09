#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_16()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_16/Aplanarity_DHZfirst_16
//=========  (Mon Apr  8 11:54:17 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_16 = new TCanvas("Aplanarity_DHZfirst_16", "Aplanarity_DHZfirst_16",0,0,600,600);
   Aplanarity_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_DHZfirst_16->Range(0,0,1,1);
   Aplanarity_DHZfirst_16->SetFillColor(0);
   Aplanarity_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_DHZfirst_16->SetBorderMode(0);
   Aplanarity_DHZfirst_16->SetBorderSize(2);
   Aplanarity_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-782.4743,1.052419,781701.8);
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
   st->SetMaximum(703453.3);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",50,0,1);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(703453.3);
   st_stack_118->SetDirectory(nullptr);
   st_stack_118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_118->SetLineColor(ci);
   st_stack_118->SetLineWidth(0);
   st_stack_118->GetXaxis()->SetRange(1,50);
   st_stack_118->GetXaxis()->SetLabelFont(42);
   st_stack_118->GetXaxis()->SetTitleOffset(1);
   st_stack_118->GetXaxis()->SetTitleFont(42);
   st_stack_118->GetYaxis()->SetTitle("Events/0.02");
   st_stack_118->GetYaxis()->SetLabelFont(42);
   st_stack_118->GetYaxis()->SetLabelSize(0.05);
   st_stack_118->GetYaxis()->SetTitleSize(0.057);
   st_stack_118->GetYaxis()->SetTitleOffset(1.2);
   st_stack_118->GetYaxis()->SetTitleFont(42);
   st_stack_118->GetZaxis()->SetLabelFont(42);
   st_stack_118->GetZaxis()->SetTitleOffset(1);
   st_stack_118->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_118);
   
   
   TH1D *VH_DHZfirst_Aplanarity_stack_1 = new TH1D("VH_DHZfirst_Aplanarity_stack_1","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,214572.1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,30906.37);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,4036.953);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,709.8357);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,233.407);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,32.87844);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,5.777197);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(13,20.43695);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(14,1.887532);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,6710.433);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,3130.165);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,753.5849);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,342.5551);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,153.0759);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,17.11032);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,5.777197);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(13,20.43695);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(14,1.887532);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(13484);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_1,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_2 = new TH1D("VH_DHZfirst_Aplanarity_stack_2","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,1684.873);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,250.5849);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,55.12678);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,15.50213);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,4.34918);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,2.382082);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.6836748);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.4019943);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(9,0.1495154);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(10,0.01078967);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(11,0.07741502);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(12,0.03454982);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(13,0.04556776);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,14.18949);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,5.545495);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,2.580248);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,1.434897);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,0.7533483);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.6109021);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.2662124);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.2161299);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(9,0.07546127);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(10,0.01078967);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(11,0.0451324);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(12,0.03454982);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(13,0.03320921);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(36231);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_2,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_3 = new TH1D("VH_DHZfirst_Aplanarity_stack_3","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,16935.1);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,2553.965);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,601.4002);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,176.6563);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,64.36019);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,25.6977);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,11.32231);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,6.097409);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,2.245454);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,1.503471);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,0.9646547);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.4044993);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.3056215);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(14,0.1348219);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.05672638);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(16,0.04051546);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(17,0.05812357);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(18,0.04088173);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,30.5292);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,11.68439);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,5.626172);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,3.030657);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,1.806656);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,1.135323);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,0.7401757);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.5546657);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.3354541);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.2729767);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.2235874);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.1375294);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.1203377);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(14,0.0784064);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.05672638);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(16,0.04051546);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(17,0.05812357);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(18,0.04088173);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(401489);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_3,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_4 = new TH1D("VH_DHZfirst_Aplanarity_stack_4","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,1432.81);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,150.0383);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,38.48658);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,5.717356);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,1.588142);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,0.1418374);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.1210986);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(8,0.09062165);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(10,0.01819859);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,27.55597);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,10.27502);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,6.374105);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,1.860918);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,0.5836501);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,0.08680597);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.0856805);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(8,0.06472215);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(10,0.01819859);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(12460);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_4,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_5 = new TH1D("VH_DHZfirst_Aplanarity_stack_5","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,835.387);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,94.53878);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,27.26907);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,2.48047);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(5,0.9293658);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(6,4.179598);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,32.83372);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,11.30691);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,9.072799);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,1.133141);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(5,0.5549495);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(6,4.179576);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(8142);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_5,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_6 = new TH1D("VH_DHZfirst_Aplanarity_stack_6","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,7.614926);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(2,0.6984388);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(3,0.2087329);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,0.9418739);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(2,0.2718368);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(3,0.1507089);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(78);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_6,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_7 = new TH1D("VH_DHZfirst_Aplanarity_stack_7","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,29.60369);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,1.988769);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(3,0.2754051);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(4,0.2023607);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(6,0.0785989);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,1.700261);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,0.4282537);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(3,0.1590306);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(4,0.1440667);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(6,0.0785989);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(342);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_7,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_8 = new TH1D("VH_DHZfirst_Aplanarity_stack_8","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,21.13226);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,1.760142);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(3,0.1720666);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,2.078875);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.5925334);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(3,0.1720666);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(118);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_8,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_9 = new TH1D("VH_DHZfirst_Aplanarity_stack_9","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,10.01437);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.7766004);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1246685);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.02209333);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(5,0.009940254);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(8,0.0005200406);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(10,0.0009437359);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.1081222);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.02965217);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.01171063);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.005077475);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(5,0.003382114);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(8,0.0005200406);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(10,0.0009437359);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(9781);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_9,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_10 = new TH1D("VH_DHZfirst_Aplanarity_stack_10","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,4.166731);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.399057);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.07603215);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.01472435);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.004305838);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.0007887695);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.000559142);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(8,0.0002595531);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.03856312);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01177167);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.005076298);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.00229027);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.001214095);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.0004873968);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0004093606);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(8,0.0002595531);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(13681);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_10,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_11 = new TH1D("VH_DHZfirst_Aplanarity_stack_11","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.2908559);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.02735804);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.00375606);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.02406673);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.0074279);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.002665142);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(167);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_11,"");
   
   TH1D *VH_DHZfirst_Aplanarity_stack_12 = new TH1D("VH_DHZfirst_Aplanarity_stack_12","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.1088417);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.01061353);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.001583194);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(4,0.0005791065);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(5,0.0002193485);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.005519653);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.00169739);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.0006673354);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(4,0.0004121481);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(5,0.0002193485);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(452);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Aplanarity__235 = new TH1D("VH_DHZfirst_Aplanarity__235","",50,0,1);
   VH_DHZfirst_Aplanarity__235->SetBinContent(1,316554);
   VH_DHZfirst_Aplanarity__235->SetBinContent(2,41890);
   VH_DHZfirst_Aplanarity__235->SetBinContent(3,8949);
   VH_DHZfirst_Aplanarity__235->SetBinContent(4,2253);
   VH_DHZfirst_Aplanarity__235->SetBinContent(5,612);
   VH_DHZfirst_Aplanarity__235->SetBinContent(6,193);
   VH_DHZfirst_Aplanarity__235->SetBinContent(7,69);
   VH_DHZfirst_Aplanarity__235->SetBinContent(8,19);
   VH_DHZfirst_Aplanarity__235->SetBinContent(9,18);
   VH_DHZfirst_Aplanarity__235->SetBinContent(10,11);
   VH_DHZfirst_Aplanarity__235->SetBinContent(11,1);
   VH_DHZfirst_Aplanarity__235->SetBinContent(12,1);
   VH_DHZfirst_Aplanarity__235->SetBinContent(13,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(14,1);
   VH_DHZfirst_Aplanarity__235->SetBinContent(16,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(19,1);
   VH_DHZfirst_Aplanarity__235->SetEntries(370625);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__235->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__235->SetLineWidth(2);
   VH_DHZfirst_Aplanarity__235->SetMarkerStyle(20);
   VH_DHZfirst_Aplanarity__235->SetMarkerSize(1.2);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__235->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__235->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__235->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fx1235[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1235[50] = { 235533.2, 33961.16, 4760.098, 910.4317, 304.6483, 65.35905, 12.12764, 6.590805, 8.172166, 1.533403, 1.04207, 0.4390491, 20.78814, 2.022354, 0.05672638, 0.04051546, 0.05812357,
   0.04088173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1235[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1235[50] = { 6710.655, 3130.229, 753.692, 342.5785, 153.0905, 17.66091, 0.7912461, 0.598795, 5.787419, 0.2737969, 0.2280971, 0.1418027, 20.43734, 1.88916, 0.05672638, 0.04051546, 0.05812357,
   0.04088173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_DHZfirst_Aplanarity_fx1235,Graph_from_VH_DHZfirst_Aplanarity_fy1235,Graph_from_VH_DHZfirst_Aplanarity_fex1235,Graph_from_VH_DHZfirst_Aplanarity_fey1235);
   gre->SetName("Graph_from_VH_DHZfirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Aplanarity1235 = new TH1F("Graph_Graph_from_VH_DHZfirst_Aplanarity1235","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetMaximum(266468.3);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Aplanarity1235);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_DHZfirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__236 = new TH1D("data_mc_ratio__236","",50,0,1);
   data_mc_ratio__236->SetBinContent(1,1.343989);
   data_mc_ratio__236->SetBinContent(2,1.233468);
   data_mc_ratio__236->SetBinContent(3,1.880003);
   data_mc_ratio__236->SetBinContent(4,2.47465);
   data_mc_ratio__236->SetBinContent(5,2.008874);
   data_mc_ratio__236->SetBinContent(6,2.952919);
   data_mc_ratio__236->SetBinContent(7,5.689483);
   data_mc_ratio__236->SetBinContent(8,2.882804);
   data_mc_ratio__236->SetBinContent(9,2.202599);
   data_mc_ratio__236->SetBinContent(10,7.173587);
   data_mc_ratio__236->SetBinContent(11,0.9596287);
   data_mc_ratio__236->SetBinContent(12,2.277649);
   data_mc_ratio__236->SetBinContent(13,0.09620868);
   data_mc_ratio__236->SetBinContent(14,0.4944732);
   data_mc_ratio__236->SetBinContent(16,49.36387);
   data_mc_ratio__236->SetBinError(1,0.002388756);
   data_mc_ratio__236->SetBinError(2,0.006026604);
   data_mc_ratio__236->SetBinError(3,0.01987336);
   data_mc_ratio__236->SetBinError(4,0.05213546);
   data_mc_ratio__236->SetBinError(5,0.08120391);
   data_mc_ratio__236->SetBinError(6,0.2125558);
   data_mc_ratio__236->SetBinError(7,0.6849333);
   data_mc_ratio__236->SetBinError(8,0.6613607);
   data_mc_ratio__236->SetBinError(9,0.5191574);
   data_mc_ratio__236->SetBinError(10,2.162918);
   data_mc_ratio__236->SetBinError(11,0.9596287);
   data_mc_ratio__236->SetBinError(12,2.277649);
   data_mc_ratio__236->SetBinError(13,0.06802981);
   data_mc_ratio__236->SetBinError(14,0.4944732);
   data_mc_ratio__236->SetBinError(16,34.90553);
   data_mc_ratio__236->SetMinimum(0.4);
   data_mc_ratio__236->SetMaximum(1.6);
   data_mc_ratio__236->SetEntries(1.876018);
   data_mc_ratio__236->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__236->SetLineColor(ci);
   data_mc_ratio__236->SetLineWidth(2);
   data_mc_ratio__236->SetMarkerStyle(20);
   data_mc_ratio__236->SetMarkerSize(1.2);
   data_mc_ratio__236->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__236->GetXaxis()->SetRange(1,50);
   data_mc_ratio__236->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__236->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__236->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__236->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__236->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__236->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__236->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__236->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__236->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__236->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1236[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1236[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1236[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1236[50] = { 0.02849133, 0.09217085, 0.1583354, 0.3762813, 0.5025157, 0.2702137, 0.0652432, 0.0908531, 0.7081867, 0.1785551, 0.2188885, 0.322977, 0.9831246, 0.9341391, 1, 1, 1,
   1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1236,Graph_from_mc_statistical_error_fy1236,Graph_from_mc_statistical_error_fex1236,Graph_from_mc_statistical_error_fey1236);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1236 = new TH1F("Graph_Graph_from_mc_statistical_error1236","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1236->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1236->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1236->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1236->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1236->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1236);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_DHZfirst_16->cd();
   Aplanarity_DHZfirst_16->Modified();
   Aplanarity_DHZfirst_16->cd();
   Aplanarity_DHZfirst_16->SetSelected(Aplanarity_DHZfirst_16);
}
