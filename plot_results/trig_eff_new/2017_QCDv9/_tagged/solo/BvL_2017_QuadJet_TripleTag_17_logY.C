#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17/BvL_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17 = new TCanvas("BvL_2017_QuadJet_TripleTag_17", "BvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17->Range(-0.2,2.13236,1.133333,4.330582);
   BvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17->SetLogy();
   BvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_BvL__374 = new TH1D("_QuadJet_TripleTag_tagged_BvL__374","",10,0,1);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(1,6811);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(2,1353);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(3,748);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(4,752);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(5,590);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(6,543);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(7,450);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(8,459);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(9,648);
   _QuadJet_TripleTag_tagged_BvL__374->SetBinContent(10,4722);
   _QuadJet_TripleTag_tagged_BvL__374->SetEntries(17076);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17076  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4251");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4103");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_BvL__374->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_BvL__374);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_BvL__374->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_BvL__374->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_tagged_BvL__374->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_BvL__374->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__374->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__374->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__374->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_BvL__374->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__374->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__374->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_BvL__374->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_BvL__374->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_BvL__374->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17->Modified();
   BvL_2017_QuadJet_TripleTag_17->cd();
   BvL_2017_QuadJet_TripleTag_17->SetSelected(BvL_2017_QuadJet_TripleTag_17);
}
