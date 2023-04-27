#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_tagged/BvL_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_tagged = new TCanvas("BvL_2017_QuadJet_TripleTag_17_tagged", "BvL_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_tagged->Range(-0.2,1.005977,1.133333,3.617925);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   BvL_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__92 = new TH1D("_QuadJet_TripleTag_tagged_BvL__92","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(1,488);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(2,37);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(3,62);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(4,220);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(5,157);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(6,131);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(7,129);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(8,160);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(9,180);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(10,1200);
   _QuadJet_TripleTag_tagged_BvL__92->SetEntries(2764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2764   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.647");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3722");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL__92->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL__92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_BvL__92->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL__92->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL__92->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_BvL__92->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__92->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__92->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__92->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_BvL__92->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__92->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__92->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__92->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__92->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__92->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17_tagged->Modified();
   BvL_2017_QuadJet_TripleTag_17_tagged->cd();
   BvL_2017_QuadJet_TripleTag_17_tagged->SetSelected(BvL_2017_QuadJet_TripleTag_17_tagged);
}
