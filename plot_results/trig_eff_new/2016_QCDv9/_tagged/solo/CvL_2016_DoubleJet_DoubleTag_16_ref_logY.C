#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_DoubleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_DoubleTag_16_ref/CvL_2016_DoubleJet_DoubleTag_16_ref
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_DoubleTag_16_ref = new TCanvas("CvL_2016_DoubleJet_DoubleTag_16_ref", "CvL_2016_DoubleJet_DoubleTag_16_ref",0,0,600,600);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_DoubleTag_16_ref->Range(-0.2,3.209397,1.133333,4.948192);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFillColor(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetLogy();
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvL_ref__396 = new TH1D("_DoubleJet_DoubleTag_tagged_CvL_ref__396","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(1,13421);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(2,31388);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(3,9486);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(4,6234);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(5,4837);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(6,4834);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(7,5545);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(8,7157);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(9,10839);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetBinContent(10,21671);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetEntries(115412);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 115412 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4635");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3479");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvL_ref__396);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvL_ref__396->Draw("HIST");
   CvL_2016_DoubleJet_DoubleTag_16_ref->Modified();
   CvL_2016_DoubleJet_DoubleTag_16_ref->cd();
   CvL_2016_DoubleJet_DoubleTag_16_ref->SetSelected(CvL_2016_DoubleJet_DoubleTag_16_ref);
}
