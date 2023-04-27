#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_ideal/CvL_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_ideal = new TCanvas("CvL_2016_QuadJet_TripleTag_16_ideal", "CvL_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_ideal->Range(-0.2,1.642413,1.133333,3.413721);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   CvL_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL__302 = new TH1D("_QuadJet_TripleTag_ideal_CvL__302","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(1,403);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(2,190);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(3,147);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(4,169);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(5,132);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(6,182);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(7,189);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(8,289);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(9,457);
   _QuadJet_TripleTag_ideal_CvL__302->SetBinContent(10,910);
   _QuadJet_TripleTag_ideal_CvL__302->SetEntries(3068);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3068   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6228");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3348");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL__302->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL__302);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvL__302->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL__302->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL__302->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvL__302->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__302->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__302->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__302->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvL__302->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__302->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__302->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__302->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__302->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__302->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_ideal->Modified();
   CvL_2016_QuadJet_TripleTag_16_ideal->cd();
   CvL_2016_QuadJet_TripleTag_16_ideal->SetSelected(CvL_2016_QuadJet_TripleTag_16_ideal);
}
