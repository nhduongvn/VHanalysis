#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_tagged/CvL_2018_QuadJet_TripleTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_tagged = new TCanvas("CvL_2018_QuadJet_TripleTag_18_tagged", "CvL_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_tagged->Range(-0.2,2.812913,1.133333,4.513277);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__98 = new TH1D("_QuadJet_TripleTag_tagged_CvL__98","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(1,7604);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(2,10895);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(3,3602);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(4,2278);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(5,1969);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(6,1923);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(7,2275);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(8,3031);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(9,4702);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(10,11633);
   _QuadJet_TripleTag_tagged_CvL__98->SetEntries(49912);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 49912  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4924");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3628");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL__98->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL__98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvL__98->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL__98->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL__98->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvL__98->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__98->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__98->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__98->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvL__98->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__98->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__98->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__98->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__98->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__98->Draw("HIST");
   CvL_2018_QuadJet_TripleTag_18_tagged->Modified();
   CvL_2018_QuadJet_TripleTag_18_tagged->cd();
   CvL_2018_QuadJet_TripleTag_18_tagged->SetSelected(CvL_2018_QuadJet_TripleTag_18_tagged);
}
