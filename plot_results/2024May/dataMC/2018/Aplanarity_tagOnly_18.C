#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_18/Aplanarity_tagOnly_18
//=========  (Thu May 23 12:59:53 2024) by ROOT version 6.28/10
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
   topPad->Range(-0.1532254,-6760.409,1.052419,6753658);
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
   st->SetMaximum(6077616);
   
   TH1F *st_stack_48 = new TH1F("st_stack_48","",50,0,1);
   st_stack_48->SetMinimum(0.01);
   st_stack_48->SetMaximum(6077616);
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
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,2160555);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,271727);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,67203.14);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,21326.15);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,9400.908);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,4129.923);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,1098.51);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,5752.137);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,1033.462);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,335.6265);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,120.5001);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,95.44002);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,793.7312);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,57.70866);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,14.53589);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,54.67183);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,41903.49);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,12311.96);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,6206.731);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,2742.526);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,2519.309);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,1038.969);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,232.9561);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,3890.671);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,478.4708);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,136.689);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,52.27538);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,39.69113);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,746.524);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,36.23564);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,14.53589);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,54.67183);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(92465);

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
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,29616.78);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,3943.266);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,1019.517);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,379.8446);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,154.0922);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,67.54791);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,43.92812);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,28.70666);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,13.06017);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,5.061101);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,2.97282);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,3.147744);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.932603);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,1.555253);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.5021663);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.4570763);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.6066017);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.1400055);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,116.9156);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,41.12322);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,21.95323);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,12.27926);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,8.499232);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,5.024586);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,7.769598);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,4.301042);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,2.246276);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,1.002661);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.8957859);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,1.193606);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.6242975);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.6744158);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.3440735);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.32166);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.3534786);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.09080051);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(232514);

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
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,511970.6);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,68244.69);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,17804.97);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,6355.541);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,2961.665);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,1474.578);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,844.9801);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,484.0105);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,284.4228);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,197.19);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,122.7156);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,76.48472);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,45.69938);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,31.68113);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,19.31497);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,9.117618);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,9.235495);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,2.97319);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.689457);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.1694584);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,1.067082);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,318.0174);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,115.7274);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,60.77717);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,35.08881);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,26.76014);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,16.65214);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,13.21232);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,9.527443);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,7.341995);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,6.212126);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,4.821193);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,3.61759);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,2.807311);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,4.213389);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,1.995827);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,1.238781);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,2.855522);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.5950303);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.4522526);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1206142);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.5579123);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(5043348);

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
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,20742.79);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,2275.042);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,546.015);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,183.807);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,86.33268);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,39.95181);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,30.74511);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,13.24288);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,9.833201);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,6.894097);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,3.385934);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,2.487665);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.6730799);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.6707463);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.4291464);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.1035803);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(17,0.02098532);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(18,1.523737);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(19,0.1315472);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,139.1891);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,52.0686);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,20.79925);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,10.12596);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,7.321163);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,4.651332);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,13.49399);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,2.469756);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,2.219009);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,3.926674);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,1.228755);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,1.48283);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.347377);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.4407273);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.3256562);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.1035803);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(17,0.02098532);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(18,1.373786);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(19,0.1315472);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(86590);

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
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,11318.79);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,1169.579);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,349.204);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,123.0298);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,52.15609);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,40.66868);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,13.96551);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,13.17842);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,1.246425);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,1.993473);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,0.6273636);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,2.454735);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.1500469);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(16,0.4105738);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(17,0.1468603);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(18,2.31318);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,194.6436);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,61.86459);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,34.68379);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,24.37852);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,12.49744);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,14.3716);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,3.969804);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,6.163769);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.5570939);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,0.7302544);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.3763613);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,1.725207);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.1289603);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(16,0.4105738);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(17,0.1468603);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(18,2.31318);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(39888);

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
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,93.20679);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,8.871872);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,2.724934);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(5,2.841078);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.5430295);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,9.371381);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,2.608971);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,1.679032);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(5,2.098525);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(7,0.5430295);
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
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,101.4655);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,8.978126);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,2.120049);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.6237747);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.316895);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.1378075);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.0592588);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.07254239);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01268689);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.03041649);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.0318579);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(14,0.006115148);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(16,0.005318408);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(18,0.002125486);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.770449);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.2123352);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.106003);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.05712999);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.03793679);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.0250355);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.01415268);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.0218512);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.005725825);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.01029068);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.01495532);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(14,0.004417993);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(16,0.003762862);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(18,0.002125486);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(32696);

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
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,55.80173);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,6.226691);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,1.477087);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.5045077);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.2537981);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.09972901);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.07758936);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.03365838);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.02045527);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.01423473);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.007876694);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.005471212);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.002834215);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.002795245);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0008269996);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0005658798);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0007295109);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0006013037);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1762862);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.05806431);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.02832895);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.01687066);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.01206643);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.007343402);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.006668272);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.004380507);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.00340127);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.002722133);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.00229457);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001723556);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.001282451);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.001256658);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0006012738);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0005658798);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0007295109);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0006013037);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(122178);

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
   VH_tagOnly_Aplanarity__95->SetBinContent(0,2);
   VH_tagOnly_Aplanarity__95->SetBinContent(1,2380568);
   VH_tagOnly_Aplanarity__95->SetBinContent(2,310593);
   VH_tagOnly_Aplanarity__95->SetBinContent(3,80340);
   VH_tagOnly_Aplanarity__95->SetBinContent(4,26991);
   VH_tagOnly_Aplanarity__95->SetBinContent(5,11239);
   VH_tagOnly_Aplanarity__95->SetBinContent(6,5552);
   VH_tagOnly_Aplanarity__95->SetBinContent(7,2935);
   VH_tagOnly_Aplanarity__95->SetBinContent(8,1682);
   VH_tagOnly_Aplanarity__95->SetBinContent(9,1011);
   VH_tagOnly_Aplanarity__95->SetBinContent(10,682);
   VH_tagOnly_Aplanarity__95->SetBinContent(11,414);
   VH_tagOnly_Aplanarity__95->SetBinContent(12,270);
   VH_tagOnly_Aplanarity__95->SetBinContent(13,190);
   VH_tagOnly_Aplanarity__95->SetBinContent(14,75);
   VH_tagOnly_Aplanarity__95->SetBinContent(15,59);
   VH_tagOnly_Aplanarity__95->SetBinContent(16,41);
   VH_tagOnly_Aplanarity__95->SetBinContent(17,30);
   VH_tagOnly_Aplanarity__95->SetBinContent(18,12);
   VH_tagOnly_Aplanarity__95->SetBinContent(19,9);
   VH_tagOnly_Aplanarity__95->SetBinContent(20,1);
   VH_tagOnly_Aplanarity__95->SetBinContent(21,1);
   VH_tagOnly_Aplanarity__95->SetBinError(0,1.414214);
   VH_tagOnly_Aplanarity__95->SetBinError(1,1542.909);
   VH_tagOnly_Aplanarity__95->SetBinError(2,557.3087);
   VH_tagOnly_Aplanarity__95->SetBinError(3,283.4431);
   VH_tagOnly_Aplanarity__95->SetBinError(4,164.2894);
   VH_tagOnly_Aplanarity__95->SetBinError(5,106.0141);
   VH_tagOnly_Aplanarity__95->SetBinError(6,74.51174);
   VH_tagOnly_Aplanarity__95->SetBinError(7,54.17564);
   VH_tagOnly_Aplanarity__95->SetBinError(8,41.01219);
   VH_tagOnly_Aplanarity__95->SetBinError(9,31.79623);
   VH_tagOnly_Aplanarity__95->SetBinError(10,26.11513);
   VH_tagOnly_Aplanarity__95->SetBinError(11,20.34699);
   VH_tagOnly_Aplanarity__95->SetBinError(12,16.43168);
   VH_tagOnly_Aplanarity__95->SetBinError(13,13.78405);
   VH_tagOnly_Aplanarity__95->SetBinError(14,8.660254);
   VH_tagOnly_Aplanarity__95->SetBinError(15,7.681146);
   VH_tagOnly_Aplanarity__95->SetBinError(16,6.403124);
   VH_tagOnly_Aplanarity__95->SetBinError(17,5.477226);
   VH_tagOnly_Aplanarity__95->SetBinError(18,3.464102);
   VH_tagOnly_Aplanarity__95->SetBinError(19,3);
   VH_tagOnly_Aplanarity__95->SetBinError(20,1);
   VH_tagOnly_Aplanarity__95->SetBinError(21,1);
   VH_tagOnly_Aplanarity__95->SetEntries(2822746);

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
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1095[50] = { 2734927, 347430, 86939.17, 28378.74, 12658.57, 5752.909, 2032.815, 6291.389, 1342.059, 546.8107, 250.2415, 180.0211, 842.0391, 91.77563, 34.78217, 10.09499, 64.68234,
   6.952237, 1.821734, 0.1694584, 1.067683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1095[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1095[50] = { 41905.55, 12312.84, 6207.2, 2742.907, 2519.508, 1039.224, 233.8838, 3890.69, 478.5379, 136.892, 52.5206, 39.93836, 746.5296, 36.4889, 14.67992, 1.348094, 54.7477,
   2.756882, 0.4709964, 0.1206142, 0.5579127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_VH_tagOnly_Aplanarity1095->SetMaximum(3054516);
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
   data_mc_ratio__96->SetBinContent(1,0.8704319);
   data_mc_ratio__96->SetBinContent(2,0.8939728);
   data_mc_ratio__96->SetBinContent(3,0.9240943);
   data_mc_ratio__96->SetBinContent(4,0.9510994);
   data_mc_ratio__96->SetBinContent(5,0.8878568);
   data_mc_ratio__96->SetBinContent(6,0.9650769);
   data_mc_ratio__96->SetBinContent(7,1.443811);
   data_mc_ratio__96->SetBinContent(8,0.2673495);
   data_mc_ratio__96->SetBinContent(9,0.75332);
   data_mc_ratio__96->SetBinContent(10,1.247232);
   data_mc_ratio__96->SetBinContent(11,1.654402);
   data_mc_ratio__96->SetBinContent(12,1.499825);
   data_mc_ratio__96->SetBinContent(13,0.2256427);
   data_mc_ratio__96->SetBinContent(14,0.8172104);
   data_mc_ratio__96->SetBinContent(15,1.696271);
   data_mc_ratio__96->SetBinContent(16,4.061419);
   data_mc_ratio__96->SetBinContent(17,0.4638051);
   data_mc_ratio__96->SetBinContent(18,1.726063);
   data_mc_ratio__96->SetBinContent(19,4.940349);
   data_mc_ratio__96->SetBinContent(20,5.901154);
   data_mc_ratio__96->SetBinContent(21,0.9366072);
   data_mc_ratio__96->SetBinError(1,0.0005641499);
   data_mc_ratio__96->SetBinError(2,0.001604089);
   data_mc_ratio__96->SetBinError(3,0.003260246);
   data_mc_ratio__96->SetBinError(4,0.005789171);
   data_mc_ratio__96->SetBinError(5,0.008374889);
   data_mc_ratio__96->SetBinError(6,0.01295201);
   data_mc_ratio__96->SetBinError(7,0.02665056);
   data_mc_ratio__96->SetBinError(8,0.006518782);
   data_mc_ratio__96->SetBinError(9,0.02369212);
   data_mc_ratio__96->SetBinError(10,0.047759);
   data_mc_ratio__96->SetBinError(11,0.08130942);
   data_mc_ratio__96->SetBinError(12,0.09127641);
   data_mc_ratio__96->SetBinError(13,0.01636984);
   data_mc_ratio__96->SetBinError(14,0.09436333);
   data_mc_ratio__96->SetBinError(15,0.2208357);
   data_mc_ratio__96->SetBinError(16,0.6342871);
   data_mc_ratio__96->SetBinError(17,0.08467884);
   data_mc_ratio__96->SetBinError(18,0.4982715);
   data_mc_ratio__96->SetBinError(19,1.646783);
   data_mc_ratio__96->SetBinError(20,5.901154);
   data_mc_ratio__96->SetBinError(21,0.9366072);
   data_mc_ratio__96->SetMinimum(0.4);
   data_mc_ratio__96->SetMaximum(1.6);
   data_mc_ratio__96->SetEntries(18.05925);
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
   Double_t Graph_from_mc_statistical_error_fey1096[50] = { 0.01532236, 0.03543976, 0.07139705, 0.0966536, 0.1990357, 0.1806433, 0.1150542, 0.6184152, 0.3565699, 0.2503463, 0.2098797, 0.2218538, 0.8865736, 0.3975881, 0.4220529, 0.1335409, 0.8464087,
   0.396546, 0.258543, 0.7117629, 0.522545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Graph_Graph_from_mc_statistical_error1096->SetMinimum(0.1020837);
   Graph_Graph_from_mc_statistical_error1096->SetMaximum(2.063888);
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
