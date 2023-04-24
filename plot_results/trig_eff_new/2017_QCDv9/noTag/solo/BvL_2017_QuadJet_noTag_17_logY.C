#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17/BvL_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17 = new TCanvas("BvL_2017_QuadJet_noTag_17", "BvL_2017_QuadJet_noTag_17",0,0,600,600);
   BvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17->Range(-0.2,1.491595,1.133333,4.393201);
   BvL_2017_QuadJet_noTag_17->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17->SetLogy();
   BvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   BvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL__161 = new TH1D("_QuadJet_noTag_BvL__161","",10,0,1);
   _QuadJet_noTag_BvL__161->SetBinContent(1,6691);
   _QuadJet_noTag_BvL__161->SetBinContent(2,426);
   _QuadJet_noTag_BvL__161->SetBinContent(3,217);
   _QuadJet_noTag_BvL__161->SetBinContent(4,181);
   _QuadJet_noTag_BvL__161->SetBinContent(5,165);
   _QuadJet_noTag_BvL__161->SetBinContent(6,134);
   _QuadJet_noTag_BvL__161->SetBinContent(7,121);
   _QuadJet_noTag_BvL__161->SetBinContent(8,143);
   _QuadJet_noTag_BvL__161->SetBinContent(9,203);
   _QuadJet_noTag_BvL__161->SetBinContent(10,1363);
   _QuadJet_noTag_BvL__161->SetEntries(9644);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9644   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2226");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3585");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL__161->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL__161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_BvL__161->SetLineColor(ci);
   _QuadJet_noTag_BvL__161->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL__161->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_BvL__161->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__161->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__161->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__161->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_BvL__161->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__161->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__161->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__161->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__161->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__161->Draw("HIST");
   BvL_2017_QuadJet_noTag_17->Modified();
   BvL_2017_QuadJet_noTag_17->cd();
   BvL_2017_QuadJet_noTag_17->SetSelected(BvL_2017_QuadJet_noTag_17);
}
