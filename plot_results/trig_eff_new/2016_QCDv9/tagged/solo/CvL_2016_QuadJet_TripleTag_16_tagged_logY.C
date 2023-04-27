#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_tagged/CvL_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_tagged = new TCanvas("CvL_2016_QuadJet_TripleTag_16_tagged", "CvL_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_tagged->Range(-0.2,2.797672,1.133333,4.484714);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetLogy();
   CvL_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__194 = new TH1D("_QuadJet_TripleTag_tagged_CvL__194","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(1,6421);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(2,10926);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(3,3493);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(4,2358);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(5,1851);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(6,1864);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(7,2137);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(8,2907);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(9,4392);
   _QuadJet_TripleTag_tagged_CvL__194->SetBinContent(10,9403);
   _QuadJet_TripleTag_tagged_CvL__194->SetEntries(45752);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 45752  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4764");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.355");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL__194->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL__194);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvL__194->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL__194->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL__194->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvL__194->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__194->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__194->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__194->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvL__194->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__194->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__194->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__194->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__194->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__194->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_tagged->Modified();
   CvL_2016_QuadJet_TripleTag_16_tagged->cd();
   CvL_2016_QuadJet_TripleTag_16_tagged->SetSelected(CvL_2016_QuadJet_TripleTag_16_tagged);
}
