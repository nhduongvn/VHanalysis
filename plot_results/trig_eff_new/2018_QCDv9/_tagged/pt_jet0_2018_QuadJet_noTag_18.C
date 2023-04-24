#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18/pt_jet0_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18 = new TCanvas("pt_jet0_2018_QuadJet_noTag_18", "pt_jet0_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18->Range(-109.1764,-0.003671329,585.8166,0.02692308);
   pt_jet0_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18->SetFillStyle(4000);
   pt_jet0_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   pt_jet0_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   pt_jet0_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   pt_jet0_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet0_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet0_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__58 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__58","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(9,0.001017984);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(10,0.001137656);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(11,0.002449646);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(12,0.001671309);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(13,0.005413105);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(14,0.005560704);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(15,0.005645965);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(16,0.006395786);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(17,0.008084074);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(18,0.005767524);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(19,0.003448276);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(20,0.005008347);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(21,0.001908397);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(22,0.005563282);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(23,0.008326395);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(24,0.009157509);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(25,0.005494505);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(26,0.008526188);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(27,0.005095541);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(28,0.008862629);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(29,0.01658375);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(30,0.008896797);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(31,0.001841621);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(32,0.002457002);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(33,0.01041667);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(34,0.01690141);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(35,0.003289474);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(36,0.006329114);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(37,0.008849558);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(38,0.008333333);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(39,0.004329004);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(40,0.009302326);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(41,0.01694915);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(42,0.02272727);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(44,0.007194245);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(46,0.01834862);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(48,0.009259259);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(49,0.01123596);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(51,0.01044084);
   _QuadJet_noTag_tagged_pt_jet0__58->SetEntries(0.2877794);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  316.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  106.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0__58->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0__58);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet0__58->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18->Modified();
   pt_jet0_2018_QuadJet_noTag_18->cd();
   pt_jet0_2018_QuadJet_noTag_18->SetSelected(pt_jet0_2018_QuadJet_noTag_18);
}
