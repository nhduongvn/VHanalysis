#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_TripleTag_18_3B()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_TripleTag_18_3B/CvL_2018_QuadJet_TripleTag_18_3B
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_TripleTag_18_3B = new TCanvas("CvL_2018_QuadJet_TripleTag_18_3B", "CvL_2018_QuadJet_TripleTag_18_3B",0,0,600,600);
   CvL_2018_QuadJet_TripleTag_18_3B->SetHighLightColor(2);
   CvL_2018_QuadJet_TripleTag_18_3B->Range(-0.2183529,0.3842241,1.171633,0.5302085);
   CvL_2018_QuadJet_TripleTag_18_3B->SetFillColor(0);
   CvL_2018_QuadJet_TripleTag_18_3B->SetFillStyle(4000);
   CvL_2018_QuadJet_TripleTag_18_3B->SetBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_3B->SetBorderSize(2);
   CvL_2018_QuadJet_TripleTag_18_3B->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_TripleTag_18_3B->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_TripleTag_18_3B->SetBottomMargin(0.12);
   CvL_2018_QuadJet_TripleTag_18_3B->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   CvL_2018_QuadJet_TripleTag_18_3B->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvL__49 = new TH1D("_QuadJet_TripleTag_3B_CvL__49","",10,0,1);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(1,0.4805495);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(2,0.4918367);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(3,0.4214203);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(4,0.4069063);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(5,0.4236182);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(6,0.4345707);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(7,0.4550047);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(8,0.4795837);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(9,0.4908942);
   _QuadJet_TripleTag_3B_CvL__49->SetBinContent(10,0.5101878);
   _QuadJet_TripleTag_3B_CvL__49->SetEntries(4.594572);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5077");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2945");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvL__49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvL__49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_3B_CvL__49->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvL__49->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_3B_CvL__49->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_3B_CvL__49->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__49->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL__49->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__49->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_3B_CvL__49->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__49->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__49->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__49->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL__49->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__49->Draw("HIST");
   
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
   CvL_2018_QuadJet_TripleTag_18_3B->Modified();
   CvL_2018_QuadJet_TripleTag_18_3B->cd();
   CvL_2018_QuadJet_TripleTag_18_3B->SetSelected(CvL_2018_QuadJet_TripleTag_18_3B);
}
