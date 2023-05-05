#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_TripleTag_18_ideal/CvB_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_TripleTag_18_ideal = new TCanvas("CvB_2018_QuadJet_TripleTag_18_ideal", "CvB_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->Range(-0.2183529,0.6186686,1.171633,0.8257406);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__25 = new TH1D("_QuadJet_TripleTag_ideal_CvB__25","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(1,0.7425076);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(2,0.6626324);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(3,0.6508423);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(4,0.652921);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(5,0.6531008);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(6,0.6901763);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(7,0.7308782);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(8,0.7973422);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(9,0.7785714);
   _QuadJet_TripleTag_ideal_CvB__25->SetBinContent(10,0.7522124);
   _QuadJet_TripleTag_ideal_CvB__25->SetEntries(7.111185);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5134");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2912");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__25->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__25);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvB__25->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__25->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__25->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvB__25->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__25->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__25->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__25->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvB__25->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__25->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__25->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__25->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__25->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__25->Draw("HIST");
   
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
   CvB_2018_QuadJet_TripleTag_18_ideal->Modified();
   CvB_2018_QuadJet_TripleTag_18_ideal->cd();
   CvB_2018_QuadJet_TripleTag_18_ideal->SetSelected(CvB_2018_QuadJet_TripleTag_18_ideal);
}
