#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_17/Aplanarity_DHZfirst_17
//=========  (Thu May 23 12:59:58 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_17 = new TCanvas("Aplanarity_DHZfirst_17", "Aplanarity_DHZfirst_17",0,0,600,600);
   Aplanarity_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_DHZfirst_17->Range(0,0,1,1);
   Aplanarity_DHZfirst_17->SetFillColor(0);
   Aplanarity_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_DHZfirst_17->SetBorderMode(0);
   Aplanarity_DHZfirst_17->SetBorderSize(2);
   Aplanarity_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-353.6929,1.052419,353349.2);
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
   st->SetMaximum(317978.9);
   
   TH1F *st_stack_119 = new TH1F("st_stack_119","",50,0,1);
   st_stack_119->SetMinimum(0.01);
   st_stack_119->SetMaximum(317978.9);
   st_stack_119->SetDirectory(nullptr);
   st_stack_119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_119->SetLineColor(ci);
   st_stack_119->SetLineWidth(0);
   st_stack_119->GetXaxis()->SetRange(1,50);
   st_stack_119->GetXaxis()->SetLabelFont(42);
   st_stack_119->GetXaxis()->SetTitleOffset(1);
   st_stack_119->GetXaxis()->SetTitleFont(42);
   st_stack_119->GetYaxis()->SetTitle("Events/0.02");
   st_stack_119->GetYaxis()->SetLabelFont(42);
   st_stack_119->GetYaxis()->SetLabelSize(0.05);
   st_stack_119->GetYaxis()->SetTitleSize(0.057);
   st_stack_119->GetYaxis()->SetTitleOffset(1.2);
   st_stack_119->GetYaxis()->SetTitleFont(42);
   st_stack_119->GetZaxis()->SetLabelFont(42);
   st_stack_119->GetZaxis()->SetTitleOffset(1);
   st_stack_119->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_119);
   
   
   TH1D *VH_DHZfirst_Aplanarity_stack_1 = new TH1D("VH_DHZfirst_Aplanarity_stack_1","",50,0,1);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,127821.4);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,14255);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,1868.458);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,282.2633);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,247.8724);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(7,0.8071405);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,4829.024);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,1731.882);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,434.936);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,196.7739);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,208.7706);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(7,0.8071405);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(9045);

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
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,1180.496);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,161.0801);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,35.95063);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,6.290653);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,2.475769);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,1.645638);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.1267005);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.5557769);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(9,0.09394306);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(10,0.1879022);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(11,0.01290839);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(13,0.2323615);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,14.89266);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,5.478282);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,2.529683);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,0.7741864);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,0.6638614);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.7622476);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.0715372);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.4404173);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(9,0.07681856);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(10,0.09830956);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(11,0.01290839);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(13,0.2323615);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(19010);

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
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,12414.69);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,1638.312);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,364.2488);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,98.3567);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,36.02936);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,13.2159);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,6.229349);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,2.138133);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,1.472157);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,0.8567915);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,0.4754739);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.2784118);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.03641964);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(14,0.03225538);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.1389759);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(17,0.03625802);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,32.79164);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,11.78739);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,5.603999);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,2.787691);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,1.781995);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,1.000419);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,0.6825179);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.3532897);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.3395133);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.2457067);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.1502759);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.1205127);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.03641964);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(14,0.03225538);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.08369246);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(17,0.02731361);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(239565);

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
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,1065.825);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,100.301);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,16.8989);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,3.654341);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,0.4007684);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.1558225);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,22.96057);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,9.540684);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,3.159102);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,0.9655403);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,0.1796644);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.1178909);
   VH_DHZfirst_Aplanarity_stack_4->SetEntries(8198);

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
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,546.9962);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,38.03271);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,6.671068);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,0.4582944);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(5,0.098175);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(7,0.07349531);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,25.83034);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,5.585075);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,1.971291);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,0.2475475);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(5,0.098175);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(7,0.07349531);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(3550);

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
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,4.039418);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,1.151214);
   VH_DHZfirst_Aplanarity_stack_6->SetEntries(15);

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
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,25.44708);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,0.9728232);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(3,0.3417144);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,3.06637);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,0.4468585);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(3,0.2416308);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(105);

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
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,17.60886);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,1.262471);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(4,0.2056546);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,2.400387);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.4570221);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(4,0.2056546);
   VH_DHZfirst_Aplanarity_stack_8->SetEntries(83);

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
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,8.580452);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,0.6127974);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1116112);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.01106314);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(5,0.00155853);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(6,0.004751769);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.1277247);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.03360172);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.01587394);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.003407866);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(5,0.00155853);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(6,0.003502158);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(6479);

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
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,4.993544);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.4555185);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.07812389);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.01825545);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.002692774);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.001905409);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0005844394);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.04061326);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01205593);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.004901003);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.002413186);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.0009185048);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.0008244921);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0004134618);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(17705);

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
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.3129857);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.01372463);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.001211576);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.0215077);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.004384634);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.001211576);
   VH_DHZfirst_Aplanarity_stack_11->SetEntries(261);

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
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.1141777);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.01204411);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.001487009);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(4,0.0002229178);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(5,0.0001482086);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.004800673);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.001504939);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.0005191064);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(4,0.0001580586);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(5,0.0001482086);
   VH_DHZfirst_Aplanarity_stack_12->SetEntries(757);

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
   
   TH1D *VH_DHZfirst_Aplanarity__237 = new TH1D("VH_DHZfirst_Aplanarity__237","",50,0,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(1,122344);
   VH_DHZfirst_Aplanarity__237->SetBinContent(2,14313);
   VH_DHZfirst_Aplanarity__237->SetBinContent(3,2873);
   VH_DHZfirst_Aplanarity__237->SetBinContent(4,680);
   VH_DHZfirst_Aplanarity__237->SetBinContent(5,166);
   VH_DHZfirst_Aplanarity__237->SetBinContent(6,46);
   VH_DHZfirst_Aplanarity__237->SetBinContent(7,12);
   VH_DHZfirst_Aplanarity__237->SetBinContent(8,7);
   VH_DHZfirst_Aplanarity__237->SetBinContent(9,7);
   VH_DHZfirst_Aplanarity__237->SetBinContent(10,4);
   VH_DHZfirst_Aplanarity__237->SetBinContent(11,2);
   VH_DHZfirst_Aplanarity__237->SetBinContent(12,1);
   VH_DHZfirst_Aplanarity__237->SetBinContent(17,1);
   VH_DHZfirst_Aplanarity__237->SetBinError(1,349.7771);
   VH_DHZfirst_Aplanarity__237->SetBinError(2,119.637);
   VH_DHZfirst_Aplanarity__237->SetBinError(3,53.60037);
   VH_DHZfirst_Aplanarity__237->SetBinError(4,26.07681);
   VH_DHZfirst_Aplanarity__237->SetBinError(5,12.8841);
   VH_DHZfirst_Aplanarity__237->SetBinError(6,6.78233);
   VH_DHZfirst_Aplanarity__237->SetBinError(7,3.464102);
   VH_DHZfirst_Aplanarity__237->SetBinError(8,2.645751);
   VH_DHZfirst_Aplanarity__237->SetBinError(9,2.645751);
   VH_DHZfirst_Aplanarity__237->SetBinError(10,2);
   VH_DHZfirst_Aplanarity__237->SetBinError(11,1.414214);
   VH_DHZfirst_Aplanarity__237->SetBinError(12,1);
   VH_DHZfirst_Aplanarity__237->SetBinError(17,1);
   VH_DHZfirst_Aplanarity__237->SetEntries(140505);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__237->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__237->SetLineWidth(2);
   VH_DHZfirst_Aplanarity__237->SetMarkerStyle(20);
   VH_DHZfirst_Aplanarity__237->SetMarkerSize(1.2);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__237->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__237->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__237->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fx1237[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1237[50] = { 143090.5, 16196.05, 2292.762, 391.2585, 286.8809, 14.8682, 7.393092, 2.69391, 1.5661, 1.044694, 0.4883823, 0.2784118, 0.2687812, 0.03225538, 0.1389759, 0, 0.03625802,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1237[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1237[50] = { 4829.284, 1731.966, 434.9955, 196.7978, 208.7793, 1.257725, 1.068515, 0.5646069, 0.3480954, 0.2646442, 0.1508293, 0.1205127, 0.2351984, 0.03225538, 0.08369246, 0, 0.02731361,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_DHZfirst_Aplanarity_fx1237,Graph_from_VH_DHZfirst_Aplanarity_fy1237,Graph_from_VH_DHZfirst_Aplanarity_fex1237,Graph_from_VH_DHZfirst_Aplanarity_fey1237);
   gre->SetName("Graph_from_VH_DHZfirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Aplanarity1237 = new TH1F("Graph_Graph_from_VH_DHZfirst_Aplanarity1237","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetMaximum(162711.8);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Aplanarity1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Aplanarity1237);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Aplanarity","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_DHZfirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__238 = new TH1D("data_mc_ratio__238","",50,0,1);
   data_mc_ratio__238->SetBinContent(1,0.8550112);
   data_mc_ratio__238->SetBinContent(2,0.8837339);
   data_mc_ratio__238->SetBinContent(3,1.253074);
   data_mc_ratio__238->SetBinContent(4,1.737981);
   data_mc_ratio__238->SetBinContent(5,0.5786373);
   data_mc_ratio__238->SetBinContent(6,3.093852);
   data_mc_ratio__238->SetBinContent(7,1.623137);
   data_mc_ratio__238->SetBinContent(8,2.598453);
   data_mc_ratio__238->SetBinContent(9,4.469701);
   data_mc_ratio__238->SetBinContent(10,3.828873);
   data_mc_ratio__238->SetBinContent(11,4.095153);
   data_mc_ratio__238->SetBinContent(12,3.591802);
   data_mc_ratio__238->SetBinContent(17,27.5801);
   data_mc_ratio__238->SetBinError(1,0.002444446);
   data_mc_ratio__238->SetBinError(2,0.007386798);
   data_mc_ratio__238->SetBinError(3,0.02337808);
   data_mc_ratio__238->SetBinError(4,0.06664855);
   data_mc_ratio__238->SetBinError(5,0.04491097);
   data_mc_ratio__238->SetBinError(6,0.4561636);
   data_mc_ratio__238->SetBinError(7,0.4685593);
   data_mc_ratio__238->SetBinError(8,0.9821231);
   data_mc_ratio__238->SetBinError(9,1.689388);
   data_mc_ratio__238->SetBinError(10,1.914437);
   data_mc_ratio__238->SetBinError(11,2.89571);
   data_mc_ratio__238->SetBinError(12,3.591802);
   data_mc_ratio__238->SetBinError(17,27.5801);
   data_mc_ratio__238->SetMinimum(0.4);
   data_mc_ratio__238->SetMaximum(1.6);
   data_mc_ratio__238->SetEntries(2.569179);
   data_mc_ratio__238->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__238->SetLineColor(ci);
   data_mc_ratio__238->SetLineWidth(2);
   data_mc_ratio__238->SetMarkerStyle(20);
   data_mc_ratio__238->SetMarkerSize(1.2);
   data_mc_ratio__238->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__238->GetXaxis()->SetRange(1,50);
   data_mc_ratio__238->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__238->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__238->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__238->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__238->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__238->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__238->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__238->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__238->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__238->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1238[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1238[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1238[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1238[50] = { 0.03374985, 0.1069376, 0.1897255, 0.5029867, 0.7277561, 0.08459162, 0.1445288, 0.2095864, 0.2222689, 0.2533223, 0.3088344, 0.4328577, 0.8750552, 1, 0.6022085, 0, 0.753312,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1238,Graph_from_mc_statistical_error_fy1238,Graph_from_mc_statistical_error_fex1238,Graph_from_mc_statistical_error_fey1238);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1238 = new TH1F("Graph_Graph_from_mc_statistical_error1238","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1238->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1238->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1238->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1238->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1238->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1238);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_DHZfirst_17->cd();
   Aplanarity_DHZfirst_17->Modified();
   Aplanarity_DHZfirst_17->cd();
   Aplanarity_DHZfirst_17->SetSelected(Aplanarity_DHZfirst_17);
}
