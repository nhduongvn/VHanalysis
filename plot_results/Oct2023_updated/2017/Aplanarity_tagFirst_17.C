#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_17/Aplanarity_tagFirst_17
//=========  (Fri Oct 20 11:03:40 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tagFirst_17 = new TCanvas("Aplanarity_tagFirst_17", "Aplanarity_tagFirst_17",0,0,600,600);
   Aplanarity_tagFirst_17->SetHighLightColor(2);
   Aplanarity_tagFirst_17->Range(0,0,1,1);
   Aplanarity_tagFirst_17->SetFillColor(0);
   Aplanarity_tagFirst_17->SetFillStyle(4000);
   Aplanarity_tagFirst_17->SetBorderMode(0);
   Aplanarity_tagFirst_17->SetBorderSize(2);
   Aplanarity_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3417.116,1.052419,3413709);
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
   st->SetMaximum(3071996);
   
   TH1F *st_stack_191 = new TH1F("st_stack_191","",50,0,1);
   st_stack_191->SetMinimum(0.01);
   st_stack_191->SetMaximum(3071996);
   st_stack_191->SetDirectory(nullptr);
   st_stack_191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_191->SetLineColor(ci);
   st_stack_191->SetLineWidth(0);
   st_stack_191->GetXaxis()->SetRange(1,50);
   st_stack_191->GetXaxis()->SetLabelFont(42);
   st_stack_191->GetXaxis()->SetTitleOffset(1);
   st_stack_191->GetXaxis()->SetTitleFont(42);
   st_stack_191->GetYaxis()->SetTitle("Events/0.02");
   st_stack_191->GetYaxis()->SetLabelFont(42);
   st_stack_191->GetYaxis()->SetLabelSize(0.05);
   st_stack_191->GetYaxis()->SetTitleSize(0.057);
   st_stack_191->GetYaxis()->SetTitleOffset(1.2);
   st_stack_191->GetYaxis()->SetTitleFont(42);
   st_stack_191->GetZaxis()->SetLabelFont(42);
   st_stack_191->GetZaxis()->SetTitleOffset(1);
   st_stack_191->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_191);
   
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_1 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(1,1155435);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(2,237752);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(3,111959.5);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(4,50809.8);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(5,34927.08);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(6,18867.68);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(7,12480.61);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(8,5653.534);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(9,5324.655);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(10,3544.035);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(11,1859.098);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(12,2337.866);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(13,570.3253);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(14,975.5373);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(15,1115.505);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(16,416.663);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(17,303.9564);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(18,298.2475);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(19,222.2085);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(20,33.70815);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinContent(21,7.030191);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(1,48190.38);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(2,6590.489);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(3,4786.148);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(4,3144.745);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(5,2696.438);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(6,1701.728);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(7,1808.001);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(8,678.5855);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(9,959.8719);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(10,676.2084);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(11,368.926);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(12,639.5371);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(13,93.66698);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(14,326.7283);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(15,795.6607);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(16,241.7628);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(17,178.061);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(18,245.5063);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(19,193.5545);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(20,33.70815);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetBinError(21,6.213138);
   VbbHcc_tagFirst_Aplanarity_stack_1->SetEntries(171555);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tagFirst_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_2 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(1,11458.35);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(2,3047.776);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(3,1365.162);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(4,706.0954);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(5,401.5933);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(6,265.6009);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(7,185.3425);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(8,112.9742);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(9,77.1627);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(10,55.6304);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(11,43.83406);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(12,26.0004);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(13,17.94539);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(14,12.06799);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(15,7.938828);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(16,3.11569);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(17,5.669353);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(18,1.661382);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(19,0.7280895);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(20,0.9648468);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinContent(21,0.4229515);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(1,53.7924);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(2,27.81016);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(3,18.80936);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(4,13.67169);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(5,10.28075);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(6,7.992396);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(7,7.315975);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(8,5.585491);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(9,4.485276);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(10,3.943875);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(11,4.177016);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(12,2.725156);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(13,2.156128);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(14,1.860304);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(15,1.605978);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(16,0.9693236);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(17,1.483381);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(18,1.020276);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(19,0.3470244);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(20,0.471578);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetBinError(21,0.4229515);
   VbbHcc_tagFirst_Aplanarity_stack_2->SetEntries(214700);

   ci = TColor::GetColor("#660066");
   VbbHcc_tagFirst_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_3 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(1,201345.3);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(2,59236.53);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(3,26839.03);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(4,14526.39);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(5,8553.414);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(6,5329.672);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(7,3495.215);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(8,2350.517);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(9,1533.779);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(10,1071.814);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(11,718.4487);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(12,488.2737);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(13,321.3242);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(14,216.9396);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(15,143.2394);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(16,87.358);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(17,51.41527);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(18,32.55323);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(19,15.25519);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(20,9.266331);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(21,3.633087);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(22,0.7844261);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinContent(23,0.3100942);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(1,137.75);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(2,74.0206);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(3,49.81971);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(4,36.66074);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(5,28.00646);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(6,22.07581);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(7,17.91799);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(8,14.60936);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(9,11.82425);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(10,9.736958);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(11,8.001709);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(12,6.72089);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(13,5.347048);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(14,4.384154);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(15,3.648802);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(16,2.85388);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(17,2.101925);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(18,1.736214);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(19,1.163434);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(20,0.8748797);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(21,0.5714301);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(22,0.223759);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetBinError(23,0.1742482);
   VbbHcc_tagFirst_Aplanarity_stack_3->SetEntries(4978651);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tagFirst_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_4 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(1,8905.473);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(2,2204.011);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(3,990.2961);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(4,521.5486);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(5,305.8575);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(6,190.5931);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(7,114.7272);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(8,81.02349);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(9,51.11355);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(10,51.52786);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(11,20.91016);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(12,16.28242);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(13,16.85543);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(14,6.146405);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(15,3.777307);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(16,4.510067);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(17,1.364461);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(18,0.2294096);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(19,0.4449331);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinContent(20,0.199222);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(1,62.54634);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(2,32.33684);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(3,23.561);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(4,17.58605);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(5,15.98445);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(6,11.24925);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(7,8.011788);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(8,6.303189);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(9,3.978406);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(10,8.963163);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(11,2.589376);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(12,2.362978);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(13,6.712127);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(14,1.281609);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(15,0.9559478);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(16,2.205579);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(17,0.5732815);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(18,0.1371686);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(19,0.3723038);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetBinError(20,0.1170166);
   VbbHcc_tagFirst_Aplanarity_stack_4->SetEntries(95533);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tagFirst_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_5 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(1,4922.173);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(2,1160.281);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(3,494.3548);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(4,235.926);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(5,142.3443);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(6,83.06091);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(7,54.61584);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(8,38.69436);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(9,33.90127);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(10,13.30652);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(11,10.00873);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(12,6.956785);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(13,2.799937);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(14,2.894009);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(15,1.624241);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(16,0.4747267);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(17,0.2297381);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinContent(22,0.1546719);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(1,74.36012);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(2,43.17483);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(3,28.39246);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(4,17.34514);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(5,13.51928);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(6,8.256946);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(7,6.643245);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(8,5.960254);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(9,6.924536);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(10,2.95768);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(11,2.336409);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(12,2.136015);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(13,0.755828);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(14,1.08452);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(15,0.7346482);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(16,0.2096746);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(17,0.1678266);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetBinError(22,0.1546719);
   VbbHcc_tagFirst_Aplanarity_stack_5->SetEntries(45648);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tagFirst_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_6 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(1,43.89128);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(2,11.10907);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(3,3.103581);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(4,2.717727);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(5,0.983842);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(6,0.7668984);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(7,3.163427);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(8,0.1580646);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(9,0.4582515);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(10,0.1864037);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinContent(12,0.5440849);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(1,4.288204);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(2,2.134632);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(3,1.052645);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(4,0.9817949);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(5,0.5168421);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(6,0.4653799);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(7,1.284734);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(8,0.1580646);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(9,0.3393416);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(10,0.1864037);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetBinError(12,0.5440849);
   VbbHcc_tagFirst_Aplanarity_stack_6->SetEntries(204);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tagFirst_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_7 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(1,116.0149);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(2,27.48964);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(3,12.9241);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(4,3.313504);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(5,3.876398);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(6,1.343075);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(7,0.5966086);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(8,1.524309);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(9,0.5977837);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(10,0.8479272);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(11,0.1321526);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(12,0.175466);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(14,0.2927671);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinContent(16,0.3555834);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(1,6.592567);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(2,3.014959);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(3,2.323838);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(4,0.9283707);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(5,1.342274);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(6,0.640615);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(7,0.3468222);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(8,0.8400697);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(9,0.4823949);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(10,0.6456025);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(11,0.1321526);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(12,0.175466);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(14,0.2124262);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetBinError(16,0.3555834);
   VbbHcc_tagFirst_Aplanarity_stack_7->SetEntries(620);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tagFirst_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_8 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(1,93.83767);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(2,23.78575);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(3,10.37402);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(4,5.077161);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(5,3.119555);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(6,3.842958);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(7,0.5517936);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(8,0.8331543);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(9,1.884851);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinContent(10,0.7178721);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(1,9.034913);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(2,4.624648);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(3,2.311778);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(4,1.579676);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(5,1.747664);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(6,2.083056);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(7,0.525355);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(8,0.5891293);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(9,1.352642);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetBinError(10,0.7178721);
   VbbHcc_tagFirst_Aplanarity_stack_8->SetEntries(229);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tagFirst_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_9 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(1,45.04148);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(2,12.73236);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(3,6.058275);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(4,3.218086);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(5,1.79713);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(6,1.269663);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(7,0.7563774);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(8,0.4845098);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(9,0.345869);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(10,0.200437);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(11,0.1654146);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(12,0.1080585);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(13,0.06291833);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(14,0.02867289);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(15,0.03411335);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(16,0.01820394);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(17,0.00329729);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(18,0.01445753);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(19,0.003379788);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(20,0.006916778);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinContent(21,0.003179463);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(1,0.3476164);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(2,0.18099);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(3,0.128035);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(4,0.09087718);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(5,0.06686001);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(6,0.05749702);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(7,0.04252361);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(8,0.03532108);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(9,0.02980063);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(10,0.02274755);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(11,0.02143402);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(12,0.01443665);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(13,0.01144157);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(14,0.009163552);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(15,0.01047613);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(16,0.007118969);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(17,0.003072167);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(18,0.007778606);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(19,0.002035319);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(20,0.005366093);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetBinError(21,0.003179463);
   VbbHcc_tagFirst_Aplanarity_stack_9->SetEntries(39482);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tagFirst_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_10 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(1,31.81415);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(2,8.536813);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(3,3.907954);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(4,2.207145);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(5,1.301942);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(6,0.8036693);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(7,0.5464479);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(8,0.3581589);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(9,0.2394039);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(10,0.1476709);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(11,0.1137978);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(12,0.07408968);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(13,0.05179274);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(14,0.0253238);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(15,0.02024207);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(16,0.01054002);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(17,0.008691507);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(18,0.003735702);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(19,0.001129616);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinContent(20,0.0003424695);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(1,0.1111077);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(2,0.05706181);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(3,0.03847843);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(4,0.02885834);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(5,0.02211666);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(6,0.01730446);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(7,0.01432948);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(8,0.01146867);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(9,0.009413571);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(10,0.007349691);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(11,0.006577116);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(12,0.005227571);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(13,0.004409381);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(14,0.003014981);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(15,0.002763709);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(16,0.001973911);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(17,0.001763035);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(18,0.00115211);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(19,0.0006931548);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetBinError(20,0.0003424695);
   VbbHcc_tagFirst_Aplanarity_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tagFirst_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_11 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(1,1.087106);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(2,0.2715073);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(3,0.1318942);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(4,0.07833187);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(5,0.03706683);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(6,0.03361661);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(7,0.02308549);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(8,0.01012816);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(9,0.009687658);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(10,0.009166972);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(11,0.002487482);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(12,0.004584464);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(17,0.0009842945);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(18,0.001480609);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinContent(20,0.001365788);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(1,0.04561149);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(2,0.02276141);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(3,0.01439595);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(4,0.0130378);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(5,0.008292485);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(6,0.007999901);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(7,0.006198636);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(8,0.003934);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(9,0.005073055);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(10,0.00634766);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(11,0.001760301);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(12,0.002370681);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(17,0.0009842945);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(18,0.001480609);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetBinError(20,0.001365788);
   VbbHcc_tagFirst_Aplanarity_stack_11->SetEntries(1123);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tagFirst_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tagFirst_Aplanarity_stack_12 = new TH1D("VbbHcc_tagFirst_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(1,0.494055);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(2,0.1445312);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(3,0.0775675);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(4,0.04702645);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(5,0.02814833);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(6,0.01430609);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(7,0.01253563);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(8,0.006469012);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(9,0.006691695);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(10,0.002714613);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(11,0.001489456);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(12,0.00222694);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(13,0.0001627609);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(14,0.001199049);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(15,0.000180327);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinContent(19,0.0002098383);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(1,0.01084997);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(2,0.005677287);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(3,0.004274984);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(4,0.003274355);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(5,0.0025183);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(6,0.001888632);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(7,0.001616437);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(8,0.001268662);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(9,0.001330057);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(10,0.0007880081);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(11,0.0005853102);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(12,0.0008025268);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(13,0.0001627609);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(14,0.0004949258);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(15,0.000180327);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetBinError(19,0.0002098383);
   VbbHcc_tagFirst_Aplanarity_stack_12->SetEntries(4223);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tagFirst_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tagFirst_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tagFirst_Aplanarity__381 = new TH1D("VbbHcc_tagFirst_Aplanarity__381","",50,0,1);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(1,754209);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(2,192313);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(3,83714);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(4,44318);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(5,25869);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(6,16053);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(7,10370);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(8,6748);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(9,4511);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(10,3129);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(11,2129);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(12,1411);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(13,957);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(14,610);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(15,404);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(16,249);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(17,148);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(18,84);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(19,47);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(20,17);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(21,10);
   VbbHcc_tagFirst_Aplanarity__381->SetBinContent(22,10);
   VbbHcc_tagFirst_Aplanarity__381->SetEntries(1147359);

   ci = TColor::GetColor("#000099");
   VbbHcc_tagFirst_Aplanarity__381->SetLineColor(ci);
   VbbHcc_tagFirst_Aplanarity__381->SetLineWidth(2);
   VbbHcc_tagFirst_Aplanarity__381->SetMarkerStyle(20);
   VbbHcc_tagFirst_Aplanarity__381->SetMarkerSize(1.2);
   VbbHcc_tagFirst_Aplanarity__381->GetXaxis()->SetRange(1,100);
   VbbHcc_tagFirst_Aplanarity__381->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__381->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity__381->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__381->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__381->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__381->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_Aplanarity__381->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_Aplanarity__381->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_Aplanarity__381->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fx1381[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fy1381[50] = { 1382398, 303484.6, 141684.9, 66816.42, 44341.43, 24744.68, 16336.16, 8240.117, 7024.154, 4738.427, 2652.715, 2876.288, 929.3651, 1213.933, 1272.14, 512.5058, 362.6482,
   332.7112, 238.6414, 44.14717, 11.08941, 0.939098, 0.3100942, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fex1381[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_tagFirst_Aplanarity_fey1381[50] = { 48190.71, 6591.187, 4786.588, 3145.086, 2696.685, 1701.949, 1808.135, 678.8219, 959.9896, 676.3565, 369.0529, 639.5864, 94.08702, 326.7674, 795.6716, 241.792, 178.0806,
   245.5146, 193.5587, 33.723, 6.25368, 0.2720137, 0.1742482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tagFirst_Aplanarity_fx1381,Graph_from_VbbHcc_tagFirst_Aplanarity_fy1381,Graph_from_VbbHcc_tagFirst_Aplanarity_fex1381,Graph_from_VbbHcc_tagFirst_Aplanarity_fey1381);
   gre->SetName("Graph_from_VbbHcc_tagFirst_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381 = new TH1F("Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->SetMaximum(1573648);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tagFirst_Aplanarity1381);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tagFirst_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tagFirst_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagFirst_17->cd();
  
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
   
   TH1D *data_mc_ratio__382 = new TH1D("data_mc_ratio__382","",50,0,1);
   data_mc_ratio__382->SetBinContent(1,0.5455801);
   data_mc_ratio__382->SetBinContent(2,0.6336828);
   data_mc_ratio__382->SetBinContent(3,0.5908463);
   data_mc_ratio__382->SetBinContent(4,0.6632801);
   data_mc_ratio__382->SetBinContent(5,0.5834047);
   data_mc_ratio__382->SetBinContent(6,0.6487455);
   data_mc_ratio__382->SetBinContent(7,0.6347881);
   data_mc_ratio__382->SetBinContent(8,0.8189204);
   data_mc_ratio__382->SetBinContent(9,0.6422126);
   data_mc_ratio__382->SetBinContent(10,0.6603458);
   data_mc_ratio__382->SetBinContent(11,0.802574);
   data_mc_ratio__382->SetBinContent(12,0.4905628);
   data_mc_ratio__382->SetBinContent(13,1.029735);
   data_mc_ratio__382->SetBinContent(14,0.5024988);
   data_mc_ratio__382->SetBinContent(15,0.3175752);
   data_mc_ratio__382->SetBinContent(16,0.4858482);
   data_mc_ratio__382->SetBinContent(17,0.4081091);
   data_mc_ratio__382->SetBinContent(18,0.2524712);
   data_mc_ratio__382->SetBinContent(19,0.1969482);
   data_mc_ratio__382->SetBinContent(20,0.3850756);
   data_mc_ratio__382->SetBinContent(21,0.9017613);
   data_mc_ratio__382->SetBinContent(22,10.64852);
   data_mc_ratio__382->SetBinError(1,0.0006282214);
   data_mc_ratio__382->SetBinError(2,0.001444999);
   data_mc_ratio__382->SetBinError(3,0.002042093);
   data_mc_ratio__382->SetBinError(4,0.003150699);
   data_mc_ratio__382->SetBinError(5,0.003627272);
   data_mc_ratio__382->SetBinError(6,0.00512031);
   data_mc_ratio__382->SetBinError(7,0.006233607);
   data_mc_ratio__382->SetBinError(8,0.009969058);
   data_mc_ratio__382->SetBinError(9,0.00956186);
   data_mc_ratio__382->SetBinError(10,0.01180507);
   data_mc_ratio__382->SetBinError(11,0.01739391);
   data_mc_ratio__382->SetBinError(12,0.01305964);
   data_mc_ratio__382->SetBinError(13,0.03328661);
   data_mc_ratio__382->SetBinError(14,0.02034558);
   data_mc_ratio__382->SetBinError(15,0.01579996);
   data_mc_ratio__382->SetBinError(16,0.03078938);
   data_mc_ratio__382->SetBinError(17,0.03354636);
   data_mc_ratio__382->SetBinError(18,0.02754687);
   data_mc_ratio__382->SetBinError(19,0.02872785);
   data_mc_ratio__382->SetBinError(20,0.09339456);
   data_mc_ratio__382->SetBinError(21,0.285162);
   data_mc_ratio__382->SetBinError(22,3.367356);
   data_mc_ratio__382->SetMinimum(0.4);
   data_mc_ratio__382->SetMaximum(1.6);
   data_mc_ratio__382->SetEntries(24.19081);
   data_mc_ratio__382->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__382->SetLineColor(ci);
   data_mc_ratio__382->SetLineWidth(2);
   data_mc_ratio__382->SetMarkerStyle(20);
   data_mc_ratio__382->SetMarkerSize(1.2);
   data_mc_ratio__382->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__382->GetXaxis()->SetRange(1,50);
   data_mc_ratio__382->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__382->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__382->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__382->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__382->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__382->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__382->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__382->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__382->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__382->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1382[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1382[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1382[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1382[50] = { 0.03486022, 0.02171835, 0.03378333, 0.04707056, 0.06081638, 0.0687804, 0.110683, 0.08238013, 0.1366698, 0.1427386, 0.1391227, 0.2223652, 0.101238, 0.2691807, 0.6254593, 0.4717839, 0.4910561,
   0.7379209, 0.8110859, 0.7638768, 0.5639327, 0.2896543, 0.5619204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1382,Graph_from_mc_statistical_error_fy1382,Graph_from_mc_statistical_error_fex1382,Graph_from_mc_statistical_error_fey1382);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1382 = new TH1F("Graph_Graph_from_mc_statistical_error1382","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1382->SetMinimum(0.02669691);
   Graph_Graph_from_mc_statistical_error1382->SetMaximum(1.973303);
   Graph_Graph_from_mc_statistical_error1382->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1382->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1382->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1382->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1382);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->Modified();
   Aplanarity_tagFirst_17->cd();
   Aplanarity_tagFirst_17->SetSelected(Aplanarity_tagFirst_17);
}
