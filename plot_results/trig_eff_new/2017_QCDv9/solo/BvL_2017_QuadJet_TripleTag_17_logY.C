#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17/BvL_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17 = new TCanvas("BvL_2017_QuadJet_TripleTag_17", "BvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17->Range(-0.2,2.762717,1.133333,5.113781);
   BvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17->SetLogy();
   BvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL__158 = new TH1D("_QuadJet_TripleTag_BvL__158","",10,0,1);
   _QuadJet_TripleTag_BvL__158->SetBinContent(1,39914);
   _QuadJet_TripleTag_BvL__158->SetBinContent(2,4844);
   _QuadJet_TripleTag_BvL__158->SetBinContent(3,2881);
   _QuadJet_TripleTag_BvL__158->SetBinContent(4,2362);
   _QuadJet_TripleTag_BvL__158->SetBinContent(5,2030);
   _QuadJet_TripleTag_BvL__158->SetBinContent(6,2022);
   _QuadJet_TripleTag_BvL__158->SetBinContent(7,1990);
   _QuadJet_TripleTag_BvL__158->SetBinContent(8,2506);
   _QuadJet_TripleTag_BvL__158->SetBinContent(9,3317);
   _QuadJet_TripleTag_BvL__158->SetBinContent(10,24446);
   _QuadJet_TripleTag_BvL__158->SetEntries(86312);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 86312  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4083");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4252");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL__158->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL__158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL__158->SetLineColor(ci);
   _QuadJet_TripleTag_BvL__158->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL__158->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL__158->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__158->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__158->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__158->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL__158->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__158->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__158->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__158->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__158->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__158->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17->Modified();
   BvL_2017_QuadJet_TripleTag_17->cd();
   BvL_2017_QuadJet_TripleTag_17->SetSelected(BvL_2017_QuadJet_TripleTag_17);
}
