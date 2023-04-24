#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18/BvL_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18 = new TCanvas("BvL_2018_QuadJet_TripleTag_18", "BvL_2018_QuadJet_TripleTag_18",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18->Range(-0.2,2.620969,1.133333,4.802919);
   BvL_2018_QuadJet_TripleTag_18->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18->SetLogy();
   BvL_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__92 = new TH1D("_QuadJet_TripleTag_tagged_BvL__92","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(1,20285);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(2,3880);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(3,2281);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(4,2264);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(5,1802);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(6,1628);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(7,1381);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(8,1406);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(9,1945);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(10,13084);
   _QuadJet_TripleTag_tagged_BvL__92->SetEntries(49956);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 49956  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.415");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.406");
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
   BvL_2018_QuadJet_TripleTag_18->Modified();
   BvL_2018_QuadJet_TripleTag_18->cd();
   BvL_2018_QuadJet_TripleTag_18->SetSelected(BvL_2018_QuadJet_TripleTag_18);
}
