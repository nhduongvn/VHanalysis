#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17/BvL_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17 = new TCanvas("BvL_2017_QuadJet_noTag_17", "BvL_2017_QuadJet_noTag_17",0,0,600,600);
   BvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17->Range(-0.2,0.404251,1.133333,2.893866);
   BvL_2017_QuadJet_noTag_17->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17->SetLogy();
   BvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   BvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_BvL__377 = new TH1D("_QuadJet_noTag_tagged_BvL__377","",10,0,1);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(1,233);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(2,34);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(3,18);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(4,25);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(5,24);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(6,10);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(7,16);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(8,9);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(9,22);
   _QuadJet_noTag_tagged_BvL__377->SetBinContent(10,125);
   _QuadJet_noTag_tagged_BvL__377->SetEntries(516);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 516    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3872");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4043");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_BvL__377->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_BvL__377);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_BvL__377->SetLineColor(ci);
   _QuadJet_noTag_tagged_BvL__377->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_tagged_BvL__377->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_BvL__377->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__377->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__377->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__377->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_BvL__377->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__377->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__377->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__377->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__377->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__377->Draw("HIST");
   BvL_2017_QuadJet_noTag_17->Modified();
   BvL_2017_QuadJet_noTag_17->cd();
   BvL_2017_QuadJet_noTag_17->SetSelected(BvL_2017_QuadJet_noTag_17);
}
