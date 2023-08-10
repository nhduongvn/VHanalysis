void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:23:36 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.1532254,-688.4038,1.052419,687725.4);
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
   st->SetMaximum(589413.3);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0.01);
   st_stack_63->SetMaximum(618884);
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
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,204380.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,21690.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,8460.226);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3612.941);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1430.215);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,368.7912);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,129.5283);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,41.82689);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,93.06479);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,45.29959);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,10.33657);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,34.15268);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,7475.741);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,2146.188);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,1406.566);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,1118.064);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,602.115);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,105.0381);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,61.3234);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,20.12974);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,58.79506);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,38.37709);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,10.33657);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,34.15268);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(10038);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1110.344);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,143.6239);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,42.79917);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,15.21623);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,9.536665);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,2.379352);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.377011);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,1.588085);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.6257476);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.7527122);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.1724334);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.1013963);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.24598);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,-0.05654178);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,15.50557);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,5.479752);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.971954);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.663795);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.594483);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.6338512);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.6871667);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.5560506);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.40794);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.4212643);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.1285027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.07315066);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.2088398);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.05654178);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(14154);

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
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,23293.65);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,3293.832);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,921.6268);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,338.2979);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,155.3363);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,76.82154);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,41.13166);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,25.05551);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,15.27502);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,9.823509);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,5.638771);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,4.477711);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.698359);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,1.444653);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,1.168561);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.834359);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.5288456);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.5524509);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.1540888);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.2525868);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,48.12172);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,17.56279);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,10.60853);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,5.692903);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,4.047884);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.573406);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.916214);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.466433);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,1.150864);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.9092424);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.6847996);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.6064663);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.4817993);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.3516472);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.3212065);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2658559);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.221012);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.2284808);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.1090605);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.1469915);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(352917);

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
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,3272.769);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,343.3518);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,93.69853);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,29.41746);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,12.07332);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,7.17472);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.608357);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.628622);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,3.424051);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,2.480055);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.2985367);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.3364925);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.120338);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.2659134);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.1030044);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,47.78066);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,15.50546);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,8.301354);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,3.110232);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.945907);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,1.468021);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.864451);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4516646);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.163823);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,1.318653);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.2120549);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1972353);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.120338);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1951861);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.1030044);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(18490);

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
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,312.7541);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,31.02346);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,8.173182);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,5.29221);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,1.05244);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.3599241);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.4113922);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,0.3254972);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.01147592);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(10,0.2790656);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.05235343);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,18.17801);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,5.429287);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.469665);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,2.88433);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.4063346);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.2021538);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.2736734);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,0.1832705);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.01147592);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(10,0.2790656);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.05235343);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2375);

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
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,2.029431);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,1.034838);
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
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,12.5993);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.3805224);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,1.453579);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,2.506522);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.3805224);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.8401233);
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
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,67.7846);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,3.1599);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,0.2830566);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,0.5712326);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(6,0.3776254);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(12,0.3487978);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,4.736142);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,1.0051);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.2830566);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.4243639);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(6,0.3776254);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(12,0.3487978);
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
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,63.63795);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,4.398914);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.7929036);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.3191834);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.1514206);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.06255303);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.03742916);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.00885242);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01503678);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.01009313);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.002853377);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.002315574);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(14,0.003348055);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.4575678);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.1118489);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.04667421);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.04857688);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.02042287);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01312511);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.009767993);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004765699);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.006162968);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.005109062);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002853377);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002315574);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(14,0.003348055);
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
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,27.13298);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,2.865399);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.6585603);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.2461566);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.09156286);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.04880801);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.0325587);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01562921);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01470407);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.009022926);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.003223468);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.002659239);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.003107062);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.001400072);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0006220662);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0006549065);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0006488114);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.002103235);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1323036);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.04296264);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.02056059);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01251902);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.007639624);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.005582638);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.004556627);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.003137102);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.003077876);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.002420245);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001455764);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001332869);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.001389708);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0009900097);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0006220662);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0006549065);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0006488114);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.001214381);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(48968);

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
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.1639604);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.01292278);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.00283147);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(4,0.002811088);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.02202692);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.00650805);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.00283147);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(4,0.002811088);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(64);

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
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.08676809);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.009641651);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.001619435);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0007344261);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0007457394);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.0003219266);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.00552615);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.001816824);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0007303107);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0005194081);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0005346415);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.0003219266);
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
   VbbHcc_tags_Aplanarity__172->SetBinContent(1,265236);
   VbbHcc_tags_Aplanarity__172->SetBinContent(2,33959);
   VbbHcc_tags_Aplanarity__172->SetBinContent(3,8632);
   VbbHcc_tags_Aplanarity__172->SetBinContent(4,2987);
   VbbHcc_tags_Aplanarity__172->SetBinContent(5,1274);
   VbbHcc_tags_Aplanarity__172->SetBinContent(6,691);
   VbbHcc_tags_Aplanarity__172->SetBinContent(7,340);
   VbbHcc_tags_Aplanarity__172->SetBinContent(8,199);
   VbbHcc_tags_Aplanarity__172->SetBinContent(9,108);
   VbbHcc_tags_Aplanarity__172->SetBinContent(10,72);
   VbbHcc_tags_Aplanarity__172->SetBinContent(11,57);
   VbbHcc_tags_Aplanarity__172->SetBinContent(12,27);
   VbbHcc_tags_Aplanarity__172->SetBinContent(13,23);
   VbbHcc_tags_Aplanarity__172->SetBinContent(14,16);
   VbbHcc_tags_Aplanarity__172->SetBinContent(15,8);
   VbbHcc_tags_Aplanarity__172->SetBinContent(16,8);
   VbbHcc_tags_Aplanarity__172->SetBinContent(17,6);
   VbbHcc_tags_Aplanarity__172->SetBinContent(20,2);
   VbbHcc_tags_Aplanarity__172->SetEntries(313694);

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
   232543.2,
   25513.46,
   9529.717,
   4002.305,
   1608.458,
   456.0157,
   177.1268,
   70.44941,
   112.4308,
   58.65404,
   16.3323,
   5.34041,
   2.9232,
   1.695381,
   35.58778,
   0.9380184,
   0.4729526,
   0.5545541,
   0.1540888,
   0.2525868,
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
   7476.089,
   2146.33,
   1406.635,
   1118.088,
   602.134,
   105.0826,
   61.36388,
   20.19662,
   58.81925,
   38.41382,
   10.36153,
   0.738162,
   0.5019609,
   0.4090012,
   34.15475,
   0.2851135,
   0.2281309,
   0.2284841,
   0.1090605,
   0.1469915,
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
   Graph_Graph_from_VbbHcc_tags_Aplanarity1125->SetMaximum(264021.2);
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
   data_mc_ratio__173->SetBinContent(1,1.140588);
   data_mc_ratio__173->SetBinContent(2,1.331023);
   data_mc_ratio__173->SetBinContent(3,0.9057982);
   data_mc_ratio__173->SetBinContent(4,0.74632);
   data_mc_ratio__173->SetBinContent(5,0.7920631);
   data_mc_ratio__173->SetBinContent(6,1.515299);
   data_mc_ratio__173->SetBinContent(7,1.919529);
   data_mc_ratio__173->SetBinContent(8,2.824722);
   data_mc_ratio__173->SetBinContent(9,0.9605906);
   data_mc_ratio__173->SetBinContent(10,1.227537);
   data_mc_ratio__173->SetBinContent(11,3.490016);
   data_mc_ratio__173->SetBinContent(12,5.055792);
   data_mc_ratio__173->SetBinContent(13,7.868089);
   data_mc_ratio__173->SetBinContent(14,9.437404);
   data_mc_ratio__173->SetBinContent(15,0.2247963);
   data_mc_ratio__173->SetBinContent(16,8.528618);
   data_mc_ratio__173->SetBinContent(17,12.68626);
   data_mc_ratio__173->SetBinContent(20,7.918069);
   data_mc_ratio__173->SetBinError(1,0.002214688);
   data_mc_ratio__173->SetBinError(2,0.007222842);
   data_mc_ratio__173->SetBinError(3,0.009749352);
   data_mc_ratio__173->SetBinError(4,0.0136555);
   data_mc_ratio__173->SetBinError(5,0.02219091);
   data_mc_ratio__173->SetBinError(6,0.05764468);
   data_mc_ratio__173->SetBinError(7,0.1041011);
   data_mc_ratio__173->SetBinError(8,0.2002392);
   data_mc_ratio__173->SetBinError(9,0.09243288);
   data_mc_ratio__173->SetBinError(10,0.1446666);
   data_mc_ratio__173->SetBinError(11,0.4622639);
   data_mc_ratio__173->SetBinError(12,0.9729876);
   data_mc_ratio__173->SetBinError(13,1.64061);
   data_mc_ratio__173->SetBinError(14,2.359351);
   data_mc_ratio__173->SetBinError(15,0.07947748);
   data_mc_ratio__173->SetBinError(16,3.015322);
   data_mc_ratio__173->SetBinError(17,5.179144);
   data_mc_ratio__173->SetBinError(20,5.59892);
   data_mc_ratio__173->SetMinimum(0.4);
   data_mc_ratio__173->SetMaximum(1.6);
   data_mc_ratio__173->SetEntries(29.96949);
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
   0.03214925,
   0.08412542,
   0.1476051,
   0.2793611,
   0.3743549,
   0.2304365,
   0.3464405,
   0.2866827,
   0.5231595,
   0.654922,
   0.6344193,
   0.138222,
   0.1717162,
   0.2412444,
   0.9597326,
   0.303953,
   0.4823547,
   0.412014,
   0.7077768,
   0.5819445,
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
   Graph_Graph_from_mc_statistical_error1126->SetMinimum(0.03624069);
   Graph_Graph_from_mc_statistical_error1126->SetMaximum(2.151679);
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
