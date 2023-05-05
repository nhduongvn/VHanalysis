#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_2b2c()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_2b2c/BvL_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("BvL_2018_QuadJet_TripleTag_18_2b2c", "BvL_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_2b2c->Range(-0.2183529,0.2552598,1.171633,0.3807328);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFillStyle(4000);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetBottomMargin(0.12);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_BvL__73 = new TH1D("_QuadJet_TripleTag_2b2c_BvL__73","",10,0,1);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(1,0.274755);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(2,0.3321332);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(3,0.3635251);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(4,0.3131218);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(5,0.3193554);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(6,0.3249035);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(7,0.3025544);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(8,0.2886578);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(9,0.2965168);
   _QuadJet_TripleTag_2b2c_BvL__73->SetBinContent(10,0.3016711);
   _QuadJet_TripleTag_2b2c_BvL__73->SetEntries(3.117194);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4935");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2831");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_BvL__73->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_BvL__73);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_2b2c_BvL__73->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_BvL__73->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_2b2c_BvL__73->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_2b2c_BvL__73->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__73->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL__73->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__73->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_2b2c_BvL__73->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__73->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__73->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_BvL__73->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_BvL__73->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_BvL__73->Draw("HIST");
   
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
   BvL_2018_QuadJet_TripleTag_18_2b2c->Modified();
   BvL_2018_QuadJet_TripleTag_18_2b2c->cd();
   BvL_2018_QuadJet_TripleTag_18_2b2c->SetSelected(BvL_2018_QuadJet_TripleTag_18_2b2c);
}
