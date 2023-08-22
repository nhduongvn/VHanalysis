void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(0,0,1,1);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetFillStyle(4000);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetFrameFillStyle(1000);
   Aplanarity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-6021.937,1.052419,6015925);
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
   st->SetMaximum(5155933);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",50,0,1);
   st_stack_157->SetMinimum(0.01);
   st_stack_157->SetMaximum(5413730);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetRange(1,50);
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetLabelSize(0.035);
   st_stack_157->GetXaxis()->SetTitleSize(0.035);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Events/0.02");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetLabelSize(0.05);
   st_stack_157->GetYaxis()->SetTitleSize(0.057);
   st_stack_157->GetYaxis()->SetTitleOffset(1.2);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetLabelSize(0.035);
   st_stack_157->GetZaxis()->SetTitleSize(0.035);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2037685);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,325837.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,73253.15);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,16439.86);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3387.276);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,988.6275);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,115.2781);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,94.8332);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,39.72224);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,13.66969);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,11.33446);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,3.716741);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,18.38211);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,1.576021);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,32871.8);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,15440.34);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,4593.294);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2155.528);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,770.082);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,387.5699);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,41.24528);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,38.67387);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,23.26362);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,13.66969);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,11.33446);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,3.716741);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,14.85175);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1.576021);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(121336);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,13880.33);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1964.91);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,437.8828);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,122.721);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,40.55104);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,15.81258);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,7.473472);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,3.636912);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.389928);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.9306031);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.463744);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3933989);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.04378787);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.2689952);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.05669421);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.01849631);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,41.55094);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,15.48232);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,7.279339);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.898168);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.182832);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.374027);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.9423853);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.7325711);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.4451693);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.296847);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.2392351);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2007396);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.06685903);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.23827);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.04251877);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.01849631);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(335691);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,253278.1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,33840.8);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,7089.922);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1991.733);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,667.7165);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,265.276);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,116.6887);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,53.88623);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,29.0285);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,13.35435);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,8.74388);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,4.745424);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,3.558928);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.571171);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.8501248);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.4361466);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.3219679);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2570779);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.03983786);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.03436524);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,113.9997);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,41.06192);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,18.61039);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,9.763458);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.601947);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.512514);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.311427);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.563041);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.150206);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7615636);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.6298069);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4596697);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.4032502);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2614551);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1808602);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1501458);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1183801);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1058686);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.03983786);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.03436524);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(6260583);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,9807.522);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1235.267);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,295.9887);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,61.45922);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,20.66288);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,3.809304);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,4.967498);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,2.262807);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.371109);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.2847552);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.1084296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.2371321);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,67.5065);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,27.29499);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,13.84614);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,5.893071);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,4.239732);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.728772);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,2.33936);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,1.778103);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.2670284);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.2307975);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.07728678);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.2371321);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(90522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,5184.731);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,595.4829);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,139.4333);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,25.25766);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,3.733465);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,2.303926);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,6.119159);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.4021994);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.3670403);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.2752171);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.02210899);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,80.30574);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,33.09818);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,16.33687);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,6.422071);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.9853578);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,1.042758);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,5.527998);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.304684);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.3359955);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.2503922);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.02210899);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(66273);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,52.69759);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,4.324742);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,1.269647);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.3530407);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(5,0.1103859);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(7,0.08262463);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,2.511068);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.7010107);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.3854114);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.2039571);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(5,0.1103859);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(7,0.08262463);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(510);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,83.1179);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,9.305097);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,1.922098);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.2942369);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(5,0.3302794);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(6,0.1627677);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(7,0.08998196);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,2.691826);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,0.8856802);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.4055613);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.1534527);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(5,0.1663747);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(6,0.1152427);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(7,0.08998196);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(1121);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,104.6613);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,14.18977);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,2.202852);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.5116606);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(6,0.1997829);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,4.630767);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,1.694708);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.6497414);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.3633252);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(6,0.1997829);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(609);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,65.71478);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,6.006532);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.025256);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2495089);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.05683706);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.01966162);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.004715507);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.006325931);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.001903304);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001138712);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.2670633);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.07889634);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.03244671);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.01600505);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.007518955);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.00445331);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.002125324);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.002586649);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001372787);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001138712);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,26.67386);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,2.967375);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.5799245);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1225314);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.04359606);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01086407);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.004177864);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.002334091);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001483263);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0006629237);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0002360098);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.000119442);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.09387418);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.03099859);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01369612);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.006244898);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.003726795);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.001852013);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.00112517);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.0008323871);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0006711174);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0004246696);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0002360098);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.000119442);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.6712605);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.04814878);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.01247328);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.004384682);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(6,0.001869605);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.03799162);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.01021097);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.005105509);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.003107716);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(6,0.001869605);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2636621);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.03377988);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.006592261);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.001265921);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0008126116);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.008552145);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.00304331);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001306852);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0005696068);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0004700888);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__430 = new TH1D("VbbHcc_algo_Aplanarity__430","",50,0,1);
   VbbHcc_algo_Aplanarity__430->SetBinContent(1,712286);
   VbbHcc_algo_Aplanarity__430->SetBinContent(2,89434);
   VbbHcc_algo_Aplanarity__430->SetBinContent(3,19863);
   VbbHcc_algo_Aplanarity__430->SetBinContent(4,5257);
   VbbHcc_algo_Aplanarity__430->SetBinContent(5,1524);
   VbbHcc_algo_Aplanarity__430->SetBinContent(6,548);
   VbbHcc_algo_Aplanarity__430->SetBinContent(7,220);
   VbbHcc_algo_Aplanarity__430->SetBinContent(8,99);
   VbbHcc_algo_Aplanarity__430->SetBinContent(9,56);
   VbbHcc_algo_Aplanarity__430->SetBinContent(10,32);
   VbbHcc_algo_Aplanarity__430->SetBinContent(11,21);
   VbbHcc_algo_Aplanarity__430->SetBinContent(12,8);
   VbbHcc_algo_Aplanarity__430->SetBinContent(13,7);
   VbbHcc_algo_Aplanarity__430->SetBinContent(14,3);
   VbbHcc_algo_Aplanarity__430->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__430->SetBinContent(16,4);
   VbbHcc_algo_Aplanarity__430->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__430->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__430->SetEntries(829416);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__430->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__430->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__430->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__430->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__430->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__430->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__430->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1313[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1313[50] = {
   2320170,
   363510.5,
   81223.4,
   18642.57,
   4120.481,
   1276.224,
   250.7084,
   155.03,
   70.8822,
   28.51641,
   20.67286,
   8.855683,
   22.22196,
   1.840166,
   2.48284,
   0.4361466,
   0.3219679,
   0.2755742,
   0.03983786,
   0,
   0,
   0.03436524,
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1313[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1313[50] = {
   32872.2,
   15440.46,
   4593.388,
   2155.571,
   770.1178,
   387.5936,
   41.75465,
   38.75439,
   23.30025,
   13.69834,
   11.35475,
   3.750434,
   14.85927,
   0.3537392,
   1.586934,
   0.1501458,
   0.1183801,
   0.1074722,
   0.03983786,
   0,
   0,
   0.03436524,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1313,Graph_from_VbbHcc_algo_Aplanarity_fy1313,Graph_from_VbbHcc_algo_Aplanarity_fex1313,Graph_from_VbbHcc_algo_Aplanarity_fey1313);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1313 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1313","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetMaximum(2588346);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1313->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1313);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__431 = new TH1D("data_mc_ratio__431","",50,0,1);
   data_mc_ratio__431->SetBinContent(1,0.3069973);
   data_mc_ratio__431->SetBinContent(2,0.2460287);
   data_mc_ratio__431->SetBinContent(3,0.2445478);
   data_mc_ratio__431->SetBinContent(4,0.2819891);
   data_mc_ratio__431->SetBinContent(5,0.3698597);
   data_mc_ratio__431->SetBinContent(6,0.4293916);
   data_mc_ratio__431->SetBinContent(7,0.8775135);
   data_mc_ratio__431->SetBinContent(8,0.6385861);
   data_mc_ratio__431->SetBinContent(9,0.7900432);
   data_mc_ratio__431->SetBinContent(10,1.122161);
   data_mc_ratio__431->SetBinContent(11,1.015825);
   data_mc_ratio__431->SetBinContent(12,0.9033747);
   data_mc_ratio__431->SetBinContent(13,0.3150037);
   data_mc_ratio__431->SetBinContent(14,1.630288);
   data_mc_ratio__431->SetBinContent(15,0.8055292);
   data_mc_ratio__431->SetBinContent(16,9.171229);
   data_mc_ratio__431->SetBinContent(17,3.1059);
   data_mc_ratio__431->SetBinContent(18,7.257572);
   data_mc_ratio__431->SetBinError(1,0.0003637537);
   data_mc_ratio__431->SetBinError(2,0.0008226865);
   data_mc_ratio__431->SetBinError(3,0.001735167);
   data_mc_ratio__431->SetBinError(4,0.003889227);
   data_mc_ratio__431->SetBinError(5,0.009474243);
   data_mc_ratio__431->SetBinError(6,0.0183427);
   data_mc_ratio__431->SetBinError(7,0.05916195);
   data_mc_ratio__431->SetBinError(8,0.06418031);
   data_mc_ratio__431->SetBinError(9,0.105574);
   data_mc_ratio__431->SetBinError(10,0.1983719);
   data_mc_ratio__431->SetBinError(11,0.2216711);
   data_mc_ratio__431->SetBinError(12,0.3193912);
   data_mc_ratio__431->SetBinError(13,0.1190602);
   data_mc_ratio__431->SetBinError(14,0.9412471);
   data_mc_ratio__431->SetBinError(15,0.5695952);
   data_mc_ratio__431->SetBinError(16,4.585615);
   data_mc_ratio__431->SetBinError(17,3.1059);
   data_mc_ratio__431->SetBinError(18,5.131879);
   data_mc_ratio__431->SetMinimum(0.4);
   data_mc_ratio__431->SetMaximum(1.6);
   data_mc_ratio__431->SetEntries(11.02163);
   data_mc_ratio__431->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__431->SetLineColor(ci);
   data_mc_ratio__431->SetLineWidth(2);
   data_mc_ratio__431->SetMarkerStyle(20);
   data_mc_ratio__431->SetMarkerSize(1.2);
   data_mc_ratio__431->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__431->GetXaxis()->SetRange(1,50);
   data_mc_ratio__431->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__431->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__431->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__431->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__431->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__431->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__431->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__431->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__431->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__431->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__431->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__431->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__431->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__431->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__431->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1314[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1314[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1314[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1314[50] = {
   0.01416801,
   0.04247596,
   0.05655252,
   0.1156263,
   0.1869,
   0.3037033,
   0.1665467,
   0.2499799,
   0.3287179,
   0.4803667,
   0.5492588,
   0.4235059,
   0.6686749,
   0.1922322,
   0.6391609,
   0.3442554,
   0.3676769,
   0.3899938,
   1,
   0,
   0,
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
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1314,Graph_from_mc_statistical_error_fy1314,Graph_from_mc_statistical_error_fex1314,Graph_from_mc_statistical_error_fey1314);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1314 = new TH1F("Graph_Graph_from_mc_statistical_error1314","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1314->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1314->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1314->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1314->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1314->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1314);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
