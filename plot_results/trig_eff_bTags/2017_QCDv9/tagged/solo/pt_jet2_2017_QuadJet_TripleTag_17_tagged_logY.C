#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_tagged/pt_jet2_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_tagged", "pt_jet2_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->Range(-100,-0.6304655,566.6667,2.663889);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__68 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__68","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(6,31);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(7,86);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(8,97);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(9,114);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(10,86);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(11,63);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(12,53);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(13,41);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(14,32);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(15,17);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(16,14);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(17,10);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(18,10);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(19,6);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(20,9);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(21,7);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(22,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(23,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(25,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(26,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(27,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(28,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(29,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(30,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(39,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetEntries(691);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 691    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  102.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  41.34");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__68);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_tagged);
}
