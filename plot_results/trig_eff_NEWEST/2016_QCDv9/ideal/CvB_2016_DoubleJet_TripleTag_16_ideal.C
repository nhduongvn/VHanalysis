#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ideal/CvB_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ideal", "CvB_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2183529,0.7136565,1.171633,0.8896876);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvB__52 = new TH1D("_DoubleJet_TripleTag_ideal_CvB__52","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(1,0.845407);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(2,0.7884615);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(3,0.7580071);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(4,0.7410072);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(5,0.8075117);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(6,0.7878788);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(7,0.84375);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(8,0.82);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(9,0.8523985);
   _DoubleJet_TripleTag_ideal_CvB__52->SetBinContent(10,0.8655462);
   _DoubleJet_TripleTag_ideal_CvB__52->SetEntries(8.109968);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5076");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2907");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvB__52->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvB__52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_CvB__52->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvB__52->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_ideal_CvB__52->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_ideal_CvB__52->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__52->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB__52->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__52->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_CvB__52->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__52->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__52->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__52->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB__52->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__52->Draw("HIST");
   
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
   CvB_2016_DoubleJet_TripleTag_16_ideal->Modified();
   CvB_2016_DoubleJet_TripleTag_16_ideal->cd();
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetSelected(CvB_2016_DoubleJet_TripleTag_16_ideal);
}
