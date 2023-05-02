#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17_ideal/CvL_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17_ideal = new TCanvas("CvL_2017_QuadJet_TripleTag_17_ideal", "CvL_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17_ideal->Range(-0.2183529,0.2225892,1.171633,0.7403145);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL__43 = new TH1D("_QuadJet_TripleTag_ideal_CvL__43","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(1,0.5746269);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(2,0.5285714);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(3,0.5517241);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(4,0.3030303);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(5,0.6481481);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(6,0.5245902);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(7,0.4230769);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(8,0.5132743);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(9,0.5833333);
   _QuadJet_TripleTag_ideal_CvL__43->SetBinContent(10,0.6693122);
   _QuadJet_TripleTag_ideal_CvL__43->SetEntries(5.319688);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 5      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.512");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2982");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL__43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL__43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvL__43->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__43->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvL__43->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__43->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__43->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17_ideal->Modified();
   CvL_2017_QuadJet_TripleTag_17_ideal->cd();
   CvL_2017_QuadJet_TripleTag_17_ideal->SetSelected(CvL_2017_QuadJet_TripleTag_17_ideal);
}
