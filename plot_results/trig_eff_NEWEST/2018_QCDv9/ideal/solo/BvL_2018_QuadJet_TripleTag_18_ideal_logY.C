#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_ideal/BvL_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:41:46 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_ideal = new TCanvas("BvL_2018_QuadJet_TripleTag_18_ideal", "BvL_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_ideal->Range(-0.2,1.347055,1.133333,3.897105);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   BvL_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__20 = new TH1D("_QuadJet_TripleTag_ideal_BvL__20","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(1,1093);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(2,80);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(3,149);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(4,366);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(5,348);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(6,275);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(7,295);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(8,306);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(9,353);
   _QuadJet_TripleTag_ideal_BvL__20->SetBinContent(10,2315);
   _QuadJet_TripleTag_ideal_BvL__20->SetEntries(5580);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5580   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6281");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3783");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL__20->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__20->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__20->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL__20->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__20->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__20->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__20->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL__20->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__20->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__20->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__20->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__20->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__20->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18_ideal->Modified();
   BvL_2018_QuadJet_TripleTag_18_ideal->cd();
   BvL_2018_QuadJet_TripleTag_18_ideal->SetSelected(BvL_2018_QuadJet_TripleTag_18_ideal);
}
