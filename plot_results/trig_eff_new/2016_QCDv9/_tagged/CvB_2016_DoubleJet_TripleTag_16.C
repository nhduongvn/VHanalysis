#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16/CvB_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:21 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16 = new TCanvas("CvB_2016_DoubleJet_TripleTag_16", "CvB_2016_DoubleJet_TripleTag_16",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16->Range(-0.2183529,0.2712143,1.171633,0.3325995);
   CvB_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16->SetFillStyle(4000);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_TripleTag_16->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_TripleTag_16->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvB__415 = new TH1D("_DoubleJet_TripleTag_tagged_CvB__415","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(1,0.3035377);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(2,0.2934629);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(3,0.2807519);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(4,0.3022804);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(5,0.3094086);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(6,0.3241809);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(7,0.3090679);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(8,0.3226499);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(9,0.3202611);
   _DoubleJet_TripleTag_tagged_CvB__415->SetBinContent(10,0.2872919);
   _DoubleJet_TripleTag_tagged_CvB__415->SetEntries(3.052893);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5047");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2849");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvB__415->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvB__415);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_tagged_CvB__415->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvB__415->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_tagged_CvB__415->GetXaxis()->SetRange(1,100);
   _DoubleJet_TripleTag_tagged_CvB__415->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__415->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB__415->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__415->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_tagged_CvB__415->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__415->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__415->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__415->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB__415->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__415->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16->Modified();
   CvB_2016_DoubleJet_TripleTag_16->cd();
   CvB_2016_DoubleJet_TripleTag_16->SetSelected(CvB_2016_DoubleJet_TripleTag_16);
}
