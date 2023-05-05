#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_ideal/CvB_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_ideal = new TCanvas("CvB_2016_QuadJet_TripleTag_16_ideal", "CvB_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->Range(-0.2183529,0.6528585,1.171633,0.9238282);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__49 = new TH1D("_QuadJet_TripleTag_ideal_CvB__49","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(1,0.7890668);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(2,0.7408313);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(3,0.6984925);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(4,0.6949602);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(5,0.7540453);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(6,0.7424893);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(7,0.7647059);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(8,0.8052632);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(9,0.8535826);
   _QuadJet_TripleTag_ideal_CvB__49->SetBinContent(10,0.8866667);
   _QuadJet_TripleTag_ideal_CvB__49->SetEntries(7.730104);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5155");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2929");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__49->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvB__49->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__49->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvB__49->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__49->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__49->Draw("HIST");
   
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
   CvB_2016_QuadJet_TripleTag_16_ideal->Modified();
   CvB_2016_QuadJet_TripleTag_16_ideal->cd();
   CvB_2016_QuadJet_TripleTag_16_ideal->SetSelected(CvB_2016_QuadJet_TripleTag_16_ideal);
}
