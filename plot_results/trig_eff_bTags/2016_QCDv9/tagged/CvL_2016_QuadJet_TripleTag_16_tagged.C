#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_TripleTag_16_tagged()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_TripleTag_16_tagged/CvL_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_TripleTag_16_tagged = new TCanvas("CvL_2016_QuadJet_TripleTag_16_tagged", "CvL_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   CvL_2016_QuadJet_TripleTag_16_tagged->Range(-0.2183529,0.5630431,1.171633,0.9091711);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFillStyle(4000);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15709);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetRightMargin(0.1234783);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetBottomMargin(0.12);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__193 = new TH1D("_QuadJet_TripleTag_tagged_CvL__193","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(1,0.8617021);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(2,0.7901235);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(3,0.7602041);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(4,0.745614);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(5,0.6168224);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(6,0.7408907);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(7,0.7224335);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(8,0.7718833);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(9,0.822898);
   _QuadJet_TripleTag_tagged_CvL__193->SetBinContent(10,0.8070485);
   _QuadJet_TripleTag_tagged_CvL__193->SetEntries(7.63962);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.499");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2956");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL__193->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL__193);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_CvL__193->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL__193->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL__193->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_tagged_CvL__193->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__193->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__193->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__193->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_CvL__193->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__193->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__193->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__193->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__193->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__193->Draw("HIST");
   CvL_2016_QuadJet_TripleTag_16_tagged->Modified();
   CvL_2016_QuadJet_TripleTag_16_tagged->cd();
   CvL_2016_QuadJet_TripleTag_16_tagged->SetSelected(CvL_2016_QuadJet_TripleTag_16_tagged);
}
