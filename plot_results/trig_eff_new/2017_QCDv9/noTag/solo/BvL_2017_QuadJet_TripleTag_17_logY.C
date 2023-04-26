#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17/BvL_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17 = new TCanvas("BvL_2017_QuadJet_TripleTag_17", "BvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17->Range(-0.2,2.768394,1.133333,5.119062);
   BvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17->SetLogy();
   BvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   BvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL__38 = new TH1D("_QuadJet_TripleTag_BvL__38","",10,0,1);
   _QuadJet_TripleTag_BvL__38->SetBinContent(1,40406);
   _QuadJet_TripleTag_BvL__38->SetBinContent(2,4907);
   _QuadJet_TripleTag_BvL__38->SetBinContent(3,2927);
   _QuadJet_TripleTag_BvL__38->SetBinContent(4,2380);
   _QuadJet_TripleTag_BvL__38->SetBinContent(5,2064);
   _QuadJet_TripleTag_BvL__38->SetBinContent(6,2034);
   _QuadJet_TripleTag_BvL__38->SetBinContent(7,2016);
   _QuadJet_TripleTag_BvL__38->SetBinContent(8,2546);
   _QuadJet_TripleTag_BvL__38->SetBinContent(9,3374);
   _QuadJet_TripleTag_BvL__38->SetBinContent(10,24746);
   _QuadJet_TripleTag_BvL__38->SetEntries(87400);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 87400  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4083");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4252");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL__38);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_BvL__38->SetLineColor(ci);
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__38->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__38->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_BvL__38->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__38->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__38->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__38->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__38->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__38->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17->Modified();
   BvL_2017_QuadJet_TripleTag_17->cd();
   BvL_2017_QuadJet_TripleTag_17->SetSelected(BvL_2017_QuadJet_TripleTag_17);
}
