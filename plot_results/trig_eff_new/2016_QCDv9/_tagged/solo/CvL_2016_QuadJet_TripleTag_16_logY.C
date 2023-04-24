#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16/CvL_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16 = new TCanvas("CvL_2016_QuadJet_TripleTag_16", "CvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16->Range(-0.2,2.802069,1.133333,4.487176);
   CvL_2016_QuadJet_TripleTag_16->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16->SetLogy();
   CvL_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__386 = new TH1D("_QuadJet_TripleTag_tagged_CvL__386","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(1,6457);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(2,10993);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(3,3503);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(4,2365);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(5,1869);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(6,1874);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(7,2150);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(8,2934);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(9,4420);
   _QuadJet_TripleTag_tagged_CvL__386->SetBinContent(10,9447);
   _QuadJet_TripleTag_tagged_CvL__386->SetEntries(46012);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 46012  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4765");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3549");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL__386->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL__386);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvL__386->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL__386->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL__386->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvL__386->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__386->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__386->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__386->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvL__386->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__386->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__386->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__386->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__386->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__386->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16->Modified();
   CvL_2016_QuadJet_TripleTag_16->cd();
   CvL_2016_QuadJet_TripleTag_16->SetSelected(CvL_2016_QuadJet_TripleTag_16);
}
