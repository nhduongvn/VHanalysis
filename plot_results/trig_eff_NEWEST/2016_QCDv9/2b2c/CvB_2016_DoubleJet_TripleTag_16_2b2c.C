#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_2b2c()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_2b2c/CvB_2016_DoubleJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_2b2c = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_2b2c", "CvB_2016_DoubleJet_TripleTag_16_2b2c",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->Range(-0.2183529,0.3943887,1.171633,0.4783728);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFillStyle(4000);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_CvB__160 = new TH1D("_DoubleJet_TripleTag_2b2c_CvB__160","",10,0,1);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(1,0.4455118);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(2,0.4363225);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(3,0.4187426);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(4,0.4518331);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(5,0.4554012);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(6,0.466855);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(7,0.4534514);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(8,0.4495174);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(9,0.4388209);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetBinContent(10,0.4074376);
   _DoubleJet_TripleTag_2b2c_CvB__160->SetEntries(4.423893);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4982");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.284");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_CvB__160->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_CvB__160);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_2b2c_CvB__160->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_2b2c_CvB__160->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_2b2c_CvB__160->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_CvB__160->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_CvB__160->Draw("HIST");
   
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
   CvB_2016_DoubleJet_TripleTag_16_2b2c->Modified();
   CvB_2016_DoubleJet_TripleTag_16_2b2c->cd();
   CvB_2016_DoubleJet_TripleTag_16_2b2c->SetSelected(CvB_2016_DoubleJet_TripleTag_16_2b2c);
}
