#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ideal/pt_jet0_2017_QuadJet_noTag_17_ideal
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ideal", "pt_jet0_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->Range(-100,-0.5035265,566.6667,1.521438);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet0__113 = new TH1D("_QuadJet_noTag_ideal_pt_jet0__113","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(8,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(9,2);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(10,6);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(11,6);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(12,10);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(13,11);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(14,11);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(15,11);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(16,3);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(17,10);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(18,6);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(19,6);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(20,6);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(21,11);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(22,4);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(23,3);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(24,5);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(25,4);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(26,2);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(27,2);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(28,6);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(29,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(30,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(31,2);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(32,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(33,3);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(34,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(36,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(38,2);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(39,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(41,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(42,2);
   _QuadJet_noTag_ideal_pt_jet0__113->SetBinContent(51,1);
   _QuadJet_noTag_ideal_pt_jet0__113->SetEntries(143);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 143    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  187.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  76.37");
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
   pt_jet0_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet0_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet0_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet0_2017_QuadJet_noTag_17_ideal);
}
