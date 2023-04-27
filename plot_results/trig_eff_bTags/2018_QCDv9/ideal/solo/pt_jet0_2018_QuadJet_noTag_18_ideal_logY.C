#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ideal/pt_jet0_2018_QuadJet_noTag_18_ideal
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ideal", "pt_jet0_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ideal->Range(-100,-3.748352,566.6667,0.7248713);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet0__113 = new TH1D("_QuadJet_noTag_ideal_pt_jet0__113","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(11,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(18,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(22,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(23,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(25,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(27,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(34,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(46,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  251.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  99.29");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet0__113->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet0__113);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet0__113->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet0__113->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet0__113->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet0__113->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__113->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0__113->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__113->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet0__113->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__113->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__113->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0__113->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0__113->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0__113->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet0_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ideal);
}
