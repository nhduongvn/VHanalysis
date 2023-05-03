#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HTmod_2018_QuadJet_noTagV2_18_ideal_logY()
{
//=========Macro generated from canvas: HTmod_2018_QuadJet_noTagV2_18_ideal/HTmod_2018_QuadJet_noTagV2_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *HTmod_2018_QuadJet_noTagV2_18_ideal = new TCanvas("HTmod_2018_QuadJet_noTagV2_18_ideal", "HTmod_2018_QuadJet_noTagV2_18_ideal",0,0,600,600);
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetHighLightColor(2);
   HTmod_2018_QuadJet_noTagV2_18_ideal->Range(-400,-3.748352,2266.667,0.7248713);
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetFillColor(0);
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetBorderMode(0);
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetBorderSize(2);
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetLogy();
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetLeftMargin(0.15);
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV2_ideal_HTmod__98 = new TH1D("_QuadJet_noTagV2_ideal_HTmod__98","",200,0,2000);
   _QuadJet_noTagV2_ideal_HTmod__98->SetBinContent(52,1);
   _QuadJet_noTagV2_ideal_HTmod__98->SetBinContent(65,1);
   _QuadJet_noTagV2_ideal_HTmod__98->SetBinContent(86,1);
   _QuadJet_noTagV2_ideal_HTmod__98->SetBinContent(87,1);
   _QuadJet_noTagV2_ideal_HTmod__98->SetEntries(4);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV2_ideal_HTmod");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  718.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  147.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV2_ideal_HTmod__98->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV2_ideal_HTmod__98);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV2_ideal_HTmod__98->SetLineColor(ci);
   _QuadJet_noTagV2_ideal_HTmod__98->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTagV2_ideal_HTmod__98->GetXaxis()->SetRange(1,200);
   _QuadJet_noTagV2_ideal_HTmod__98->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_HTmod__98->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_HTmod__98->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_HTmod__98->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV2_ideal_HTmod__98->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_HTmod__98->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_HTmod__98->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_HTmod__98->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_HTmod__98->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_HTmod__98->Draw("HIST");
   HTmod_2018_QuadJet_noTagV2_18_ideal->Modified();
   HTmod_2018_QuadJet_noTagV2_18_ideal->cd();
   HTmod_2018_QuadJet_noTagV2_18_ideal->SetSelected(HTmod_2018_QuadJet_noTagV2_18_ideal);
}
