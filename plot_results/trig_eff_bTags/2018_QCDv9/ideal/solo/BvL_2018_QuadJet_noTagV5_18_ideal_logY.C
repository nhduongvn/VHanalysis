#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTagV5_18_ideal_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTagV5_18_ideal/BvL_2018_QuadJet_noTagV5_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTagV5_18_ideal = new TCanvas("BvL_2018_QuadJet_noTagV5_18_ideal", "BvL_2018_QuadJet_noTagV5_18_ideal",0,0,600,600);
   BvL_2018_QuadJet_noTagV5_18_ideal->SetHighLightColor(2);
   BvL_2018_QuadJet_noTagV5_18_ideal->Range(-0.2,-0.4486099,1.133333,1.027189);
   BvL_2018_QuadJet_noTagV5_18_ideal->SetFillColor(0);
   BvL_2018_QuadJet_noTagV5_18_ideal->SetBorderMode(0);
   BvL_2018_QuadJet_noTagV5_18_ideal->SetBorderSize(2);
   BvL_2018_QuadJet_noTagV5_18_ideal->SetLogy();
   BvL_2018_QuadJet_noTagV5_18_ideal->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTagV5_18_ideal->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTagV5_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV5_ideal_BvL__125 = new TH1D("_QuadJet_noTagV5_ideal_BvL__125","",10,0,1);
   _QuadJet_noTagV5_ideal_BvL__125->SetBinContent(1,4);
   _QuadJet_noTagV5_ideal_BvL__125->SetBinContent(6,1);
   _QuadJet_noTagV5_ideal_BvL__125->SetBinContent(7,1);
   _QuadJet_noTagV5_ideal_BvL__125->SetBinContent(10,2);
   _QuadJet_noTagV5_ideal_BvL__125->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV5_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4244");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4037");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV5_ideal_BvL__125->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV5_ideal_BvL__125);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV5_ideal_BvL__125->SetLineColor(ci);
   _QuadJet_noTagV5_ideal_BvL__125->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTagV5_ideal_BvL__125->GetXaxis()->SetRange(1,10);
   _QuadJet_noTagV5_ideal_BvL__125->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_BvL__125->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_BvL__125->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_BvL__125->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV5_ideal_BvL__125->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_BvL__125->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_BvL__125->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_BvL__125->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_BvL__125->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_BvL__125->Draw("HIST");
   BvL_2018_QuadJet_noTagV5_18_ideal->Modified();
   BvL_2018_QuadJet_noTagV5_18_ideal->cd();
   BvL_2018_QuadJet_noTagV5_18_ideal->SetSelected(BvL_2018_QuadJet_noTagV5_18_ideal);
}
