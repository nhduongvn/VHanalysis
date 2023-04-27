#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_ideal/CvL_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_ideal", "CvL_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2183529,0.6227068,1.171633,0.9056359);
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
   
   TH1D *_DoubleJet_TripleTag_ideal_CvL__307 = new TH1D("_DoubleJet_TripleTag_ideal_CvL__307","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(1,0.8626943);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(2,0.815);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(3,0.7792208);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(4,0.7869822);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(5,0.6666667);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(6,0.7784431);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(7,0.7747253);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(8,0.8442029);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(9,0.8668342);
   _DoubleJet_TripleTag_ideal_CvL__307->SetBinContent(10,0.8547419);
   _DoubleJet_TripleTag_ideal_CvL__307->SetEntries(8.029511);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5043");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.294");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvL__307->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvL__307);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_ideal_CvL__307->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvL__307->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_ideal_CvL__307->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_ideal_CvL__307->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__307->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL__307->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__307->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_ideal_CvL__307->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__307->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__307->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL__307->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL__307->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL__307->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_ideal->Modified();
   CvL_2016_DoubleJet_TripleTag_16_ideal->cd();
   CvL_2016_DoubleJet_TripleTag_16_ideal->SetSelected(CvL_2016_DoubleJet_TripleTag_16_ideal);
}
