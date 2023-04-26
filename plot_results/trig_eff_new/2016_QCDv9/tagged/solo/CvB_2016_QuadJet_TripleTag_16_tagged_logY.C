#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_tagged/CvB_2016_QuadJet_TripleTag_16_tagged
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_tagged = new TCanvas("CvB_2016_QuadJet_TripleTag_16_tagged", "CvB_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_tagged->Range(-0.2,2.769474,1.133333,4.531884);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB__206 = new TH1D("_QuadJet_TripleTag_tagged_CvB__206","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(1,11970);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(2,2169);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(3,1765);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(4,2201);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(5,2599);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(6,3067);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(7,4121);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(8,5666);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(9,7744);
   _QuadJet_TripleTag_tagged_CvB__206->SetBinContent(10,4450);
   _QuadJet_TripleTag_tagged_CvB__206->SetEntries(45752);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 45752  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4879");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.346");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB__206->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB__206);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvB__206->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB__206->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB__206->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvB__206->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__206->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__206->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__206->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvB__206->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__206->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__206->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB__206->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB__206->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB__206->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_tagged->Modified();
   CvB_2016_QuadJet_TripleTag_16_tagged->cd();
   CvB_2016_QuadJet_TripleTag_16_tagged->SetSelected(CvB_2016_QuadJet_TripleTag_16_tagged);
}
