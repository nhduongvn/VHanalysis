#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16/CvL_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16 = new TCanvas("CvL_2016_DoubleJet_TripleTag_16", "CvL_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16->Range(-0.2,2.688399,1.133333,4.377737);
   CvL_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvL__392 = new TH1D("_DoubleJet_TripleTag_tagged_CvL__392","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(1,5110);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(2,8536);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(3,2717);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(4,1822);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(5,1440);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(6,1459);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(7,1640);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(8,2261);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(9,3374);
   _DoubleJet_TripleTag_tagged_CvL__392->SetBinContent(10,7141);
   _DoubleJet_TripleTag_tagged_CvL__392->SetEntries(35500);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 35500  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4719");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3543");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvL__392->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvL__392);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_CvL__392->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvL__392->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_tagged_CvL__392->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_tagged_CvL__392->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__392->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvL__392->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__392->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_CvL__392->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__392->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__392->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvL__392->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvL__392->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvL__392->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16->Modified();
   CvL_2016_DoubleJet_TripleTag_16->cd();
   CvL_2016_DoubleJet_TripleTag_16->SetSelected(CvL_2016_DoubleJet_TripleTag_16);
}
