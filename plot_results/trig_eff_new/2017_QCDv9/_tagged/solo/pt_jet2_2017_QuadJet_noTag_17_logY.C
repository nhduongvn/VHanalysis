#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17/pt_jet2_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17 = new TCanvas("pt_jet2_2017_QuadJet_noTag_17", "pt_jet2_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17->Range(-100,-0.5359811,566.6667,1.81353);
   pt_jet2_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17->SetLogy();
   pt_jet2_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet2__281 = new TH1D("_QuadJet_noTag_tagged_pt_jet2__281","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(5,1);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(6,11);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(7,20);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(8,17);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(9,15);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(10,19);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(11,10);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(12,7);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(13,9);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(14,5);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(15,3);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(16,3);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(17,3);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(18,1);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(19,4);
   _QuadJet_noTag_tagged_pt_jet2__281->SetBinContent(21,1);
   _QuadJet_noTag_tagged_pt_jet2__281->SetEntries(129);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 129    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  96.83");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  33.96");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet2__281->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet2__281);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet2__281->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet2__281->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet2__281->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet2__281->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__281->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__281->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__281->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet2__281->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__281->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__281->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__281->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__281->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__281->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17->Modified();
   pt_jet2_2017_QuadJet_noTag_17->cd();
   pt_jet2_2017_QuadJet_noTag_17->SetSelected(pt_jet2_2017_QuadJet_noTag_17);
}
