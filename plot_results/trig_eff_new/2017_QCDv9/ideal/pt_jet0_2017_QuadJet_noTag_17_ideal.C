#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ideal/pt_jet0_2017_QuadJet_noTag_17_ideal
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ideal", "pt_jet0_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->Range(-109.1764,-0.003713528,585.8166,0.02723254);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet0__112 = new TH1D("_QuadJet_noTag_ideal_pt_jet0__112","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(9,0.003350084);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(10,0.004789272);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(11,0.00397878);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(12,0.005441354);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(13,0.005602241);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(14,0.005338078);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(15,0.006926952);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(16,0.002031144);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(17,0.007656968);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(18,0.004922067);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(19,0.004757374);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(20,0.006396588);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(21,0.01404853);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(22,0.004070556);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(23,0.004702194);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(24,0.006482982);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(25,0.007751938);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(26,0.00660793);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(27,0.005154639);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(28,0.01680672);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(29,0.002724796);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(30,0.004255319);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(31,0.0078125);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(32,0.003984064);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(33,0.01244813);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(34,0.005494505);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(36,0.006896552);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(38,0.0173913);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(39,0.008130081);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(41,0.01123596);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(42,0.02298851);
   _QuadJet_noTag_ideal_pt_jet0__112->SetBinContent(51,0.001992032);
   _QuadJet_noTag_ideal_pt_jet0__112->SetEntries(0.2301781);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  271.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  99.18");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet0__112->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet0__112);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet0__112->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0__112->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet0__112->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0__112->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__112->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet0_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet0_2017_QuadJet_noTag_17_ideal);
}
