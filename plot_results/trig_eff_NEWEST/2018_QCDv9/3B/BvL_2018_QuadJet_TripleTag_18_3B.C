#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_3B()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_3B/BvL_2018_QuadJet_TripleTag_18_3B
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_3B = new TCanvas("BvL_2018_QuadJet_TripleTag_18_3B", "BvL_2018_QuadJet_TripleTag_18_3B",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_3B->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_3B->Range(-0.2183529,0.3392282,1.171633,0.5868794);
   BvL_2018_QuadJet_TripleTag_18_3B->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_3B->SetFillStyle(4000);
   BvL_2018_QuadJet_TripleTag_18_3B->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_3B->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_3B->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_TripleTag_18_3B->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_TripleTag_18_3B->SetBottomMargin(0.12);
   BvL_2018_QuadJet_TripleTag_18_3B->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_3B->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_BvL__46 = new TH1D("_QuadJet_TripleTag_3B_BvL__46","",10,0,1);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(1,0.4921891);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(2,0.5529158);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(3,0.4193756);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(4,0.3777068);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(5,0.4051952);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(6,0.4381179);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(7,0.458184);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(8,0.462576);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(9,0.4814696);
   _QuadJet_TripleTag_3B_BvL__46->SetBinContent(10,0.5122849);
   _QuadJet_TripleTag_3B_BvL__46->SetEntries(4.600015);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5019");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2971");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_BvL__46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_BvL__46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_3B_BvL__46->SetLineColor(ci);
   _QuadJet_TripleTag_3B_BvL__46->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_3B_BvL__46->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_3B_BvL__46->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL__46->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_BvL__46->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL__46->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_3B_BvL__46->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL__46->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL__46->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_BvL__46->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_BvL__46->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_BvL__46->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
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
   BvL_2018_QuadJet_TripleTag_18_3B->Modified();
   BvL_2018_QuadJet_TripleTag_18_3B->cd();
   BvL_2018_QuadJet_TripleTag_18_3B->SetSelected(BvL_2018_QuadJet_TripleTag_18_3B);
}
