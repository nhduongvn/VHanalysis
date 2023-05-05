#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_3B/CvB_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_3B = new TCanvas("CvB_2016_QuadJet_TripleTag_16_3B", "CvB_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_3B->Range(-0.2183529,0.4477901,1.171633,0.5863813);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFillStyle(4000);
   CvB_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_TripleTag_16_3B->SetBottomMargin(0.12);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_CvB__103 = new TH1D("_QuadJet_TripleTag_3B_CvB__103","",10,0,1);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(1,0.5567862);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(2,0.5171013);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(3,0.4974705);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(4,0.4693235);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(5,0.4882574);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(6,0.493741);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(7,0.5389354);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(8,0.5673745);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(9,0.5517116);
   _QuadJet_TripleTag_3B_CvB__103->SetBinContent(10,0.5443962);
   _QuadJet_TripleTag_3B_CvB__103->SetEntries(5.225098);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5066");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.292");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_CvB__103->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_CvB__103);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_3B_CvB__103->SetLineColor(ci);
   _QuadJet_TripleTag_3B_CvB__103->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_3B_CvB__103->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_3B_CvB__103->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__103->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvB__103->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__103->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_3B_CvB__103->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__103->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__103->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_CvB__103->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_CvB__103->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_CvB__103->Draw("HIST");
   
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
   CvB_2016_QuadJet_TripleTag_16_3B->Modified();
   CvB_2016_QuadJet_TripleTag_16_3B->cd();
   CvB_2016_QuadJet_TripleTag_16_3B->SetSelected(CvB_2016_QuadJet_TripleTag_16_3B);
}
