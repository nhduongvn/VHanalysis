#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_ideal/BvL_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_ideal", "BvL_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2183529,0.6863939,1.171633,0.8918073);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_BvL__40 = new TH1D("_DoubleJet_TripleTag_ideal_BvL__40","",10,0,1);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(1,0.8462867);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(2,0.8636364);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(3,0.7752809);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(4,0.7465278);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(5,0.7183099);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(6,0.7821782);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(7,0.8176471);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(8,0.8112245);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(9,0.8);
   _DoubleJet_TripleTag_ideal_BvL__40->SetBinContent(10,0.8501992);
   _DoubleJet_TripleTag_ideal_BvL__40->SetEntries(8.011291);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5003");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2925");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_BvL__40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_BvL__40);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_BvL__40->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_BvL__40->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_ideal_BvL__40->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_ideal_BvL__40->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__40->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL__40->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__40->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_BvL__40->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__40->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__40->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__40->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL__40->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__40->Draw("HIST");
   
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
   BvL_2016_DoubleJet_TripleTag_16_ideal->Modified();
   BvL_2016_DoubleJet_TripleTag_16_ideal->cd();
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetSelected(BvL_2016_DoubleJet_TripleTag_16_ideal);
}
