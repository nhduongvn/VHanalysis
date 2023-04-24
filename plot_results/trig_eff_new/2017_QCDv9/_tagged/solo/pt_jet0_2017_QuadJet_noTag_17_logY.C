#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17/pt_jet0_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17 = new TCanvas("pt_jet0_2017_QuadJet_noTag_17", "pt_jet0_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17->Range(-100,-0.5035265,566.6667,1.521438);
   pt_jet0_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__233 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__233","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(9,2);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(10,5);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(11,6);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(12,10);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(13,7);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(14,9);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(15,11);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(16,4);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(17,10);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(18,6);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(19,4);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(20,5);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(21,10);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(22,4);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(23,3);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(24,4);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(25,3);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(26,2);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(27,2);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(28,6);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(29,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(30,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(31,2);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(32,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(33,3);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(34,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(36,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(38,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(39,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(41,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(42,2);
   _QuadJet_noTag_tagged_pt_jet0__233->SetBinContent(51,1);
   _QuadJet_noTag_tagged_pt_jet0__233->SetEntries(129);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 129    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  189.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  76.26");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0__233->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0__233);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet0__233->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0__233->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0__233->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet0__233->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__233->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__233->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__233->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet0__233->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__233->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__233->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__233->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__233->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__233->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17->Modified();
   pt_jet0_2017_QuadJet_noTag_17->cd();
   pt_jet0_2017_QuadJet_noTag_17->SetSelected(pt_jet0_2017_QuadJet_noTag_17);
}
