#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_16()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_16/Aplanarity_DHZfirst_16
//=========  (Wed Jan 10 10:25:26 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-778.8035,1.052419,778034.7);
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
   st->SetMaximum(700153.3);
   
   TH1F *st_stack_118 = new TH1F("st_stack_118","",50,0,1);
   st_stack_118->SetMinimum(0.01);
   st_stack_118->SetMaximum(700153.3);
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
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(1,277334.7);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(2,41768.42);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(3,5348.244);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(4,847.5369);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(5,289.3299);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(6,40.37657);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(9,5.942136);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(13,20.11717);
   VH_DHZfirst_Aplanarity_stack_1->SetBinContent(14,2.003909);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(1,9232.161);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(2,4457.123);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(3,1041.695);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(4,412.8199);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(5,193.6921);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(6,20.08564);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(9,5.942136);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(13,20.11717);
   VH_DHZfirst_Aplanarity_stack_1->SetBinError(14,2.003909);
   VH_DHZfirst_Aplanarity_stack_1->SetEntries(13350);

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
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(1,2138.754);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(2,325.713);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(3,71.69847);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(4,20.28963);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(5,5.715591);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(6,3.065975);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(7,0.7917606);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(8,0.5655555);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(9,0.1829092);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(10,0.0115735);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(11,0.1120747);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(12,0.04087967);
   VH_DHZfirst_Aplanarity_stack_2->SetBinContent(13,0.05522664);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(1,17.62025);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(2,7.079524);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(3,3.272528);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(4,1.831233);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(5,0.9456164);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(6,0.7464231);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(7,0.3200473);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(8,0.2710731);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(9,0.09312664);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(10,0.0115735);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(11,0.06552509);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(12,0.04087967);
   VH_DHZfirst_Aplanarity_stack_2->SetBinError(13,0.04204293);
   VH_DHZfirst_Aplanarity_stack_2->SetEntries(36655);

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
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(1,21986);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(2,3395.286);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(3,803.0019);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(4,236.9049);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(5,85.60838);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(6,34.44869);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(7,15.38717);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(8,8.417214);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(9,2.986015);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(10,1.73138);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(11,1.14988);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(12,0.535192);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(13,0.3838972);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(14,0.1049446);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(15,0.06057375);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(16,0.05514863);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(17,0.07472161);
   VH_DHZfirst_Aplanarity_stack_3->SetBinContent(18,0.05769342);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(1,39.04674);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(2,15.31828);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(3,7.411003);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(4,4.023574);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(5,2.389258);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(6,1.51177);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(7,0.9915489);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(8,0.7414027);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(9,0.4381931);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(10,0.3178121);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(11,0.2789194);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(12,0.1801826);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(13,0.1473105);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(14,0.07517747);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(15,0.06057375);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(16,0.05514863);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(17,0.07472161);
   VH_DHZfirst_Aplanarity_stack_3->SetBinError(18,0.05769342);
   VH_DHZfirst_Aplanarity_stack_3->SetEntries(401285);

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
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(1,1802.016);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(2,194.222);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(3,48.79824);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(4,7.787295);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(5,1.928224);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(6,0.1866719);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(7,0.1460555);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(8,0.1043332);
   VH_DHZfirst_Aplanarity_stack_4->SetBinContent(10,0.02312312);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(1,37.65004);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(2,14.08832);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(3,8.35574);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(4,3.107652);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(5,0.7104048);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(6,0.113616);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(7,0.1036087);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(8,0.07609184);
   VH_DHZfirst_Aplanarity_stack_4->SetBinError(10,0.02312312);
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
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(1,1031.252);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(2,122.9733);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(3,33.74145);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(4,3.297287);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(5,1.003444);
   VH_DHZfirst_Aplanarity_stack_5->SetBinContent(6,6.216832);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(1,44.85612);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(2,16.41555);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(3,11.78524);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(4,1.576359);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(5,0.5932493);
   VH_DHZfirst_Aplanarity_stack_5->SetBinError(6,6.216816);
   VH_DHZfirst_Aplanarity_stack_5->SetEntries(8097);

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
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(1,9.517202);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(2,0.9458627);
   VH_DHZfirst_Aplanarity_stack_6->SetBinContent(3,0.3005857);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(1,1.161032);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(2,0.3621661);
   VH_DHZfirst_Aplanarity_stack_6->SetBinError(3,0.2127665);
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
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(1,37.63003);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(2,2.607867);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(3,0.3328704);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(4,0.2409524);
   VH_DHZfirst_Aplanarity_stack_7->SetBinContent(6,0.1068191);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(1,2.110438);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(2,0.556641);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(3,0.1922106);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(4,0.1703823);
   VH_DHZfirst_Aplanarity_stack_7->SetBinError(6,0.1068191);
   VH_DHZfirst_Aplanarity_stack_7->SetEntries(350);

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
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(1,28.07669);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(2,2.383175);
   VH_DHZfirst_Aplanarity_stack_8->SetBinContent(3,0.255359);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(1,2.7303);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(2,0.7958861);
   VH_DHZfirst_Aplanarity_stack_8->SetBinError(3,0.255359);
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
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(1,13.03542);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(2,1.055168);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(3,0.1694324);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(4,0.03286732);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(5,0.01175562);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(8,0.0006510115);
   VH_DHZfirst_Aplanarity_stack_9->SetBinContent(10,0.0008298073);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(1,0.1345722);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(2,0.03834787);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(3,0.01527285);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(4,0.006677605);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(5,0.003969597);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(8,0.0006510115);
   VH_DHZfirst_Aplanarity_stack_9->SetBinError(10,0.0008298073);
   VH_DHZfirst_Aplanarity_stack_9->SetEntries(10463);

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
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(1,5.311006);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(2,0.5218583);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(3,0.1010728);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(4,0.0187212);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(5,0.005906984);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(6,0.001085751);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(7,0.0006913704);
   VH_DHZfirst_Aplanarity_stack_10->SetBinContent(8,0.0004484146);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(1,0.04848487);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(2,0.01520011);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(3,0.006676684);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(4,0.002851654);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(5,0.001640749);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(6,0.0006687953);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(7,0.0005019206);
   VH_DHZfirst_Aplanarity_stack_10->SetBinError(8,0.0004484146);
   VH_DHZfirst_Aplanarity_stack_10->SetEntries(13704);

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
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(1,0.412843);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(2,0.03915974);
   VH_DHZfirst_Aplanarity_stack_11->SetBinContent(3,0.006103112);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(1,0.03389933);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(2,0.01049441);
   VH_DHZfirst_Aplanarity_stack_11->SetBinError(3,0.004315748);
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
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(1,0.1502956);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(2,0.01508417);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(3,0.002190618);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(4,0.0007473093);
   VH_DHZfirst_Aplanarity_stack_12->SetBinContent(5,0.000383191);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(1,0.007573533);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(2,0.002392651);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(3,0.0009140398);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(4,0.0005286394);
   VH_DHZfirst_Aplanarity_stack_12->SetBinError(5,0.000383191);
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
   VH_DHZfirst_Aplanarity__235->SetBinContent(1,315069);
   VH_DHZfirst_Aplanarity__235->SetBinContent(2,41698);
   VH_DHZfirst_Aplanarity__235->SetBinContent(3,8912);
   VH_DHZfirst_Aplanarity__235->SetBinContent(4,2266);
   VH_DHZfirst_Aplanarity__235->SetBinContent(5,606);
   VH_DHZfirst_Aplanarity__235->SetBinContent(6,194);
   VH_DHZfirst_Aplanarity__235->SetBinContent(7,67);
   VH_DHZfirst_Aplanarity__235->SetBinContent(8,18);
   VH_DHZfirst_Aplanarity__235->SetBinContent(9,18);
   VH_DHZfirst_Aplanarity__235->SetBinContent(10,11);
   VH_DHZfirst_Aplanarity__235->SetBinContent(11,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(12,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(13,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(14,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(16,2);
   VH_DHZfirst_Aplanarity__235->SetBinContent(19,1);
   VH_DHZfirst_Aplanarity__235->SetEntries(368919);

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
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fy1235[50] = { 304386.8, 45814.19, 6306.652, 1116.109, 383.6036, 84.40264, 16.32568, 9.088203, 9.11106, 1.766906, 1.261954, 0.5760716, 20.5563, 2.108854, 0.06057375, 0.05514863, 0.07472161,
   0.05769342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fex1235[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_DHZfirst_Aplanarity_fey1235[50] = { 9232.446, 4457.208, 1041.826, 412.8583, 193.7113, 21.0938, 1.04706, 0.7930632, 5.958998, 0.3188634, 0.2865128, 0.1847618, 20.11776, 2.005319, 0.06057375, 0.05514863, 0.07472161,
   0.05769342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_VH_DHZfirst_Aplanarity1235->SetMaximum(344981.2);
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
   data_mc_ratio__236->SetBinContent(1,1.035094);
   data_mc_ratio__236->SetBinContent(2,0.9101547);
   data_mc_ratio__236->SetBinContent(3,1.413111);
   data_mc_ratio__236->SetBinContent(4,2.030267);
   data_mc_ratio__236->SetBinContent(5,1.579756);
   data_mc_ratio__236->SetBinContent(6,2.298506);
   data_mc_ratio__236->SetBinContent(7,4.103965);
   data_mc_ratio__236->SetBinContent(8,1.98059);
   data_mc_ratio__236->SetBinContent(9,1.975621);
   data_mc_ratio__236->SetBinContent(10,6.22557);
   data_mc_ratio__236->SetBinContent(11,1.584843);
   data_mc_ratio__236->SetBinContent(12,3.47179);
   data_mc_ratio__236->SetBinContent(13,0.09729379);
   data_mc_ratio__236->SetBinContent(14,0.9483825);
   data_mc_ratio__236->SetBinContent(16,36.26563);
   data_mc_ratio__236->SetBinError(1,0.001844068);
   data_mc_ratio__236->SetBinError(2,0.004457154);
   data_mc_ratio__236->SetBinError(3,0.01496886);
   data_mc_ratio__236->SetBinError(4,0.04265041);
   data_mc_ratio__236->SetBinError(5,0.06417319);
   data_mc_ratio__236->SetBinError(6,0.1650231);
   data_mc_ratio__236->SetBinError(7,0.5013791);
   data_mc_ratio__236->SetBinError(8,0.4668295);
   data_mc_ratio__236->SetBinError(9,0.4656583);
   data_mc_ratio__236->SetBinError(10,1.87708);
   data_mc_ratio__236->SetBinError(11,1.120653);
   data_mc_ratio__236->SetBinError(12,2.454927);
   data_mc_ratio__236->SetBinError(13,0.0687971);
   data_mc_ratio__236->SetBinError(14,0.6706077);
   data_mc_ratio__236->SetBinError(16,25.64368);
   data_mc_ratio__236->SetMinimum(0.4);
   data_mc_ratio__236->SetMaximum(1.6);
   data_mc_ratio__236->SetEntries(2.181936);
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
   Double_t Graph_from_mc_statistical_error_fey1236[50] = { 0.03033129, 0.09728881, 0.1651948, 0.3699085, 0.5049778, 0.2499188, 0.06413577, 0.08726293, 0.6540401, 0.1804642, 0.227039, 0.3207271, 0.9786664, 0.9509046, 1, 1, 1,
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
