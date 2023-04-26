#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17_tagged/pt_jet2_2017_QuadJet_noTag_17_tagged
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17_tagged = new TCanvas("pt_jet2_2017_QuadJet_noTag_17_tagged", "pt_jet2_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17_tagged->Range(-100,-0.5411552,566.6667,1.860097);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetLogy();
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet2__71 = new TH1D("_QuadJet_noTag_tagged_pt_jet2__71","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(5,1);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(6,11);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(7,19);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(8,22);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(9,18);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(10,19);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(11,12);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(12,7);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(13,9);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(14,5);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(15,3);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(16,3);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(17,3);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(18,2);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(19,4);
   _QuadJet_noTag_tagged_pt_jet2__71->SetBinContent(21,1);
   _QuadJet_noTag_tagged_pt_jet2__71->SetEntries(139);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 139    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  96.65");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   33.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet2__71->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet2__71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet2__71->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet2__71->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet2__71->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet2__71->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__71->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__71->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__71->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet2__71->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__71->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__71->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__71->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__71->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__71->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17_tagged->Modified();
   pt_jet2_2017_QuadJet_noTag_17_tagged->cd();
   pt_jet2_2017_QuadJet_noTag_17_tagged->SetSelected(pt_jet2_2017_QuadJet_noTag_17_tagged);
}
