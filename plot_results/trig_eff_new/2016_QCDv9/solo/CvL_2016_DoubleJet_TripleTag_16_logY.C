#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16/CvL_2016_DoubleJet_TripleTag_16
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16 = new TCanvas("CvL_2016_DoubleJet_TripleTag_16", "CvL_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16->Range(-0.2,3.29411,1.133333,5.337498);
   CvL_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvL__176 = new TH1D("_DoubleJet_TripleTag_CvL__176","",10,0,1);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(1,71715);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(2,31689);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(3,11671);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(4,7661);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(5,6302);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(6,6391);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(7,7458);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(8,10243);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(9,16175);
   _DoubleJet_TripleTag_CvL__176->SetBinContent(10,34343);
   _DoubleJet_TripleTag_CvL__176->SetEntries(203648);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 203648 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.393");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3632");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_CvL__176->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_CvL__176);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_CvL__176->SetLineColor(ci);
   _DoubleJet_TripleTag_CvL__176->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_CvL__176->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_CvL__176->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL__176->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvL__176->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL__176->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_CvL__176->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL__176->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL__176->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL__176->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvL__176->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL__176->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16->Modified();
   CvL_2016_DoubleJet_TripleTag_16->cd();
   CvL_2016_DoubleJet_TripleTag_16->SetSelected(CvL_2016_DoubleJet_TripleTag_16);
}
