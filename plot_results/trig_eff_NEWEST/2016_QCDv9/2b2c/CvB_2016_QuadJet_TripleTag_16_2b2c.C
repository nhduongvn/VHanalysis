#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_2b2c()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_2b2c/CvB_2016_QuadJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_2b2c = new TCanvas("CvB_2016_QuadJet_TripleTag_16_2b2c", "CvB_2016_QuadJet_TripleTag_16_2b2c",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_2b2c->Range(-0.2183529,0.3537137,1.171633,0.4170331);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFillStyle(4000);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetBottomMargin(0.12);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_CvB__157 = new TH1D("_QuadJet_TripleTag_2b2c_CvB__157","",10,0,1);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(1,0.3956631);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(2,0.3804261);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(3,0.3635519);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(4,0.3925474);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(5,0.4057971);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(6,0.407668);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(7,0.4005817);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(8,0.4035536);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(9,0.4083493);
   _QuadJet_TripleTag_2b2c_CvB__157->SetBinContent(10,0.3765935);
   _QuadJet_TripleTag_2b2c_CvB__157->SetEntries(3.934732);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_2b2c_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5032");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2855");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_CvB__157->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_CvB__157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_2b2c_CvB__157->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_CvB__157->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_2b2c_CvB__157->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_2b2c_CvB__157->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__157->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB__157->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__157->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_2b2c_CvB__157->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__157->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__157->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_CvB__157->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_CvB__157->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_CvB__157->Draw("HIST");
   
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
   CvB_2016_QuadJet_TripleTag_16_2b2c->Modified();
   CvB_2016_QuadJet_TripleTag_16_2b2c->cd();
   CvB_2016_QuadJet_TripleTag_16_2b2c->SetSelected(CvB_2016_QuadJet_TripleTag_16_2b2c);
}
