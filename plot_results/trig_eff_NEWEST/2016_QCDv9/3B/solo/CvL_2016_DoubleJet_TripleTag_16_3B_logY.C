#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_3B/CvL_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_3B = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_3B", "CvL_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_3B->Range(-0.2,2.632404,1.133333,4.336098);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_CvL__101 = new TH1D("_DoubleJet_TripleTag_3B_CvL__101","",10,0,1);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(1,6582);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(2,2540);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(3,1340);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(4,1340);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(5,1270);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(6,1452);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(7,1717);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(8,2286);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(9,3715);
   _DoubleJet_TripleTag_3B_CvL__101->SetBinContent(10,7730);
   _DoubleJet_TripleTag_3B_CvL__101->SetEntries(29972);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 29972  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5458");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3643");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_CvL__101->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_CvL__101);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_CvL__101->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_CvL__101->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_3B_CvL__101->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_3B_CvL__101->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL__101->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvL__101->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL__101->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_CvL__101->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL__101->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL__101->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL__101->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvL__101->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL__101->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_3B->Modified();
   CvL_2016_DoubleJet_TripleTag_16_3B->cd();
   CvL_2016_DoubleJet_TripleTag_16_3B->SetSelected(CvL_2016_DoubleJet_TripleTag_16_3B);
}
