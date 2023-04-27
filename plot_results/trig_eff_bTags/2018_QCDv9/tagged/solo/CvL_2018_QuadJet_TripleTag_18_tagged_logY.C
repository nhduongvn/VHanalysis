#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_tagged/CvL_2018_QuadJet_TripleTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_tagged = new TCanvas("CvL_2018_QuadJet_TripleTag_18_tagged", "CvL_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_tagged->Range(-0.2,1.827642,1.133333,3.700628);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetLogy();
   CvL_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__98 = new TH1D("_QuadJet_TripleTag_tagged_CvL__98","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(1,739);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(2,338);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(3,207);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(4,221);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(5,259);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(6,287);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(7,339);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(8,471);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(9,766);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(10,1721);
   _QuadJet_TripleTag_tagged_CvL__98->SetEntries(5348);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5348   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6317");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3393");
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
