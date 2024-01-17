#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_17/Sphericity_DHZfirst_17
//=========  (Wed Jan 10 10:25:26 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_17 = new TCanvas("Sphericity_DHZfirst_17", "Sphericity_DHZfirst_17",0,0,600,600);
   Sphericity_DHZfirst_17->SetHighLightColor(2);
   Sphericity_DHZfirst_17->Range(0,0,1,1);
   Sphericity_DHZfirst_17->SetFillColor(0);
   Sphericity_DHZfirst_17->SetFillStyle(4000);
   Sphericity_DHZfirst_17->SetBorderMode(0);
   Sphericity_DHZfirst_17->SetBorderSize(2);
   Sphericity_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-161.9051,1.052419,161753.2);
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
   st->SetMaximum(145561.7);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",25,0,1);
   st_stack_116->SetMinimum(0.01);
   st_stack_116->SetMaximum(145561.7);
   st_stack_116->SetDirectory(nullptr);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->SetLineWidth(0);
   st_stack_116->GetXaxis()->SetRange(1,25);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/0.04");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,53312.77);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,60007.68);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,25086.02);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,13564.53);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,8727.914);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,3876.662);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,2298.569);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,425.916);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,70.35213);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,195.852);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,11.84162);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,22.7478);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,6.303255);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,2.410305);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.1780414);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,2.053529);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,2907);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,16866.03);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,2508.974);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,1612.725);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,1458.538);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,861.3451);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,1395.426);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,251.5465);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,35.75691);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,191.9011);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,7.196865);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,18.52472);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,6.093031);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,2.410305);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.1780414);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,2.053529);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(11554);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,418.6139);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,419.7796);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,230.1278);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,127.3936);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,61.71742);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,31.3021);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,11.73729);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,4.383098);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,1.532668);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,2.341223);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,0.6063574);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.5469609);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,0.08335051);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.06840907);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.1218728);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.06285261);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.3445769);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.009154541);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,7.944484);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,8.05099);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,5.818043);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,4.54138);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,3.135813);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,2.363133);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,1.441769);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,0.8635315);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.3958578);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.7367726);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.2578462);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.3237033);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.0488264);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.040666);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.06641619);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.04484768);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.2844024);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.009154541);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(18430);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,4343.832);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,4583.96);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,2536.633);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,1329.713);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,685.4782);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,327.3111);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,153.5604);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,69.65072);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,33.14623);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,17.95706);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,11.60705);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,5.14249);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,4.188968);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,2.66404);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,1.529857);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,1.575194);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,0.8748534);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,0.3742649);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.2340209);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.03553377);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(23,0.02132461);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,16.58247);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,17.1199);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,12.74576);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,9.216584);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,6.610219);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,4.544653);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,3.089957);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,2.058112);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,1.378749);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.006847);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,0.816076);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.5313312);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.4625819);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.3719055);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.2740188);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.2862414);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.2094794);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.1500123);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.1000355);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.03553377);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(23,0.02132461);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(243528);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,314.9488);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,301.132);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,188.3583);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,111.6043);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,43.85173);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,24.32047);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,7.319121);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,2.208753);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,0.9239726);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.3479644);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.6430778);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.1353204);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.05261846);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(14,0.1216728);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(15,0.06898647);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,11.00371);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,14.40659);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,12.08103);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,10.04917);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,3.093123);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,4.121127);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,1.364833);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.7651661);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.5018838);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.1797149);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.4784065);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.09648115);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.05261846);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(14,0.1216728);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(15,0.06898647);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(6202);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,156.1738);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,173.5322);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,104.6685);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,52.31818);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,22.99301);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,9.591797);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,2.575981);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,0.03993485);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,0.3909469);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,0.1484765);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,9.664524);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,17.40632);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,12.99708);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,6.182483);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,3.693736);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,2.154197);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,1.28197);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,0.02996063);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.20338);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,0.1114813);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(2973);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,2.021027);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,2.237839);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.6843264);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(4,0.3410351);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(5,0.2366042);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(6,0.4079568);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,0.8056662);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.8585959);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.4927565);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(4,0.3410351);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(5,0.2366042);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(6,0.4079568);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(19);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,5.119951);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,5.67727);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,3.362244);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,1.575846);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,1.7642);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.9336924);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.168051);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,1.227943);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,0.9318561);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.6523413);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.6732282);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.5419818);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(72);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,6.265484);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,4.316683);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,1.686354);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,1.558205);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,1.026797);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(6,0.2834953);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.294603);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.070959);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,0.688567);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,0.637921);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.516623);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(6,0.2834953);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(58);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,2.661323);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,2.472126);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,1.426635);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,0.8903311);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,0.6050675);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.323928);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.07789096);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.02044529);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.0007393967);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(13,0.001007661);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.06444407);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.06191056);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.04709944);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.03733581);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.03084874);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.02282043);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.0109166);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.005260362);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.0007393967);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(13,0.001007661);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(5676);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,1.837657);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,1.874865);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,1.065675);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.6667653);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.388098);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.181051);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.05619912);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.02322826);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.007919863);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.002994307);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.001353177);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.001155991);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0006102154);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0004529672);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.000364199);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.02886202);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.02915833);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.02198405);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.01742532);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01328238);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.009059405);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.005025494);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.003219852);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.001829876);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.001083761);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.0007833684);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0006339914);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0004855924);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0004529672);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.000364199);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(13704);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.09462643);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.07756576);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.05058587);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.0357789);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.02682805);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.007997566);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.01198529);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01099966);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.008819526);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.007388958);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.006429105);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.003447428);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(199);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.03444993);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.03365739);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.02265152);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.01135453);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.00743243);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.001780454);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.001125109);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.0008384149);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(10,0.0002750823);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(15,5.599304e-05);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.002721888);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.00265397);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.002203359);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.001573862);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001250676);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.0006133452);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0004753893);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0003859403);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(10,0.0002613424);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(15,5.599304e-05);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(559);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__231 = new TH1D("VH_DHZfirst_Sphericity__231","",25,0,1);
   VH_DHZfirst_Sphericity__231->SetBinContent(1,41514);
   VH_DHZfirst_Sphericity__231->SetBinContent(2,38430);
   VH_DHZfirst_Sphericity__231->SetBinContent(3,20611);
   VH_DHZfirst_Sphericity__231->SetBinContent(4,11024);
   VH_DHZfirst_Sphericity__231->SetBinContent(5,5384);
   VH_DHZfirst_Sphericity__231->SetBinContent(6,2343);
   VH_DHZfirst_Sphericity__231->SetBinContent(7,873);
   VH_DHZfirst_Sphericity__231->SetBinContent(8,301);
   VH_DHZfirst_Sphericity__231->SetBinContent(9,134);
   VH_DHZfirst_Sphericity__231->SetBinContent(10,71);
   VH_DHZfirst_Sphericity__231->SetBinContent(11,38);
   VH_DHZfirst_Sphericity__231->SetBinContent(12,18);
   VH_DHZfirst_Sphericity__231->SetBinContent(13,10);
   VH_DHZfirst_Sphericity__231->SetBinContent(14,13);
   VH_DHZfirst_Sphericity__231->SetBinContent(15,4);
   VH_DHZfirst_Sphericity__231->SetBinContent(16,2);
   VH_DHZfirst_Sphericity__231->SetBinContent(17,1);
   VH_DHZfirst_Sphericity__231->SetBinContent(18,3);
   VH_DHZfirst_Sphericity__231->SetBinContent(19,3);
   VH_DHZfirst_Sphericity__231->SetBinContent(20,1);
   VH_DHZfirst_Sphericity__231->SetEntries(120802);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__231->SetLineColor(ci);
   VH_DHZfirst_Sphericity__231->SetLineWidth(2);
   VH_DHZfirst_Sphericity__231->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__231->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__231->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__231->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__231->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1231[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1231[25] = { 58564.37, 65502.77, 28154.11, 15190.64, 9546.01, 4271.328, 2473.897, 502.243, 106.3546, 216.65, 24.69947, 28.57373, 10.62981, 5.264879, 1.899178, 1.638047, 3.272959,
   0.3834194, 0.2340209, 0.03553377, 0, 0, 0.02132461, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1231[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1231[25] = { 2907.096, 16866.05, 2509.076, 1612.801, 1458.564, 861.3732, 1395.431, 251.5576, 35.78977, 191.9053, 7.263346, 18.53542, 6.110987, 2.4422, 0.3405223, 0.2897334, 2.083686,
   0.1502914, 0.1000355, 0.03553377, 0, 0, 0.02132461, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1231,Graph_from_VH_DHZfirst_Sphericity_fy1231,Graph_from_VH_DHZfirst_Sphericity_fex1231,Graph_from_VH_DHZfirst_Sphericity_fey1231);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1231 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1231","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetMaximum(90605.7);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_DHZfirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__232 = new TH1D("data_mc_ratio__232","",25,0,1);
   data_mc_ratio__232->SetBinContent(1,0.708861);
   data_mc_ratio__232->SetBinContent(2,0.5866927);
   data_mc_ratio__232->SetBinContent(3,0.7320778);
   data_mc_ratio__232->SetBinContent(4,0.7257099);
   data_mc_ratio__232->SetBinContent(5,0.5640053);
   data_mc_ratio__232->SetBinContent(6,0.5485414);
   data_mc_ratio__232->SetBinContent(7,0.3528845);
   data_mc_ratio__232->SetBinContent(8,0.5993114);
   data_mc_ratio__232->SetBinContent(9,1.259936);
   data_mc_ratio__232->SetBinContent(10,0.3277175);
   data_mc_ratio__232->SetBinContent(11,1.538495);
   data_mc_ratio__232->SetBinContent(12,0.6299493);
   data_mc_ratio__232->SetBinContent(13,0.9407506);
   data_mc_ratio__232->SetBinContent(14,2.469193);
   data_mc_ratio__232->SetBinContent(15,2.106174);
   data_mc_ratio__232->SetBinContent(16,1.220966);
   data_mc_ratio__232->SetBinContent(17,0.3055339);
   data_mc_ratio__232->SetBinContent(18,7.82433);
   data_mc_ratio__232->SetBinContent(19,12.81937);
   data_mc_ratio__232->SetBinContent(20,28.14224);
   data_mc_ratio__232->SetBinError(1,0.003479075);
   data_mc_ratio__232->SetBinError(2,0.002992785);
   data_mc_ratio__232->SetBinError(3,0.005099267);
   data_mc_ratio__232->SetBinError(4,0.006911836);
   data_mc_ratio__232->SetBinError(5,0.007686536);
   data_mc_ratio__232->SetBinError(6,0.01133243);
   data_mc_ratio__232->SetBinError(7,0.01194333);
   data_mc_ratio__232->SetBinError(8,0.03454374);
   data_mc_ratio__232->SetBinError(9,0.1088419);
   data_mc_ratio__232->SetBinError(10,0.03889291);
   data_mc_ratio__232->SetBinError(11,0.2495768);
   data_mc_ratio__232->SetBinError(12,0.1484805);
   data_mc_ratio__232->SetBinError(13,0.2974915);
   data_mc_ratio__232->SetBinError(14,0.6848308);
   data_mc_ratio__232->SetBinError(15,1.053087);
   data_mc_ratio__232->SetBinError(16,0.8633537);
   data_mc_ratio__232->SetBinError(17,0.3055339);
   data_mc_ratio__232->SetBinError(18,4.517379);
   data_mc_ratio__232->SetBinError(19,7.401265);
   data_mc_ratio__232->SetBinError(20,28.14224);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(2.434322);
   data_mc_ratio__232->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__232->SetLineColor(ci);
   data_mc_ratio__232->SetLineWidth(2);
   data_mc_ratio__232->SetMarkerStyle(20);
   data_mc_ratio__232->SetMarkerSize(1.2);
   data_mc_ratio__232->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__232->GetXaxis()->SetRange(1,25);
   data_mc_ratio__232->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__232->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__232->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__232->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__232->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__232->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__232->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1232[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1232[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1232[25] = { 0.04963933, 0.2574861, 0.08911937, 0.1061707, 0.1527931, 0.201664, 0.5640619, 0.5008683, 0.3365136, 0.8857848, 0.294069, 0.6486874, 0.5748915, 0.4638663, 0.1792998, 0.1768774, 0.6366367,
   0.3919765, 0.427464, 1, 0, 0, 1, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_17->cd();
   Sphericity_DHZfirst_17->Modified();
   Sphericity_DHZfirst_17->cd();
   Sphericity_DHZfirst_17->SetSelected(Sphericity_DHZfirst_17);
}
