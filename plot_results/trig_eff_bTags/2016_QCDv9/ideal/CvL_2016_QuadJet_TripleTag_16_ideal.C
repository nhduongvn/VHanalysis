#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_ideal/CvL_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_ideal = new TCanvas("CvL_2016_QuadJet_TripleTag_16_ideal", "CvL_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_ideal->Range(-0.2183529,0.5631729,1.171633,0.9084655);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvL__301 = new TH1D("_QuadJet_TripleTag_ideal_CvL__301","",10,0,1);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(1,0.8611111);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(2,0.7883817);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(3,0.757732);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(4,0.7444934);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(5,0.6168224);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(6,0.7398374);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(7,0.721374);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(8,0.7706667);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(9,0.8219424);
   _QuadJet_TripleTag_ideal_CvL__301->SetBinContent(10,0.806023);
   _QuadJet_TripleTag_ideal_CvL__301->SetEntries(7.628384);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4991");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2956");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvL__301->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvL__301);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_CvL__301->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvL__301->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_ideal_CvL__301->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_CvL__301->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__301->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__301->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__301->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_CvL__301->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__301->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__301->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvL__301->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvL__301->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvL__301->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_ideal->Modified();
   CvL_2016_QuadJet_TripleTag_16_ideal->cd();
   CvL_2016_QuadJet_TripleTag_16_ideal->SetSelected(CvL_2016_QuadJet_TripleTag_16_ideal);
}
