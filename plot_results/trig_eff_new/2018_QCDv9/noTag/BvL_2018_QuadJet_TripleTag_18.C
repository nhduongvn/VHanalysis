#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18/BvL_2018_QuadJet_TripleTag_18
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18 = new TCanvas("BvL_2018_QuadJet_TripleTag_18", "BvL_2018_QuadJet_TripleTag_18",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18->Range(-0.2183529,0.02610694,1.171633,0.1153854);
   BvL_2018_QuadJet_TripleTag_18->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18->SetFillStyle(4000);
   BvL_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_TripleTag_18->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_TripleTag_18->SetBottomMargin(0.12);
   BvL_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL__37 = new TH1D("_QuadJet_TripleTag_BvL__37","",10,0,1);
   _QuadJet_TripleTag_BvL__37->SetBinContent(1,0.0399785);
   _QuadJet_TripleTag_BvL__37->SetBinContent(2,0.07212098);
   _QuadJet_TripleTag_BvL__37->SetBinContent(3,0.08503139);
   _QuadJet_TripleTag_BvL__37->SetBinContent(4,0.0916475);
   _QuadJet_TripleTag_BvL__37->SetBinContent(5,0.09581072);
   _QuadJet_TripleTag_BvL__37->SetBinContent(6,0.09691997);
   _QuadJet_TripleTag_BvL__37->SetBinContent(7,0.1002934);
   _QuadJet_TripleTag_BvL__37->SetBinContent(8,0.0991301);
   _QuadJet_TripleTag_BvL__37->SetBinContent(9,0.0991882);
   _QuadJet_TripleTag_BvL__37->SetBinContent(10,0.1031415);
   _QuadJet_TripleTag_BvL__37->SetEntries(0.8832623);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5484");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2696");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL__37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL__37);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_BvL__37->SetLineColor(ci);
   _QuadJet_TripleTag_BvL__37->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL__37->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_BvL__37->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__37->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__37->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__37->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_BvL__37->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__37->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__37->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__37->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__37->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__37->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18->Modified();
   BvL_2018_QuadJet_TripleTag_18->cd();
   BvL_2018_QuadJet_TripleTag_18->SetSelected(BvL_2018_QuadJet_TripleTag_18);
}
