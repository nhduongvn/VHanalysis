#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_ideal/CvL_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_ideal", "CvL_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2183529,0.6398188,1.171633,0.8920713);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvL__46 = new TH1D("_DoubleJet_TripleTag_ideal_CvL__46","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(1,0.8574766);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(2,0.7964602);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(3,0.7457627);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(4,0.7634409);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(5,0.6790123);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(6,0.7853403);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(7,0.7932692);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(8,0.8338762);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(9,0.8359202);
   _DoubleJet_TripleTag_ideal_CvL__46->SetBinContent(10,0.8532609);
   _DoubleJet_TripleTag_ideal_CvL__46->SetEntries(7.94382);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5055");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2933");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvL__46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvL__46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_CvL__46->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvL__46->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_ideal_CvL__46->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_ideal_CvL__46->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__46->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL__46->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__46->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_CvL__46->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__46->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__46->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__46->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL__46->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__46->Draw("HIST");
   
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
   CvL_2016_DoubleJet_TripleTag_16_ideal->Modified();
   CvL_2016_DoubleJet_TripleTag_16_ideal->cd();
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetSelected(CvL_2016_DoubleJet_TripleTag_16_ideal);
}
