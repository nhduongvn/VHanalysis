#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17_tagged/CvL_2017_QuadJet_TripleTag_17_tagged
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17_tagged = new TCanvas("CvL_2017_QuadJet_TripleTag_17_tagged", "CvL_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17_tagged->Range(-0.2,2.319917,1.133333,4.158652);
   CvL_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   CvL_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   CvL_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__98 = new TH1D("_QuadJet_TripleTag_tagged_CvL__98","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(1,2739);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(2,3953);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(3,1307);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(4,839);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(5,638);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(6,672);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(7,843);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(8,1131);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(9,1906);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(10,4980);
   _QuadJet_TripleTag_tagged_CvL__98->SetEntries(19008);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 19008  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5162");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.368");
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
   CvL_2017_QuadJet_TripleTag_17_tagged->Modified();
   CvL_2017_QuadJet_TripleTag_17_tagged->cd();
   CvL_2017_QuadJet_TripleTag_17_tagged->SetSelected(CvL_2017_QuadJet_TripleTag_17_tagged);
}
