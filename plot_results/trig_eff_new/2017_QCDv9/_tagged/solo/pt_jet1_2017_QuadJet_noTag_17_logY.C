#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17/pt_jet1_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17 = new TCanvas("pt_jet1_2017_QuadJet_noTag_17", "pt_jet1_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17->Range(-100,-0.5302614,566.6667,1.762053);
   pt_jet1_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet1__257 = new TH1D("_QuadJet_noTag_tagged_pt_jet1__257","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(6,2);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(7,2);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(8,5);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(9,11);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(10,15);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(11,18);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(12,9);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(13,15);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(14,7);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(15,4);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(16,4);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(17,5);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(18,4);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(19,5);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(20,6);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(21,5);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(22,1);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(23,4);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(24,2);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(25,1);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(26,1);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(28,1);
   _QuadJet_noTag_tagged_pt_jet1__257->SetBinContent(29,2);
   _QuadJet_noTag_tagged_pt_jet1__257->SetEntries(129);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 129    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  135.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  50.81");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet1__257->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet1__257);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet1__257->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet1__257->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet1__257->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet1__257->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__257->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__257->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__257->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet1__257->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__257->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__257->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__257->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__257->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__257->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17->Modified();
   pt_jet1_2017_QuadJet_noTag_17->cd();
   pt_jet1_2017_QuadJet_noTag_17->SetSelected(pt_jet1_2017_QuadJet_noTag_17);
}
