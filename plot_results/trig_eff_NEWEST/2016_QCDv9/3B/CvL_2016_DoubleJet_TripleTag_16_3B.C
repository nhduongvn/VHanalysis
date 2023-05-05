#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_3B/CvL_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_3B = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_3B", "CvL_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_3B->Range(-0.2183529,0.5056576,1.171633,0.6654355);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFillStyle(4000);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetBottomMargin(0.12);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_CvL__100 = new TH1D("_DoubleJet_TripleTag_3B_CvL__100","",10,0,1);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(1,0.5925459);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(2,0.5951265);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(3,0.530483);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(4,0.5330151);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(5,0.5401957);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(6,0.57414);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(7,0.5882151);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(8,0.5993707);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(9,0.6119255);
   _DoubleJet_TripleTag_3B_CvL__100->SetBinContent(10,0.6435231);
   _DoubleJet_TripleTag_3B_CvL__100->SetEntries(5.808541);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 6      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5096");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2923");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_CvL__100->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_CvL__100);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_3B_CvL__100->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_CvL__100->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_3B_CvL__100->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_3B_CvL__100->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL__100->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvL__100->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL__100->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_3B_CvL__100->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL__100->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL__100->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvL__100->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvL__100->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvL__100->Draw("HIST");
   
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
   CvL_2016_DoubleJet_TripleTag_16_3B->Modified();
   CvL_2016_DoubleJet_TripleTag_16_3B->cd();
   CvL_2016_DoubleJet_TripleTag_16_3B->SetSelected(CvL_2016_DoubleJet_TripleTag_16_3B);
}
