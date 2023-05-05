#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_ideal/BvL_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_ideal = new TCanvas("BvL_2016_QuadJet_TripleTag_16_ideal", "BvL_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_ideal->Range(-0.2183529,0.6380821,1.171633,0.9015122);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__37 = new TH1D("_QuadJet_TripleTag_ideal_BvL__37","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(1,0.8461538);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(2,0.8653846);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(3,0.7438017);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(4,0.6790123);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(5,0.6915584);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(6,0.6901408);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(7,0.7654321);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(8,0.7862595);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(9,0.7466216);
   _QuadJet_TripleTag_ideal_BvL__37->SetBinContent(10,0.7917404);
   _QuadJet_TripleTag_ideal_BvL__37->SetEntries(7.606105);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4944");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2947");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__37);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_BvL__37->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__37->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__37->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_BvL__37->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__37->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__37->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__37->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_BvL__37->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__37->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__37->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__37->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__37->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__37->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_QuadJet45_TripleBTagCSV_p087","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   BvL_2016_QuadJet_TripleTag_16_ideal->Modified();
   BvL_2016_QuadJet_TripleTag_16_ideal->cd();
   BvL_2016_QuadJet_TripleTag_16_ideal->SetSelected(BvL_2016_QuadJet_TripleTag_16_ideal);
}
