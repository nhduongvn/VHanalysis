#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_3B/BvL_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_3B = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_3B", "BvL_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_3B->Range(-0.2,2.316184,1.133333,4.494609);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_BvL__95 = new TH1D("_DoubleJet_TripleTag_3B_BvL__95","",10,0,1);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(1,9071);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(2,684);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(3,810);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(4,1982);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(5,1520);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(6,1469);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(7,1333);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(8,1436);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(9,1685);
   _DoubleJet_TripleTag_3B_BvL__95->SetBinContent(10,9982);
   _DoubleJet_TripleTag_3B_BvL__95->SetEntries(29972);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 29972  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5285");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4044");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_BvL__95->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_BvL__95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_BvL__95->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_BvL__95->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_3B_BvL__95->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_3B_BvL__95->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL__95->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_BvL__95->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL__95->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_BvL__95->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL__95->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL__95->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL__95->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_BvL__95->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL__95->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_3B->Modified();
   BvL_2016_DoubleJet_TripleTag_16_3B->cd();
   BvL_2016_DoubleJet_TripleTag_16_3B->SetSelected(BvL_2016_DoubleJet_TripleTag_16_3B);
}
