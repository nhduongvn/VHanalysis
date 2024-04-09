#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_18/Aplanarity_tagOnly_18
//=========  (Mon Apr  8 11:54:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_18 = new TCanvas("Aplanarity_tagOnly_18", "Aplanarity_tagOnly_18",0,0,600,600);
   Aplanarity_tagOnly_18->SetHighLightColor(2);
   Aplanarity_tagOnly_18->Range(0,0,1,1);
   Aplanarity_tagOnly_18->SetFillColor(0);
   Aplanarity_tagOnly_18->SetFillStyle(4000);
   Aplanarity_tagOnly_18->SetBorderMode(0);
   Aplanarity_tagOnly_18->SetBorderSize(2);
   Aplanarity_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6918.999,1.052419,6912089);
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
   st->SetMaximum(6220189);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",50,0,1);
   st_stack_48->SetMinimum(0.01);
   st_stack_48->SetMaximum(6220189);
   st_stack_48->SetDirectory(nullptr);
   st_stack_48->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_48->SetLineColor(ci);
   st_stack_48->SetLineWidth(0);
   st_stack_48->GetXaxis()->SetRange(1,50);
   st_stack_48->GetXaxis()->SetLabelFont(42);
   st_stack_48->GetXaxis()->SetTitleOffset(1);
   st_stack_48->GetXaxis()->SetTitleFont(42);
   st_stack_48->GetYaxis()->SetTitle("Events/0.02");
   st_stack_48->GetYaxis()->SetLabelFont(42);
   st_stack_48->GetYaxis()->SetLabelSize(0.05);
   st_stack_48->GetYaxis()->SetTitleSize(0.057);
   st_stack_48->GetYaxis()->SetTitleOffset(1.2);
   st_stack_48->GetYaxis()->SetTitleFont(42);
   st_stack_48->GetZaxis()->SetLabelFont(42);
   st_stack_48->GetZaxis()->SetTitleOffset(1);
   st_stack_48->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_48);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,2224686);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,279384.6);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,60625.49);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,21633.78);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,6459.876);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,4216.756);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,1178.428);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,6958.882);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,541.0039);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,360.8273);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,107.8186);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,50.60913);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,971.2212);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,16.50054);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,36.56176);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.7129945);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,19.99734);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,46051.21);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,14219.81);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,5500.4);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,3131.021);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,924.5744);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,1177.59);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,215.9612);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,4793.006);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,148.3368);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,141.8582);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,29.64203);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,19.98033);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,919.0817);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,12.58295);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,16.05212);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.7129945);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,13.80713);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(163589);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_2 = new TH1D("VH_tagOnly_Aplanarity_stack_2","",50,0,1);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,29612.56);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,3949.505);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,1018.06);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,380.0148);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,152.3084);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,68.33592);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,43.80069);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,29.23728);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,13.23297);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,4.845764);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,2.79454);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,3.21768);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.949596);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.430054);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.5041376);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.4680665);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.6228564);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.141595);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,117.3577);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,41.39246);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,22.00232);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,12.31948);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,8.504592);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,5.055247);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,7.778765);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,4.315173);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,2.263855);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,0.9985619);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.8852211);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,1.202747);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.6305543);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.65986);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.3444202);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.3247539);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.3590595);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.09183141);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(224303);

   ci = TColor::GetColor("#660066");
   VH_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_3 = new TH1D("VH_tagOnly_Aplanarity_stack_3","",50,0,1);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,511976.2);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,68225.37);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,17786.17);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,6382.498);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,2956.364);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,1487.07);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,847.2515);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,483.8086);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,284.3522);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,197.8195);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,122.9294);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,83.17223);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,45.56278);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,30.78054);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,18.57917);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,9.81303);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,8.99886);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,3.166815);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,2.021744);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.2296848);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.9147863);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.08122825);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,306.516);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,110.8892);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,57.49071);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,33.72585);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,25.52319);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,16.17723);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,12.6073);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,9.057795);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,7.001944);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,6.05428);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,4.572854);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,4.258457);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,2.677084);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,3.87288);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,1.88227);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,1.315922);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,2.604484);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.6173208);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.5169009);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1330894);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.5041351);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.08122825);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(5438012);

   ci = TColor::GetColor("#cc00cc");
   VH_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_4 = new TH1D("VH_tagOnly_Aplanarity_stack_4","",50,0,1);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,20751.52);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,2264.303);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,544.4553);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,182.1233);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,86.84454);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,40.00675);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,30.79533);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,13.50271);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,9.580889);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,7.126885);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,3.364927);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,2.516213);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.6769692);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.6994078);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.4347442);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1080063);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.02188203);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(18,1.53054);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(19,0.1371683);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,139.8451);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,51.02446);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,20.84313);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,10.11359);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,7.349202);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,4.676879);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,13.59039);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,2.490696);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,2.216126);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,4.087997);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,1.245105);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,1.492528);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.3484162);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.45956);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.3279481);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1080063);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(17,0.02188203);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(18,1.374591);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(19,0.1371683);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(84631);

   ci = TColor::GetColor("#00cccc");
   VH_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_5 = new TH1D("VH_tagOnly_Aplanarity_stack_5","",50,0,1);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,11336.65);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,1174.157);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,352.423);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,122.9326);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,52.86499);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,41.5326);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,13.98265);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,13.33104);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.240865);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,1.995253);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.6277787);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,2.510478);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.1532648);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(16,0.4111188);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(17,0.1470552);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(18,2.31318);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,198.368);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,62.6425);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,35.98385);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,24.3807);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,12.92299);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,14.93466);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,3.972505);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,6.283581);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.5579346);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,0.7305654);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.3764289);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,1.778214);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.1296677);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(16,0.4111188);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(17,0.1470552);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(18,2.31318);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(38428);

   ci = TColor::GetColor("#ff99cc");
   VH_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_6 = new TH1D("VH_tagOnly_Aplanarity_stack_6","",50,0,1);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,92.04758);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,8.761533);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,2.691043);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(5,2.805743);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.5362758);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,9.254829);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,2.576523);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,1.65815);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(5,2.072426);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(7,0.5362758);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VH_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_7 = new TH1D("VH_tagOnly_Aplanarity_stack_7","",50,0,1);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,268.0028);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,30.34536);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,6.981815);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,8.929379);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,14.34258);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,6.078306);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,2.215626);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,3.618223);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VH_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_8 = new TH1D("VH_tagOnly_Aplanarity_stack_8","",50,0,1);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,201.1488);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,15.70621);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,2.950277);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,0.2948286);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,10.60838);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,2.844946);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,1.18083);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.2948286);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(509);

   ci = TColor::GetColor("#33ff99");
   VH_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_9 = new TH1D("VH_tagOnly_Aplanarity_stack_9","",50,0,1);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,101.6546);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,9.004056);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,2.115807);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.6389377);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.3109739);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.1370952);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.0606993);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.0743058);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01053287);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.03115587);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.03263232);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(14,0.006263798);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(16,0.005447691);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(18,0.002177154);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.7830476);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.2154688);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.1072639);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.05851874);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.0372281);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.02532029);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01449672);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.02238237);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.00532305);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.01054083);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.01531886);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(14,0.004525388);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(16,0.003854332);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(18,0.002177154);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(31945);

   ci = TColor::GetColor("#cccc00");
   VH_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_10 = new TH1D("VH_tagOnly_Aplanarity_stack_10","",50,0,1);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,55.69222);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,6.228081);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,1.476333);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.503368);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.2493948);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.09186622);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.07365394);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.03339339);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.02082213);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.01324458);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.007636057);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.005043061);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.003203298);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.003159253);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0009346947);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.000639571);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0008245107);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0006796078);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1873406);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.06176061);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.03015316);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.017924);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.01274669);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.007493343);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.006869662);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.004619394);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.003611178);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.002792468);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.002433762);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001770624);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.001449457);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.001420306);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.000679574);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.000639571);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0008245107);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0006796078);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(107744);

   ci = TColor::GetColor("#0000cc");
   VH_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_11 = new TH1D("VH_tagOnly_Aplanarity_stack_11","",50,0,1);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,2.441981);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.188863);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.0494181);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.00789285);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(5,0.004784755);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001750385);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(7,0.006058982);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(8,0.005370295);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.09931175);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.02477732);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.01575928);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.005584141);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(5,0.003386026);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001750385);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(7,0.004310176);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(8,0.005370295);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VH_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_12 = new TH1D("VH_tagOnly_Aplanarity_stack_12","",50,0,1);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,1.23259);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.1278756);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.029631);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.007637446);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.002376703);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.001024649);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001728292);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.001098614);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(10,0.0008107704);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(12,0.0007021084);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(14,0.0008758926);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.02539207);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.007918477);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.00399738);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001833637);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0009896559);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0007256441);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0007842077);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0006360448);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(10,0.0008107704);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(12,0.0004964887);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(14,0.0006544837);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VH_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Aplanarity__95 = new TH1D("VH_tagOnly_Aplanarity__95","",50,0,1);
   VH_tagOnly_Aplanarity__95->SetBinContent(0,1);
   VH_tagOnly_Aplanarity__95->SetBinContent(1,2380406);
   VH_tagOnly_Aplanarity__95->SetBinContent(2,310427);
   VH_tagOnly_Aplanarity__95->SetBinContent(3,80302);
   VH_tagOnly_Aplanarity__95->SetBinContent(4,27021);
   VH_tagOnly_Aplanarity__95->SetBinContent(5,11203);
   VH_tagOnly_Aplanarity__95->SetBinContent(6,5538);
   VH_tagOnly_Aplanarity__95->SetBinContent(7,2906);
   VH_tagOnly_Aplanarity__95->SetBinContent(8,1689);
   VH_tagOnly_Aplanarity__95->SetBinContent(9,1006);
   VH_tagOnly_Aplanarity__95->SetBinContent(10,671);
   VH_tagOnly_Aplanarity__95->SetBinContent(11,399);
   VH_tagOnly_Aplanarity__95->SetBinContent(12,275);
   VH_tagOnly_Aplanarity__95->SetBinContent(13,187);
   VH_tagOnly_Aplanarity__95->SetBinContent(14,77);
   VH_tagOnly_Aplanarity__95->SetBinContent(15,63);
   VH_tagOnly_Aplanarity__95->SetBinContent(16,41);
   VH_tagOnly_Aplanarity__95->SetBinContent(17,32);
   VH_tagOnly_Aplanarity__95->SetBinContent(18,11);
   VH_tagOnly_Aplanarity__95->SetBinContent(19,9);
   VH_tagOnly_Aplanarity__95->SetBinContent(20,1);
   VH_tagOnly_Aplanarity__95->SetBinContent(21,1);
   VH_tagOnly_Aplanarity__95->SetEntries(2822315);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__95->SetLineColor(ci);
   VH_tagOnly_Aplanarity__95->SetLineWidth(2);
   VH_tagOnly_Aplanarity__95->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__95->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__95->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__95->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__95->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1095[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1095[50] = { 2799085, 355068.3, 80342.89, 28711.73, 9711.631, 5853.933, 2114.935, 7498.876, 849.4433, 572.6599, 237.5755, 142.0315, 1019.414, 49.57411, 56.07981, 11.5196, 29.78863,
   7.154307, 2.159737, 0.2296848, 0.915466, 0.08122825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1095[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1095[50] = { 46053.02, 14220.53, 5500.902, 3131.34, 925.0876, 1177.816, 216.932, 4793.021, 148.5368, 142.0515, 30.03393, 20.59574, 919.0858, 13.19066, 16.1691, 1.589395, 14.056,
   2.762214, 0.5347919, 0.1330894, 0.5041356, 0.08122825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1095,Graph_from_VH_tagOnly_Aplanarity_fy1095,Graph_from_VH_tagOnly_Aplanarity_fex1095,Graph_from_VH_tagOnly_Aplanarity_fey1095);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1095 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1095","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetMaximum(3129652);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1095);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tagOnly_18->cd();
  
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
   
   TH1D *data_mc_ratio__96 = new TH1D("data_mc_ratio__96","",50,0,1);
   data_mc_ratio__96->SetBinContent(1,0.8504229);
   data_mc_ratio__96->SetBinContent(2,0.8742741);
   data_mc_ratio__96->SetBinContent(3,0.999491);
   data_mc_ratio__96->SetBinContent(4,0.9411136);
   data_mc_ratio__96->SetBinContent(5,1.153565);
   data_mc_ratio__96->SetBinContent(6,0.9460307);
   data_mc_ratio__96->SetBinContent(7,1.374037);
   data_mc_ratio__96->SetBinContent(8,0.2252338);
   data_mc_ratio__96->SetBinContent(9,1.184305);
   data_mc_ratio__96->SetBinContent(10,1.171725);
   data_mc_ratio__96->SetBinContent(11,1.679466);
   data_mc_ratio__96->SetBinContent(12,1.936191);
   data_mc_ratio__96->SetBinContent(13,0.1834388);
   data_mc_ratio__96->SetBinContent(14,1.55323);
   data_mc_ratio__96->SetBinContent(15,1.123399);
   data_mc_ratio__96->SetBinContent(16,3.559152);
   data_mc_ratio__96->SetBinContent(17,1.074235);
   data_mc_ratio__96->SetBinContent(18,1.537535);
   data_mc_ratio__96->SetBinContent(19,4.167175);
   data_mc_ratio__96->SetBinContent(20,4.353793);
   data_mc_ratio__96->SetBinContent(21,1.09234);
   data_mc_ratio__96->SetBinError(1,0.0005512003);
   data_mc_ratio__96->SetBinError(2,0.001569162);
   data_mc_ratio__96->SetBinError(3,0.003527083);
   data_mc_ratio__96->SetBinError(4,0.005725209);
   data_mc_ratio__96->SetBinError(5,0.01089871);
   data_mc_ratio__96->SetBinError(6,0.01271244);
   data_mc_ratio__96->SetBinError(7,0.02548888);
   data_mc_ratio__96->SetBinError(8,0.005480481);
   data_mc_ratio__96->SetBinError(9,0.03733916);
   data_mc_ratio__96->SetBinError(10,0.04523394);
   data_mc_ratio__96->SetBinError(11,0.08407846);
   data_mc_ratio__96->SetBinError(12,0.1167567);
   data_mc_ratio__96->SetBinError(13,0.01341437);
   data_mc_ratio__96->SetBinError(14,0.177007);
   data_mc_ratio__96->SetBinError(15,0.141535);
   data_mc_ratio__96->SetBinError(16,0.5558461);
   data_mc_ratio__96->SetBinError(17,0.1898998);
   data_mc_ratio__96->SetBinError(18,0.4635844);
   data_mc_ratio__96->SetBinError(19,1.389058);
   data_mc_ratio__96->SetBinError(20,4.353793);
   data_mc_ratio__96->SetBinError(21,1.09234);
   data_mc_ratio__96->SetMinimum(0.4);
   data_mc_ratio__96->SetMaximum(1.6);
   data_mc_ratio__96->SetEntries(31.94415);
   data_mc_ratio__96->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__96->SetLineColor(ci);
   data_mc_ratio__96->SetLineWidth(2);
   data_mc_ratio__96->SetMarkerStyle(20);
   data_mc_ratio__96->SetMarkerSize(1.2);
   data_mc_ratio__96->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__96->GetXaxis()->SetRange(1,50);
   data_mc_ratio__96->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__96->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__96->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__96->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__96->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__96->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__96->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__96->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__96->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__96->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1096[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1096[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1096[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1096[50] = { 0.01645289, 0.04005014, 0.06846782, 0.1090613, 0.09525563, 0.2012009, 0.1025714, 0.6391653, 0.1748637, 0.2480557, 0.1264184, 0.1450083, 0.9015828, 0.2660795, 0.288323, 0.1379731, 0.4718578,
   0.386091, 0.247619, 0.5794437, 0.5506874, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1096,Graph_from_mc_statistical_error_fy1096,Graph_from_mc_statistical_error_fex1096,Graph_from_mc_statistical_error_fey1096);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1096 = new TH1F("Graph_Graph_from_mc_statistical_error1096","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1096->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1096->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1096->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1096);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->Modified();
   Aplanarity_tagOnly_18->cd();
   Aplanarity_tagOnly_18->SetSelected(Aplanarity_tagOnly_18);
}
