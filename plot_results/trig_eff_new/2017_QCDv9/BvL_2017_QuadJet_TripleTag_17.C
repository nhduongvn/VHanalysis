#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17/BvL_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17 = new TCanvas("BvL_2017_QuadJet_TripleTag_17", "BvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17->Range(-0.2183529,0.01680663,1.171633,0.08934955);
   BvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17->SetFillStyle(4000);
   BvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15709);
   BvL_2017_QuadJet_TripleTag_17->SetRightMargin(0.1234783);
   BvL_2017_QuadJet_TripleTag_17->SetBottomMargin(0.12);
   BvL_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL__157 = new TH1D("_QuadJet_TripleTag_BvL__157","",10,0,1);
   _QuadJet_TripleTag_BvL__157->SetBinContent(1,0.02807792);
   _QuadJet_TripleTag_BvL__157->SetBinContent(2,0.04869565);
   _QuadJet_TripleTag_BvL__157->SetBinContent(3,0.05599394);
   _QuadJet_TripleTag_BvL__157->SetBinContent(4,0.06308255);
   _QuadJet_TripleTag_BvL__157->SetBinContent(5,0.06482102);
   _QuadJet_TripleTag_BvL__157->SetBinContent(6,0.06676132);
   _QuadJet_TripleTag_BvL__157->SetBinContent(7,0.06677852);
   _QuadJet_TripleTag_BvL__157->SetBinContent(8,0.07255776);
   _QuadJet_TripleTag_BvL__157->SetBinContent(9,0.0723241);
   _QuadJet_TripleTag_BvL__157->SetBinContent(10,0.07940081);
   _QuadJet_TripleTag_BvL__157->SetEntries(0.6184936);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5585");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.272");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL__157->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL__157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_BvL__157->SetLineColor(ci);
   _QuadJet_TripleTag_BvL__157->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL__157->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_BvL__157->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__157->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__157->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__157->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_BvL__157->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__157->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__157->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__157->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__157->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__157->Draw("HIST");
   BvL_2017_QuadJet_TripleTag_17->Modified();
   BvL_2017_QuadJet_TripleTag_17->cd();
   BvL_2017_QuadJet_TripleTag_17->SetSelected(BvL_2017_QuadJet_TripleTag_17);
}
