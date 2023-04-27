#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_TripleTag_17_tagged/CvB_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:18:24 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_TripleTag_17_tagged = new TCanvas("CvB_2017_QuadJet_TripleTag_17_tagged", "CvB_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   CvB_2017_QuadJet_TripleTag_17_tagged->Range(-0.2,2.243616,1.133333,4.192883);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   CvB_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   CvB_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__104 = new TH1D("_QuadJet_TripleTag_tagged_CvB__104","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(1,5253);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(2,780);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(3,549);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(4,816);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(5,1019);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(6,1180);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(7,1652);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(8,2115);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(9,3136);
   _QuadJet_TripleTag_tagged_CvB__104->SetBinContent(10,1840);
   _QuadJet_TripleTag_tagged_CvB__104->SetEntries(18340);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 18340  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4792");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3535");
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
   CvB_2017_QuadJet_TripleTag_17_tagged->Modified();
   CvB_2017_QuadJet_TripleTag_17_tagged->cd();
   CvB_2017_QuadJet_TripleTag_17_tagged->SetSelected(CvB_2017_QuadJet_TripleTag_17_tagged);
}
