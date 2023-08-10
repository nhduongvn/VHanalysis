void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(0,0,1,1);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-689.6964,1.052419,689016.6);
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
   st->SetMaximum(590520);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0.01);
   st_stack_63->SetMaximum(620046);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetLabelSize(0.035);
   st_stack_63->GetXaxis()->SetTitleSize(0.035);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetLabelSize(0.05);
   st_stack_63->GetYaxis()->SetTitleSize(0.057);
   st_stack_63->GetYaxis()->SetTitleOffset(1.2);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetLabelSize(0.035);
   st_stack_63->GetZaxis()->SetTitleSize(0.035);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,183173.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,19666.29);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,7588.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3203.685);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1308.111);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,343.2969);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,144.9497);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,47.32991);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,73.95465);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,39.64555);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,9.789551);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,31.92775);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,6479.088);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,1889.958);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,1265.279);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,921.3914);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,537.1617);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,90.40399);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,58.98377);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,20.48606);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,46.20275);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,32.48434);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,9.789551);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,31.92775);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(10231);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1067.766);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,139.8668);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,41.1508);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,14.4118);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,8.653732);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.606151);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.121549);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,1.486211);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.512072);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.6277684);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.05476569);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.2005679);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.1581321);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.317669);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.04860075);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,13.45181);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.700705);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.631689);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.469083);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.317413);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.5543685);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5845876);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.4384326);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.290186);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.3014029);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.05476569);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.100426);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.09143629);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.2734223);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.04860075);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(14890);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,20780.23);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2927.408);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,808.0932);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,300.2962);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,137.8699);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,66.60361);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,37.96152);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,22.46752);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,13.54006);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,9.254533);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,4.986563);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,4.29888);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.222903);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,1.542578);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,1.095792);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.6936718);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.4804194);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.5057493);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.1372627);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.1625926);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,35.83411);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,13.4099);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,7.029349);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,4.282832);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.910132);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.016975);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.531467);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.166484);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.9161968);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.7518156);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.5518666);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.5163971);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.3757933);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.312621);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2625858);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2037269);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.1815815);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1807648);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.09705938);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.09552287);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(421807);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,2853.171);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,298.2681);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,82.12758);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,24.98801);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,10.55906);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,6.548853);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.202282);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.428843);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,3.116143);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,1.237121);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.2183513);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.3109243);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.09257296);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.2183513);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.09257296);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,37.41483);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,12.36668);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,7.41136);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,2.469538);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.630062);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,1.275859);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.7354273);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.3859771);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.046359);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.566872);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1561728);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1815481);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.09257296);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1561728);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.09257296);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(18660);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,281.624);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,26.91776);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,7.230841);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,4.643292);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,1.005008);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.5248756);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.5126324);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,0.3430468);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.01224321);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(10,0.2594997);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.04495706);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,17.25722);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,4.57521);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.277323);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,2.182744);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.3777523);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.3154807);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.315243);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,0.1899483);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.01224321);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(10,0.2594997);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.04495706);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.808171);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.9040853);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,9.917575);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.3541991);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,1.062597);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,1.874246);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.3541991);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.6134909);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,60.07409);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,2.794144);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.2794144);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.5588287);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(6,0.2794144);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(12,0.2794144);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,4.097019);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,0.8835858);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.2794144);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.3951516);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(6,0.2794144);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(12,0.2794144);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,57.16961);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.92011);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.6925909);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.2560072);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.1302894);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.05485869);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.03428668);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.009143115);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01371467);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.009143115);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(14,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.3614928);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.09465994);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.03978831);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.02419041);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01725725);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01119798);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.008852783);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004571557);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.005598991);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.004571557);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(14,0.002285779);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,25.49114);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,2.698151);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.6253557);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.2354771);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.08703712);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.04649928);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.03099952);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01490362);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01371133);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.008346025);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002980723);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.002384579);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002980723);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.001192289);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001788434);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1232737);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.04010596);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01930809);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01184814);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.007203243);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.005265007);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.00429886);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002980723);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002859009);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.002230569);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.00133302);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001192289);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.00133302);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0008430758);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.001032553);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.1615791);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.009103048);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.002275762);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(4,0.002275762);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.01917591);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.004551524);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.002275762);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(4,0.002275762);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.07761111);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.008690047);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.001498284);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0005993136);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0005993136);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.0002996568);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.00482252);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.001613701);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.000670053);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0004237787);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0004237787);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0002996568);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__172 = new TH1D("VbbHcc_tags_Aplanarity__172","",50,0,1);
   VbbHcc_tags_Aplanarity__172->SetBinContent(1,265734);
   VbbHcc_tags_Aplanarity__172->SetBinContent(2,34010);
   VbbHcc_tags_Aplanarity__172->SetBinContent(3,8658);
   VbbHcc_tags_Aplanarity__172->SetBinContent(4,3002);
   VbbHcc_tags_Aplanarity__172->SetBinContent(5,1277);
   VbbHcc_tags_Aplanarity__172->SetBinContent(6,695);
   VbbHcc_tags_Aplanarity__172->SetBinContent(7,336);
   VbbHcc_tags_Aplanarity__172->SetBinContent(8,197);
   VbbHcc_tags_Aplanarity__172->SetBinContent(9,107);
   VbbHcc_tags_Aplanarity__172->SetBinContent(10,72);
   VbbHcc_tags_Aplanarity__172->SetBinContent(11,56);
   VbbHcc_tags_Aplanarity__172->SetBinContent(12,27);
   VbbHcc_tags_Aplanarity__172->SetBinContent(13,24);
   VbbHcc_tags_Aplanarity__172->SetBinContent(14,16);
   VbbHcc_tags_Aplanarity__172->SetBinContent(15,8);
   VbbHcc_tags_Aplanarity__172->SetBinContent(16,8);
   VbbHcc_tags_Aplanarity__172->SetBinContent(17,6);
   VbbHcc_tags_Aplanarity__172->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity__172->SetEntries(314284);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__172->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__172->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__172->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__172->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__172->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__172->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__172->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__172->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__172->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1125[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1125[50] = {
   208311.2,
   23068.54,
   8529.966,
   3549.077,
   1466.416,
   419.9611,
   188.813,
   73.07988,
   91.16259,
   51.04196,
   15.09945,
   5.094457,
   2.476588,
   1.863725,
   33.24249,
   0.7868409,
   0.5296163,
   0.5075378,
   0.1372627,
   0.1625926,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1125[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1125[50] = {
   6479.333,
   1890.057,
   1265.324,
   921.4085,
   537.1738,
   90.43817,
   59.01197,
   20.52844,
   46.22459,
   32.50041,
   9.806594,
   0.6227279,
   0.3976842,
   0.4153283,
   31.92922,
   0.2237739,
   0.187974,
   0.1807678,
   0.09705938,
   0.09552287,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1125,Graph_from_VbbHcc_tags_Aplanarity_fy1125,Graph_from_VbbHcc_tags_Aplanarity_fex1125,Graph_from_VbbHcc_tags_Aplanarity_fey1125);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1125 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1125","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetMaximum(236269.6);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1125);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__173 = new TH1D("data_mc_ratio__173","",50,0,1);
   data_mc_ratio__173->SetBinContent(1,1.275659);
   data_mc_ratio__173->SetBinContent(2,1.474302);
   data_mc_ratio__173->SetBinContent(3,1.01501);
   data_mc_ratio__173->SetBinContent(4,0.8458536);
   data_mc_ratio__173->SetBinContent(5,0.8708304);
   data_mc_ratio__173->SetBinContent(6,1.654915);
   data_mc_ratio__173->SetBinContent(7,1.779538);
   data_mc_ratio__173->SetBinContent(8,2.695681);
   data_mc_ratio__173->SetBinContent(9,1.173727);
   data_mc_ratio__173->SetBinContent(10,1.410604);
   data_mc_ratio__173->SetBinContent(11,3.708743);
   data_mc_ratio__173->SetBinContent(12,5.299878);
   data_mc_ratio__173->SetBinContent(13,9.69075);
   data_mc_ratio__173->SetBinContent(14,8.584958);
   data_mc_ratio__173->SetBinContent(15,0.2406558);
   data_mc_ratio__173->SetBinContent(16,10.16724);
   data_mc_ratio__173->SetBinContent(17,11.32896);
   data_mc_ratio__173->SetBinContent(20,12.30068);
   data_mc_ratio__173->SetBinError(1,0.002474633);
   data_mc_ratio__173->SetBinError(2,0.007994352);
   data_mc_ratio__173->SetBinError(3,0.01090841);
   data_mc_ratio__173->SetBinError(4,0.01543796);
   data_mc_ratio__173->SetBinError(5,0.02436903);
   data_mc_ratio__173->SetBinError(6,0.06277451);
   data_mc_ratio__173->SetBinError(7,0.09708178);
   data_mc_ratio__173->SetBinError(8,0.1920593);
   data_mc_ratio__173->SetBinError(9,0.1134685);
   data_mc_ratio__173->SetBinError(10,0.1662413);
   data_mc_ratio__173->SetBinError(11,0.4956016);
   data_mc_ratio__173->SetBinError(12,1.019962);
   data_mc_ratio__173->SetBinError(13,1.978116);
   data_mc_ratio__173->SetBinError(14,2.146239);
   data_mc_ratio__173->SetBinError(15,0.08508469);
   data_mc_ratio__173->SetBinError(16,3.594662);
   data_mc_ratio__173->SetBinError(17,4.625027);
   data_mc_ratio__173->SetBinError(20,8.697897);
   data_mc_ratio__173->SetMinimum(0.4);
   data_mc_ratio__173->SetMaximum(1.6);
   data_mc_ratio__173->SetEntries(26.9849);
   data_mc_ratio__173->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__173->SetLineColor(ci);
   data_mc_ratio__173->SetLineWidth(2);
   data_mc_ratio__173->SetMarkerStyle(20);
   data_mc_ratio__173->SetMarkerSize(1.2);
   data_mc_ratio__173->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__173->GetXaxis()->SetRange(1,50);
   data_mc_ratio__173->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__173->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__173->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__173->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__173->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__173->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__173->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__173->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__173->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__173->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__173->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__173->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__173->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__173->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__173->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__173->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__173->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1126[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1126[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1126[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1126[50] = {
   0.0311041,
   0.08193226,
   0.1483387,
   0.2596191,
   0.3663174,
   0.2153489,
   0.3125418,
   0.2809041,
   0.5070566,
   0.6367391,
   0.6494668,
   0.1222364,
   0.1605774,
   0.2228485,
   0.960494,
   0.2843953,
   0.3549248,
   0.3561662,
   0.7071068,
   0.5874983,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1126,Graph_from_mc_statistical_error_fy1126,Graph_from_mc_statistical_error_fex1126,Graph_from_mc_statistical_error_fey1126);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1126 = new TH1F("Graph_Graph_from_mc_statistical_error1126","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1126->SetMinimum(0.03555539);
   Graph_Graph_from_mc_statistical_error1126->SetMaximum(2.152593);
   Graph_Graph_from_mc_statistical_error1126->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1126->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1126);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
