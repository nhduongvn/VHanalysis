#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16/CvB_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16 = new TCanvas("CvB_2016_QuadJet_TripleTag_16", "CvB_2016_QuadJet_TripleTag_16",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16->Range(-0.2,2.773305,1.133333,4.534152);
   CvB_2016_QuadJet_TripleTag_16->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16->SetLogy();
   CvB_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__410 = new TH1D("_QuadJet_TripleTag_tagged_CvB__410","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(1,12037);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(2,2179);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(3,1780);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(4,2215);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(5,2603);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(6,3096);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(7,4139);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(8,5689);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(9,7797);
   _QuadJet_TripleTag_tagged_CvB__410->SetBinContent(10,4477);
   _QuadJet_TripleTag_tagged_CvB__410->SetEntries(46012);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 46012  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4879");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.346");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB__410->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB__410);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvB__410->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB__410->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB__410->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvB__410->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__410->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__410->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__410->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvB__410->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__410->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__410->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__410->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__410->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__410->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16->Modified();
   CvB_2016_QuadJet_TripleTag_16->cd();
   CvB_2016_QuadJet_TripleTag_16->SetSelected(CvB_2016_QuadJet_TripleTag_16);
}
