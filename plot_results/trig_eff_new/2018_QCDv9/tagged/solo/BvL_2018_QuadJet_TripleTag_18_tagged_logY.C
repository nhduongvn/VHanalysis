#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_tagged/BvL_2018_QuadJet_TripleTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_tagged = new TCanvas("BvL_2018_QuadJet_TripleTag_18_tagged", "BvL_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_tagged->Range(-0.2,2.622056,1.133333,4.80256);
   BvL_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_tagged->SetLogy();
   BvL_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__92 = new TH1D("_QuadJet_TripleTag_tagged_BvL__92","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(1,20275);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(2,3868);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(3,2278);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(4,2265);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(5,1801);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(6,1631);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(7,1384);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(8,1403);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(9,1944);
   _QuadJet_TripleTag_tagged_BvL__92->SetBinContent(10,13063);
   _QuadJet_TripleTag_tagged_BvL__92->SetEntries(49912);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 49912  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4149");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4059");
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
   BvL_2018_QuadJet_TripleTag_18_tagged->Modified();
   BvL_2018_QuadJet_TripleTag_18_tagged->cd();
   BvL_2018_QuadJet_TripleTag_18_tagged->SetSelected(BvL_2018_QuadJet_TripleTag_18_tagged);
}
