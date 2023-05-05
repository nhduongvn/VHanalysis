#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_3B/BvL_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_3B = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_3B", "BvL_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_3B->Range(-0.2183529,0.4804087,1.171633,0.7069591);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFillStyle(4000);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_BvL__94 = new TH1D("_DoubleJet_TripleTag_3B_BvL__94","",10,0,1);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(1,0.5994581);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(2,0.6758893);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(3,0.5513955);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(4,0.5156087);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(5,0.5318404);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(6,0.5785742);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(7,0.5916556);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(8,0.601592);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(9,0.5910207);
   _DoubleJet_TripleTag_3B_BvL__94->SetBinContent(10,0.6330944);
   _DoubleJet_TripleTag_3B_BvL__94->SetEntries(5.870129);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.502");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2932");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_BvL__94->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_BvL__94);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_3B_BvL__94->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_BvL__94->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_3B_BvL__94->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_3B_BvL__94->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL__94->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_BvL__94->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL__94->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_3B_BvL__94->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL__94->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL__94->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL__94->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_BvL__94->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL__94->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_DoubleJet90_Double30_TripleBTagCSV_p087","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   BvL_2016_DoubleJet_TripleTag_16_3B->Modified();
   BvL_2016_DoubleJet_TripleTag_16_3B->cd();
   BvL_2016_DoubleJet_TripleTag_16_3B->SetSelected(BvL_2016_DoubleJet_TripleTag_16_3B);
}
