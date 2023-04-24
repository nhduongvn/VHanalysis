#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18/CvB_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18 = new TCanvas("CvB_2018_QuadJet_TripleTag_18", "CvB_2018_QuadJet_TripleTag_18",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18->Range(-0.2,2.762242,1.133333,4.594506);
   CvB_2018_QuadJet_TripleTag_18->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18->SetLogy();
   CvB_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   CvB_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__104 = new TH1D("_QuadJet_TripleTag_tagged_CvB__104","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(1,13606);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(2,2141);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(3,1764);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(4,2263);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(5,2933);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(6,3304);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(7,4513);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(8,6043);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(9,8622);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(10,4767);
   _QuadJet_TripleTag_tagged_CvB__104->SetEntries(49956);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 49956  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4845");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3486");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB__104->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB__104);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvB__104->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__104->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvB__104->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__104->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__104->Draw("HIST");
   CvB_2018_QuadJet_TripleTag_18->Modified();
   CvB_2018_QuadJet_TripleTag_18->cd();
   CvB_2018_QuadJet_TripleTag_18->SetSelected(CvB_2018_QuadJet_TripleTag_18);
}
