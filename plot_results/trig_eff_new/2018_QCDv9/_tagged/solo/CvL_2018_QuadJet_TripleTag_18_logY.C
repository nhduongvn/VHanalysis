#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18/CvL_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18 = new TCanvas("CvL_2018_QuadJet_TripleTag_18", "CvL_2018_QuadJet_TripleTag_18",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18->Range(-0.2,2.812302,1.133333,4.514257);
   CvL_2018_QuadJet_TripleTag_18->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18->SetLogy();
   CvL_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   CvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__98 = new TH1D("_QuadJet_TripleTag_tagged_CvL__98","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(1,7614);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(2,10900);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(3,3602);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(4,2278);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(5,1968);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(6,1921);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(7,2272);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(8,3043);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(9,4703);
   _QuadJet_TripleTag_tagged_CvL__98->SetBinContent(10,11655);
   _QuadJet_TripleTag_tagged_CvL__98->SetEntries(49956);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 49956  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4925");
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
   CvL_2018_QuadJet_TripleTag_18->Modified();
   CvL_2018_QuadJet_TripleTag_18->cd();
   CvL_2018_QuadJet_TripleTag_18->SetSelected(CvL_2018_QuadJet_TripleTag_18);
}
