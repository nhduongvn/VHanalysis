#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_3B/CvL_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_3B = new TCanvas("CvL_2016_QuadJet_TripleTag_16_3B", "CvL_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_3B->Range(-0.2183529,0.4294998,1.171633,0.5965523);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFillStyle(4000);
   CvL_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   CvL_2016_QuadJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   CvL_2016_QuadJet_TripleTag_16_3B->SetBottomMargin(0.12);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvL__97 = new TH1D("_QuadJet_TripleTag_3B_CvL__97","",10,0,1);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(1,0.5443638);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(2,0.5416535);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(3,0.4738613);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(4,0.4554555);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(5,0.4756799);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(6,0.494742);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(7,0.5154176);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(8,0.5227309);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(9,0.5405599);
   _QuadJet_TripleTag_3B_CvL__97->SetBinContent(10,0.5736422);
   _QuadJet_TripleTag_3B_CvL__97->SetEntries(5.138107);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5068");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2944");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvL__97->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvL__97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_3B_CvL__97->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvL__97->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_3B_CvL__97->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_3B_CvL__97->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__97->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL__97->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__97->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_3B_CvL__97->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__97->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__97->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvL__97->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvL__97->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvL__97->Draw("HIST");
   
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
   CvL_2016_QuadJet_TripleTag_16_3B->Modified();
   CvL_2016_QuadJet_TripleTag_16_3B->cd();
   CvL_2016_QuadJet_TripleTag_16_3B->SetSelected(CvL_2016_QuadJet_TripleTag_16_3B);
}
