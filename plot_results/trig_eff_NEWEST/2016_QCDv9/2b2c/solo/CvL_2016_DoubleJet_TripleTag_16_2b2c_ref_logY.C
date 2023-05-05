#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_2b2c_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_2b2c_ref/CvL_2016_DoubleJet_TripleTag_16_2b2c_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_2b2c_ref = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_2b2c_ref", "CvL_2016_DoubleJet_TripleTag_16_2b2c_ref",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->Range(-0.2,3.058581,1.133333,4.793832);
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_CvL_ref__156 = new TH1D("_DoubleJet_TripleTag_2b2c_CvL_ref__156","",10,0,1);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(1,11258);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(2,22017);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(3,6739);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(4,4419);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(5,3420);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(6,3413);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(7,3860);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(8,5027);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(9,7568);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetBinContent(10,15043);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetEntries(82764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 82764  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4531");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3485");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_CvL_ref__156);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvL_ref__156->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->Modified();
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->cd();
   CvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetSelected(CvL_2016_DoubleJet_TripleTag_16_2b2c_ref);
}
