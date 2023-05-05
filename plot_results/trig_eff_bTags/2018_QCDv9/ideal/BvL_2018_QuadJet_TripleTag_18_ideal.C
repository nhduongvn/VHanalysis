#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_ideal/BvL_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:28:54 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_ideal = new TCanvas("BvL_2018_QuadJet_TripleTag_18_ideal", "BvL_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_ideal->Range(-0.2183529,0.5474591,1.171633,0.8563102);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__19 = new TH1D("_QuadJet_TripleTag_ideal_BvL__19","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(1,0.7857695);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(2,0.8139535);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(3,0.681592);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(4,0.5954466);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(5,0.6481481);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(6,0.6473552);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(7,0.6985294);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(8,0.6943765);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(9,0.7075269);
   _QuadJet_TripleTag_ideal_BvL__19->SetBinContent(10,0.7496547);
   _QuadJet_TripleTag_ideal_BvL__19->SetEntries(7.022352);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.495");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2961");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__19->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_BvL__19->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__19->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__19->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_BvL__19->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__19->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__19->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__19->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_BvL__19->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__19->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__19->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__19->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__19->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__19->Draw("HIST");
   
   TLegend *leg = new TLegend(0.5,0.7,0.9,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_PTHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   BvL_2018_QuadJet_TripleTag_18_ideal->Modified();
   BvL_2018_QuadJet_TripleTag_18_ideal->cd();
   BvL_2018_QuadJet_TripleTag_18_ideal->SetSelected(BvL_2018_QuadJet_TripleTag_18_ideal);
}
