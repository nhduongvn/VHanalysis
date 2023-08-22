void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(0,0,1,1);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.909347,1.052419,13.8656);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(4.14153e+11);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0.001280643);
   st_stack_62->SetMaximum(1.542071e+12);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetLabelSize(0.035);
   st_stack_62->GetXaxis()->SetTitleSize(0.035);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetLabelSize(0.05);
   st_stack_62->GetYaxis()->SetTitleSize(0.057);
   st_stack_62->GetYaxis()->SetTitleOffset(1.2);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetLabelSize(0.035);
   st_stack_62->GetZaxis()->SetTitleSize(0.035);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,151146.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,37335.74);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3530.976);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,2046.268);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,505.0689);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,147.1842);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,50.69326);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,58.21722);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,143.8005);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,27.27956);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,28.66641);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,17138.12);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,20655.16);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,657.5047);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,578.8718);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,277.0871);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,50.8827);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,29.60675);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,33.34786);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,136.9876);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,23.34227);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,23.72405);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9351);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,698.3865);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,97.95576);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,28.94621);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,10.10603);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,5.838152);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.888586);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.415788);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.2663609);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.1659729);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.3660625);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.04289964);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.3076978);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.02169284);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.06752678);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,10.9827);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.093687);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.254943);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.294484);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.01224);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.5440857);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5092118);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1407831);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.0960653);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.2709391);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.03157132);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.2032147);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.02169284);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.06752678);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11598);

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
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,14852.57);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2137.77);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,585.4879);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,216.5214);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,100.0425);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,48.84005);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,27.00188);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,16.88234);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,10.58046);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,5.471831);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.6286);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,2.350164);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.26482);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.9310277);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.7298629);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.59404);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.09000805);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.3011497);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.08600721);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.07567688);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,31.40221);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,11.77644);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,6.166914);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,3.742705);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.544443);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.793534);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.317361);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.055099);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.82839);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.5824856);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4978294);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.3967499);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.4036424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2543791);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2149227);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.1957107);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.06537165);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1522021);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.08600721);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.07567688);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(305979);

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
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1940.036);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,225.905);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,52.8374);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,16.12443);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,8.975129);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,4.519239);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.039841);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.631907);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.4811245);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.8711927);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.1567934);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.2443414);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.313167);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.0609498);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.1081421);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,26.05388);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,10.86854);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,4.830354);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.60829);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.27287);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.8954334);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.8013286);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.5695879);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.1867506);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.3723782);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1109307);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1420632);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1603485);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.0609498);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.1081421);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(17592);

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
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,202.8238);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,22.21577);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,7.058651);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,2.231422);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.3158016);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.4965072);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.107623);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,5.18861);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.1214668);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.09332064);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,11.50015);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,3.464365);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.866092);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.5844151);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.1955597);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.3125336);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.107623);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,5.108684);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.1214668);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.09332064);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2041);

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
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.148686);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,0.2950387);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.5861334);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.2950387);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(5);

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
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,4.862182);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.6883442);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,0.2849003);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(5,0.2711943);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,1.137302);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.404591);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.2849003);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(5,0.2711943);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(24);

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
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,37.96841);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,2.445428);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.1590457);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.2792854);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(5,0.301082);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,3.050532);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,0.7616401);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.1590457);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.2792854);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(5,0.301082);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(178);

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
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,38.26251);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,2.822146);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.5097955);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1839901);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.07423469);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.0636151);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01531557);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.0277893);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.008103428);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.003487241);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.005573982);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.005186108);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(13,0.001763864);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(16,0.001926296);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.2487862);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.06609458);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02876311);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01698237);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01104332);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.010322);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.004799169);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.006843138);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.003664544);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.002466438);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.003060807);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.003131803);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(13,0.001763864);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(16,0.001926296);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28819);

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
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,13.5997);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.417267);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.3308245);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1311784);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.04849352);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.02419651);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.01724136);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.009109568);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.007440889);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.00518812);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001629223);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001618695);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.001954082);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0008566598);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003900514);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0004106431);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004068213);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.0009101788);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.07274431);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02322505);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01134189);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.007151095);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.004379324);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.003096251);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002617458);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001907572);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001716608);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.00144619);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0008244543);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0008105063);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0008741885);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0006060083);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003900514);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0004106431);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004068213);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0006441572);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(40948);

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
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.1157698);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.01186488);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.001191783);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(6,0.003897057);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.01352136);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.004401462);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.001191783);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(6,0.002759449);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(87);

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
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.04792824);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.005207281);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.00129627);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0004833243);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(6,0.0001034089);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(12,0.0002685477);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.003156699);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.001032598);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.000540286);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0003422422);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(6,0.0001034089);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(12,0.0002685477);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(277);

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
   
   TH1D *VbbHcc_tags_Aplanarity__169 = new TH1D("VbbHcc_tags_Aplanarity__169","",50,0,1);
   VbbHcc_tags_Aplanarity__169->SetBinContent(1,52764);
   VbbHcc_tags_Aplanarity__169->SetBinContent(2,6633);
   VbbHcc_tags_Aplanarity__169->SetBinContent(3,1989);
   VbbHcc_tags_Aplanarity__169->SetBinContent(4,790);
   VbbHcc_tags_Aplanarity__169->SetBinContent(5,407);
   VbbHcc_tags_Aplanarity__169->SetBinContent(6,205);
   VbbHcc_tags_Aplanarity__169->SetBinContent(7,109);
   VbbHcc_tags_Aplanarity__169->SetBinContent(8,93);
   VbbHcc_tags_Aplanarity__169->SetBinContent(9,44);
   VbbHcc_tags_Aplanarity__169->SetBinContent(10,26);
   VbbHcc_tags_Aplanarity__169->SetBinContent(11,22);
   VbbHcc_tags_Aplanarity__169->SetBinContent(12,12);
   VbbHcc_tags_Aplanarity__169->SetBinContent(13,12);
   VbbHcc_tags_Aplanarity__169->SetBinContent(14,4);
   VbbHcc_tags_Aplanarity__169->SetBinContent(15,8);
   VbbHcc_tags_Aplanarity__169->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__169->SetEntries(63168);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__169->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__169->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__169->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__169->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__169->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__169->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__169->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1123[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1123[50] = {
   168936.1,
   39827.27,
   4206.593,
   2291.846,
   620.9355,
   203.0204,
   82.29095,
   82.22334,
   155.165,
   33.99732,
   32.59523,
   2.909277,
   2.603398,
   0.9994111,
   0.7912027,
   0.704519,
   0.09041488,
   0.3020598,
   0.08600721,
   0.07567688,
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1123[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1123[50] = {
   17138.18,
   20655.16,
   657.5579,
   578.8879,
   277.1039,
   50.92604,
   29.65145,
   33.75849,
   136.9904,
   23.35408,
   23.72974,
   0.4678666,
   0.4348716,
   0.26319,
   0.2233983,
   0.2236097,
   0.06537292,
   0.1522035,
   0.08600721,
   0.07567688,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1123,Graph_from_VbbHcc_tags_Aplanarity_fy1123,Graph_from_VbbHcc_tags_Aplanarity_fex1123,Graph_from_VbbHcc_tags_Aplanarity_fey1123);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1123 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1123","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetMinimum(204.6817);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetMaximum(204681.7);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1123);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__170 = new TH1D("data_mc_ratio__170","",50,0,1);
   data_mc_ratio__170->SetBinContent(1,0.3123312);
   data_mc_ratio__170->SetBinContent(2,0.1665442);
   data_mc_ratio__170->SetBinContent(3,0.4728292);
   data_mc_ratio__170->SetBinContent(4,0.3447002);
   data_mc_ratio__170->SetBinContent(5,0.6554626);
   data_mc_ratio__170->SetBinContent(6,1.009751);
   data_mc_ratio__170->SetBinContent(7,1.324568);
   data_mc_ratio__170->SetBinContent(8,1.131066);
   data_mc_ratio__170->SetBinContent(9,0.2835691);
   data_mc_ratio__170->SetBinContent(10,0.7647661);
   data_mc_ratio__170->SetBinContent(11,0.6749454);
   data_mc_ratio__170->SetBinContent(12,4.124737);
   data_mc_ratio__170->SetBinContent(13,4.60936);
   data_mc_ratio__170->SetBinContent(14,4.002357);
   data_mc_ratio__170->SetBinContent(15,10.11119);
   data_mc_ratio__170->SetBinContent(16,1.419408);
   data_mc_ratio__170->SetBinError(1,0.001359711);
   data_mc_ratio__170->SetBinError(2,0.002044911);
   data_mc_ratio__170->SetBinError(3,0.01060198);
   data_mc_ratio__170->SetBinError(4,0.01226388);
   data_mc_ratio__170->SetBinError(5,0.03249007);
   data_mc_ratio__170->SetBinError(6,0.07052404);
   data_mc_ratio__170->SetBinError(7,0.1268706);
   data_mc_ratio__170->SetBinError(8,0.1172861);
   data_mc_ratio__170->SetBinError(9,0.04274965);
   data_mc_ratio__170->SetBinError(10,0.149983);
   data_mc_ratio__170->SetBinError(11,0.1438988);
   data_mc_ratio__170->SetBinError(12,1.190709);
   data_mc_ratio__170->SetBinError(13,1.330608);
   data_mc_ratio__170->SetBinError(14,2.001178);
   data_mc_ratio__170->SetBinError(15,3.574845);
   data_mc_ratio__170->SetBinError(16,1.419408);
   data_mc_ratio__170->SetMinimum(0.4);
   data_mc_ratio__170->SetMaximum(1.6);
   data_mc_ratio__170->SetEntries(29.21865);
   data_mc_ratio__170->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__170->SetLineColor(ci);
   data_mc_ratio__170->SetLineWidth(2);
   data_mc_ratio__170->SetMarkerStyle(20);
   data_mc_ratio__170->SetMarkerSize(1.2);
   data_mc_ratio__170->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__170->GetXaxis()->SetRange(1,50);
   data_mc_ratio__170->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__170->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__170->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__170->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__170->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__170->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1124[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1124[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1124[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1124[50] = {
   0.1014477,
   0.5186185,
   0.156316,
   0.2525858,
   0.4462684,
   0.2508419,
   0.3603245,
   0.4105707,
   0.8828689,
   0.6869389,
   0.7280127,
   0.1608189,
   0.16704,
   0.263345,
   0.2823527,
   0.3173934,
   0.7230327,
   0.5038852,
   1,
   1,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1124,Graph_from_mc_statistical_error_fy1124,Graph_from_mc_statistical_error_fex1124,Graph_from_mc_statistical_error_fey1124);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1124 = new TH1F("Graph_Graph_from_mc_statistical_error1124","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1124->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1124->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1124->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1124->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1124->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1124);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
