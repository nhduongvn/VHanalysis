#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_tagged/CvL_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_tagged", "CvL_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_tagged->Range(-0.2,2.685383,1.133333,4.374611);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvL__200 = new TH1D("_DoubleJet_TripleTag_tagged_CvL__200","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(1,5082);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(2,8475);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(3,2708);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(4,1815);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(5,1430);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(6,1454);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(7,1631);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(8,2243);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(9,3345);
   _DoubleJet_TripleTag_tagged_CvL__200->SetBinContent(10,7101);
   _DoubleJet_TripleTag_tagged_CvL__200->SetEntries(35284);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 35284  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4718");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3543");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvL__200->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvL__200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_CvL__200->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvL__200->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_tagged_CvL__200->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_tagged_CvL__200->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__200->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvL__200->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__200->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_CvL__200->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__200->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__200->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__200->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvL__200->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__200->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_tagged->Modified();
   CvL_2016_DoubleJet_TripleTag_16_tagged->cd();
   CvL_2016_DoubleJet_TripleTag_16_tagged->SetSelected(CvL_2016_DoubleJet_TripleTag_16_tagged);
}
