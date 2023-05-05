#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_2b2c()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_2b2c/CvB_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("CvB_2018_QuadJet_TripleTag_18_2b2c", "CvB_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_2b2c->Range(-0.2183529,0.2372449,1.171633,0.3469596);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFillStyle(4000);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15709);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetRightMargin(0.1234783);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetBottomMargin(0.12);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvB__79 = new TH1D("_QuadJet_TripleTag_2b2c_CvB__79","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(1,0.3000821);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(2,0.2839618);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(3,0.28322);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(4,0.3115644);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(5,0.331913);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(6,0.3251948);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(7,0.3059268);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(8,0.2963415);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(9,0.2896748);
   _QuadJet_TripleTag_2b2c_CvB__79->SetBinContent(10,0.2542917);
   _QuadJet_TripleTag_2b2c_CvB__79->SetEntries(2.982171);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4945");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2802");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvB__79->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvB__79);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_2b2c_CvB__79->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvB__79->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_2b2c_CvB__79->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_2b2c_CvB__79->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__79->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB__79->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__79->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_2b2c_CvB__79->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__79->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__79->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__79->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB__79->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__79->Draw("HIST");
   
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
   CvB_2018_QuadJet_TripleTag_18_2b2c->Modified();
   CvB_2018_QuadJet_TripleTag_18_2b2c->cd();
   CvB_2018_QuadJet_TripleTag_18_2b2c->SetSelected(CvB_2018_QuadJet_TripleTag_18_2b2c);
}
