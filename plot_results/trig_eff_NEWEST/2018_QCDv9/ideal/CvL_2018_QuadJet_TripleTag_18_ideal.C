#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_ideal/CvL_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_ideal = new TCanvas("CvL_2018_QuadJet_TripleTag_18_ideal", "CvL_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_ideal->Range(-0.2183529,0.5679437,1.171633,0.8257492);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL__22 = new TH1D("_QuadJet_TripleTag_ideal_CvL__22","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(1,0.7632094);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(2,0.790393);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(3,0.6278409);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(4,0.608);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(5,0.6595238);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(6,0.691954);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(7,0.6567164);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(8,0.7296073);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(9,0.7245565);
   _QuadJet_TripleTag_ideal_CvL__22->SetBinContent(10,0.7374027);
   _QuadJet_TripleTag_ideal_CvL__22->SetEntries(6.989204);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    0.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2945");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL__22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL__22);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvL__22->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL__22->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL__22->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvL__22->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__22->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__22->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__22->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvL__22->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__22->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__22->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__22->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__22->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__22->Draw("HIST");
   
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
   CvL_2018_QuadJet_TripleTag_18_ideal->Modified();
   CvL_2018_QuadJet_TripleTag_18_ideal->cd();
   CvL_2018_QuadJet_TripleTag_18_ideal->SetSelected(CvL_2018_QuadJet_TripleTag_18_ideal);
}
