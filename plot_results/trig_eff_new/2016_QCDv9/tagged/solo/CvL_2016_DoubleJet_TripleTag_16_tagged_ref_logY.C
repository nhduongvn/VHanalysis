#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_tagged_ref/CvL_2016_DoubleJet_TripleTag_16_tagged_ref
//=========  (Tue Apr 25 23:03:08 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_tagged_ref = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_tagged_ref", "CvL_2016_DoubleJet_TripleTag_16_tagged_ref",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->Range(-0.2,3.209397,1.133333,4.948192);
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvL_ref__201 = new TH1D("_DoubleJet_TripleTag_tagged_CvL_ref__201","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(1,13421);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(2,31388);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(3,9486);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(4,6234);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(5,4837);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(6,4834);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(7,5545);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(8,7157);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(9,10839);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetBinContent(10,21671);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetEntries(115412);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 115412 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4635");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3479");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvL_ref__201);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_CvL_ref__201->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL_ref__201->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->Modified();
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->cd();
   CvL_2016_DoubleJet_TripleTag_16_tagged_ref->SetSelected(CvL_2016_DoubleJet_TripleTag_16_tagged_ref);
}
