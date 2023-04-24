#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16/BvL_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16 = new TCanvas("BvL_2016_QuadJet_TripleTag_16", "BvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16->Range(-0.2,2.58989,1.133333,4.779846);
   BvL_2016_QuadJet_TripleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16->SetLogy();
   BvL_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__362 = new TH1D("_QuadJet_TripleTag_tagged_BvL__362","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(1,19200);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(2,3612);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(3,1996);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(4,2048);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(5,1642);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(6,1520);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(7,1288);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(8,1391);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(9,1901);
   _QuadJet_TripleTag_tagged_BvL__362->SetBinContent(10,11414);
   _QuadJet_TripleTag_tagged_BvL__362->SetEntries(46012);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 46012  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4048");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4024");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL__362->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL__362);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_BvL__362->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL__362->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL__362->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_BvL__362->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__362->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__362->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__362->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_BvL__362->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__362->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__362->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__362->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__362->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__362->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16->Modified();
   BvL_2016_QuadJet_TripleTag_16->cd();
   BvL_2016_QuadJet_TripleTag_16->SetSelected(BvL_2016_QuadJet_TripleTag_16);
}
