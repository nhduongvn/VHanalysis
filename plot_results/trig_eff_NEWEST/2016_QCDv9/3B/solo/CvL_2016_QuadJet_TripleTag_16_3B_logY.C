#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_3B/CvL_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_3B = new TCanvas("CvL_2016_QuadJet_TripleTag_16_3B", "CvL_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_3B->Range(-0.2,2.787725,1.133333,4.498503);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_3B->SetLogy();
   CvL_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvL__98 = new TH1D("_QuadJet_TripleTag_3B_CvL__98","",10,0,1);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(1,9301);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(2,3433);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(3,1831);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(4,1820);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(5,1819);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(6,2023);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(7,2524);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(8,3277);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(9,5271);
   _QuadJet_TripleTag_3B_CvL__98->SetBinContent(10,11217);
   _QuadJet_TripleTag_3B_CvL__98->SetEntries(42516);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 42516  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5516");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3645");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvL__98->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvL__98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_CvL__98->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvL__98->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_3B_CvL__98->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_3B_CvL__98->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__98->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL__98->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__98->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_CvL__98->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__98->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__98->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__98->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL__98->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__98->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_3B->Modified();
   CvL_2016_QuadJet_TripleTag_16_3B->cd();
   CvL_2016_QuadJet_TripleTag_16_3B->SetSelected(CvL_2016_QuadJet_TripleTag_16_3B);
}
